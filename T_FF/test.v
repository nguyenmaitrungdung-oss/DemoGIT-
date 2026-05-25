`timescale 1ns / 1ps

module tb_TFF;

reg T;
reg CLK;
wire Q;
wire Qb;

TFF uut (
    .T(T),
    .CLK(CLK),
    .Q(Q),
    .Qb(Qb)
);

// Tạo clock chu kỳ 10ns
always #5 CLK = ~CLK;

initial begin
    CLK = 0;
    T = 0;

    #10;
    T = 1;     // Q đảo ở mỗi cạnh lên CLK

    #60;
    T = 0;     // Q giữ nguyên

    #30;
    T = 1;     // Q tiếp tục đảo

    #60;
    T = 0;     // Q giữ nguyên

    #20;
   
end

endmodule