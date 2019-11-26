`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:33:41 11/26/2019 
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

	// Inputs
	wire reset_i;
	
	// Outputs
	wire [31:0] pc;
	wire [31:0] x31;
	
	wire [35:0] vio_control;
	wire [35:0] ila_control;
	
	CPU CPU_main (
		 .clk_i(clk), 
		 .reset_i(reset_i), 
		 .pc(pc),
		 .x31(x31)
	);
	
	vio_4 vio_instance (
    .CONTROL(vio_control), // INOUT BUS [35:0]
	 .CLK(clk),
    .SYNC_IN({x31,pc}), // IN BUS [63:0]
    .ASYNC_OUT(reset_i) // OUT BUS [0:0]
);

	ila_4 ila_instance (
    .CONTROL(ila_control), // INOUT BUS [35:0]
    .CLK(clk), // IN
    .TRIG0(pc), // IN BUS [31:0]
    .TRIG1(x31), // IN BUS [31:0]
    .TRIG2(reset_i) // IN BUS [31:0]
);

	ico_4 ico_instance (
    .CONTROL0(vio_control), // INOUT BUS [35:0]
    .CONTROL1(ila_control) // INOUT BUS [35:0]

);

endmodule
