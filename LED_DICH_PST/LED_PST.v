module LED_SANG_DICH_PST(
    input clk,
    input reset,
    output reg [7:0] LED
);

reg [3:0] state;

// Khối tạo trạng thái
always @(posedge clk or posedge reset) begin
    if (reset) begin
        state <= 4'd1;
    end
    else begin
        if (state == 4'd9)
            state <= 4'd1;
        else
            state <= state + 1'b1;
    end
end

// Khối điều khiển LED
always @(*) begin
    case (state)
        4'd1: LED = 8'b0000_0001; // LED[0] sáng
        4'd2: LED = 8'b0000_0010; // LED[1] sáng
        4'd3: LED = 8'b0000_0100; // LED[2] sáng
        4'd4: LED = 8'b0000_1000; // LED[3] sáng
        4'd5: LED = 8'b0001_0000; // LED[4] sáng
        4'd6: LED = 8'b0010_0000; // LED[5] sáng
        4'd7: LED = 8'b0100_0000; // LED[6] sáng
        4'd8: LED = 8'b1000_0000; // LED[7] sáng
        4'd9: LED = 8'b0000_0000; // tắt hết
        default: LED = 8'b0000_0000;
    endcase
end

endmodule