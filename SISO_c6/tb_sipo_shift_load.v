`timescale 1ns / 1ps

module tb_sipo_shift_load;

reg clk;
reg reset;
reg shift_load;
reg serial_in;
reg [3:0] parallel_in;

wire [3:0] q;

sipo_shift_load uut(
    .clk(clk),
    .reset(reset),
    .shift_load(shift_load),
    .serial_in(serial_in),
    .parallel_in(parallel_in),
    .q(q)
);

initial begin
    clk = 1'b0;
end

always #5 clk = ~clk;

initial begin
    reset      = 1'b1;
    shift_load = 1'b0;
    serial_in  = 1'b0;
    parallel_in = 4'b0000;

    #20;
    reset = 1'b0;

    #10;
    shift_load = 1'b1;
    parallel_in = 4'b1010;

    #10;
    shift_load = 1'b0;

    serial_in = 1'b1;
    #10;

    serial_in = 1'b0;
    #10;

    serial_in = 1'b1;
    #10;

    serial_in = 1'b1;
    #10;

    serial_in = 1'b0;
    #10;

    shift_load = 1'b1;
    parallel_in = 4'b0110;
    #10;

    shift_load = 1'b0;

    serial_in = 1'b1;
    #10;

    serial_in = 1'b0;
    #10;

    serial_in = 1'b0;
    #10;

    serial_in = 1'b1;
    #10;

    #20;
    $stop;
end

initial begin
    $monitor("Time=%0t | reset=%b | shift_load=%b | serial_in=%b | parallel_in=%b | q=%b",
              $time, reset, shift_load, serial_in, parallel_in, q);
end

endmodule`timescale 1ns / 1ps

module tb_sipo_shift_load;

reg clk;
reg reset;
reg shift_load;
reg serial_in;
reg [3:0] parallel_in;

wire [3:0] q;

sipo_shift_load uut(
    .clk(clk),
    .reset(reset),
    .shift_load(shift_load),
    .serial_in(serial_in),
    .parallel_in(parallel_in),
    .q(q)
);

initial begin
    clk = 1'b0;
end

always #5 clk = ~clk;

initial begin
    reset      = 1'b1;
    shift_load = 1'b0;
    serial_in  = 1'b0;
    parallel_in = 4'b0000;

    #20;
    reset = 1'b0;

    #10;
    shift_load = 1'b1;
    parallel_in = 4'b1010;

    #10;
    shift_load = 1'b0;

    serial_in = 1'b1;
    #10;

    serial_in = 1'b0;
    #10;

    serial_in = 1'b1;
    #10;

    serial_in = 1'b1;
    #10;

    serial_in = 1'b0;
    #10;

    shift_load = 1'b1;
    parallel_in = 4'b0110;
    #10;

    shift_load = 1'b0;

    serial_in = 1'b1;
    #10;

    serial_in = 1'b0;
    #10;

    serial_in = 1'b0;
    #10;

    serial_in = 1'b1;
    #10;

    #20;
    $stop;
end

initial begin
    $monitor("Time=%0t | reset=%b | shift_load=%b | serial_in=%b | parallel_in=%b | q=%b",
              $time, reset, shift_load, serial_in, parallel_in, q);
end

endmodule