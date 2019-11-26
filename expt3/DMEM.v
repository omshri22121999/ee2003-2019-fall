module DMEM(
    input clk,				//Clock
    input [31:0] daddr,	//Address
    input [31:0] dwdata,//Write Data
    input [3:0] we,		//Write 
    output [31:0] drdata//Read Data
	 );
    reg [7:0] m[0:127];
    initial $readmemh("dmem_ini.mem",m);

    wire [31:0] add0,add1,add2,add3;
	 //Assign Address according to input address
	 assign add0 = (daddr & 32'hfffffffc) + 32'h00000000;
	 assign add1 = (daddr & 32'hfffffffc) + 32'h00000001;
	 assign add2 = (daddr & 32'hfffffffc) + 32'h00000002;
	 assign add3 = (daddr & 32'hfffffffc) + 32'h00000003;
	 
	 //Assign Read Data
	 assign drdata = {m[add0],m[add1],m[add2],m[add3]};
	 
	 
	 //Assign Write Data
    always @(posedge clk) begin
        if (we[0]==1)
            m[add0]= dwdata[7:0];
        if (we[1]==1)
            m[add1]= dwdata[15:8];
        if (we[2]==1)
            m[add2]= dwdata[23:16];
        if (we[3]==1)
            m[add3]= dwdata[31:24];
    end
	 
endmodule
