`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:45:42 10/18/2019
// Design Name:   ALU_Control
// Module Name:   /home/omshripc/Sem 5/EE2003/ISE/expt3/exp3/alu_control_tb.v
// Project Name:  exp3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU_Control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_control_tb;

	// Inputs
	reg [31:0] imm;
	reg [31:0] rv1;
	reg [31:0] rv2;
	reg [31:0] pc;
	reg [31:0] instr;

	// Outputs
	wire [31:0] i1;
	wire [31:0] i2;
	wire [4:0] opcode;

	// Instantiate the Unit Under Test (UUT)
	ALU_Control uut (
		.imm(imm), 
		.i1(i1), 
		.i2(i2), 
		.opcode(opcode), 
		.rv1(rv1), 
		.rv2(rv2), 
		.pc(pc), 
		.instr(instr)
	);

	initial begin
		// Initialize Inputs
		imm = 32'h000000f;
		rv1 = 32'h000000e;
		rv2 = 32'h000000d;
		pc = 0;
		instr = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

