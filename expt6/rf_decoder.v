`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:36:28 11/09/2019 
// Design Name: 
// Module Name:    rf_decoder 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module rf_decoder(
	//Input
	input [31:0] dmem_in_i,
	input [5:0] instr_opcode_i,
	input [31:0] daddr_i,
	input [31:0] alu_out_i,
	//Output
	output reg [31:0] rf_write_o,
	output reg rf_we_o
);

	//------------------------------------------------------------//
	//    Assigning output based on instuction and write address  //
	//------------------------------------------------------------//
	
	always@(*) begin
		case(instr_opcode_i[5])
			//ALU Operations
			1'b0:
				begin
					rf_write_o<=alu_out_i;
					rf_we_o <= 1;
				end
			//Other Operations
			1'b1:
				begin
					case(instr_opcode_i[4:3])
						//Branch and Store
						2'b10,2'b01:
							begin
								rf_write_o<=32'b0;
								rf_we_o <= 0;
							end
						//Jump, AUPIC, LUI
						2'b11:
							begin
								rf_write_o<=alu_out_i;
								rf_we_o <= 1;	
							end
						//Load
						2'b00:
							begin 
								case(instr_opcode_i[2:0])
									3'b000:
										//Load Byte
										begin
											case(daddr_i[1:0])
												//LB xd,x1(0)
												2'b00: 
													begin
														rf_write_o<={{24{dmem_in_i[7]}},dmem_in_i[7:0]};
														rf_we_o <= 1;
													end
												//LB xd,x1(1)
												2'b01: 
													begin										
														rf_write_o<={{24{dmem_in_i[15]}},dmem_in_i[15:8]};
														rf_we_o <= 1;
													end
												//LB xd,x1(2)
												2'b10: 
													begin											
														rf_write_o<={{24{dmem_in_i[23]}},dmem_in_i[23:16]};
														rf_we_o <= 1;
													end
												//LB xd,x1(3)
												2'b11: 
													begin						
														rf_write_o<={{24{dmem_in_i[31]}},dmem_in_i[31:24]};
														rf_we_o <= 1;
													end
											endcase
										end
									3'b001:
										//Load Half Word
										begin
											case(daddr_i[1:0])
												//LH xd,x1(0)
												2'b00:
													begin
														rf_write_o<={{16{dmem_in_i[15]}},dmem_in_i[15:0]};
														rf_we_o <= 1;
													end
												//LH xd,x1(2)
												2'b10:
													begin
														rf_write_o<={{16{dmem_in_i[31]}},dmem_in_i[31:16]};
														rf_we_o <= 1;
													end
												//LH xd,x1(1,3) - Invalid Cases
												default:
													begin
														rf_write_o<=32'b0;
														rf_we_o <= 1;
													end
											endcase
										end
									3'b010:
										//Load Word
										begin
											rf_write_o<=dmem_in_i;
											rf_we_o <= 1;	
										end
									3'b100:
										//Load Byte Unsigned
										begin
											case(daddr_i[1:0])
												//LBU xd,x1(0)
												2'b00: 
													begin
														rf_write_o<={24'b0,dmem_in_i[7:0]};
														rf_we_o <= 1;
													end
												//LBU xd,x1(1)
												2'b01: 
													begin										
														rf_write_o<={24'b0,dmem_in_i[15:8]};
														rf_we_o <= 1;
													end
												//LBU xd,x1(2)
												2'b10: 
													begin											
														rf_write_o<={24'b0,dmem_in_i[23:16]};
														rf_we_o <= 1;
													end
												//LBU xd,x1(3)
												2'b11: 
													begin						
														rf_write_o<={24'b0,dmem_in_i[31:24]};
														rf_we_o <= 1;
													end
											endcase
										end
									3'b101:
										//Load Half Word Unsigned
										begin
											case(daddr_i[1:0])
												//LHU xd,x1(0)
												2'b00:
													begin
														rf_write_o<={16'b0,dmem_in_i[15:0]};
														rf_we_o <= 1;
													end
												//LHU xd,x1(2)
												2'b10:
													begin
														rf_write_o<={16'b0,dmem_in_i[31:16]};
														rf_we_o <= 1;
													end
												//LHU xd,x1(1,3) - Invalid Cases
												default:
													begin
														rf_write_o<=32'b0;
														rf_we_o <= 1;
													end
											endcase
										end
									endcase
							end
					endcase
				end
		endcase
	end

endmodule 
