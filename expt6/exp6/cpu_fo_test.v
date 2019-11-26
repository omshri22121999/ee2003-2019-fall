`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:17:37 11/23/2019
// Design Name:   CPU_fo
// Module Name:   /home/omshripc/Sem 5/EE2003/ISE/expt6/exp6/cpu_fo_test.v
// Project Name:  exp6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CPU_fo
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cpu_fo_test;

	// Inputs
	reg clk_i;
	reg reset_i;

	// Outputs
	wire [31:0] x31;
	wire [31:0] x3;
	wire [31:0] x4;
	wire [31:0] x10;
	wire [31:0] pc_new_ex_w;
	wire if_branch_ex_w;
	wire main_stall_ex_w;
	wire [31:0] instr_if_w;
	wire [31:0] pc_if_w;
	wire [31:0] error_w_out;
	wire stall_load_if_w;
	wire [4:0] rs1_id_w;
	wire [4:0] rs2_id_w;
	wire [4:0] rd_id_w;
	wire [3:0] alu_op_id_w;
	wire [31:0] reg_write_o;
	wire [31:0] imm_id_w;
	wire [5:0] main_opcode_id_w;
	wire [31:0] pc_id_w;
	wire [3:0] reg_forwarding_type_id_w;
	wire stall_load_id_w;
	wire [31:0] alu_out_ex_w;
	wire [4:0] rd_ex_w;
	wire [5:0] main_opcode_ex_w;
	wire [31:0] dmem_out_mem_w;
	wire [5:0] opcode_mem_w;
	wire [31:0] alu_out_mem_w;
	wire stall_mem_w;
	wire [4:0] rd_wb_w;
	wire [31:0] indata_wb_w;
	wire [31:0] wdata_ex_w;
	wire we_wb_w;
	wire [4:0] rd_mem_w;
	wire valid_stall_mem_w;
	wire [31:0] dmem_out_wb_w;
	wire [31:0] dmem_read_mem_w;
	wire [31:0] peripheral_read_mem_w;
	
	wire [31:0] mul_read_mem_w;
	wire [31:0] mul_in_ex_w;

	// Instantiate the Unit Under Test (UUT)
	CPU_fo uut (
		.clk_i(clk_i), 
		.reset_i(reset_i), 
		.mul_read_mem_w(mul_read_mem_w),
		.mul_in_ex_w(mul_in_ex_w),
		.x31(x31), 
		.x3(x3), 
		.x4(x4), 
		.x10(x10), 
		.pc_new_ex_w(pc_new_ex_w), 
		.if_branch_ex_w(if_branch_ex_w), 
		.main_stall_ex_w(main_stall_ex_w), 
		.instr_if_w(instr_if_w), 
		.pc_if_w(pc_if_w), 
		.stall_load_if_w(stall_load_if_w), 
		.rs1_id_w(rs1_id_w), 
		.rs2_id_w(rs2_id_w), 
		.rd_id_w(rd_id_w), 
		.alu_op_id_w(alu_op_id_w), 
		.reg_write_o(reg_write_o),
		.imm_id_w(imm_id_w), 
		.error_w_out(error_w_out),
		.main_opcode_id_w(main_opcode_id_w), 
		.pc_id_w(pc_id_w), 
		.reg_forwarding_type_id_w(reg_forwarding_type_id_w), 
		.stall_load_id_w(stall_load_id_w), 
		.alu_out_ex_w(alu_out_ex_w), 
		.rd_ex_w(rd_ex_w), 
		.main_opcode_ex_w(main_opcode_ex_w), 
		.dmem_out_mem_w(dmem_out_mem_w), 
		.opcode_mem_w(opcode_mem_w), 
		.alu_out_mem_w(alu_out_mem_w), 
		.stall_mem_w(stall_mem_w), 
		.rd_wb_w(rd_wb_w), 
		.indata_wb_w(indata_wb_w), 
		.wdata_ex_w(wdata_ex_w), 
		.we_wb_w(we_wb_w), 
		.rd_mem_w(rd_mem_w), 
		.valid_stall_mem_w(valid_stall_mem_w), 
		.dmem_out_wb_w(dmem_out_wb_w), 
		.dmem_read_mem_w(dmem_read_mem_w), 
		.peripheral_read_mem_w(peripheral_read_mem_w)
	);

	always #5 clk_i = ~clk_i;
    initial begin
        clk_i = 0;
        reset_i = 1;
        #100
        reset_i = 0;
    end
      
endmodule

