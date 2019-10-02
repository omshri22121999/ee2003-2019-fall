
module imem(
    input [31:0] iaddr,
    output [31:0] idata
);
    reg [31:0] m[0:31];
    initial $readmemh("imem.list",m);
	 assign idata = m[iaddr>>2];
endmodule
