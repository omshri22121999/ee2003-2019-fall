`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: IIT Madras
// Engineer: Om Shri Prasath
// 
// Create Date:    19:58:39 08/20/2019 
// Design Name: 	Memory
// Module Name:    regfile 
// Project Name: exp3
// Target Devices: SPARTAN - 3E  XC3S500E
//
//////////////////////////////////////////////////////////////////////////////////
`include "params.v"

module dmem(
		daddr,clk,we,indata,outdata
    );
	 
    input [`REG_SIZE-1:0] daddr;
    input clk;
    input [1:0] we;
    input [`REG_SIZE-1:0] indata;
    output [`REG_SIZE-1:0] outdata;
	 
	 
    reg [`REG_SIZE-1:0] outdata;
//	 wire wea,web,wec,wed;
//	 wire [9:0] addra,addrb,addrc,addrd;
//	 wire [7:0] dina,dinb,dinc,dind,douta,doutb,doutc,doutd;
	 
	 reg wea,web,wec,wed;
	 reg [9:0] addra,addrb,addrc,addrd;
	 reg [7:0] dina,dinb,dinc,dind;
	 wire [7:0] douta,doutb,doutc,doutd;
	 
	dmem_core dmem_inst_1 (
	  .clka(clk), // input clka
	  .wea(wea), // input [0 : 0] wea
	  .addra(addra), // input [9 : 0] addra
	  .dina(dina), // input [7 : 0] dina
	  .douta(douta) // output [7 : 0] douta
	);

	dmem_core dmem_inst_2 (
	  .clka(clk), // input clka
	  .wea(web), // input [0 : 0] wea
	  .addra(addrb), // input [11 : 0] addra
	  .dina(dinb), // input [7 : 0] dina
	  .douta(doutb) // output [7 : 0] douta
	);

	dmem_core dmem_inst_3 (
	  .clka(clk), // input clka
	  .wea(wec), // input [0 : 0] wea
	  .addra(addrc), // input [11 : 0] addra
	  .dina(dinc), // input [7 : 0] dina
	  .douta(doutc) // output [7 : 0] douta
	);

	dmem_core dmem_inst_4 (
	  .clka(clk), // input clka
	  .wea(wed), // input [0 : 0] wea
	  .addra(addrd), // input [11 : 0] addra
	  .dina(dind), // input [7 : 0] dina
	  .douta(doutd) // output [7 : 0] douta
	);
	
	
	always@(posedge(clk))
	begin
	
		addra = daddr[11:2];
		addrb = daddr[11:2];
		addrc = daddr[11:2];
		addrd = daddr[11:2];
		dina = indata[7:0];
		dinb = indata[15:8];
		dinc = indata[23:16];
		dind = indata[31:24];
		case(we)
				0:	begin
						wea<=0;
						web<=0;
						wec<=0;
						wed<=0;
					end
				1: begin
						case(daddr[1:0])
							0:begin
									wea<=1;
									web<=0;
									wec<=0;
									wed<=0;
								end
							1:begin
									wea<=0;
									web<=1;
									wec<=0;
									wed<=0;
								end
							2:begin
									wea<=0;
									web<=0;
									wec<=1;
									wed<=0;
								end
							3:begin
									wea<=0;
									web<=0;
									wec<=0;
									wed<=1;
								end
						endcase
					end
				2:	begin
						case (daddr[1:0])
							0:	begin
									wea<=1;
									web<=1;
									wec<=0;
									wed<=0;
								end
							2:	begin
									wea<=0;
									web<=0;
									wec<=1;
									wed<=1;
								end
							default:
								begin
									wea<=0;
									web<=0;
									wec<=0;
									wed<=0;
								end
						endcase
					end
				3:	begin
						wea<=1;
						web<=1;
						wec<=1;
						wed<=1;
					end
		endcase
		outdata = {doutd,doutc,doutb,douta};
	end
endmodule
