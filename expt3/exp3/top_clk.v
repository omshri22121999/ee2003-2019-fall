module top_clk(
		input clk
);
    wire reset;
    wire [31:0] iaddr; // address to instruction memory
    wire [31:0] idata;   // data from instruction memory
    wire [31:0] daddr;  // address to data memory
    wire [31:0] drdata;  // data read from data memory
    wire [31:0] dwdata; // data to be written to data memory
    wire [3:0] mem_we;     // write enable signal for each byte of 32-b word
    wire [31:0] x31;
    wire [31:0] pc;
	 wire [35:0] vio_control;
	 
	 reg clk_divide = 0;
	 
	 always @(posedge clk)  clk_divide <= clk_divide + 1;  // 20-bit counter
	 
	 REDUCED_CPU uut (
		.clk(clk_divide), 
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
		.clk(clk_divide),
		.daddr(daddr),
		.dwdata(dwdata),
		.drdata(drdata),
		.we(mem_we)
		);
	 
	 IMEM imem(
		.iaddr(iaddr), 
		.idata(idata)
	);
	
	icon3 icon_instance(
	 .CONTROL0(vio_control)
	);
	
	vio3_clk vio_instance(
	    .CONTROL(vio_control),// INOUT BUS [35:0]
		 .SYNC_OUT({reset}),// OUT BUS [148:0]
		 .SYNC_IN({x31,pc,mem_we,dwdata,drdata,daddr,idata,iaddr}),
		 .CLK(clk_divide)
	);
	
endmodule


