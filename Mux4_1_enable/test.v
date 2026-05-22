`timescale 1ns / 1ps

module mux4_1_enable_tb;

    reg en;
    reg [1:0] sel;
    reg a;
    reg b;
    reg c;
    reg d;
    wire y;

    mux4_1_enable uut (
        .en(en),
        .sel(sel),
        .a(a),
        .b(b),
        .c(c),
        .d(d),
        .y(y)
    );

    initial begin
        $display("time\ten\tsel\ta b c d\ty");
        $monitor("%0dns\t%b\t%b\t%b %b %b %b\t%b", $time, en, sel, a, b, c, d, y);

        en = 1'b0;
        sel = 2'b00;
        a = 1'b0;
        b = 1'b0;
        c = 1'b0;
        d = 1'b0;
        #10;

        en = 1'b1;
        a = 1'b1;
        b = 1'b0;
        c = 1'b0;
        d = 1'b0;
        sel = 2'b00;
        #10;

        sel = 2'b01;
        b = 1'b1;
        #10;

        sel = 2'b10;
        c = 1'b1;
        #10;

        sel = 2'b11;
        d = 1'b1;
        #10;

        en = 1'b0;
        a = 1'b0;
        b = 1'b0;
        c = 1'b0;
        d = 1'b0;
        #10;

        en = 1'b1;
        sel = 2'b10;
        a = 1'b0;
        b = 1'b1;
        c = 1'b0;
        d = 1'b0;
        #10;

        $finish;
    end

endmodule
