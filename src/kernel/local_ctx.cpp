/*
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <limits>
#include "runtime/sstream.h"
#include "kernel/local_ctx.h"

namespace lean {
static expr *       g_dummy_type;
static local_decl * g_dummy_decl;

static expr mk_local_ref(name const & n, name const & un, binder_info const & bi) {
    return mk_local(n, un, *g_dummy_type, bi); // TODO(Leo): fix after we remove legacy code
}

bool is_local_decl_ref(expr const & e) { // TODO(Leo): delete
    return is_local(e) && mlocal_type(e) == *g_dummy_type;
}

void local_decl::cell::dealloc() {
    delete this;
}

local_decl::cell::cell(unsigned idx, name const & n, name const & un, expr const & t, optional<expr> const & v, binder_info const & bi):
    m_name(n), m_user_name(un), m_type(t), m_value(v), m_bi(bi), m_idx(idx), m_rc(1) {}

local_decl::local_decl():local_decl(*g_dummy_decl) {}

local_decl::local_decl(unsigned idx, name const & n, name const & un, expr const & t, optional<expr> const & v, binder_info const & bi) {
    m_ptr = new cell(idx, n, un, t, v, bi);
}

local_decl::local_decl(local_decl const & d, expr const & t, optional<expr> const & v):
    local_decl(d.m_ptr->m_idx, d.m_ptr->m_name, d.m_ptr->m_user_name, t, v, d.m_ptr->m_bi) {}

expr local_decl::mk_ref() const {
    return mk_local_ref(m_ptr->m_name, m_ptr->m_user_name, m_ptr->m_bi);
}

local_decl local_ctx::mk_local_decl(name const & n, name const & un, expr const & type, optional<expr> const & value, binder_info const & bi) {
    lean_assert(!m_name2local_decl.contains(n));
    unsigned idx = m_next_idx;
    m_next_idx++;
    local_decl d(idx, n, un, type, value, bi);
    m_name2local_decl.insert(n, d);
    m_idx2local_decl.insert(idx, d);
    return d;
}

optional<local_decl> local_ctx::find_local_decl(name const & n) const {
    if (auto r = m_name2local_decl.find(n))
        return optional<local_decl>(*r);
    else
        return optional<local_decl>();
}

optional<local_decl> local_ctx::find_local_decl(expr const & e) const {
    return find_local_decl(mlocal_name(e));
}

local_decl const & local_ctx::get_local_decl(name const & n) const {
    if (local_decl const * r = m_name2local_decl.find(n))
        return *r;
    else
        throw exception(sstream() << "unknown local constant: " << n);
}

expr local_ctx::get_local(name const & n) const {
    lean_assert(find_local_decl(n));
    return get_local_decl(n).mk_ref();
}

void local_ctx::for_each(std::function<void(local_decl const &)> const & fn) const {
    m_idx2local_decl.for_each([&](unsigned, local_decl const & d) { fn(d); });
}

optional<local_decl> local_ctx::find_if(std::function<bool(local_decl const &)> const & pred) const {
    return m_idx2local_decl.find_if([&](unsigned, local_decl const & d) { return pred(d); });
}

optional<local_decl> local_ctx::back_find_if(std::function<bool(local_decl const &)> const & pred) const {
    return m_idx2local_decl.back_find_if([&](unsigned, local_decl const & d) { return pred(d); });
}

void local_ctx::clear(local_decl const & d) {
    lean_assert(find_local_decl(d.get_name()));
    m_idx2local_decl.erase(d.get_idx());
    m_name2local_decl.erase(d.get_name());
}

void initialize_local_ctx() {
    g_dummy_type   = new expr(mk_constant(name::mk_internal_unique_name()));
    g_dummy_decl   = new local_decl(std::numeric_limits<unsigned>::max(),
                                    name("__local_decl_for_default_constructor"), name("__local_decl_for_default_constructor"),
                                    mk_Prop(), optional<expr>(), binder_info());
}

void finalize_local_ctx() {
    delete g_dummy_decl;
    delete g_dummy_type;
}
}