module Control(
	output reg jump,			//Jump Enable
	output reg branch,		//Branch Enable
	output reg [3:0] mem_we,//Memory Write Enable
	output reg reg_we,		//Register Write Enable
	output reg [31:0] imm,	//Immediate Value
	output reg reg_sel,		//Register Input Mux Select		
	output reg [4:0] rs1,	//Register Read Address 1
	output reg [4:0] rs2,	//Register Read Address 2
	output reg [4:0] rd,		//Register Write Address
	input [31:0] instr		//Instruction
);

	always @(*) begin
		//Check instruction
		case(instr[6:0])
		
			//AUIPC or LUI
			7'b0110111,7'b0010111:begin
				branch<=0;
				jump<=0;
				rd<=instr[11:7];
				imm<={instr[31:12],12'b0};
				mem_we<=4'b0000;
				reg_sel<=1;
				reg_we<=1;
				rs1<=5'b0;
				rs2<=5'b0;
			end
			//JAL
			7'b1101111:begin
				branch<=0;
				jump<=1;
				rd<=instr[11:7];
				imm<={{12{instr[31]}},instr[31],instr[19:12],instr[20],instr[30:21],1'b0};
				mem_we<=4'b0000;
				reg_sel<=1;
				reg_we<=1;
				rs1<=5'b0;
				rs2<=5'b0;
			end
			//JALR
			7'b1100111:begin
				branch<=0;
				jump<=1;
				rd<=instr[11:7];
				imm<={{20{instr[31]}},instr[31:20]};
				mem_we<=4'b0000;
				reg_sel<=1;
				reg_we<=1;
				rs1<=instr[19:15];
				rs2<=5'b0;
			end
			//Branch
			7'b1100011:begin
				branch<=1;
				jump<=0;
				rd<=5'b0;
				imm<={{20{instr[31]}},instr[31],instr[7],instr[30:25],instr[11:8],1'b0};
				mem_we<=4'b0000;
				reg_sel<=1;
				reg_we<=0;
				rs1<=instr[19:15];
				rs2<=instr[24:20];
			end
			//Load
			7'b0000011:begin
				branch<=0;
				jump<=0;
				rd<=instr[11:7];
				imm<={{20{instr[31]}},instr[31:20]};
				mem_we<=4'b0000;
				reg_sel<=0;
				reg_we<=1;
				rs1<=instr[19:15];
				rs2<=5'b0;
			end
			//Store
			7'b0100011:begin
				branch<=0;
				jump<=0;
				rd<=5'b0;
				imm<={{20{instr[31]}},instr[31:25],instr[11:7]};
				reg_sel<=1;
				reg_we<=0;
				rs1<=instr[19:15];
				rs2<=instr[24:20];
				case({instr[14:12],instr[8:7]})
					5'b00000: begin
						mem_we <= 4'b0001;
					end
					5'b00001: begin
						mem_we <= 4'b0010;
					end
					5'b00010: begin
						mem_we <= 4'b0100;
					end
					5'b00011: begin
						mem_we <= 4'b1000;
					end
					5'b00100: begin
						mem_we <= 4'b0011;
					end
					5'b00110: begin
						mem_we <= 4'b1100;
					end
					5'b01000,5'b01001,5'b01010,5'b01011: begin
						mem_we <= 4'b1111;
					end
					default:	begin
						mem_we <= 4'b0000;
					end
				endcase
			end
			//ALU Immediate
			7'b0010011:begin
				branch<=0;
				jump<=0;
				rd<=instr[11:7];
				mem_we<=4'b0000;
				reg_sel<=1;
				reg_we<=1;
				rs1<=instr[19:15];
				rs2<=5'b0;
				case(instr[14:12])
					3'b000,3'b010,3'b011,3'b100,3'b110,3'b111: 
						imm<={{20{instr[31]}},instr[31:20]};
					3'b001,3'b101:imm<={27'b0,instr[24:20]};
					default:imm<=32'b0;
				endcase
			end
			//ALU Double egister
			7'b0110011:begin
				branch<=0;
				jump<=0;
				rd<=instr[11:7];
				imm<=32'b0;
				mem_we<=4'b0000;
				reg_sel<=1;
				reg_we<=1;
				rs1<=instr[19:15];
				rs2<=instr[24:20];
			end
			default: begin
				branch<=0;
				jump<=0;
				rd<=5'b0;
				imm<=32'b0;
				mem_we<=4'b0000;
				reg_sel<=0;
				reg_we<=0;
				rs1<=5'b0;
				rs2<=5'b0;
			end
		endcase
	end
	
	
endmodule
