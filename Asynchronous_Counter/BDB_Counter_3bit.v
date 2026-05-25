module TFF(
    input  wire T,
    input  wire CLK,
    output reg  Q,
    output wire Qb
);

assign Qb = ~Q;

initial begin
    Q = 1'b0;
end

always @(posedge CLK) begin
    if (T == 1'b1)
        Q <= ~Q;
    else
        Q <= Q;
end

endmodule


module ASYNC_COUNTER_3BIT(
    input  wire CLK,
    output wire [2:0] Q
);

wire Q0b;
wire Q1b;
wire Q2b;

TFF FF0 (
    .T(1'b1),
    .CLK(CLK),
    .Q(Q[0]),
    .Qb(Q0b)
);

TFF FF1 (
    .T(1'b1),
    .CLK(Q0b),
    .Q(Q[1]),
    .Qb(Q1b)
);

TFF FF2 (
    .T(1'b1),
    .CLK(Q1b),
    .Q(Q[2]),
    .Qb(Q2b)
);

endmodule