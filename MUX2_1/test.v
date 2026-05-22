`timescale 1ns/1ps

module tb_mux2_1;
    reg I0;
    reg I1;
    reg sel;
    wire out;

    mux2_1 uut (
        .I0(I0),
        .I1(I1),
        .sel(sel),
        .out(out)
    );

    initial begin
        $display("time\tI0 I1 sel | out");
        $display("------------------------");

        // Test all combinations
        I0 = 0; I1 = 0; sel = 0; #10; $display("%0dns\t%b  %b  %b   |  %b", $time, I0, I1, sel, out);
        I0 = 0; I1 = 0; sel = 1; #10; $display("%0dns\t%b  %b  %b   |  %b", $time, I0, I1, sel, out);
        I0 = 0; I1 = 1; sel = 0; #10; $display("%0dns\t%b  %b  %b   |  %b", $time, I0, I1, sel, out);
        I0 = 0; I1 = 1; sel = 1; #10; $display("%0dns\t%b  %b  %b   |  %b", $time, I0, I1, sel, out);
        I0 = 1; I1 = 0; sel = 0; #10; $display("%0dns\t%b  %b  %b   |  %b", $time, I0, I1, sel, out);
        I0 = 1; I1 = 0; sel = 1; #10; $display("%0dns\t%b  %b  %b   |  %b", $time, I0, I1, sel, out);
        I0 = 1; I1 = 1; sel = 0; #10; $display("%0dns\t%b  %b  %b   |  %b", $time, I0, I1, sel, out);
        I0 = 1; I1 = 1; sel = 1; #10; $display("%0dns\t%b  %b  %b   |  %b", $time, I0, I1, sel, out);

        #10;
        $display("Test completed.");
        $finish;
    end
endmodule

