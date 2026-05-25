module test;

	// Inputs
	reg [3:0] W;

	// Outputs
	wire [6:0] seg;

	// Instantiate the Unit Under Test (UUT)
	LED_7 uut (
		.W(W), 
		.seg(seg)
	);

	
		initial begin
		 $monitor("Time=%0t | W=%b | seg=%b", $time, W, seg);

    W = 4'b0000; #10;
    W = 4'b0001; #10;
    W = 4'b0010; #10;
    W = 4'b0011; #10;
    W = 4'b0100; #10;
    W = 4'b0101; #10;
    W = 4'b0110; #10;
    W = 4'b0111; #10;
    W = 4'b1000; #10;
    W = 4'b1001; #10;
    W = 4'b1010; #10;
    W = 4'b1011; #10;
    W = 4'b1100; #10;
    W = 4'b1101; #10;
    W = 4'b1110; #10;
    W = 4'b1111; #10;

	end
      
endmodule

