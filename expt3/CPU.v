module CPU(
    input clk,
    input reset,
    output [31:0] iaddr,  // address to idatauction memory
    input [31:0] idata,   // data from idatauction memory
    output reg [31:0] daddr,  // address to data memory
    input [31:0] drdata,  // data read from data memory
    output reg [31:0] dwdata, // data to be written to data memory
    output reg [3:0] we,      // write enable signal for each byte of 32-b word
    // Additional outputs for debugging
    output [31:0] x31,
	 output reg [31:0] pc
);

reg [31:0] register[0:31];
reg [31:0] op;
initial pc=0;

assign iaddr = pc;
assign x31 = register[31];
always@(posedge(clk)) begin
	case(idata[6:0])
		//Load Upper Immediate - LUI rd,imm - rd ← imm
		7'b0110111: 
			register[idata[11:7]] <= {idata[31:12],12'b0};
		//Add Upper Immediate to PC - AUIPC rd,offset - rd ← pc + offset
		7'b0010111: 
			register[idata[11:7]] <= {idata[31:12],12'b0}+pc;
		//Jump and Link - JAL rd,offset - rd ← pc + length(inst) , pc ← pc + offset
		7'b1101111: 
			begin
				register[idata[11:7]] <= pc+1;
				register[idata[11:7]] <= {idata[31],idata[19:12],idata[20],idata[30:21],1'b0}+pc;
			end
		//Jump and Link Register - JALR rd,rs1,offset - 	rd ← pc + length(inst) , pc ← (rs1 + offset) ∧ -2
		7'b1100111: 
			register[idata[11:7]] <= pc+1;
		7'b1100011:
			case(idata[14:12])
				//Branch Equal - BEQ rs1,rs2,offset	- if rs1 = rs2 then pc ← pc + offset
				3'b000: 
					if(register[idata[19:15]]==register[idata[24:20]])
						begin
							pc<=pc+
						end
				//Branch Not Equal - BNE rs1,rs2,offset - if rs1 ≠ rs2 then pc ← pc + offset
				3'b001: op = 5;
				//Branch Less Than - BLT rs1,rs2,offset - if rs1 < rs2 then pc ← pc + offset
				3'b100: op = 6;
				//Branch Greater than Equal - BGE rs1,rs2,offset - if rs1 ≥ rs2 then pc ← pc + offset
				3'b101: op = 7;
				//Branch Less Than Unsigned - BLTU rs1,rs2,offset - if rs1 < rs2 then pc ← pc + offset
				3'b110: op = 8;
				//Branch Greater than Equal Unsigned - BGEU rs1,rs2,offset - if rs1 ≥ rs2 then pc ← pc + offset
				3'b111: op = 9;				
			endcase
			
		7'b0000011:
			case(idata[14:12])
				//Load Byte	- LB rd,offset(rs1) - rd ← s8[rs1 + offset]
				3'b000: 
					begin
						daddr <= register[idata[19:15]+idata[31:20]];
						case(daddr[1:0])
							0:register[idata[11:7]] <= {{24{drdata[31]}},drdata[7:0]};
							1:register[idata[11:7]] <= {{24{drdata[31]}},drdata[15:8]};
							2:register[idata[11:7]] <= {{24{drdata[31]}},drdata[23:16]};
							3:register[idata[11:7]] <= {{24{drdata[31]}},drdata[31:24]};
						endcase
					end	
				//Load Half - LH rd,offset(rs1) - rd ← s16[rs1 + offset]
				3'b001: 
					begin
						daddr <= register[idata[19:15]+idata[31:20]];
						case(daddr[1:0])
							0:register[idata[11:7]] <= {{24{drdata[31]}},drdata[15:0]};
							2:register[idata[11:7]] <= {{24{drdata[31]}},drdata[31:16]};
						endcase
					end		
				//Load Word	- LW rd,offset(rs1) - rd ← s32[rs1 + offset]
				3'b010: 
					begin
						daddr <= register[idata[19:15]+idata[31:20]];
						register[idata[11:7]] <= drdata;
					end
				//Load Byte Unsigned	- LBU rd,offset(rs1)	- rd ← u8[rs1 + offset]
				3'b100: 
					begin
						daddr <= register[idata[19:15]+idata[31:20]];
						case(daddr[1:0])
							0:register[idata[11:7]] <= {24'b0,drdata[7:0]};
							1:register[idata[11:7]] <= {24'b0,drdata[15:8]};
							2:register[idata[11:7]] <= {24'b0,drdata[23:16]};
							3:register[idata[11:7]] <= {24'b0,drdata[31:24]};
						endcase
					end
				//Load Half Unsigned	- LHU rd,offset(rs1)	- rd ← u16[rs1 + offset]
				3'b101: 
					begin
						daddr <= register[idata[19:15]+idata[31:20]];
						case(daddr[1:0])
							0:register[idata[11:7]] <= {24'b0,drdata[15:0]};
							2:register[idata[11:7]] <= {24'b0,drdata[31:16]};
						endcase
					end
			endcase
			
		7'b0100011:
			case(idata[14:12])
				//Store Byte - SB rs2,offset(rs1) - u8[rs1 + offset] ← rs2
				3'b000: 
					begin
						daddr <= register[idata[19:15]+{idata[31:25],idata[11:7]}];
						case(daddr[1:0])
							0:
								begin 
									we <= 4'b0001;
									dwdata <= {24'b0,register[idata[24:20]][7:0]};
								end
							1:
								begin 
									we <= 4'b0010;
									dwdata <= {16'b0,register[idata[24:20]][7:0],8'b0};
								end
							2:
								begin 
									we <= 4'b0100;
									dwdata <= {8'b0,register[idata[24:20]][7:0],16'b0};
								end
							3:
								begin 
									we <= 4'b1000;
									dwdata <= {register[idata[24:20]][7:0],24'b0};
								end
						endcase
					end
				//Store Half - SH rs2,offset(rs1) - u16[rs1 + offset] ← rs2
				3'b001: 
					begin
						daddr <= register[idata[19:15]+{idata[31:25],idata[11:7]}];
						case(daddr[1:0])
							0:
								begin 
									we <= 4'b0011;
									dwdata <= {16'b0,register[idata[24:20]][15:0]};
								end
							2:
								begin
									we <= 4'b1100;
									dwdata <= {register[idata[24:20]][15:0],16'b0};
								end
						endcase
					end
				//Store Word - SW rs2,offset(rs1) - u32[rs1 + offset] ← rs2
				3'b010: 
					begin
						daddr <= register[idata[19:15]+{idata[31:25],idata[11:7]}];
						dwdata <= register[idata[24:20]];
					end
			endcase
		7'b0010011:
			case(idata[14:12])
				//Add Immediate - ADDI rd,rs1,imm - rd ← rs1 + sx(imm)
				3'b000: 
					begin
						register[idata[11:7]] <= register[idata[19:15]]+$signed(idata[31:20]);
					end
				//Set Less Than Immediate - SLTI rd,rs1,imm - rd ← sx(rs1) < sx(imm)
				3'b010: 
					begin
						register[idata[11:7]] <= $signed(register[idata[19:15]])<$signed(idata[31:20]);
					end
				//Set Less Than Immediate Unsigned - SLTIU rd,rs1,imm	- rd ← ux(rs1) < ux(imm)
				3'b011: 
					begin
						register[idata[11:7]] <= register[idata[19:15]]<idata[31:20];
					end
				//Xor Immediate - XORI rd,rs1,imm - rd ← ux(rs1) ⊕ ux(imm) - 
				3'b100:  
					begin
						register[idata[11:7]] <= register[idata[19:15]]^idata[31:20];
					end
				//Or Immediate	- ORI rd,rs1,imm - rd ← ux(rs1) ∨ ux(imm)
				3'b110: 
					begin
						register[idata[11:7]] <= register[idata[19:15]]|idata[31:20];
					end
				//And Immediate - ANDI rd,rs1,imm - rd ← ux(rs1) ∧ ux(imm)
				3'b111: 
					begin
						register[idata[11:7]] <= register[idata[19:15]]&idata[31:20];
					end
				//Shift Left Logical Immediate - SLLI rd,rs1,imm - rd ← ux(rs1) « ux(imm)
				3'b001: 
					begin
						register[idata[11:7]] <= register[idata[19:15]]<<idata[24:20];
					end
				3'b101: 
					case(idata[30])
						//Shift Right Logical Immediate - SRLI rd,rs1,imm - rd ← ux(rs1) » ux(imm)
						1'b0: 
							begin
								register[idata[11:7]] <= register[idata[19:15]]>>idata[24:20];
							end
						//Shift Right Arithmetic Immediate - SRAI rd,rs1,imm - rd ← sx(rs1) » ux(imm)
						1'b1: 
							begin
								register[idata[11:7]] <= $signed(register[idata[19:15]])>>>idata[24:20];
							end			
					endcase
			endcase
		7'b0110011:
			case(idata[14:12])
				3'b000: 
					case(idata[30])
						//Add	- ADD rd,rs1,rs2 - rd ← sx(rs1) + sx(rs2)
						1'b0: 
							begin
								register[idata[11:7]] <= $signed(register[idata[19:15]])+$signed(register[idata[24:20]]);
							end
						//Subtract - SUB rd,rs1,rs2 - rd ← sx(rs1) - sx(rs2)
						1'b1: 
							begin
								register[idata[11:7]] <= $signed(register[idata[19:15]])-$signed(register[idata[24:20]]);
							end
					endcase
				//Shift Left Logical - SLL rd,rs1,rs2 - rd ← ux(rs1) « rs2					
				3'b001: 
					begin
						register[idata[11:7]] <= register[idata[19:15]]<<register[idata[24:20]];
					end
				//Set Less Than - SLT rd,rs1,rs2 - rd ← sx(rs1) < sx(rs2)
				3'b010: 
					begin
						register[idata[11:7]] <= $signed(register[idata[19:15]])<$signed(register[idata[24:20]]);
					end
				//Set Less Than Unsigned - SLTU rd,rs1,rs2 - rd ← ux(rs1) < ux(rs2)
				3'b011: 
					begin
						register[idata[11:7]] <= register[idata[19:15]]<register[idata[24:20]];
					end
				//Xor	- XOR rd,rs1,rs2 - rd ← ux(rs1) ⊕ ux(rs2)
				3'b100: 
					begin
						register[idata[11:7]] <= register[idata[19:15]]^register[idata[24:20]];
					end
				3'b101: 
					case(idata[30])
						//Shift Right Logical - SRL rd,rs1,rs2	- rd ← ux(rs1) » rs2
						1'b0: 
							begin
								register[idata[11:7]] <= register[idata[19:15]]>>register[idata[24:20]];
							end
						//Shift Right Arithmetic - SRA rd,rs1,rs2	- rd ← sx(rs1) » rs2
						1'b1: 
							begin
								register[idata[11:7]] <= $signed(register[idata[19:15]])>>>register[idata[24:20]];
							end	
					endcase
				//Or - OR rd,rs1,rs2	- rd ← ux(rs1) ∨ ux(rs2)
				3'b110: 
					begin
						register[idata[11:7]] <= register[idata[19:15]]|register[idata[24:20]];
					end
				//And	- AND rd,rs1,rs2 - rd ← ux(rs1) ∧ ux(rs2)
				3'b111: 
					begin
						register[idata[11:7]] <= register[idata[19:15]]&register[idata[24:20]];
					end
			endcase
		//FENCE
		7'b0001111: op = 37;
		7'b1110011: 
			case(idata[20])
				//ECALL
				1'b0: op = 38;
				//EBREAK
				1'b1: op = 39;
			endcase
	endcase
	pc<=pc+1;
end

endmodule
