// Lean compiler output
// Module: init.data.option.basic
// Imports: init.core init.control.monad init.control.alternative init.coe
#include "runtime/object.h"
#include "runtime/apply.h"
#include "runtime/io.h"
#include "kernel/builtin.h"
typedef lean::object obj;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#endif
obj* l_option_decidable__eq(obj*);
obj* l_option_get___main(obj*);
obj* l_option_is__some___rarg___boxed(obj*);
obj* l_option_get__or__else(obj*);
obj* l_option_monad___lambda__4(obj*, obj*, obj*, obj*);
obj* l_option_has__lt(obj*, obj*);
obj* l_option_to__bool___main___rarg___boxed(obj*);
obj* l_option_bind___rarg(obj*, obj*);
obj* l_option_decidable__rel__lt___main(obj*, obj*);
unsigned char l_option_to__bool___rarg(obj*);
obj* l_option_is__some___main___rarg___boxed(obj*);
obj* l_option_alternative___lambda__1(obj*);
obj* l_option_monad;
obj* l_option_is__some(obj*);
obj* l_option_lt;
obj* l_option_get___rarg(obj*, obj*);
unsigned char l_option_is__some___main___rarg(obj*);
obj* l_option_decidable__rel__lt(obj*, obj*);
obj* l_function_const___rarg(obj*, obj*);
obj* l_option_map___rarg(obj*, obj*);
obj* l_option_orelse___main(obj*);
obj* l_option_is__none___main(obj*);
obj* l_option_alternative;
obj* l_option_get(obj*);
obj* l_option_inhabited(obj*);
obj* l_option_get___main___rarg(obj*, obj*);
obj* l_option_get__or__else___main___rarg(obj*, obj*);
obj* l_option_monad___lambda__3(obj*, obj*, obj*, obj*);
obj* l_option_orelse___rarg(obj*, obj*);
obj* l_option_map(obj*, obj*);
obj* l_option_decidable__rel__lt___main___rarg(obj*, obj*, obj*);
obj* l_option_to__monad(obj*, obj*);
obj* l_option_to__monad___main(obj*);
obj* l_option_to__monad___rarg(obj*, obj*, obj*);
obj* l_option_to__bool___rarg___boxed(obj*);
obj* l_option_to__monad___main___rarg(obj*, obj*, obj*);
obj* l_option_to__bool(obj*);
obj* l_option_is__none___rarg___boxed(obj*);
obj* l_option_bind___main(obj*, obj*);
obj* l_option_is__some___main(obj*);
obj* l_option_to__bool___main(obj*);
obj* l_option_is__none(obj*);
obj* l_option_get__or__else___main(obj*);
obj* l_option_monad___lambda__5(obj*, obj*, obj*, obj*);
obj* l_option_decidable__rel__lt___rarg(obj*, obj*, obj*);
obj* l_option_bind___main___rarg(obj*, obj*);
obj* l_option_get__or__else___rarg(obj*, obj*);
unsigned char l_option_is__none___rarg(obj*);
obj* l_option_decidable__eq___rarg(obj*, obj*, obj*);
obj* l_option_is__none___main___rarg___boxed(obj*);
unsigned char l_option_is__some___rarg(obj*);
obj* l_option_orelse(obj*);
obj* l_option_bind(obj*, obj*);
obj* l_option_monad___lambda__2(obj*, obj*);
unsigned char l_option_is__none___main___rarg(obj*);
obj* l_option_orelse___main___rarg(obj*, obj*);
unsigned char l_option_to__bool___main___rarg(obj*);
obj* l_option_monad___lambda__1(obj*, obj*, obj*, obj*);
obj* l_option_lt___main;
obj* l_option_to__monad___main___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
lean::dec(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_5; obj* x_8; 
lean::dec(x_2);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
lean::dec(x_0);
x_8 = lean::apply_1(x_5, lean::box(0));
return x_8;
}
else
{
obj* x_9; obj* x_12; obj* x_15; obj* x_18; 
x_9 = lean::cnstr_get(x_2, 0);
lean::inc(x_9);
lean::dec(x_2);
x_12 = lean::cnstr_get(x_0, 0);
lean::inc(x_12);
lean::dec(x_0);
x_15 = lean::cnstr_get(x_12, 1);
lean::inc(x_15);
lean::dec(x_12);
x_18 = lean::apply_2(x_15, lean::box(0), x_9);
return x_18;
}
}
}
obj* l_option_to__monad___main(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_option_to__monad___main___rarg), 3, 0);
return x_2;
}
}
obj* l_option_to__monad___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; 
lean::dec(x_1);
x_4 = l_option_to__monad___main___rarg(x_0, lean::box(0), x_2);
return x_4;
}
}
obj* l_option_to__monad(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_option_to__monad___rarg), 3, 0);
return x_4;
}
}
obj* l_option_get__or__else___main___rarg(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
obj* x_4; 
lean::dec(x_1);
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
lean::dec(x_0);
return x_4;
}
}
}
obj* l_option_get__or__else___main(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_option_get__or__else___main___rarg), 2, 0);
return x_2;
}
}
obj* l_option_get__or__else___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_option_get__or__else___main___rarg(x_0, x_1);
return x_2;
}
}
obj* l_option_get__or__else(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_option_get__or__else___rarg), 2, 0);
return x_2;
}
}
obj* l_option_get___main___rarg(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_1);
return x_0;
}
else
{
obj* x_4; 
lean::dec(x_0);
x_4 = lean::cnstr_get(x_1, 0);
lean::inc(x_4);
lean::dec(x_1);
return x_4;
}
}
}
obj* l_option_get___main(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_option_get___main___rarg), 2, 0);
return x_2;
}
}
obj* l_option_get___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_option_get___main___rarg(x_0, x_1);
return x_2;
}
}
obj* l_option_get(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_option_get___rarg), 2, 0);
return x_2;
}
}
unsigned char l_option_to__bool___main___rarg(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
unsigned char x_2; 
lean::dec(x_0);
x_2 = 0;
return x_2;
}
else
{
unsigned char x_4; 
lean::dec(x_0);
x_4 = 1;
return x_4;
}
}
}
obj* l_option_to__bool___main(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_option_to__bool___main___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_option_to__bool___main___rarg___boxed(obj* x_0) {
_start:
{
unsigned char x_1; obj* x_2; 
x_1 = l_option_to__bool___main___rarg(x_0);
x_2 = lean::box(x_1);
return x_2;
}
}
unsigned char l_option_to__bool___rarg(obj* x_0) {
_start:
{
unsigned char x_1; 
x_1 = l_option_to__bool___main___rarg(x_0);
return x_1;
}
}
obj* l_option_to__bool(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_option_to__bool___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_option_to__bool___rarg___boxed(obj* x_0) {
_start:
{
unsigned char x_1; obj* x_2; 
x_1 = l_option_to__bool___rarg(x_0);
x_2 = lean::box(x_1);
return x_2;
}
}
unsigned char l_option_is__some___main___rarg(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
unsigned char x_2; 
lean::dec(x_0);
x_2 = 0;
return x_2;
}
else
{
unsigned char x_4; 
lean::dec(x_0);
x_4 = 1;
return x_4;
}
}
}
obj* l_option_is__some___main(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_option_is__some___main___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_option_is__some___main___rarg___boxed(obj* x_0) {
_start:
{
unsigned char x_1; obj* x_2; 
x_1 = l_option_is__some___main___rarg(x_0);
x_2 = lean::box(x_1);
return x_2;
}
}
unsigned char l_option_is__some___rarg(obj* x_0) {
_start:
{
unsigned char x_1; 
x_1 = l_option_is__some___main___rarg(x_0);
return x_1;
}
}
obj* l_option_is__some(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_option_is__some___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_option_is__some___rarg___boxed(obj* x_0) {
_start:
{
unsigned char x_1; obj* x_2; 
x_1 = l_option_is__some___rarg(x_0);
x_2 = lean::box(x_1);
return x_2;
}
}
unsigned char l_option_is__none___main___rarg(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
unsigned char x_2; 
lean::dec(x_0);
x_2 = 1;
return x_2;
}
else
{
unsigned char x_4; 
lean::dec(x_0);
x_4 = 0;
return x_4;
}
}
}
obj* l_option_is__none___main(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_option_is__none___main___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_option_is__none___main___rarg___boxed(obj* x_0) {
_start:
{
unsigned char x_1; obj* x_2; 
x_1 = l_option_is__none___main___rarg(x_0);
x_2 = lean::box(x_1);
return x_2;
}
}
unsigned char l_option_is__none___rarg(obj* x_0) {
_start:
{
unsigned char x_1; 
x_1 = l_option_is__none___main___rarg(x_0);
return x_1;
}
}
obj* l_option_is__none(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_option_is__none___rarg___boxed), 1, 0);
return x_2;
}
}
obj* l_option_is__none___rarg___boxed(obj* x_0) {
_start:
{
unsigned char x_1; obj* x_2; 
x_1 = l_option_is__none___rarg(x_0);
x_2 = lean::box(x_1);
return x_2;
}
}
obj* l_option_bind___main___rarg(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; 
lean::dec(x_0);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 0, 0);
;
return x_4;
}
else
{
obj* x_5; obj* x_8; 
x_5 = lean::cnstr_get(x_0, 0);
lean::inc(x_5);
lean::dec(x_0);
x_8 = lean::apply_1(x_1, x_5);
return x_8;
}
}
}
obj* l_option_bind___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_option_bind___main___rarg), 2, 0);
return x_4;
}
}
obj* l_option_bind___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_option_bind___main___rarg(x_0, x_1);
return x_2;
}
}
obj* l_option_bind(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_option_bind___rarg), 2, 0);
return x_4;
}
}
obj* l_option_map___rarg(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_4; 
lean::dec(x_0);
lean::dec(x_1);
x_4 = lean::alloc_cnstr(0, 0, 0);
;
return x_4;
}
else
{
obj* x_5; obj* x_7; obj* x_8; obj* x_9; 
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
if (lean::is_shared(x_1)) {
 lean::dec(x_1);
 x_7 = lean::box(0);
} else {
 lean::cnstr_release(x_1, 0);
 x_7 = x_1;
}
x_8 = lean::apply_1(x_0, x_5);
if (lean::is_scalar(x_7)) {
 x_9 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_9 = x_7;
}
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
}
}
obj* l_option_map(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_option_map___rarg), 2, 0);
return x_4;
}
}
obj* _init_l_option_monad() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_option_map), 2, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_option_monad___lambda__1), 4, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_option_monad___lambda__2), 2, 0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_option_monad___lambda__3), 4, 0);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_option_monad___lambda__4), 4, 0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_option_monad___lambda__5), 4, 0);
x_7 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_7, 0, x_2);
lean::cnstr_set(x_7, 1, x_3);
lean::cnstr_set(x_7, 2, x_4);
lean::cnstr_set(x_7, 3, x_5);
lean::cnstr_set(x_7, 4, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_option_bind), 2, 0);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
obj* l_option_monad___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; obj* x_7; 
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_function_const___rarg), 2, 1);
lean::closure_set(x_6, 0, x_2);
x_7 = l_option_map___rarg(x_6, x_3);
return x_7;
}
}
obj* l_option_monad___lambda__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_3; 
lean::dec(x_0);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_1);
return x_3;
}
}
obj* l_option_monad___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
lean::dec(x_1);
lean::dec(x_0);
if (lean::obj_tag(x_2) == 0)
{
obj* x_8; 
lean::dec(x_2);
lean::dec(x_3);
x_8 = lean::alloc_cnstr(0, 0, 0);
;
return x_8;
}
else
{
obj* x_9; obj* x_12; 
x_9 = lean::cnstr_get(x_2, 0);
lean::inc(x_9);
lean::dec(x_2);
x_12 = l_option_map___rarg(x_9, x_3);
return x_12;
}
}
}
obj* l_option_monad___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
lean::dec(x_1);
lean::dec(x_0);
if (lean::obj_tag(x_2) == 0)
{
obj* x_8; 
lean::dec(x_2);
lean::dec(x_3);
x_8 = lean::alloc_cnstr(0, 0, 0);
;
return x_8;
}
else
{
obj* x_9; obj* x_11; 
x_9 = lean::cnstr_get(x_2, 0);
lean::inc(x_9);
if (lean::is_shared(x_2)) {
 lean::dec(x_2);
 x_11 = lean::box(0);
} else {
 lean::cnstr_release(x_2, 0);
 x_11 = x_2;
}
if (lean::obj_tag(x_3) == 0)
{
obj* x_15; 
lean::dec(x_9);
lean::dec(x_11);
lean::dec(x_3);
x_15 = lean::alloc_cnstr(0, 0, 0);
;
return x_15;
}
else
{
obj* x_17; 
lean::dec(x_3);
if (lean::is_scalar(x_11)) {
 x_17 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_17 = x_11;
}
lean::cnstr_set(x_17, 0, x_9);
return x_17;
}
}
}
}
obj* l_option_monad___lambda__5(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
lean::dec(x_1);
lean::dec(x_0);
if (lean::obj_tag(x_2) == 0)
{
obj* x_8; 
lean::dec(x_2);
lean::dec(x_3);
x_8 = lean::alloc_cnstr(0, 0, 0);
;
return x_8;
}
else
{
lean::dec(x_2);
return x_3;
}
}
}
obj* l_option_orelse___main___rarg(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
lean::dec(x_1);
return x_0;
}
}
}
obj* l_option_orelse___main(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_option_orelse___main___rarg), 2, 0);
return x_2;
}
}
obj* l_option_orelse___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_option_orelse___main___rarg(x_0, x_1);
return x_2;
}
}
obj* l_option_orelse(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_option_orelse___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_option_alternative() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_option_map), 2, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_option_monad___lambda__1), 4, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_option_monad___lambda__2), 2, 0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_option_monad___lambda__3), 4, 0);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_option_monad___lambda__4), 4, 0);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_option_monad___lambda__5), 4, 0);
x_7 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_7, 0, x_2);
lean::cnstr_set(x_7, 1, x_3);
lean::cnstr_set(x_7, 2, x_4);
lean::cnstr_set(x_7, 3, x_5);
lean::cnstr_set(x_7, 4, x_6);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_option_orelse), 1, 0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_option_alternative___lambda__1), 1, 0);
x_10 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_10, 0, x_7);
lean::cnstr_set(x_10, 1, x_8);
lean::cnstr_set(x_10, 2, x_9);
return x_10;
}
}
obj* l_option_alternative___lambda__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_cnstr(0, 0, 0);
;
return x_2;
}
}
obj* _init_l_option_lt___main() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
lean::inc(x_0);
return x_0;
}
}
obj* _init_l_option_lt() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
lean::inc(x_0);
return x_0;
}
}
obj* l_option_decidable__rel__lt___main___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
else
{
obj* x_5; 
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
lean::dec(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_11; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_5);
x_11 = lean::alloc_cnstr(0, 0, 0);
;
return x_11;
}
else
{
obj* x_12; obj* x_15; 
x_12 = lean::cnstr_get(x_2, 0);
lean::inc(x_12);
lean::dec(x_2);
x_15 = lean::apply_2(x_0, x_5, x_12);
return x_15;
}
}
}
}
obj* l_option_decidable__rel__lt___main(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_option_decidable__rel__lt___main___rarg), 3, 0);
return x_4;
}
}
obj* l_option_decidable__rel__lt___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_option_decidable__rel__lt___main___rarg(x_0, x_1, x_2);
return x_3;
}
}
obj* l_option_decidable__rel__lt(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_option_decidable__rel__lt___rarg), 3, 0);
return x_4;
}
}
obj* l_option_inhabited(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_cnstr(0, 0, 0);
;
return x_2;
}
}
obj* l_option_decidable__eq___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_0);
lean::dec(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_6; 
lean::dec(x_2);
x_6 = lean::alloc_cnstr(1, 0, 0);
;
return x_6;
}
else
{
obj* x_8; 
lean::dec(x_2);
x_8 = lean::alloc_cnstr(0, 0, 0);
;
return x_8;
}
}
else
{
obj* x_9; 
x_9 = lean::cnstr_get(x_1, 0);
lean::inc(x_9);
lean::dec(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_15; 
lean::dec(x_9);
lean::dec(x_0);
lean::dec(x_2);
x_15 = lean::alloc_cnstr(0, 0, 0);
;
return x_15;
}
else
{
obj* x_16; obj* x_19; 
x_16 = lean::cnstr_get(x_2, 0);
lean::inc(x_16);
lean::dec(x_2);
x_19 = lean::apply_2(x_0, x_9, x_16);
return x_19;
}
}
}
}
obj* l_option_decidable__eq(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_option_decidable__eq___rarg), 3, 0);
return x_2;
}
}
obj* l_option_has__lt(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_cnstr(0, 0, 0);
;
return x_4;
}
}
void initialize_init_core();
void initialize_init_control_monad();
void initialize_init_control_alternative();
void initialize_init_coe();
static bool _G_initialized = false;
void initialize_init_data_option_basic() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_core();
 initialize_init_control_monad();
 initialize_init_control_alternative();
 initialize_init_coe();
 l_option_monad = _init_l_option_monad();
 l_option_alternative = _init_l_option_alternative();
 l_option_lt___main = _init_l_option_lt___main();
 l_option_lt = _init_l_option_lt();
}