module DMEM_Parser(
	input [31:0] instr,
	input [31:0] indata,
	output reg [31:0] outdata
);
	//Set DMEM Value according to Address
	always@(*) begin
		case({instr[14:12],instr[21:20]})
			5'b00000: outdata<={{24{indata[7]}},indata[7:0]};
			5'b00001: outdata<={{24{indata[15]}},indata[15:8]};
			5'b00010: outdata<={{24{indata[23]}},indata[23:16]};
			5'b00011: outdata<={{24{indata[31]}},indata[31:24]};
			5'b00100: outdata<={{16{indata[31]}},indata[15:0]};
			5'b00110: outdata<={{16{indata[15]}},indata[31:16]};
			5'b01000,5'b01001,5'b01010,5'b01011: outdata<=indata;
			5'b10000: outdata<={24'b0,indata[7:0]};
			5'b10001: outdata<={24'b0,indata[15:8]};
			5'b10010: outdata<={24'b0,indata[23:16]};
			5'b10011: outdata<={24'b0,indata[31:24]};
			5'b10100: outdata<={24'b0,indata[31:16]};
			5'b10110: outdata<={24'b0,indata[15:0]};
			default:outdata<=32'b0;
		endcase
	end

endmodule