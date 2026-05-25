module FSM_Counter_8(
     input  wire clk,
    input  wire reset,
    input  wire w,
    output wire [2:0] count
);

reg [2:0] state_reg;
reg [2:0] state_next;

parameter A = 3'b000;
parameter B = 3'b001;
parameter C = 3'b010;
parameter D = 3'b011;
parameter E = 3'b100;
parameter F = 3'b101;
parameter G = 3'b110;
parameter H = 3'b111;
always @(posedge clk or posedge reset) begin
    if (reset)
        state_reg <= A;
    else
        state_reg <= state_next;
end

always @(*) begin
    case (state_reg)
        A: begin
            if (w == 1'b0)
                state_next = A;
            else
                state_next = B;
        end

        B: begin
            if (w == 1'b0)
                state_next = B;
            else state_next = C;
        end

        C: begin
            if (w == 1'b0)
                state_next = C;
            else
                state_next = D;
        end

        D: begin
            if (w == 1'b0)
                state_next = D;
            else
                state_next = E;
        end  E: begin
            if (w == 1'b0)
                state_next = E;
            else
                state_next = F;
        end

        F: begin
            if (w == 1'b0)
                state_next = F;
            else
                state_next = G;
        end
G: begin
            if (w == 1'b0)
                state_next = G;
            else
                state_next = H;
        end

        H: begin
            if (w == 1'b0)
                state_next = H;
            else state_next = A;
        end

        default: state_next = A;
    endcase
end

assign count = state_reg;

endmodule


