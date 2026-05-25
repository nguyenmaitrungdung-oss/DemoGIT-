module TFF(
    input  wire T,
    input  wire CLK,
    output reg  Q,
    output wire Qb
);

assign Qb = ~Q;

// Gán ban đầu để mô phỏng ISim không bị x
initial begin
    Q = 1'b0;
end

always @(posedge CLK) begin
    if (T == 1'b0)
        Q <= Q;
    else
        Q <= ~Q;
end

endmodule