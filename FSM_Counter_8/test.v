module test;

	// Inputs
	reg clk;
	reg reset;
	reg w;

	// Outputs
	wire [2:0] count;

	// Instantiate the Unit Under Test (UUT)
	FSM_Counter_8 uut (
		.clk(clk), 
		.reset(reset), 
		.w(w), 
		.count(count)
	);

	always #5 clk = ~clk;

initial begin
    clk = 0;
    reset = 1;
    w = 0;

    #20;
    reset = 0;

    #20;
    w = 1;
 #100;
    w = 0;

    #40;
    w = 1;

    #80;
    reset = 1;

    #20;
    reset = 0;
    w = 1;

    #80;
	 end
      
endmodule

