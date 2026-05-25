module Mux4_1(
   input [3:0] in,
    input [1:0] Sel,
    output reg f
);

always @(*) begin
    case (Sel)
        2'b00: f = in[0];
        2'b01: f = in[1];
        2'b10: f = in[2];
        2'b11: f = in[3];
        default: f = 1'b0;
    endcase
end


endmodule
