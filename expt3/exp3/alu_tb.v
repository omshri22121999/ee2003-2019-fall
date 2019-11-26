`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:43:49 10/18/2019
// Design Name:   ALU
// Module Name:   /home/omshripc/Sem 5/EE2003/ISE/expt3/exp3/alu_tb.v
// Project Name:  exp3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_tb;

	// Inputs
	reg [31:0] i1;
	reg [31:0] i2;
	reg [4:0] opcode;

	// Outputs
	wire [31:0] out;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.i1(i1), 
		.i2(i2), 
		.opcode(opcode), 
		.out(out), 
		.zero(zero)
	);

	initial begin
		// Initialize Inputs
		i1 = 32'h0000000f;
		i2 = 32'h0000000e;
		opcode = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

