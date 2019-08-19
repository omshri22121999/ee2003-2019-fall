`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: IIT Madras
// Engineer: Om Shri Prasath
// 
// Create Date:    11:02:08 08/15/2019 
// Design Name: 	ALU for RISC V-32I
// Module Name:    top 
// Target Devices: 
// Tool versions:
//
//////////////////////////////////////////////////////////////////////////////////
`include "parameters.v"

module top(input clk);
	 
    wire [`width-1:0] in1;
    wire [`width-1:0] in2;
    wire [`OPWIDTH-1:0] op;
    wire [`width-1:0] out;

// IMPLEMETATION OF ALU FOR RISCV 32I
ALU32 instanceA(
	//INPUTS
	.in1(in1),
	.in2(in2),
	.op(op),
	//OUTPUT
	.out(out)
);
//ICON FUNCTION
icon0 instanceB (
    .CONTROL0(VIO_CONTROL) // INOUT BUS [35:0]
);
//VIRTUAL INPUT/OUTPUT
vio0 instanceC (
    .CONTROL(VIO_CONTROL), // INOUT BUS [35:0]
    .ASYNC_OUT({in1,in2,op}), // OUT BUS [69:0]
    .ASYNC_IN({out}) // IN BUS [31:0]
);

endmodule
