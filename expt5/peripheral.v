module peripheral(
  //Input
  input clk,			// Clock	 
  input reset,			// Reset
  input ce,				// Chip Enable
  input we,				// Write Enable
  input [1:0] addr,  // Address Reference (For selecting Operation)
  input [31:0] wdata,// Write Data (to be accumulated)
  //Output
  output [31:0] rdata //Read Data (Output)
);

	reg [31:0] accumulator ;
	reg [31:0] counter ;
	
	reg [31:0] rdata_w;
	
	always @(*)
	begin
		if(addr == 2'b10)
		begin
			rdata_w = accumulator;
		end
		else if(addr == 2'b11)
		begin
			rdata_w = counter;
		end
		else
		begin
			rdata_w = 'b0;
		end
	end
	assign rdata = rdata_w;
	
	always @(posedge clk) begin
		if(reset) begin
			accumulator <= 'b0;
			counter <= 'b0;
		end
		else begin
			if(ce && we) begin
				if(addr == 2'b00) begin
					accumulator <= 'b0;
					counter <= 'b0;
				end
				else if(addr == 2'b01) begin
					accumulator <= accumulator + wdata;
					counter <= counter + 'b1;
				end
				else begin
					accumulator <= accumulator;
					counter <= counter;
				end
			end
			else begin
				accumulator <= accumulator;
				counter <= counter;	
			end
		end
	end
		

endmodule
