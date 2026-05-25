module JK_FF(
  input  wire clk,
    input  wire pre,
    input  wire clr,
    input  wire j,
    input  wire k,
    output reg  q,
    output reg  qd
);

always @(negedge clk or negedge pre or negedge clr) begin
    if (pre == 0 && clr == 0) begin
        q  <= 1'b1;
        qd <= 1'b1;
    end
    else if (pre == 0 && clr == 1) begin
        q  <= 1'b1;
        qd <= 1'b0;
    end
	 else if (pre == 1 && clr == 0) begin
        q  <= 1'b0;
        qd <= 1'b1;
    end
    else begin
        case ({j, k})
            2'b00: begin
                q  <= q;
                qd <= qd;
            end

            2'b01: begin
                q  <= 1'b0;
                qd <= 1'b1;
            end

            2'b10: begin
                q  <= 1'b1;
                qd <= 1'b0;
            end 2'b11: begin
                q  <= ~q;
                qd <= ~qd;
            end
        endcase
    end
end

endmodule


