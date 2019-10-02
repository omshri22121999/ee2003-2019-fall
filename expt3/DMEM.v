module dmem(
    input clk,
    input [31:0] daddr,
    input [31:0] dwdata,
    input [3:0] we,
    output [31:0] drdata
);
    reg [7:0] m[0:31];
    initial $readmemh("dmem.list",m);

    assign drdata = {m[daddr[31:2]+3],m[daddr[31:2]+2],m[daddr[31:2]+1],m[daddr[31:2]]};

    always @(posedge clk) begin
        if (we[0]==1) 
            m[daddr & 32'hfffc + 0] <= dwdata[7:0];
        if (we[1]==1)
            m[daddr & 32'hfffc + 1] <= dwdata[15:8];
        if (we[2]==1)
            m[daddr & 32'hfffc + 2] <= dwdata[23:16];
        if (we[3]==1)
            m[daddr & 32'hfffc + 3] <= dwdata[31:24];
    end
endmodule