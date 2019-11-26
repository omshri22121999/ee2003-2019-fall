`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:04:56 10/18/2019
// Design Name:   IMEM
// Module Name:   /home/omshripc/Sem 5/EE2003/ISE/expt3/exp3/imem_tb.v
// Project Name:  exp3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IMEM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module imem_tb;

	// Inputs
	reg [31:0] iaddr;

	// Outputs
	wire [31:0] idata;

	// Instantiate the Unit Under Test (UUT)
	IMEM uut (
		.iaddr(iaddr), 
		.idata(idata)
	);

	initial begin
		// Initialize Inputs
		iaddr = 0;

		// Wait 100 ns for global reset to finish
		#100;
      iaddr = 4;
		#100;
		$finish;
		// Add stimulus here

	end
      
endmodule

