// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntMulScycleV2_noparam.h for the primary calling header

#include "VIntMulScycleV2_noparam.h"
#include "VIntMulScycleV2_noparam__Syms.h"

#include "verilated_dpi.h"

//==========

void VIntMulScycleV2_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIntMulScycleV2_noparam::eval\n"); );
    VIntMulScycleV2_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VIntMulScycleV2_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("imul/IntMulScycleV2.v", 101, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VIntMulScycleV2_noparam::_eval_initial_loop(VIntMulScycleV2_noparam__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("imul/IntMulScycleV2.v", 101, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VIntMulScycleV2_noparam::__Vdpiexp_IntMulScycleV2_noparam__DOT__v__DOT__line_trace_TOP(VIntMulScycleV2_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam::__Vdpiexp_IntMulScycleV2_noparam__DOT__v__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__0__val;
    CData/*7:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__char;
    CData/*7:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__char;
    CData/*0:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__6__val;
    CData/*7:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__9__char;
    CData/*7:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__char;
    CData/*0:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__12__val;
    CData/*7:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__15__char;
    CData/*7:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__char;
    CData/*0:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__18__val;
    CData/*7:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__21__char;
    CData/*7:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__22__char;
    WData/*4095:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__0__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[128];
    IData/*31:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__num;
    IData/*31:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__num;
    WData/*4095:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__6__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__8__str[128];
    IData/*31:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__9__num;
    IData/*31:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__num;
    WData/*4095:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__12__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__14__str[128];
    IData/*31:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__15__num;
    IData/*31:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__num;
    WData/*4095:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__18__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str[128];
    WData/*4095:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__20__str[128];
    IData/*31:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__21__num;
    IData/*31:0*/ __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__22__num;
    IData/*31:0*/ __Vilp;
    VIntMulScycleV2_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_SFORMAT_X(4096,vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__str
                 ,"%x|%x",32,vlTOPp->in0,32,vlTOPp->in1);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__0__str[__Vilp] 
            = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__0__val 
        = vlTOPp->in_val;
    vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__0__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__0__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__0__val) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[__Vilp] 
                = __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__0__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        if (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__0__val) {
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[0U] = 0x78U;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__num 
                = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1 
                   - (IData)(1U));
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__char = 0x20U;
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__char);
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__num 
                = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1;
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__char = 0x20U;
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__char);
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        }
    }
    __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[0U] = 0x28U;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_SFORMAT_X(4096,vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__str
                 ,"%x",32,vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__in0_reg);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__6__str[__Vilp] 
            = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__6__val 
        = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__in_val_reg;
    vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__6__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__6__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__6__val) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[__Vilp] 
                = __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__6__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        if (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__6__val) {
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__8__str[0U] = 0x78U;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__8__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__9__num 
                = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1 
                   - (IData)(1U));
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__9__char = 0x20U;
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__9__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__9__char);
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__num 
                = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1;
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__char = 0x20U;
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__char);
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        }
    }
    __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[0U] = 0x20U;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_SFORMAT_X(4096,vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__str
                 ,"%x",32,vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__in1_reg);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__12__str[__Vilp] 
            = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__12__val 
        = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__in_val_reg;
    vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__12__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__12__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__12__val) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str[__Vilp] 
                = __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__12__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        if (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__12__val) {
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__14__str[0U] = 0x78U;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__14__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__15__num 
                = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1 
                   - (IData)(1U));
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__15__char = 0x20U;
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__15__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__15__char);
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__num 
                = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1;
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__char = 0x20U;
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__16__char);
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        }
    }
    __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[0U] = 0x29U;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_SFORMAT_X(4096,vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__str
                 ,"%x",32,vlTOPp->out);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__18__str[__Vilp] 
            = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__18__val 
        = vlTOPp->out_val;
    vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__18__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__18__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__18__val) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str[__Vilp] 
                = __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__18__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        if (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_val_str__18__val) {
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__20__str[0U] = 0x78U;
            __Vilp = 1U;
            while ((__Vilp <= 0x7fU)) {
                __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__20__str[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                  (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__21__num 
                = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1 
                   - (IData)(1U));
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__21__char = 0x20U;
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__21__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__21__char);
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__22__num 
                = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__len1;
            __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__22__char = 0x20U;
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__22__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__22__char);
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        }
    }
}

void VIntMulScycleV2_noparam::line_trace(svBitVecVal* trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam::line_trace\n"); );
    // Variables
    WData/*4095:0*/ trace_str__Vcvt[128];
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum==-1)) { __Vfuncnum = Verilated::exportFuncNum("line_trace"); }
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VIntMulScycleV2_noparam__Vcb_line_trace_t __Vcb = (VIntMulScycleV2_noparam__Vcb_line_trace_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_W_SVBV(4096,trace_str__Vcvt,trace_str);(*__Vcb)((VIntMulScycleV2_noparam__Syms*)(__Vscopep->symsp()), trace_str__Vcvt);
    VL_SET_SVBV_W(4096, trace_str, trace_str__Vcvt);
}

VL_INLINE_OPT void VIntMulScycleV2_noparam::_sequent__TOP__1(VIntMulScycleV2_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam::_sequent__TOP__1\n"); );
    VIntMulScycleV2_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__in_val_reg 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->in_val));
    if (vlTOPp->reset) {
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__in1_reg = 0U;
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__in0_reg = 0U;
    } else {
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__in1_reg 
            = vlTOPp->in1;
        vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__in0_reg 
            = vlTOPp->in0;
    }
    vlTOPp->out_val = vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__in_val_reg;
    if (vlTOPp->out_val) {
        vlTOPp->out = (vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__in0_reg 
                       * vlTOPp->IntMulScycleV2_noparam__DOT__v__DOT__in1_reg);
    }
}

void VIntMulScycleV2_noparam::_eval(VIntMulScycleV2_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam::_eval\n"); );
    VIntMulScycleV2_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VIntMulScycleV2_noparam::_change_request(VIntMulScycleV2_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam::_change_request\n"); );
    VIntMulScycleV2_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VIntMulScycleV2_noparam::_change_request_1(VIntMulScycleV2_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam::_change_request_1\n"); );
    VIntMulScycleV2_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VIntMulScycleV2_noparam::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV2_noparam::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((in_val & 0xfeU))) {
        Verilated::overWidthError("in_val");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
