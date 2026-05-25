module test;

	// Inputs
	reg [3:0] W;

	// Outputs
	wire [1:0] Y;

	// Instantiate the Unit Under Test (UUT)
	encoder4_2 uut (
		.W(W), 
		.Y(Y)
	);

	initial begin
	W = 4'b0001; #100;
    W = 4'b0010; #100;
    W = 4'b0100; #100;
    W = 4'b1000; #100;

	end
      
endmodule

