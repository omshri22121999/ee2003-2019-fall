module cpu_tb();
    reg clk, reset;
    wire [31:0] idata;
    wire [31:0] drdata, dwdata;
    wire [31:0] x31, pc;
	 wire [31:0] pc_next;	
	 wire branch,alu_zero,jump;
	 wire [3:0] mem_we;
	 wire [31:0] imm;
	 wire [31:0] daddr;
	 wire reg_we;
	 wire [31:0] i1,i2;
	 wire [31:0] x0,x1,x2,x3,x4,x5;
	 wire [4:0] opcode;
	 wire [31:0] alu_out;
	 wire [31:0] dmem_out;
	 wire [31:0] rv1,rv2,reg_indata;
	 wire [4:0] rs1,rs2,rd;
	 wire reg_sel;
    CPU dut(
			.clk(clk),
			.reset(reset),
			.idata(idata),
			.drdata(drdata),
			.pc(pc),
			.daddr(daddr),
			.dwdata(dwdata),
			.x31(x31),
			.pc_next(pc_next),
			.branch(branch),
			.alu_zero(alu_zero),
			.jump(jump),
			.mem_we(mem_we),
			.imm(imm)
			,.x1(x1),.x2(x2),.x3(x3),.x4(x4),.x5(x5),
			.x0(x0),
			.reg_we(reg_we),
			.i1(i1),
			.i2(i2),
			.opcode(opcode),
			.alu_out(alu_out),
			.dmem_out(dmem_out),
			.rv1(rv1),
			.rv2(rv2),
			.reg_indata(reg_indata),
			.rs1(rs1),
			.rs2(rs2),
			.rd(rd),
			.reg_sel(reg_sel)
	);
	IMEM imem(.idata(idata),.iaddr(pc));
	
	DMEM dmem(.clk(clk),.daddr(daddr),.dwdata(dwdata),.we(mem_we),.drdata(drdata));
    always #5 clk = ~clk;
    initial begin
        clk = 0;
        reset = 1;
        #100
        reset = 0;
    end

endmodule
