module test;

	// Inputs
	reg clk;
	reg reset;
	reg [1:0] sw;

	// Outputs
	wire [7:0] led;

	// Instantiate the Unit Under Test (UUT)
	LED_8_HOMEWORK uut (
		.clk(clk), 
		.reset(reset), 
		.sw(sw), 
		.led(led)
	);
// Tạo clock 50MHz
// Chu kỳ clock = 20ns
initial begin
    clk = 1'b0;
end

always #10 clk = ~clk;
initial begin
    reset = 1'b1;
    sw = 2'b00;

    // Reset ban đầu
    #100;
    reset = 1'b0;

    // Giảm limit để ISim mô phỏng nhanh
    // Nếu không có dòng này, phải chờ 25_000_000 xung clock mới đổi LED
    force uut.limit = 32'd4;

    // Chạy đủ lâu để thấy LED sáng dần và tắt dần
    #5000;

end
always @(posedge uut.tick) begin
    #1;
    $display("time = %0t | state = %d | led = %b",
             $time, uut.state, led);
end

endmodule
