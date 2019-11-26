module REDUCED_CPU(
    input clk,
    input reset,
    output [31:0] iaddr,  // address to instruction memory
    input [31:0] idata,   // data from instruction memory
    output [31:0] daddr,  // address to data memory
    input [31:0] drdata,  // data read from data memory
    output [31:0] dwdata, // data to be written to data memory
    output [3:0] mem_we,      // write enable signal for each byte of 32-b word
    // Additional outputs for debugging
    output [31:0] x31,		//address for 31st register
    output reg [31:0] pc	//PC value
);
	reg [31:0] pc_next;	 			//The value to be stored by PC in next clock cycle
	wire branch;			 			//Branch enable
	wire alu_zero;			 			//Alu Branch Check
	wire jump;				 			//Jump Enable
	wire [31:0] imm;		 			//Immediate Value
	wire reg_we;			 			//Register Write Enable
	wire [4:0] opcode;	 			//Opcode for ALU
	wire [31:0] alu_out;	 			//ALU Output
	wire [31:0] dmem_out; 			//DMEM Output
	wire [31:0] rv1;		 			//Register Output 1
	wire [31:0] rv2;		 			//Register Output 2
	reg [31:0] reg_indata;			//Register Write Data0
	wire [4:0] rs1;					//Register Read Address 1
	wire [4:0] rs2;					//Register Read Address 1
	wire [4:0] rd;						//Register Write Address
	wire reg_sel;						//Register Input Mux Select
	wire [31:0] x0,x1,x2,x3,x4,x5;//Registers For Debugging
	wire [31:0] i1,i2;				//ALU Input
	
	wire signed[31:0] pc_4 = pc+4;	 //Adress Next To Present Address
	wire signed[31:0] pc_imm = pc+imm;//Address with Offset Added
	
	assign daddr = alu_out;					   //DMEM Read assigned as ALU Out
	assign iaddr = pc;						   //IMEM Address set as PC
	always @(posedge reset or posedge clk) //Reset Function 
		if (reset)
			pc <= 32'h00000000;
		else
			pc <= pc_next;
	
	
	//Control Module Instance
	Control control(.jump(jump),.branch(branch),.mem_we(mem_we),.reg_we(reg_we),.instr(idata),.imm(imm),.reg_sel(reg_sel),.rs1(rs1),.rs2(rs2),.rd(rd));
	
	//Register Module Instance
	Registers registers(.rv1(rv1),.rv2(rv2),.rs1(rs1),.rs2(rs2),.rd(rd),.reset(reset),.clk(clk),.x1(x1),.x0(x0),.x2(x2),.x3(x3),.x4(x4),.x5(x5),.we(reg_we),.indata(reg_indata),.x31(x31));
	
	//ALU Control Module Instance
	ALU_Control alu_control(.imm(imm),.i1(i1),.i2(i2),.opcode(opcode),.rv1(rv1),.rv2(rv2),.instr(idata),.pc(pc));
	
	//ALU Instance
	ALU alu(.i1(i1),.i2(i2),.opcode(opcode),.out(alu_out),.zero(alu_zero));
	
	
	//Parser for DMEM data to be sent into Registers
	DMEM_Parser dmem_parser(.instr(idata),.indata(drdata),.outdata(dmem_out));
	
	//Parser for Register data to be sent into DMEM
	Reg_Parser reg_parser(.instr(idata),.indata(rv2),.outdata(dwdata));
	
	always@(*) begin
		//Check Jump
		if(jump) begin
			reg_indata<=pc_4;
			pc_next <= {alu_out[31:2],2'b0};
		end
		else begin
			//Set register input based on reg_indata
			case(reg_sel)
				1'b0: reg_indata <= dmem_out;
				1'b1: reg_indata <= alu_out;
			endcase
			//Check branch
			case(branch&alu_zero)
				1'b1: pc_next <= {pc_imm[31:2],2'b0};
				default: pc_next <= pc_4;
				 
			endcase
		end
	end
endmodule
