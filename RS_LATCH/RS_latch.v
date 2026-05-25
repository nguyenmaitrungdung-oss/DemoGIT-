module RS_latch(
    input  wire S,
    input  wire R,
    input  wire CLK,
    output reg  Q,
    output wire Qb
);

assign Qb = ~Q;

always @(*) begin
    if (CLK == 1'b1) begin
        if (S == 1'b0 && R == 1'b1)
            Q = 1'b0;
        else if (S == 1'b1 && R == 1'b0)
            Q = 1'b1;
        else if (S == 1'b1 && R == 1'b1)
            Q = 1'bx;
        else
            Q = Q;
    end
    else begin
        Q = Q;
    end
end



endmodule
