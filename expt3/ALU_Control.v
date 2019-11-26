module ALU_Control(
		input [31:0] imm, //Immediate Value
		output reg [31:0] i1,	//First ALU Input
		output reg [31:0] i2,	//Second ALU Input
		output reg [4:0] opcode,//Opcode
		input [31:0] rv1,			//First Register Output
		input [31:0] rv2,			//Second Register output
		input [31:0] pc,			//PC Value
		input [31:0] instr		//Instruction
); 

	always@(*)
		case(instr[6:0])
		//LUI
		7'b0110111: begin	
			i1 <= imm;
			i2 <= 0;
			opcode<=0;
		end
		//AUIPC
		7'b0010111: begin
			i1 <= imm;
			i2 <= pc;
			opcode<=0;
		end
		//JAL
		7'b1101111: begin
			i1 <= pc;
			i2 <= imm;
			opcode<=0;
		end
		//JALR
		7'b1100111: begin
			i1 <= rv1;
			i2 <= imm;
			opcode<=0;
		end
		//Branch
		7'b1100011: begin
			i1 <= rv1;
			i2 <= rv2;
			case(instr[14:12]) 
				//BEQ
				3'b000:opcode<=12;
				//BNE
				3'b001:opcode<=13;
				//BLT
				3'b100:opcode<=3;
				//BGE
				3'b101:opcode<=11;
				//BLTU
				3'b110:opcode<=4;
				//BGEU
				3'b111:opcode<=10;
				default:opcode<=15;
			endcase
		end
		//LOAD & STORE
		7'b0000011,7'b0100011: begin
			i1 <= imm;
			i2 <= rv1;
			opcode<=0;
		end
		//ALU Imm
		7'b0010011:begin
			i1 <= rv1;
			i2 <= imm;
			case({instr[30],instr[14:12]}) 
				4'b0000:opcode<=0;
				4'b0010:opcode<=3;
				4'b0011:opcode<=4;
				4'b0100:opcode<=5;
				4'b0110:opcode<=9;
				4'b0111:opcode<=8;
				4'b0001:opcode<=2;
				4'b0101:opcode<=6;
				4'b1101:opcode<=7;
				default:opcode<=15;
			endcase
		end
		//ALU Reg
		7'b0110011:begin
			i1 <= rv1;
			i2 <= rv2;
			case({instr[30],instr[14:12]})
				4'b0000:opcode<=0;
				4'b1000:opcode<=1;
				4'b0001:opcode<=2;
				4'b0010:opcode<=3;
				4'b0011:opcode<=4;
				4'b0100:opcode<=5;
				4'b0101:opcode<=6;
				4'b1101:opcode<=7;
				4'b0110:opcode<=9;
				4'b0111:opcode<=8;
				default:opcode<=15;
			endcase
		end
		default:begin
			i1<=rv1;
			i2<=rv2;
			opcode<=15;
			end
		endcase
endmodule
