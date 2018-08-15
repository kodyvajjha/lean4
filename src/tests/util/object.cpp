/*
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <iostream>
#include "runtime/serializer.h"
#include "util/test.h"
#include "util/object_ref.h"
#include "util/init_module.h"
using namespace lean;

#define USED(x) (void)(x)

object * f(object *) {
    std::cout << "executing f...\n";
    return box(10);
}

object_ref mk_thunk_ref(object_ref const & c) {
    inc(c.raw());
    return object_ref(mk_thunk(c.raw()));
}

static void tst1() {
    object_ref c(alloc_closure(f, 1, 0));
    object_ref t = mk_thunk_ref(c);
    object * r1 = thunk_get(t.raw());
    object * r2 = thunk_get(t.raw());
    std::cout << "thunk value: " << unbox(r1) << "\n";
    std::cout << "thunk value: " << unbox(r2) << "\n";
}

static unsigned g_g_counter = 0;

object * g(object *) {
    g_g_counter++;
    return box(g_g_counter);
}

static void tst2() {
    object_ref c(alloc_closure(g, 1, 0));
    object * r1 = apply_1(c.raw(), box(0));
    object * r2 = apply_1(c.raw(), box(0));
    lean_assert(unbox(r1) == 1);
    lean_assert(unbox(r2) == 2);
    object_ref t = mk_thunk_ref(c);
    object * r3 = thunk_get(t.raw());
    object * r4 = thunk_get(t.raw());
    lean_assert(unbox(r3) == 3);
    lean_assert(unbox(r4) == 3);
    USED(r1); USED(r2); USED(r3); USED(r4);
}

static unsigned g_h_counter = 0;

object * h(object *) {
    g_h_counter++;
    return box(0);
}

/* Make sure box(0) is not mistaken by cached value has not been initialized yet.

   The thunk implementation relies on the fact that nullptr is not a scalar nor a valid
   Lean object. */
static void tst3() {
    object_ref c(alloc_closure(h, 1, 0));
    object_ref t = mk_thunk_ref(c);
    lean_assert(g_h_counter == 0);
    object * r3 = thunk_get(t.raw());
    lean_assert(g_h_counter == 1);
    object * r4 = thunk_get(t.raw());
    lean_assert(g_h_counter == 1);
    lean_assert(unbox(r3) == 0);
    lean_assert(unbox(r4) == 0);
    USED(r3); USED(r4);
}

object * r(object *) {
    return mk_string("hello world");
}

static void tst4() {
    object_ref c(alloc_closure(r, 1, 0));
    object_ref t = mk_thunk_ref(c);
    object * r3  = thunk_get(t.raw());
    object * r4  = thunk_get(t.raw());
    lean_assert(string_eq(r3, "hello world"));
    lean_assert(string_eq(r4, "hello world"));
    USED(r3); USED(r4);
}

static void tst5() {
    object_ref c(alloc_closure(r, 1, 0));
    object_ref t = mk_thunk_ref(c);
    std::ostringstream out;
    serializer s(out);
    object_ref o(mk_string("bla bla"));
    s.write_object(o.raw());
    s.write_object(t.raw());
    s.write_object(t.raw());
    std::istringstream in(out.str());
    deserializer d(in);
    d.read_object();
    object * r1 = d.read_object();
    object * r2 = d.read_object();
    lean_assert(r1 == r2);
    lean_assert(is_thunk(r1));
    object * str = thunk_get(r1);
    lean_assert(strcmp(string_data(str), "hello world") == 0);
    USED(r2); USED(str);
}

int main() {
    save_stack_info();
    initialize_util_module();
    tst1();
    tst2();
    tst3();
    tst4();
    tst5();
    finalize_util_module();
    return has_violations() ? 1 : 0;
}