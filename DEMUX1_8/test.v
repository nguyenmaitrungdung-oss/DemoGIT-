module test;

	// Inputs
	reg D;
	reg [2:0] S;

	// Outputs
	wire [7:0] Y;

	// Instantiate the Unit Under Test (UUT)
	demux1_8 uut (
		.D(D), 
		.S(S), 
		.Y(Y)
	);

	initial begin
		 D = 1'b1;

    S = 3'b000; #10;
    S = 3'b001; #10;
    S = 3'b010; #10;
    S = 3'b011; #10;
    S = 3'b100; #10;
    S = 3'b101; #10;
    S = 3'b110; #10;
    S = 3'b111; #10;

	end
      
endmodule

