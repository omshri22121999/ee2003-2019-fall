`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:36:16 10/30/2019
// Design Name:   REDUCED_CPU
// Module Name:   /home/omshripc/Sem 5/EE2003/ISE/expt3/exp3/cpu_red_test.v
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

module cpu_red_test;

	reg clk;
	reg reset;
	wire [31:0] idata;
	wire [31:0] drdata;
	wire [31:0] iaddr;
	wire [31:0] daddr;
	wire [31:0] dwdata;
	wire [3:0] mem_we;
	wire [31:0] x31;
	wire [31:0] pc;

	// Instantiate the Unit Under Test (UUT)
	REDUCED_CPU uut (
		.clk(clk), 
		.reset(reset), 
		.iaddr(iaddr), 
		.idata(idata), 
		.daddr(daddr), 
		.drdata(drdata), 
		.dwdata(dwdata), 
		.mem_we(mem_we), 
		.x31(x31), 
		.pc(pc)
	);
	
	 
	 DMEM dmem(
		.clk(clk),
		.daddr(daddr),
		.dwdata(dwdata),
		.drdata(drdata),
		.we(mem_we)
		);
	 
	 IMEM imem(
		.iaddr(iaddr), 
		.idata(idata)
	);

	always #5 clk = ~clk;
    initial begin
        clk = 0;
        reset = 1;
        #100
        reset = 0;
    end
      
endmodule

