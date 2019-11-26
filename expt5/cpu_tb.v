`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:47:17 11/09/2019
// Design Name:   CPU
// Module Name:   /home/rishabh/Desktop/Verilog Projects/MoodleAssignments/Assignment 4/Assignment4/cpu_tb.v
// Project Name:  Assignment4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cpu_tb;

	// Inputs
	reg clk_i;
	reg reset_i;
	
	// Outputs
	wire [31:0] pc;
	wire [31:0] x31;
	
	wire [31:0] x3;
	wire [31:0] x4;
	wire [31:0] x10;

	// Instantiate the Unit Under Test (UUT)
	CPU CPU_main (
    .clk_i(clk_i), 
    .reset_i(reset_i), 
    .pc(pc),
	 .x31(x31),
	 .x3(x3),
	 .x4(x4),
	 .x10(x10)
    );

	always #5 clk_i = ~clk_i;
    initial begin
        clk_i = 0;
        reset_i = 1;
        #100
        reset_i = 0;
    end
      
endmodule

