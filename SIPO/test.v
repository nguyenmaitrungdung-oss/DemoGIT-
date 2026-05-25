module test;

	// Inputs
	reg IN;
	reg CLK;
	reg RESET;

	// Outputs
	wire [3:0] Q;

	// Instantiate the Unit Under Test (UUT)
	SIPO uut (
		.IN(IN), 
		.CLK(CLK), 
		.RESET(RESET), 
		.Q(Q)
	);

	always #5 CLK = ~CLK;

initial begin
    CLK = 0;
    IN = 0;
    RESET = 1;

    #10 RESET = 0;

    #10 IN = 1;
    #10 IN = 0;
    #10 IN = 1;
    #10 IN = 1;
    #10 IN = 0;

    #60;
        

	end
      
endmodule

