module cpu_tb();
    reg clk, reset;
    wire [31:0] iaddr, idata;
    wire [31:0] daddr, drdata, dwdata;
    wire [3:0] we;
    wire [31:0] x31, pc;

    CPU dut (
        .clk(clk),
        .reset(reset),
        .iaddr(iaddr),
        .idata(idata),
        .daddr(daddr),
        .drdata(drdata),
        .dwdata(dwdata),
        .we(we),
        .x31(x31),
        .pc(pc)
    );

    always #5 clk = !clk;
    initial begin
        clk = 0;
        reset = 1;
        #100
        reset = 0;
    end

endmodule

module imem(
    input [31:0] iaddr,
    output [31:0] idata
)
    reg [31:0] m[0:31];
    initial $readmemh(m, "imem.hex");

    assign idata = m[iaddr];
endmodule

module dmem(
    input clk,
    input [31:0] daddr,
    input [31:0] dwdata,
    input [3:0] we,
    output [31:0] drdata
)
    reg [31:0] m[0:31];
    initial $readmemh(m, "dmem.hex");

    assign drdata = m[daddr];

    always @(posedge clk) begin
        if we[0]==1
            m[daddr & 0xffffff00 + 0] = dwdata[7:0];
        if we[1]==1
            m[daddr & 0xffffff00 + 1] = dwdata[15:8];
        if we[2]==1
            m[daddr & 0xffffff00 + 2] = dwdata[23:16];
        if we[3]==1
            m[daddr & 0xffffff00 + 3] = dwdata[31:24];
    end
endmodule