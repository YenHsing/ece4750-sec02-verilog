//========================================================================
// Integer Multiplier Single Cycle Implementation
//========================================================================

`ifndef IMUL_INT_MUL_SCYCLE_V2_V
`define IMUL_INT_MUL_SCYCLE_V2_V

`include "vc/trace.v"

module imul_IntMulScycleV2
(
  input  logic        clk,
  input  logic        reset,

  input  logic        in_val,
  input  logic [31:0] in0,
  input  logic [31:0] in1,

  output logic        out_val,
  output logic [31:0] out
);

  // ... implement your multiplier with valid bit below ...
  //----------------------------------------------------------------------
// Input Registers (sequential logic)
//----------------------------------------------------------------------

logic [31:0] in0_reg;
logic [31:0] in1_reg;
logic in_val_reg;

always @( posedge clk ) begin
  if ( reset ) begin
    in0_reg <= 32'b0;
    in1_reg <= 32'b0;
    in_val_reg <= 1'b0;
  end
  else begin
    in0_reg <= in0;
    in1_reg <= in1;
    in_val_reg <= in_val;
  end
end

//----------------------------------------------------------------------
// Multiplication Logic (combinational logic)
//----------------------------------------------------------------------

always @(*) begin
  out_val= in_val_reg;
  if(out_val)begin
    out = in0_reg * in1_reg;
  end
end

  //----------------------------------------------------------------------
  // Line Tracing
  //----------------------------------------------------------------------

  `ifndef SYNTHESIS

  logic [`VC_TRACE_NBITS-1:0] str;
  `VC_TRACE_BEGIN
  begin

    $sformat( str, "%x|%x", in0, in1 );
    vc_trace.append_val_str( trace_str, in_val, str );

    vc_trace.append_str( trace_str, "(" );

    $sformat( str, "%x", in0_reg );
    vc_trace.append_val_str( trace_str, in_val_reg, str );
    vc_trace.append_str( trace_str, " " );

    $sformat( str, "%x", in1_reg );
    vc_trace.append_val_str( trace_str, in_val_reg, str );

    vc_trace.append_str( trace_str, ")" );

    $sformat( str, "%x", out );
    vc_trace.append_val_str( trace_str, out_val, str );

  end
  `VC_TRACE_END

  `endif /* SYNTHESIS */

endmodule

`endif /* IMUL_INT_MUL_SCYCLE_V2_V */

