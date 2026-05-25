`timescale 1ns / 1ps

module tb_ASYNC_COUNTER_3BIT;

reg CLK;
wire [2:0] Q;

ASYNC_COUNTER_3BIT uut (
    .CLK(CLK),
    .Q(Q)
);

always #5 CLK = ~CLK;

initial begin
    CLK = 0;

    #120;

    $stop;
end

endmodule