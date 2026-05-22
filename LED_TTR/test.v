`timescale 1ns / 1ps

module tb_LED_SANG_DICH_TTR;

reg clk;
reg reset;
wire [7:0] LED;

LED_SANG_DICH_TTR uut (
    .clk(clk),
    .reset(reset),
    .LED(LED)
);

// Tạo clock chu kỳ 10ns
always #5 clk = ~clk;

initial begin
    clk = 0;
    reset = 1;

    #20;
    reset = 0;

    #150;
    $stop;
end

endmodule