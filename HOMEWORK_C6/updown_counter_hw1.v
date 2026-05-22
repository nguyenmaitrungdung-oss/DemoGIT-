`timescale 1ns / 1ps

module updown_counter_hw1
#(
    parameter integer DIV_F = 16
)
(
    input  wire CK_50M,
    input  wire CLR,
    input  wire S0,
    input  wire S1,
    input  wire U_D,
    output reg  [7:0] q,
    output reg  [3:0] f
);

reg [31:0] cnt_f;
reg [31:0] cnt_2f;
reg [31:0] cnt_4f;
reg [31:0] cnt_8f;

reg tick_f;
reg tick_2f;
reg tick_4f;
reg tick_8f;

reg tick_select;

wire [31:0] DIV_2F;
wire [31:0] DIV_4F;
wire [31:0] DIV_8F;

assign DIV_2F = DIV_F / 2;
assign DIV_4F = DIV_F / 4;
assign DIV_8F = DIV_F / 8;

always @(posedge CK_50M or posedge CLR) begin
    if (CLR) begin
        cnt_f   <= 32'd0;
        cnt_2f  <= 32'd0;
        cnt_4f  <= 32'd0;
        cnt_8f  <= 32'd0;

        tick_f  <= 1'b0;
        tick_2f <= 1'b0;
        tick_4f <= 1'b0;
        tick_8f <= 1'b0;

        f <= 4'b0000;
    end
    else begin
        if (cnt_f == DIV_F - 1) begin
            cnt_f  <= 32'd0;
            tick_f <= 1'b1;
            f[0]   <= ~f[0];
        end
        else begin
            cnt_f  <= cnt_f + 1'b1;
            tick_f <= 1'b0;
        end

        if (cnt_2f == DIV_2F - 1) begin
            cnt_2f  <= 32'd0;
            tick_2f <= 1'b1;
            f[1]    <= ~f[1];
        end
        else begin
            cnt_2f  <= cnt_2f + 1'b1;
            tick_2f <= 1'b0;
        end

        if (cnt_4f == DIV_4F - 1) begin
            cnt_4f  <= 32'd0;
            tick_4f <= 1'b1;
            f[2]    <= ~f[2];
        end
        else begin
            cnt_4f  <= cnt_4f + 1'b1;
            tick_4f <= 1'b0;
        end

        if (cnt_8f == DIV_8F - 1) begin
            cnt_8f  <= 32'd0;
            tick_8f <= 1'b1;
            f[3]    <= ~f[3];
        end
        else begin
            cnt_8f  <= cnt_8f + 1'b1;
            tick_8f <= 1'b0;
        end
    end
end

always @(*) begin
    case ({S1, S0})
        2'b00: tick_select = tick_f;
        2'b01: tick_select = tick_2f;
        2'b10: tick_select = tick_4f;
        2'b11: tick_select = tick_8f;
        default: tick_select = tick_f;
    endcase
end

always @(posedge CK_50M or posedge CLR) begin
    if (CLR) begin
        q <= 8'b00000000;
    end
    else begin
        if (tick_select) begin
            if (U_D == 1'b1)
                q <= q + 1'b1;
            else
                q <= q - 1'b1;
        end
        else begin
            q <= q;
        end
    end
end

endmodule