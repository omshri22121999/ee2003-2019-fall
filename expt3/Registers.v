module Registers(
	input [4:0] rs1,  //Register first output address
	input [4:0] rs2,	//Register second output address
	input [4:0] rd,	//Register write data
	input we,			//Write Enable
	input clk,			//Clock
	input [31:0] indata,//Write Data
	output [31:0] rv1, // Register first output
	output [31:0] rv2, //Register second output
	input reset,		//Reset
	output [31:0] x31,
	output [31:0] x0,
	output [31:0] x1,
	output [31:0] x2,
	output [31:0] x3,
	output [31:0] x4,
	output [31:0] x5
);
	//Registers
	reg [31:0] regfile [0:31];
	//Integer for loop to set registers to zero
	integer i;
	
	//Assign respective values
	assign rv1 = regfile[rs1];
	assign rv2 = regfile[rs2];
	assign x31 = regfile[31];
	assign x0 = regfile[0];
	assign x1 = regfile[1];
	assign x2 = regfile[2];
	assign x3 = regfile[3];
	assign x4 = regfile[4];
	assign x5 = regfile[5];
	
	always@(posedge(clk))
		begin
			//Reset check
			if(reset==1) begin
				for(i=0;i<32;i=i+1) begin
					regfile[i]=31'b0;
				end
			end
			else begin
				//Write enable
				if(we==1) begin
					regfile[rd] = indata;
				end
			end
		end
endmodule