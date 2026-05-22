`timescale 1ns / 1ps

module tb_updown_counter_hw1;

reg CK_50M;
reg CLR;
reg S0;
reg S1;
reg U_D;

wire [7:0] q;
wire [3:0] f;

updown_counter_hw1
#(
    .DIV_F(16)
)
uut
(
    .CK_50M(CK_50M),
    .CLR(CLR),
    .S0(S0),
    .S1(S1),
    .U_D(U_D),
    .q(q),
    .f(f)
);

initial begin
    CK_50M = 1'b0;
end

always #10 CK_50M = ~CK_50M;

initial begin
    CLR = 1'b1;
    S0  = 1'b0;
    S1  = 1'b0;
    U_D = 1'b1;

    #50;
    CLR = 1'b0;

    #400;
    S1 = 1'b0;
    S0 = 1'b1;

    #400;
    S1 = 1'b1;
    S0 = 1'b0;

    #400;
    S1 = 1'b1;
    S0 = 1'b1;

    #400;
    U_D = 1'b0;

    #400;
    S1 = 1'b0;
    S0 = 1'b0;

    #400;
    CLR = 1'b1;

    #50;
    CLR = 1'b0;
    U_D = 1'b1;
    S1 = 1'b1;
    S0 = 1'b1;

    #400;
    $stop;
end

initial begin
    $monitor("Time=%0t | CLR=%b | S1S0=%b%b | U_D=%b | q=%d | q_bin=%b | f=%b",
              $time, CLR, S1, S0, U_D, q, q, f);
end

endmodule