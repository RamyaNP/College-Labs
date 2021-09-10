module shiftoperations (input wire clk, reset, sel,sel2, wr,input wire [2:0] rd_addr, wr_addr, ctrl, input wire [7:0] d_in, output wire [7:0] d_out, shift_out);
	wire [7:0] d_in_reg, d_in_shift;
	wire [7:0]left, right, left_out, right_out;
	reg_file reg_file0(clk, reset, wr, rd_addr, wr_addr, d_in_reg, d_out); 
	demux2_8 demux1 ( d_out, sel,left,right );
	barrel_left_shifter_8bit leftshift (left, ctrl, left_out);
	barrel_right_shifter_8bit rightshift (right, ctrl, right_out);
	mux2_8 mux_1 (left_out, right_out, sel, shift_out);
	mux2_8 mux_2 (d_in, shift_out, sel2, d_in_reg);
endmodule	
	
	