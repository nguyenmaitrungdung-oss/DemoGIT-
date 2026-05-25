`timescale 1ns / 1ps

module tb_LED_2SIDE_TO_CENTER;

reg clk;
reg reset;
reg [1:0] sw;
wire [7:0] LED;

LED_2SIDE_TO_CENTER #(
    .DIV_00(4),
    .DIV_01(6),
    .DIV_10(8),
    .DIV_11(10)
) uut (
    .clk(clk),
    .reset(reset),
    .sw(sw),
    .LED(LED)
);

always #10 clk = ~clk;

initial begin
    clk = 0;
    reset = 1;
    sw = 2'b00;

    #50;
    reset = 0;

    #1000;
    sw = 2'b01;

    #1000;
    sw = 2'b10;

    #1000;
    sw = 2'b11;

    #1000;
    $stop;
end

endmodule