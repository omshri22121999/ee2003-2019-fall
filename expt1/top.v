`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: IIT Madras	
// Engineer: Om Shri Prasath
// 
// Create Date:    18:04:16 08/15/2019 
// Design Name: Basic RISCV ALU
// Module Name:    top 
// Project Name: Basic RISCV ALU Emulator
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`include "parameters.v"

module top(
    input clk
    );
	 
	wire [`width-1:0]   out;
	wire [`width-1:0]   in1, in2;
	wire [`OPWIDTH-1:0] op;
	
	wire [35:0]         vio_control, ila_control;
	 
	ALU32 alu_main_function(
	.in1(in1),
	.in2(in2), 
	.op(op), 
	.out(out)
);
	
	icon1 icon_inst (
    .CONTROL0(vio_control), // INOUT BUS [35:0]
    .CONTROL1(ila_control) // INOUT BUS [35:0]
);
	
	vio1 vio_inst (
    .CONTROL(vio_control), // INOUT BUS [35:0]
    .ASYNC_IN(out), // IN BUS [31:0]
    .ASYNC_OUT({in1,in2,op}) // OUT BUS [67:0]
);

	ila1 ila_inst (
    .CONTROL(ila_control), // INOUT BUS [35:0]
    .CLK(clk), // IN
    .TRIG0(out) // IN BUS [31:0]
);

endmodule
