module top(
	input clka
	);

	

    wire clk;
    wire reset;
    wire [31:0] iaddr; // address to instruction memory
    wire [31:0] idata;   // data from instruction memory
    wire [31:0] daddr;  // address to data memory
    wire [31:0] drdata;  // data read from data memory
    wire [31:0] dwdata; // data to be written to data memory
    wire [3:0] mem_we;     // write enable signal for each byte of 32-b word
    wire [31:0] x31;
    wire [31:0] pc;
	 wire [35:0]         vio_control, ila_control;
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
	
	icon3 icon_instance(
	 .CONTROL0(vio_control)
	);
	
	vio3 vio_instance(
	    .CONTROL(vio_control),// INOUT BUS [35:0]
		 .ASYNC_OUT({reset,clk}),// OUT BUS [148:0]
		 .ASYNC_IN({x31,pc,mem_we,dwdata,drdata,daddr,idata,iaddr})
	);
	
endmodule