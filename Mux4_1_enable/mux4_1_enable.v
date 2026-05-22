module mux4_1_enable(
    input wire en,
    input wire [1:0] sel,
    input wire a,
    input wire b,
    input wire c,
    input wire d,
    output reg y
);

always @(*) begin
    if (!en)
        y = 1'b0;
    else begin
        case (sel)
            2'b00: y = a;
            2'b01: y = b;
            2'b10: y = c;
            2'b11: y = d;
            default: y = 1'b0;
        endcase
    end
end

endmodule
