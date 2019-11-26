`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:37:08 11/26/2019 
// Design Name: 
// Module Name:    top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module top(
	input clk
);
	wire reset;
	wire [31:0] pc;
	wire [31:0] x31;
	
	wire [31:0] x3;
	wire [31:0] x4;
	wire [31:0] x10;
	wire [35:0] ila_ctrl,vio_ctrl;
	
	CPU CPU_main (
    .clk_i(clk), 
    .reset_i(reset), 
    .pc(pc),
	 .x31(x31),
	 .x3(x3),
	 .x4(x4),
	 .x10(x10)
    );
	
	vio vio_in (
    .CONTROL(vio_ctrl), // INOUT BUS [35:0]
    .CLK(clk), // IN
    .ASYNC_OUT(reset), // OUT BUS [0:0]
    .SYNC_IN({x31,x10,x4,x3,pc}) // IN BUS [159:0]
	);
	icon icon_in (
    .CONTROL0(ila_ctrl), // INOUT BUS [35:0]
    .CONTROL1(vio_ctrl) // INOUT BUS [35:0]
	);
	
	ila ila_in (
    .CONTROL(ila_ctrl), // INOUT BUS [35:0]
    .CLK(clk), // IN
    .TRIG0(pc), // IN BUS [31:0]
    .TRIG1(x31), // IN BUS [31:0]
    .TRIG2(x10), // IN BUS [31:0]
    .TRIG3(x4), // IN BUS [31:0]
    .TRIG4(x3), // IN BUS [31:0]
    .TRIG5(reset) // IN BUS [0:0]
	);
	
endmodule
