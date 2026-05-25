module LED_RIGHT_TO_LEFT(
    input  wire clk,
    input  wire reset,
    input  wire [1:0] sw,
    output reg  [7:0] LED
);

parameter DIV_00 = 32'd25000000;
parameter DIV_01 = 32'd12500000;
parameter DIV_10 = 32'd6250000;
parameter DIV_11 = 32'd3125000;

reg [31:0] counter;
reg [31:0] limit;
reg [3:0] state;

always @(*) begin
    case (sw)
        2'b00: limit = DIV_00;
        2'b01: limit = DIV_01;
        2'b10: limit = DIV_10;
        2'b11: limit = DIV_11;
        default: limit = DIV_00;
    endcase
end

always @(posedge clk or posedge reset) begin
    if (reset) begin
        counter <= 32'd0;
        state <= 4'd0;
    end
    else begin
        if (counter >= limit - 1) begin
            counter <= 32'd0;

            if (state == 4'd15)
                state <= 4'd0;
            else
                state <= state + 1'b1;
        end
        else begin
            counter <= counter + 1'b1;
        end
    end
end

always @(*) begin
    case (state)
        4'd0:  LED = 8'b00000001;
        4'd1:  LED = 8'b00000011;
        4'd2:  LED = 8'b00000111;
        4'd3:  LED = 8'b00001111;
        4'd4:  LED = 8'b00011111;
        4'd5:  LED = 8'b00111111;
        4'd6:  LED = 8'b01111111;
        4'd7:  LED = 8'b11111111;
        4'd8:  LED = 8'b11111110;
        4'd9:  LED = 8'b11111100;
        4'd10: LED = 8'b11111000;
        4'd11: LED = 8'b11110000;
        4'd12: LED = 8'b11100000;
        4'd13: LED = 8'b11000000;
        4'd14: LED = 8'b10000000;
        4'd15: LED = 8'b00000000;
        default: LED = 8'b00000000;
    endcase
end

endmodule