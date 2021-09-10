module demux2_8( input wire [7:0]i, input wire sel, output wire [7:0]o0,o1 );
 demux2 dm0(i[0],sel,o0[0],o1[0]);
 demux2 dm1(i[1],sel,o0[1],o1[1]);
 demux2 dm2(i[2],sel,o0[2],o1[2]);
 demux2 dm3(i[3],sel,o0[3],o1[3]);		//the 8 bit input output demux to choose 
 demux2 dm4(i[4],sel,o0[4],o1[4]);		//between left shift and right shift
 demux2 dm5(i[5],sel,o0[5],o1[5]);
 demux2 dm6(i[6],sel,o0[6],o1[6]);
 demux2 dm7(i[7],sel,o0[7],o1[7]);
endmodule

module dfrl_8 (input wire  clk, reset, load, input wire [0:7] in, output wire [0:7] out);
  dfrl dfrl_0(clk, reset, load, in[0], out[0]);
  dfrl dfrl_1(clk, reset, load, in[1], out[1]);
  dfrl dfrl_2(clk, reset, load, in[2], out[2]);
  dfrl dfrl_3(clk, reset, load, in[3], out[3]);
  dfrl dfrl_4(clk, reset, load, in[4], out[4]);			//one 8 bit register
  dfrl dfrl_5(clk, reset, load, in[5], out[5]);
  dfrl dfrl_6(clk, reset, load, in[6], out[6]);
  dfrl dfrl_7(clk, reset, load, in[7], out[7]);
endmodule

module mux2_8 (input wire [7:0] i0, i1, input wire j, output wire [7:0] o);
  mux2 mux2_0 (i0[0], i1[0], j, o[0]);
  mux2 mux2_1 (i0[1], i1[1], j, o[1]);
  mux2 mux2_2 (i0[2], i1[2], j, o[2]);
  mux2 mux2_3 (i0[3], i1[3], j, o[3]);
  mux2 mux2_4 (i0[4], i1[4], j, o[4]);
  mux2 mux2_5 (i0[5], i1[5], j, o[5]);
  mux2 mux2_6 (i0[6], i1[6], j, o[6]);
  mux2 mux2_7 (i0[7], i1[7], j, o[7]);
endmodule


module mux8_8bits (input wire [0:7] i0, i1, i2, i3, i4, i5, i6, i7, input wire [0:2] j, output wire [0:7] o);
  mux8 mux8_0({i0[0], i1[0], i2[0], i3[0], i4[0], i5[0], i6[0], i7[0]}, j[0], j[1], j[2], o[0]);
  mux8 mux8_1({i0[1], i1[1], i2[1], i3[1], i4[1], i5[1], i6[1], i7[1]}, j[0], j[1], j[2], o[1]);
  mux8 mux8_2({i0[2], i1[2], i2[2], i3[2], i4[2], i5[2], i6[2], i7[2]}, j[0], j[1], j[2], o[2]);	//the mux that chooses the 
  mux8 mux8_3({i0[3], i1[3], i2[3], i3[3], i4[3], i5[3], i6[3], i7[3]}, j[0], j[1], j[2], o[3]);	//the register whose bit
  mux8 mux8_4({i0[4], i1[4], i2[4], i3[4], i4[4], i5[4], i6[4], i7[4]}, j[0], j[1], j[2], o[4]);	//needs to be passed to 
  mux8 mux8_5({i0[5], i1[5], i2[5], i3[5], i4[5], i5[5], i6[5], i7[5]}, j[0], j[1], j[2], o[5]);	// the other side.
  mux8 mux8_6({i0[6], i1[6], i2[6], i3[6], i4[6], i5[6], i6[6], i7[6]}, j[0], j[1], j[2], o[6]);	//Can also be used to 
  mux8 mux8_7({i0[7], i1[7], i2[7], i3[7], i4[7], i5[7], i6[7], i7[7]}, j[0], j[1], j[2], o[7]);	//segrigate input to 
endmodule																							//reg(the one to be saved)

//

module reg_file (input wire  clk, reset, wr, input wire [0:2] rd_addr, wr_addr, input wire [0:7] d_in, output wire [0:7] d_out);  // d_out_b);
  wire [0:7] load;
  wire [0:7] dout_0, dout_1, dout_2, dout_3, dout_4, dout_5, dout_6, dout_7;
  dfrl_8 dfrl_16_0(clk, reset, load[0], d_in, dout_0);
  dfrl_8 dfrl_16_1(clk, reset, load[1], d_in, dout_1);
  dfrl_8 dfrl_16_2(clk, reset, load[2], d_in, dout_2);
  dfrl_8 dfrl_16_3(clk, reset, load[3], d_in, dout_3);
  dfrl_8 dfrl_16_4(clk, reset, load[4], d_in, dout_4);	//rd_addr_b is commented out coz v dont quite need 2 read port. 
  dfrl_8 dfrl_16_5(clk, reset, load[5], d_in, dout_5);	//but it can be used after 
  dfrl_8 dfrl_16_6(clk, reset, load[6], d_in, dout_6);
  dfrl_8 dfrl_16_7(clk, reset, load[7], d_in, dout_7);
  demux8 demux8_0(wr, wr_addr[2], wr_addr[1], wr_addr[0], load);
  mux8_8bits mux8_16_9(dout_0, dout_1, dout_2, dout_3, dout_4, dout_5, dout_6, dout_7, rd_addr, d_out);
  //mux8_16 mux8_16_10(dout_0, dout_1, dout_2, dout_3, dout_4, dout_5, dout_6, dout_7, rd_addr_b, d_out_b);
endmodule


