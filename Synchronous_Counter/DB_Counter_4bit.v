module TFF (
    input CLK,
    input CLR,
    input T,
    output reg Q
);

always @(posedge CLK or negedge CLR) begin
    if (CLR == 1'b0)
        Q <= 1'b0;
    else if (T == 1'b1)
        Q <= ~Q;
    else
        Q <= Q;
end

endmodule

module counter_4bit_TFF (
    input CLK,
    input CLR,
    output [3:0] Q
);

wire T0;
wire T1;
wire T2;
wire T3;

assign T0 = 1'b1;
assign T1 = Q[0];
assign T2 = Q[0] & Q[1];
assign T3 = Q[0] & Q[1] & Q[2];

TFF FF0 (
    .CLK(CLK),
    .CLR(CLR),
    .T(T0),
    .Q(Q[0])
);

TFF FF1 (
    .CLK(CLK),
    .CLR(CLR),
    .T(T1),
    .Q(Q[1])
);

TFF FF2 (
    .CLK(CLK),
    .CLR(CLR),
    .T(T2),
    .Q(Q[2])
);

TFF FF3 (
    .CLK(CLK),
    .CLR(CLR),
    .T(T3),
    .Q(Q[3])
);

endmodule



