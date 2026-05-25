module DFF(
    input  wire D,
    input  wire CLK,
    input  wire RESET,
    output reg  Q
);

always @(posedge CLK) begin
    if (RESET)
        Q <= 1'b0;
    else
        Q <= D;
end

endmodule
module SIPO(
    input  wire IN,
    input  wire CLK,
    input  wire RESET,
    output wire [3:0] Q
);

DFF ff1(
    .D(IN),
    .CLK(CLK),
    .RESET(RESET),
    .Q(Q[0])
);

DFF ff2(
    .D(Q[0]),
    .CLK(CLK),
    .RESET(RESET),
    .Q(Q[1])
);

DFF ff3(
    .D(Q[1]),
    .CLK(CLK),
    .RESET(RESET),
    .Q(Q[2])
);

DFF ff4(
    .D(Q[2]),
    .CLK(CLK),
    .RESET(RESET),
    .Q(Q[3])
);

endmodule