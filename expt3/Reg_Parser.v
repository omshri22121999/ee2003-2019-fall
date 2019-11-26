module Reg_Parser(
	input [31:0] instr,
	input [31:0] indata,
	output reg [31:0] outdata
);
	
	//Set Register Value according to Address
	always@(*) begin
		case({instr[14:12],instr[8:7]})
			5'b00000: outdata <= {24'b0,indata[7:0]};
			5'b00001: outdata <= {16'b0,indata[7:0],8'b0};
			5'b00010: outdata <= {8'b0,indata[7:0],16'b0};
			5'b00011: outdata <= {indata[7:0],24'b0};
			5'b00100: outdata <= {16'b0,indata[7:0],indata[15:8]};
			5'b00110: outdata <= {indata[7:0],indata[15:8],16'b0};
			5'b01000,5'b01001,5'b01010,5'b01011: outdata <= {indata[7:0],indata[15:8],indata[23:16],indata[31:24]};
			default:outdata<=32'b0;
		endcase
	end
endmodule