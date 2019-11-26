module ALU(
	input [31:0] i1,	//First Input
	input [31:0] i2,	//Second Input
	input [4:0] opcode,//Opcode
	output reg [31:0] out,//Output
	output zero				//ALU Branch Zero
);
	assign zero = out[0];
	always@(*) begin
		case(opcode)
			0:out<=i1+i2;	//Add
			1:out<=i1-i2;	//Subtract
			2:out<=i1<<i2;	//Left Shift
			3:out<=$signed(i1)<$signed(i2); //Signed Less Than
			4:out<=i1<i2;	//Less Than Unsigned
			5:out<=i1^i2;	//XOR
			6:out<=i1>>i2;	//Right Shift
			7:out<=$signed(i1)>>i2;//Signed Rigth Shift
			8:out<=i1&i2;	//AND
			9:out<=i1|i2;	//OR
			10:out<=i1>=i2;//GEU
			11:out<=$signed(i1)>=$signed(i2);//GE
			12:out<=i1==i2;	//EQ
			13:out<=i1!=i2;	//NE
			default:out<=32'b0;
		endcase
	end
	
endmodule
