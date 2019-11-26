module IMEM(
    input [31:0] iaddr,
    output [31:0] idata
);
    reg [31:0] m[0:31];
    initial begin $readmemh("imem5_ini.mem",m); end
	 //IMEM Assign Data
    assign idata = m[iaddr[31:2]];
	 
endmodule
