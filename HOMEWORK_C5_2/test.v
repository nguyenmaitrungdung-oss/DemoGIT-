`timescale 1ns / 1ps

module tb_LED_RIGHT_TO_LEFT;

reg clk;
reg reset;
reg [1:0] sw;
wire [7:0] LED;

LED_RIGHT_TO_LEFT #(
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

    #1500;
    sw = 2'b01;

    #1500;
    sw = 2'b10;

    #1500;
    sw = 2'b11;

    #1500;
    $stop;
end

endmodule