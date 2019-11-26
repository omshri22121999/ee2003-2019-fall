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
		daddr,clk,we,indata,outdata,r
    );
	 
	 //------------------------//
	 //	 Input Definition		//
	 //------------------------//
    input [`REG_SIZE-1:0] daddr;	//Address to read/write
    input clk;							//Clock
    input [1:0] we;					//Write Enable signal
	 input [1:0] r;					//Read Type signal
    input [`REG_SIZE-1:0] indata;//Write Data

	 //------------------------//
	 //	Output Definition		//
	 //------------------------//
	 output [`REG_SIZE-1:0] outdata;//Read Data
	 
	 
	 //------------------------//
	 //			Registers		//
	 //------------------------//
    reg [`REG_SIZE-1:0] outdata; //Setting outdata as register
	 reg wea,web,wec,wed;			//Write signal for each part of DMEM
	 
	 
	 //------------------------//
	 //			Wires				//
	 //------------------------//
	 wire [9:0] addra,addrb,addrc,addrd;//Address for each part of DMEM
	 wire [7:0] dina,dinb,dinc,dind;		//Indata for each part of DMEM
	 wire [7:0] douta,doutb,doutc,doutd;//Outdata for each part of DMEM
	 
	 
	 
	 //------------------------//
	 //Instantiating DMEM Parts//
	 //------------------------//
	 
	 //For indata [7:0]
	dmem_core dmem_inst_1 (
	  .clka(clk), // input clka
	  .wea(wea), // input [0 : 0] wea
	  .addra(addra), // input [9 : 0] addra
	  .dina(dina), // input [7 : 0] dina
	  .douta(douta) // output [7 : 0] douta
	);

	 //For indata [15:8]
	dmem_core dmem_inst_2 (
	  .clka(clk), // input clka
	  .wea(web), // input [0 : 0] wea
	  .addra(addrb), // input [11 : 0] addra
	  .dina(dinb), // input [7 : 0] dina
	  .douta(doutb) // output [7 : 0] douta
	);

	 //For indata [23:16]
	dmem_core dmem_inst_3 (
	  .clka(clk), // input clka
	  .wea(wec), // input [0 : 0] wea
	  .addra(addrc), // input [11 : 0] addra
	  .dina(dinc), // input [7 : 0] dina
	  .douta(doutc) // output [7 : 0] douta
	);


	 //For indata [31:24]
	dmem_core dmem_inst_4 (
	  .clka(clk), // input clka
	  .wea(wed), // input [0 : 0] wea
	  .addra(addrd), // input [11 : 0] addra
	  .dina(dind), // input [7 : 0] dina
	  .douta(doutd) // output [7 : 0] douta
	);
	
	
	//Assigning address and indata accordingly
	assign addra = daddr[11:2];
	assign addrb = daddr[11:2];
	assign addrc = daddr[11:2];
	assign addrd = daddr[11:2];
	assign dina = indata[7:0];
	assign dinb = indata[15:8];
	assign dinc = indata[23:16];
	assign dind = indata[31:24];
	
	always@(*)
	begin
		//Checking how to write
		case(we)
				// No write
				0:	begin
						wea<=0;
						web<=0;
						wec<=0;
						wed<=0;
					end
				//Write Byte
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
				//Write half word
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
				//Write full word
				3:	begin
						wea<=1;
						web<=1;
						wec<=1;
						wed<=1;
					end
		endcase
		//Checking for read
		case(r)
			//No read
			0: outdata <= {32'b0};
			//Read one byte
			1: 
				case(daddr[1:0])
					0: outdata <= {24'b0,douta};
					1: outdata <= {24'b0,doutb};
					2: outdata <= {24'b0,doutc};
					3: outdata <= {24'b0,doutd};
				endcase
			//Read half word
			2:
				case(daddr[1:0])
					0: outdata <= {16'b0,doutb,douta};
					2: outdata <= {16'b0,doutd,doutc};
				endcase
			//Read full word
			3: outdata <= {doutd,doutc,doutb,douta};
		endcase
	end
endmodule