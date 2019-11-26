module CPU(
	input clk,
	input reset,
	input [31:0] idata,
	output [31:0] drdata,
	output [31:0] daddr,
	output reg [31:0] pc,
	output [31:0] dwdata,
	output [31:0] x31,
	output reg [31:0] pc_next,	
	output branch,
	output alu_zero,
	output jump,
	output [3:0] mem_we,
	output [31:0] imm,
	output reg_we,
	output [31:0] i1,
	output [31:0] i2,
	output [31:0] x1,
	output [31:0] x2,
	output [31:0] x0,
	output [31:0] x3,
	output [31:0] x4,
	output [31:0] x5,
	output [4:0] opcode,
	output [31:0] alu_out,
	output [31:0] dmem_out,
	output [31:0] rv1,
	output [31:0] rv2,
	output reg [31:0] reg_indata,
	output [4:0] rs1,
	output [4:0] rs2,
	output [4:0] rd,
	output reg_sel
); 

	
	wire signed[31:0] pc_4 = pc+4;
	wire signed[31:0] pc_imm = pc+imm;
	
	assign daddr = alu_out;
	always @(posedge reset or posedge clk)
		if (reset)
			pc <= 32'h00000000;
		else
			pc <= pc_next;
	
	
	
	Control control(.jump(jump),.branch(branch),.mem_we(mem_we),.reg_we(reg_we),.instr(idata),.imm(imm),.reg_sel(reg_sel),.rs1(rs1),.rs2(rs2),.rd(rd));
	
	Registers registers(.rv1(rv1),.rv2(rv2),.rs1(rs1),.rs2(rs2),.rd(rd),.reset(reset),.clk(clk),.x1(x1),.x0(x0),.x2(x2),.x3(x3),.x4(x4),.x5(x5),.we(reg_we),.indata(reg_indata),.x31(x31));
	
	ALU_Control alu_control(.imm(imm),.i1(i1),.i2(i2),.opcode(opcode),.rv1(rv1),.rv2(rv2),.instr(idata),.pc(pc));
	
	ALU alu(.i1(i1),.i2(i2),.opcode(opcode),.out(alu_out),.zero(alu_zero));
	
	
	DMEM_Parser dmem_parser(.instr(idata),.indata(drdata),.outdata(dmem_out));
	
	Reg_Parser reg_parser(.instr(idata),.indata(rv2),.outdata(dwdata));
	
	always@(*) begin
		if(jump) begin
			reg_indata<=pc_4;
			pc_next <= {alu_out[31:2],2'b0};
		end
		else begin
			case(reg_sel)
				1'b0: reg_indata <= dmem_out;
				1'b1: reg_indata <= alu_out;
			endcase
			case(branch&alu_zero)
				1'b1: pc_next <= {pc_imm[31:2],2'b0};
				default: pc_next <= pc_4;
				 
			endcase
		end
	end
endmodule
