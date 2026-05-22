`timescale 1ns / 1ps

module sipo_shift_load(
    input  wire       clk,
    input  wire       reset,
    input  wire       shift_load,
    input  wire       serial_in,
    input  wire [3:0] parallel_in,
    output reg  [3:0] q
);

always @(posedge clk or posedge reset) begin
    if (reset) begin
        q <= 4'b0000;
    end
    else begin
        if (shift_load == 1'b1) begin
            q <= parallel_in;
        end
        else begin
            q <= {serial_in, q[3:1]};
        end
    end
end

endmodule