/*
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include <string>
#include "util/object_ref.h"

namespace lean {
/* Wrapper for manipulating Lean runtime nat values in C++. */
class nat : public object_ref {
    nat(object * o, bool):object_ref(o) {}
    static nat wrap(object * o) { return nat(o, true); }
public:
    nat():object_ref(box(0)) {}
    explicit nat(int v):object_ref(mk_nat_obj(v < 0 ? 0u : static_cast<unsigned>(v))) {}
    explicit nat(unsigned v):object_ref(mk_nat_obj(v)) {}
    explicit nat(mpz const & v):object_ref(mk_nat_obj(v)) {}
    explicit nat(char const * v):object_ref(box(0)) {
        mpz m(v);
        if (m > 0)
            *this = nat(mk_nat_obj(m));
    }
    nat(nat const & other):object_ref(other) {}
    nat(nat && other):object_ref(other) {}
    explicit nat(object * o):object_ref(o) { inc(o); }

    nat & operator=(nat const & other) { object_ref::operator=(other); return *this; }
    nat & operator=(nat && other) { object_ref::operator=(other); return *this; }

    bool is_small() const { return is_scalar(raw()); }
    unsigned get_small_value() const { lean_assert(is_small()); return unbox(raw()); }
    mpz const & get_big_value() const { lean_assert(!is_small()); return mpz_value(raw()); }
    mpz to_mpz() const { return is_small() ? mpz(unbox(raw())) : mpz_value(raw()); }
    std::string to_std_string() const { return to_mpz().to_string(); }
    unsigned hash() const { return is_small() ? unbox(raw()) : mpz_value(raw()).hash(); }

    friend bool operator==(nat const & a, nat const & b) { return nat_eq(a.raw(), b.raw()); }
    friend bool operator!=(nat const & a, nat const & b) { return !(a == b); }
    friend bool operator<=(nat const & a, nat const & b) { return nat_le(a.raw(), b.raw()); }
    friend bool operator<(nat const & a, nat const & b) { return nat_lt(a.raw(), b.raw()); }
    friend bool operator>=(nat const & a, nat const & b) { return b <= a; }
    friend bool operator>(nat const & a, nat const & b) { return b < a; }
    friend nat operator+(nat const & a, nat const & b) { return wrap(nat_add(a.raw(), b.raw())); }
    friend nat operator-(nat const & a, nat const & b) { return wrap(nat_sub(a.raw(), b.raw())); }
    friend nat operator*(nat const & a, nat const & b) { return wrap(nat_mul(a.raw(), b.raw())); }
    friend nat operator/(nat const & a, nat const & b) { return wrap(nat_div(a.raw(), b.raw())); }
    friend nat operator%(nat const & a, nat const & b) { return wrap(nat_mod(a.raw(), b.raw())); }
};
};