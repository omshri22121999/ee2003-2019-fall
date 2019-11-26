`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:15:56 10/18/2019
// Design Name:   Control
// Module Name:   /home/omshripc/Sem 5/EE2003/ISE/expt3/exp3/control_tb.v
// Project Name:  exp3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module control_tb;

	// Inputs
	reg [31:0] instr;

	// Outputs
	wire jump;
	wire branch;
	wire [3:0] mem_we;
	wire reg_we;
	wire [31:0] imm;
	wire reg_sel;
	wire [5:0] rs1;
	wire [5:0] rs2;
	wire [5:0] rd;

	// Instantiate the Unit Under Test (UUT)
	Control uut (
		.jump(jump), 
		.branch(branch), 
		.mem_we(mem_we), 
		.reg_we(reg_we), 
		.instr(instr), 
		.imm(imm), 
		.reg_sel(reg_sel), 
		.rs1(rs1), 
		.rs2(rs2), 
		.rd(rd)
	);

	initial begin
		// Initialize Inputs
		instr = 32'hFFFFFFB7;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		$finish;
	end
      
endmodule

