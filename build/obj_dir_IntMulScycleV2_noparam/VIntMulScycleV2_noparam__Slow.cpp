// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntMulScycleV2_noparam.h for the primary calling header

#include "VIntMulScycleV2_noparam.h"
#include "VIntMulScycleV2_noparam__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VIntMulScycleV2_noparam) {
    VIntMulScycleV2_noparam__Syms* __restrict vlSymsp = __VlSymsp = new VIntMulScycleV2_noparam__Syms(this, name());
    VIntMulScycleV2_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VIntMulScycleV2_noparam::__Vconfigure(VIntMulScycleV2_noparam__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VIntMulScycleV2_noparam::~VIntMulScycleV2_noparam() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VIntMulScycleV2_noparam::_settle__TOP__2(VIntMulScycleV2_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam::_settle__TOP__2\n"); );
    VIntMulScycleV2_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out_val = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__in_val_reg;
    if (vlTOPp->out_val) {
        vlTOPp->out = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__in0_reg 
                       * vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__in1_reg);
    }
}

void VIntMulScycleV2_noparam::_eval_initial(VIntMulScycleV2_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam::_eval_initial\n"); );
    VIntMulScycleV2_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VIntMulScycleV2_noparam::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam::final\n"); );
    // Variables
    VIntMulScycleV2_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIntMulScycleV2_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIntMulScycleV2_noparam::_eval_settle(VIntMulScycleV2_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam::_eval_settle\n"); );
    VIntMulScycleV2_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VIntMulScycleV2_noparam::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    in0 = VL_RAND_RESET_I(32);
    in1 = VL_RAND_RESET_I(32);
    in_val = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(32);
    out_val = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    IntMulScycleV2_noparam__DOT__v__DOT__in0_reg = VL_RAND_RESET_I(32);
    IntMulScycleV2_noparam__DOT__v__DOT__in1_reg = VL_RAND_RESET_I(32);
    IntMulScycleV2_noparam__DOT__v__DOT__in_val_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, IntMulScycleV2_noparam__DOT__v__DOT__str);
    IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
}
