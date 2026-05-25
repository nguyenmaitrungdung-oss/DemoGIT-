module test;

	// Inputs
	reg S;
	reg R;
	reg CLK;

	// Outputs
	wire Q;
	wire Qb;

	// Instantiate the Unit Under Test (UUT)
	RS_latch uut (
		.S(S), 
		.R(R), 
		.CLK(CLK), 
		.Q(Q), 
		.Qb(Qb)
	);

	initial begin
	S = 0;
    R = 0;
    CLK = 0;

    #10;
    CLK = 1; S = 1; R = 0;   // Set Q = 1

    #10;
    S = 0; R = 0;            // Giữ Q

    #10;
    S = 0; R = 1;            // Reset Q = 0

    #10;
    CLK = 0; S = 1; R = 0;   // CLK = 0 nên giữ nguyên

    #10;
    CLK = 1; S = 1; R = 1;   // Trạng thái cấm

    #10;
   

	end
      
endmodule

