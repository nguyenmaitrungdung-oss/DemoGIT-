module LED_8_HOMEWORK(
  input  wire clk,          // clock 50MHz
    input  wire reset,        // reset mức 1
    input  wire [1:0] sw,     // 2 switch chỉnh tốc độ
    output reg  [7:0] led
);

reg [31:0] counter;
reg [31:0] limit;
reg tick;

reg [3:0] state;
// Chọn tốc độ bằng 2 switch
always @(*) begin
    case (sw)
        2'b00: limit = 25_000_000;   // chậm
        2'b01: limit = 12_500_000;
        2'b10: limit = 6_250_000;
        2'b11: limit = 3_125_000;    // nhanh
        default: limit = 25_000_000;
    endcase
end
// Bộ chia clock tạo tick
always @(posedge clk) begin
    if (reset) begin
        counter <= 32'd0;
        tick <= 1'b0;
    end
    else begin
        if (counter >= limit - 1) begin
            counter <= 32'd0;
            tick <= 1'b1;
        end
        else begin
            counter <= counter + 1'b1;
            tick <= 1'b0;
        end
    end
end
// Điều khiển hiệu ứng LED
always @(posedge clk) begin
    if (reset) begin
        state <= 4'd0;
        led <= 8'b0000_0000;
    end
    else begin
        if (tick) begin
            case (state)
  // Sáng dần từ trái sang phải
                4'd0:  led <= 8'b1000_0000;
                4'd1:  led <= 8'b1100_0000;
                4'd2:  led <= 8'b1110_0000;
                4'd3:  led <= 8'b1111_0000;
                4'd4:  led <= 8'b1111_1000;
                4'd5:  led <= 8'b1111_1100;
                4'd6:  led <= 8'b1111_1110;
                4'd7:  led <= 8'b1111_1111;
					 // Tắt dần từ trái sang phải
                4'd8:  led <= 8'b0111_1111;
                4'd9:  led <= 8'b0011_1111;
                4'd10: led <= 8'b0001_1111;
                4'd11: led <= 8'b0000_1111;
                4'd12: led <= 8'b0000_0111;
                4'd13: led <= 8'b0000_0011;
                4'd14: led <= 8'b0000_0001;
                4'd15: led <= 8'b0000_0000;

                default: led <= 8'b0000_0000;
 endcase

            if (state == 4'd15)
                state <= 4'd0;
            else
                state <= state + 1'b1;
        end
    end
end

endmodule