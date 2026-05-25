module demux2_4_enable(
   input En,
    input [1:0] W,
    output reg [3:0] Y
);

always @(*) begin
    Y = 4'b0000;

    if (En == 1'b1) begin
        case (W)
            2'b00: Y[0] = 1'b1;
            2'b01: Y[1] = 1'b1;
            2'b10: Y[2] = 1'b1;
            2'b11: Y[3] = 1'b1;
            default: Y = 4'b0000;
        endcase
    end
    else begin
        Y = 4'b0000;
    end
end
endmodule
