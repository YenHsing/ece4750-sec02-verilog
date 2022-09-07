// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VIntMulScycleV2_noparam__Syms.h"
#include "VIntMulScycleV2_noparam.h"



// FUNCTIONS
VIntMulScycleV2_noparam__Syms::VIntMulScycleV2_noparam__Syms(VIntMulScycleV2_noparam* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    // Setup scopes
    __Vscope_IntMulScycleV2_noparam__v.configure(this, name(), "IntMulScycleV2_noparam.v", "v", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_IntMulScycleV2_noparam__v.exportInsert(__Vfinal, "line_trace", (void*)(&VIntMulScycleV2_noparam::__Vdpiexp_IntMulScycleV2_noparam__DOT__v__DOT__line_trace_TOP));
    }
}
