module test;

	// Inputs
	reg En;
	reg [1:0] W;

	// Outputs
	wire [3:0] Y;

	// Instantiate the Unit Under Test (UUT)
	demux2_4_enable uut (
		.En(En), 
		.W(W), 
		.Y(Y)
	);

	initial begin
		 En = 0;
    W = 2'b00; #10;
    W = 2'b01; #10;
    W = 2'b10; #10;
    W = 2'b11; #10;

    En = 1;
    W = 2'b00; #10;
    W = 2'b01; #10;
    W = 2'b10; #10;
    W = 2'b11; #10;


	end
      
endmodule

