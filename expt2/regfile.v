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

module regfile(rs1,rs2,rd,we,clk,indata,rv1,rv2);
	 
	 
	 //------------------------//
	 //			Input				//
	 //------------------------//
    input [`REG_ADDR_SIZE-1:0] rs1;	//Address fir first register output
    input [`REG_ADDR_SIZE-1:0] rs2;	//Address fir first register output
    input [`REG_ADDR_SIZE-1:0] rd;
    input we;
    input clk;
	 
	 //------------------------//
	 //			Output			//
	 //------------------------//
    input [`REG_SIZE-1:0] indata;
    output [`REG_SIZE-1:0] rv1;
    output [`REG_SIZE-1:0] rv2;
	 
	 
	 
	 //------------------------//
	 //			Register			//
	 //------------------------//
	 reg [`REG_SIZE-1:0] regfile [0:`REG_SIZE-1];

		
		
	always@(posedge(clk))
		begin
			// Check write enable
			if(we==1) begin
				regfile[rd] <= indata;
			end
		end
		
	//Assign output based on given register address
	assign rv1 = regfile[rs1];
	assign rv2 = regfile[rs2];
endmodule