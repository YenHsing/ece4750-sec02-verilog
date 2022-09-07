// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VINTMULSCYCLEV2_NOPARAM__SYMS_H_
#define _VINTMULSCYCLEV2_NOPARAM__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VIntMulScycleV2_noparam.h"

// DPI TYPES for DPI Export callbacks (Internal use)
typedef void (*VIntMulScycleV2_noparam__Vcb_line_trace_t) (VIntMulScycleV2_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);

// SYMS CLASS
class VIntMulScycleV2_noparam__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VIntMulScycleV2_noparam*       TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_IntMulScycleV2_noparam__v;
    
    // CREATORS
    VIntMulScycleV2_noparam__Syms(VIntMulScycleV2_noparam* topp, const char* namep);
    ~VIntMulScycleV2_noparam__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
