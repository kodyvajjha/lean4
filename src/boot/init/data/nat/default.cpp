// Lean compiler output
// Module: init.data.nat.default
// Imports: init.data.nat.basic init.data.nat.div
#include "runtime/object.h"
#include "runtime/apply.h"
#include "runtime/io.h"
#include "kernel/builtin.h"
typedef lean::object obj;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#endif
void initialize_init_data_nat_basic();
void initialize_init_data_nat_div();
static bool _G_initialized = false;
void initialize_init_data_nat_default() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_data_nat_basic();
 initialize_init_data_nat_div();
}