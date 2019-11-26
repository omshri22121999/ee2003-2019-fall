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

module imem(
    iaddr,
    idata,
	 clk
	);
	
	 //------------------------//
	 //			Input				//
	 //------------------------//
	input [`REG_SIZE-1:0] iaddr; 	//Address
	input clk;							//Clock
	
	 //------------------------//
	 //			Output			//
	 //------------------------//
	output [`REG_SIZE-1:0] idata;	//Data In
		
	
	 //------------------------//
	 //			IMEM Part		//
	 //------------------------//
	imem_core imem_inst (
	  .clka(clk), // input clka
	  .wea(1'b0), // input [0 : 0] wea
	  .addra(iaddr[9:0]), // input [9 : 0] addra
	  .dina(1'b0), // input [31 : 0] dina
	  .douta(idata) // output [31 : 0] douta
	);
endmodule