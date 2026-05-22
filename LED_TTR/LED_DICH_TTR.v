module LED_SANG_DICH_TTR(
    input clk,
    input reset,
    output reg [7:0] LED
);

reg [2:0] state;

// Khối tạo trạng thái
always @(posedge clk or posedge reset) begin
    if (reset) begin
        state <= 3'd1;
    end
    else begin
        if (state == 3'd5)
            state <= 3'd1;
        else
            state <= state + 1'b1;
    end
end

// Khối điều khiển LED
always @(*) begin
    case (state)
        3'd1: LED = 8'b0001_1000; // LED[4] và LED[3] sáng
        3'd2: LED = 8'b0010_0100; // LED[5] và LED[2] sáng
        3'd3: LED = 8'b0100_0010; // LED[6] và LED[1] sáng
        3'd4: LED = 8'b1000_0001; // LED[7] và LED[0] sáng
        3'd5: LED = 8'b0000_0000; // tắt hết
        default: LED = 8'b0000_0000;
    endcase
end

endmodule