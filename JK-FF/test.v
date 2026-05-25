module test;

	// Inputs
	reg clk;
	reg pre;
	reg clr;
	reg j;
	reg k;

	// Outputs
	wire q;
	wire qd;

	// Instantiate the Unit Under Test (UUT)
	JK_FF uut (
		.clk(clk), 
		.pre(pre), 
		.clr(clr), 
		.j(j), 
		.k(k), 
		.q(q), 
		.qd(qd)
	);

	initial begin
		clk = 0;
    forever #5 clk = ~clk;
end

initial begin
    pre = 1;
    clr = 1;
    j = 0;
    k = 0;

    #10;
    pre = 0; clr = 1;
    #10;

    pre = 1; clr = 0;
    #10;

    pre = 0; clr = 0;
    #10;

    pre = 1; clr = 1;

    j = 0; k = 0;
    #20;

    j = 0; k = 1;
    #20;

    j = 1; k = 0;
    #20;

    j = 1; k = 1;
    #40;

  
end

      
endmodule

