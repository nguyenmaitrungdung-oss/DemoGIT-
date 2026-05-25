module mux4_1tb;

	// Inputs
	reg [3:0] in;
	reg [1:0] Sel;

	// Outputs
	wire f;

	// Instantiate the Unit Under Test (UUT)
	Mux4_1 uut (
		.in(in), 
		.Sel(Sel), 
		.f(f)
	);

	initial begin
		in = 4'b1010;

    Sel = 2'b00; #10;
    Sel = 2'b01; #10;
    Sel = 2'b10; #10;
    Sel = 2'b11; #10;

	end
      
endmodule

