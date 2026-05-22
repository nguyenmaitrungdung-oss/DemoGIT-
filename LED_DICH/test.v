`timescale 1ns / 1ps

module tb_LED_SANG_DICH_TSP;

reg clk;
reg reset;
wire [7:0] LED;

LED_SANG_DICH_TSP uut (
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

    #200;
    $stop;
end

endmodule