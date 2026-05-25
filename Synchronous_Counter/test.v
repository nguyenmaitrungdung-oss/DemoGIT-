module test;

	// Inputs
	reg CLK;
	reg CLR;

	// Outputs
	wire [3:0] Q;

	// Instantiate the Unit Under Test (UUT)
	counter_4bit_TFF uut (
		.CLK(CLK), 
		.CLR(CLR), 
		.Q(Q)
	);

	initial begin
	CLK = 1'b0;
    forever #5 CLK = ~CLK;
end

initial begin
    CLR = 1'b0;
    #12;
    CLR = 1'b1;
    #200;
    
end

	    
endmodule

