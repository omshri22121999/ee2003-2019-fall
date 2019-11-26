`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:38:13 10/25/2019
// Design Name:   REDUCED_CPU
// Module Name:   /home/omshripc/Sem 5/EE2003/ISE/expt3/exp3/red_cpu_tb.v
// Project Name:  exp3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: REDUCED_CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module red_cpu_tb;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [31:0] x31;

	// Instantiate the Unit Under Test (UUT)
	REDUCED_CPU uut (
		.clk(clk), 
		.reset(reset), 
		.x31(x31)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

