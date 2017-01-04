#define __gio_defs_asm_h
#define REG_FIELD( scope, reg, field, value ) \
REG_FIELD_X_( value, reg_##scope##_##reg##___##field##___lsb )
#define REG_FIELD_X_( value, shift ) ((value) << shift)
#define REG_STATE( scope, reg, field, symbolic_value ) \
REG_STATE_X_( regk_##scope##_##symbolic_value, reg_##scope##_##reg##___##field##___lsb )
#define REG_STATE_X_( k, shift ) (k << shift)
#define REG_MASK( scope, reg, field ) \
REG_MASK_X_( reg_##scope##_##reg##___##field##___width, reg_##scope##_##reg##___##field##___lsb )
#define REG_MASK_X_( width, lsb ) (((1 << width)-1) << lsb)
#define REG_LSB( scope, reg, field ) reg_##scope##_##reg##___##field##___lsb
#define REG_BIT( scope, reg, field ) reg_##scope##_##reg##___##field##___bit
#define REG_ADDR( scope, inst, reg ) REG_ADDR_X_(inst, reg_##scope##_##reg##_offset)
#define REG_ADDR_X_( inst, offs ) ((inst) + offs)
#define REG_ADDR_VECT( scope, inst, reg, index ) \
REG_ADDR_VECT_X_(inst, reg_##scope##_##reg##_offset, index, \
STRIDE_##scope##_##reg )
#define REG_ADDR_VECT_X_( inst, offs, index, stride ) \
((inst) + offs + (index) * stride)
#define reg_gio_r_pa_din___data___lsb 0
#define reg_gio_r_pa_din___data___width 32
#define reg_gio_r_pa_din_offset 0
#define reg_gio_rw_pa_dout___data___lsb 0
#define reg_gio_rw_pa_dout___data___width 32
#define reg_gio_rw_pa_dout_offset 4
#define reg_gio_rw_pa_oe___oe___lsb 0
#define reg_gio_rw_pa_oe___oe___width 32
#define reg_gio_rw_pa_oe_offset 8
#define reg_gio_rw_pa_byte0_dout___data___lsb 0
#define reg_gio_rw_pa_byte0_dout___data___width 8
#define reg_gio_rw_pa_byte0_dout_offset 12
#define reg_gio_rw_pa_byte0_oe___oe___lsb 0
#define reg_gio_rw_pa_byte0_oe___oe___width 8
#define reg_gio_rw_pa_byte0_oe_offset 16
#define reg_gio_rw_pa_byte1_dout___data___lsb 0
#define reg_gio_rw_pa_byte1_dout___data___width 8
#define reg_gio_rw_pa_byte1_dout_offset 20
#define reg_gio_rw_pa_byte1_oe___oe___lsb 0
#define reg_gio_rw_pa_byte1_oe___oe___width 8
#define reg_gio_rw_pa_byte1_oe_offset 24
#define reg_gio_rw_pa_byte2_dout___data___lsb 0
#define reg_gio_rw_pa_byte2_dout___data___width 8
#define reg_gio_rw_pa_byte2_dout_offset 28
#define reg_gio_rw_pa_byte2_oe___oe___lsb 0
#define reg_gio_rw_pa_byte2_oe___oe___width 8
#define reg_gio_rw_pa_byte2_oe_offset 32
#define reg_gio_rw_pa_byte3_dout___data___lsb 0
#define reg_gio_rw_pa_byte3_dout___data___width 8
#define reg_gio_rw_pa_byte3_dout_offset 36
#define reg_gio_rw_pa_byte3_oe___oe___lsb 0
#define reg_gio_rw_pa_byte3_oe___oe___width 8
#define reg_gio_rw_pa_byte3_oe_offset 40
#define reg_gio_r_pb_din___data___lsb 0
#define reg_gio_r_pb_din___data___width 32
#define reg_gio_r_pb_din_offset 44
#define reg_gio_rw_pb_dout___data___lsb 0
#define reg_gio_rw_pb_dout___data___width 32
#define reg_gio_rw_pb_dout_offset 48
#define reg_gio_rw_pb_oe___oe___lsb 0
#define reg_gio_rw_pb_oe___oe___width 32
#define reg_gio_rw_pb_oe_offset 52
#define reg_gio_rw_pb_byte0_dout___data___lsb 0
#define reg_gio_rw_pb_byte0_dout___data___width 8
#define reg_gio_rw_pb_byte0_dout_offset 56
#define reg_gio_rw_pb_byte0_oe___oe___lsb 0
#define reg_gio_rw_pb_byte0_oe___oe___width 8
#define reg_gio_rw_pb_byte0_oe_offset 60
#define reg_gio_rw_pb_byte1_dout___data___lsb 0
#define reg_gio_rw_pb_byte1_dout___data___width 8
#define reg_gio_rw_pb_byte1_dout_offset 64
#define reg_gio_rw_pb_byte1_oe___oe___lsb 0
#define reg_gio_rw_pb_byte1_oe___oe___width 8
#define reg_gio_rw_pb_byte1_oe_offset 68
#define reg_gio_rw_pb_byte2_dout___data___lsb 0
#define reg_gio_rw_pb_byte2_dout___data___width 8
#define reg_gio_rw_pb_byte2_dout_offset 72
#define reg_gio_rw_pb_byte2_oe___oe___lsb 0
#define reg_gio_rw_pb_byte2_oe___oe___width 8
#define reg_gio_rw_pb_byte2_oe_offset 76
#define reg_gio_rw_pb_byte3_dout___data___lsb 0
#define reg_gio_rw_pb_byte3_dout___data___width 8
#define reg_gio_rw_pb_byte3_dout_offset 80
#define reg_gio_rw_pb_byte3_oe___oe___lsb 0
#define reg_gio_rw_pb_byte3_oe___oe___width 8
#define reg_gio_rw_pb_byte3_oe_offset 84
#define reg_gio_r_pc_din___data___lsb 0
#define reg_gio_r_pc_din___data___width 16
#define reg_gio_r_pc_din_offset 88
#define reg_gio_rw_pc_dout___data___lsb 0
#define reg_gio_rw_pc_dout___data___width 16
#define reg_gio_rw_pc_dout_offset 92
#define reg_gio_rw_pc_oe___oe___lsb 0
#define reg_gio_rw_pc_oe___oe___width 16
#define reg_gio_rw_pc_oe_offset 96
#define reg_gio_rw_pc_byte0_dout___data___lsb 0
#define reg_gio_rw_pc_byte0_dout___data___width 8
#define reg_gio_rw_pc_byte0_dout_offset 100
#define reg_gio_rw_pc_byte0_oe___oe___lsb 0
#define reg_gio_rw_pc_byte0_oe___oe___width 8
#define reg_gio_rw_pc_byte0_oe_offset 104
#define reg_gio_rw_pc_byte1_dout___data___lsb 0
#define reg_gio_rw_pc_byte1_dout___data___width 8
#define reg_gio_rw_pc_byte1_dout_offset 108
#define reg_gio_rw_pc_byte1_oe___oe___lsb 0
#define reg_gio_rw_pc_byte1_oe___oe___width 8
#define reg_gio_rw_pc_byte1_oe_offset 112
#define reg_gio_r_pd_din___data___lsb 0
#define reg_gio_r_pd_din___data___width 32
#define reg_gio_r_pd_din_offset 116
#define reg_gio_rw_intr_cfg___intr0___lsb 0
#define reg_gio_rw_intr_cfg___intr0___width 3
#define reg_gio_rw_intr_cfg___intr1___lsb 3
#define reg_gio_rw_intr_cfg___intr1___width 3
#define reg_gio_rw_intr_cfg___intr2___lsb 6
#define reg_gio_rw_intr_cfg___intr2___width 3
#define reg_gio_rw_intr_cfg___intr3___lsb 9
#define reg_gio_rw_intr_cfg___intr3___width 3
#define reg_gio_rw_intr_cfg___intr4___lsb 12
#define reg_gio_rw_intr_cfg___intr4___width 3
#define reg_gio_rw_intr_cfg___intr5___lsb 15
#define reg_gio_rw_intr_cfg___intr5___width 3
#define reg_gio_rw_intr_cfg___intr6___lsb 18
#define reg_gio_rw_intr_cfg___intr6___width 3
#define reg_gio_rw_intr_cfg___intr7___lsb 21
#define reg_gio_rw_intr_cfg___intr7___width 3
#define reg_gio_rw_intr_cfg_offset 120
#define reg_gio_rw_intr_pins___intr0___lsb 0
#define reg_gio_rw_intr_pins___intr0___width 4
#define reg_gio_rw_intr_pins___intr1___lsb 4
#define reg_gio_rw_intr_pins___intr1___width 4
#define reg_gio_rw_intr_pins___intr2___lsb 8
#define reg_gio_rw_intr_pins___intr2___width 4
#define reg_gio_rw_intr_pins___intr3___lsb 12
#define reg_gio_rw_intr_pins___intr3___width 4
#define reg_gio_rw_intr_pins___intr4___lsb 16
#define reg_gio_rw_intr_pins___intr4___width 4
#define reg_gio_rw_intr_pins___intr5___lsb 20
#define reg_gio_rw_intr_pins___intr5___width 4
#define reg_gio_rw_intr_pins___intr6___lsb 24
#define reg_gio_rw_intr_pins___intr6___width 4
#define reg_gio_rw_intr_pins___intr7___lsb 28
#define reg_gio_rw_intr_pins___intr7___width 4
#define reg_gio_rw_intr_pins_offset 124
#define reg_gio_rw_intr_mask___intr0___lsb 0
#define reg_gio_rw_intr_mask___intr0___width 1
#define reg_gio_rw_intr_mask___intr0___bit 0
#define reg_gio_rw_intr_mask___intr1___lsb 1
#define reg_gio_rw_intr_mask___intr1___width 1
#define reg_gio_rw_intr_mask___intr1___bit 1
#define reg_gio_rw_intr_mask___intr2___lsb 2
#define reg_gio_rw_intr_mask___intr2___width 1
#define reg_gio_rw_intr_mask___intr2___bit 2
#define reg_gio_rw_intr_mask___intr3___lsb 3
#define reg_gio_rw_intr_mask___intr3___width 1
#define reg_gio_rw_intr_mask___intr3___bit 3
#define reg_gio_rw_intr_mask___intr4___lsb 4
#define reg_gio_rw_intr_mask___intr4___width 1
#define reg_gio_rw_intr_mask___intr4___bit 4
#define reg_gio_rw_intr_mask___intr5___lsb 5
#define reg_gio_rw_intr_mask___intr5___width 1
#define reg_gio_rw_intr_mask___intr5___bit 5
#define reg_gio_rw_intr_mask___intr6___lsb 6
#define reg_gio_rw_intr_mask___intr6___width 1
#define reg_gio_rw_intr_mask___intr6___bit 6
#define reg_gio_rw_intr_mask___intr7___lsb 7
#define reg_gio_rw_intr_mask___intr7___width 1
#define reg_gio_rw_intr_mask___intr7___bit 7
#define reg_gio_rw_intr_mask___i2c0_done___lsb 8
#define reg_gio_rw_intr_mask___i2c0_done___width 1
#define reg_gio_rw_intr_mask___i2c0_done___bit 8
#define reg_gio_rw_intr_mask___i2c1_done___lsb 9
#define reg_gio_rw_intr_mask___i2c1_done___width 1
#define reg_gio_rw_intr_mask___i2c1_done___bit 9
#define reg_gio_rw_intr_mask_offset 128
#define reg_gio_rw_ack_intr___intr0___lsb 0
#define reg_gio_rw_ack_intr___intr0___width 1
#define reg_gio_rw_ack_intr___intr0___bit 0
#define reg_gio_rw_ack_intr___intr1___lsb 1
#define reg_gio_rw_ack_intr___intr1___width 1
#define reg_gio_rw_ack_intr___intr1___bit 1
#define reg_gio_rw_ack_intr___intr2___lsb 2
#define reg_gio_rw_ack_intr___intr2___width 1
#define reg_gio_rw_ack_intr___intr2___bit 2
#define reg_gio_rw_ack_intr___intr3___lsb 3
#define reg_gio_rw_ack_intr___intr3___width 1
#define reg_gio_rw_ack_intr___intr3___bit 3
#define reg_gio_rw_ack_intr___intr4___lsb 4
#define reg_gio_rw_ack_intr___intr4___width 1
#define reg_gio_rw_ack_intr___intr4___bit 4
#define reg_gio_rw_ack_intr___intr5___lsb 5
#define reg_gio_rw_ack_intr___intr5___width 1
#define reg_gio_rw_ack_intr___intr5___bit 5
#define reg_gio_rw_ack_intr___intr6___lsb 6
#define reg_gio_rw_ack_intr___intr6___width 1
#define reg_gio_rw_ack_intr___intr6___bit 6
#define reg_gio_rw_ack_intr___intr7___lsb 7
#define reg_gio_rw_ack_intr___intr7___width 1
#define reg_gio_rw_ack_intr___intr7___bit 7
#define reg_gio_rw_ack_intr___i2c0_done___lsb 8
#define reg_gio_rw_ack_intr___i2c0_done___width 1
#define reg_gio_rw_ack_intr___i2c0_done___bit 8
#define reg_gio_rw_ack_intr___i2c1_done___lsb 9
#define reg_gio_rw_ack_intr___i2c1_done___width 1
#define reg_gio_rw_ack_intr___i2c1_done___bit 9
#define reg_gio_rw_ack_intr_offset 132
#define reg_gio_r_intr___intr0___lsb 0
#define reg_gio_r_intr___intr0___width 1
#define reg_gio_r_intr___intr0___bit 0
#define reg_gio_r_intr___intr1___lsb 1
#define reg_gio_r_intr___intr1___width 1
#define reg_gio_r_intr___intr1___bit 1
#define reg_gio_r_intr___intr2___lsb 2
#define reg_gio_r_intr___intr2___width 1
#define reg_gio_r_intr___intr2___bit 2
#define reg_gio_r_intr___intr3___lsb 3
#define reg_gio_r_intr___intr3___width 1
#define reg_gio_r_intr___intr3___bit 3
#define reg_gio_r_intr___intr4___lsb 4
#define reg_gio_r_intr___intr4___width 1
#define reg_gio_r_intr___intr4___bit 4
#define reg_gio_r_intr___intr5___lsb 5
#define reg_gio_r_intr___intr5___width 1
#define reg_gio_r_intr___intr5___bit 5
#define reg_gio_r_intr___intr6___lsb 6
#define reg_gio_r_intr___intr6___width 1
#define reg_gio_r_intr___intr6___bit 6
#define reg_gio_r_intr___intr7___lsb 7
#define reg_gio_r_intr___intr7___width 1
#define reg_gio_r_intr___intr7___bit 7
#define reg_gio_r_intr___i2c0_done___lsb 8
#define reg_gio_r_intr___i2c0_done___width 1
#define reg_gio_r_intr___i2c0_done___bit 8
#define reg_gio_r_intr___i2c1_done___lsb 9
#define reg_gio_r_intr___i2c1_done___width 1
#define reg_gio_r_intr___i2c1_done___bit 9
#define reg_gio_r_intr_offset 136
#define reg_gio_r_masked_intr___intr0___lsb 0
#define reg_gio_r_masked_intr___intr0___width 1
#define reg_gio_r_masked_intr___intr0___bit 0
#define reg_gio_r_masked_intr___intr1___lsb 1
#define reg_gio_r_masked_intr___intr1___width 1
#define reg_gio_r_masked_intr___intr1___bit 1
#define reg_gio_r_masked_intr___intr2___lsb 2
#define reg_gio_r_masked_intr___intr2___width 1
#define reg_gio_r_masked_intr___intr2___bit 2
#define reg_gio_r_masked_intr___intr3___lsb 3
#define reg_gio_r_masked_intr___intr3___width 1
#define reg_gio_r_masked_intr___intr3___bit 3
#define reg_gio_r_masked_intr___intr4___lsb 4
#define reg_gio_r_masked_intr___intr4___width 1
#define reg_gio_r_masked_intr___intr4___bit 4
#define reg_gio_r_masked_intr___intr5___lsb 5
#define reg_gio_r_masked_intr___intr5___width 1
#define reg_gio_r_masked_intr___intr5___bit 5
#define reg_gio_r_masked_intr___intr6___lsb 6
#define reg_gio_r_masked_intr___intr6___width 1
#define reg_gio_r_masked_intr___intr6___bit 6
#define reg_gio_r_masked_intr___intr7___lsb 7
#define reg_gio_r_masked_intr___intr7___width 1
#define reg_gio_r_masked_intr___intr7___bit 7
#define reg_gio_r_masked_intr___i2c0_done___lsb 8
#define reg_gio_r_masked_intr___i2c0_done___width 1
#define reg_gio_r_masked_intr___i2c0_done___bit 8
#define reg_gio_r_masked_intr___i2c1_done___lsb 9
#define reg_gio_r_masked_intr___i2c1_done___width 1
#define reg_gio_r_masked_intr___i2c1_done___bit 9
#define reg_gio_r_masked_intr_offset 140
#define reg_gio_rw_i2c0_start___run___lsb 0
#define reg_gio_rw_i2c0_start___run___width 1
#define reg_gio_rw_i2c0_start___run___bit 0
#define reg_gio_rw_i2c0_start_offset 144
#define reg_gio_rw_i2c0_cfg___en___lsb 0
#define reg_gio_rw_i2c0_cfg___en___width 1
#define reg_gio_rw_i2c0_cfg___en___bit 0
#define reg_gio_rw_i2c0_cfg___bit_order___lsb 1
#define reg_gio_rw_i2c0_cfg___bit_order___width 1
#define reg_gio_rw_i2c0_cfg___bit_order___bit 1
#define reg_gio_rw_i2c0_cfg___scl_io___lsb 2
#define reg_gio_rw_i2c0_cfg___scl_io___width 1
#define reg_gio_rw_i2c0_cfg___scl_io___bit 2
#define reg_gio_rw_i2c0_cfg___scl_inv___lsb 3
#define reg_gio_rw_i2c0_cfg___scl_inv___width 1
#define reg_gio_rw_i2c0_cfg___scl_inv___bit 3
#define reg_gio_rw_i2c0_cfg___sda_io___lsb 4
#define reg_gio_rw_i2c0_cfg___sda_io___width 1
#define reg_gio_rw_i2c0_cfg___sda_io___bit 4
#define reg_gio_rw_i2c0_cfg___sda_idle___lsb 5
#define reg_gio_rw_i2c0_cfg___sda_idle___width 1
#define reg_gio_rw_i2c0_cfg___sda_idle___bit 5
#define reg_gio_rw_i2c0_cfg_offset 148
#define reg_gio_rw_i2c0_ctrl___trf_bits___lsb 0
#define reg_gio_rw_i2c0_ctrl___trf_bits___width 6
#define reg_gio_rw_i2c0_ctrl___switch_dir___lsb 6
#define reg_gio_rw_i2c0_ctrl___switch_dir___width 6
#define reg_gio_rw_i2c0_ctrl___extra_start___lsb 12
#define reg_gio_rw_i2c0_ctrl___extra_start___width 3
#define reg_gio_rw_i2c0_ctrl___early_end___lsb 15
#define reg_gio_rw_i2c0_ctrl___early_end___width 1
#define reg_gio_rw_i2c0_ctrl___early_end___bit 15
#define reg_gio_rw_i2c0_ctrl___start_stop___lsb 16
#define reg_gio_rw_i2c0_ctrl___start_stop___width 1
#define reg_gio_rw_i2c0_ctrl___start_stop___bit 16
#define reg_gio_rw_i2c0_ctrl___ack_dir0___lsb 17
#define reg_gio_rw_i2c0_ctrl___ack_dir0___width 1
#define reg_gio_rw_i2c0_ctrl___ack_dir0___bit 17
#define reg_gio_rw_i2c0_ctrl___ack_dir1___lsb 18
#define reg_gio_rw_i2c0_ctrl___ack_dir1___width 1
#define reg_gio_rw_i2c0_ctrl___ack_dir1___bit 18
#define reg_gio_rw_i2c0_ctrl___ack_dir2___lsb 19
#define reg_gio_rw_i2c0_ctrl___ack_dir2___width 1
#define reg_gio_rw_i2c0_ctrl___ack_dir2___bit 19
#define reg_gio_rw_i2c0_ctrl___ack_dir3___lsb 20
#define reg_gio_rw_i2c0_ctrl___ack_dir3___width 1
#define reg_gio_rw_i2c0_ctrl___ack_dir3___bit 20
#define reg_gio_rw_i2c0_ctrl___ack_dir4___lsb 21
#define reg_gio_rw_i2c0_ctrl___ack_dir4___width 1
#define reg_gio_rw_i2c0_ctrl___ack_dir4___bit 21
#define reg_gio_rw_i2c0_ctrl___ack_dir5___lsb 22
#define reg_gio_rw_i2c0_ctrl___ack_dir5___width 1
#define reg_gio_rw_i2c0_ctrl___ack_dir5___bit 22
#define reg_gio_rw_i2c0_ctrl___ack_bit___lsb 23
#define reg_gio_rw_i2c0_ctrl___ack_bit___width 1
#define reg_gio_rw_i2c0_ctrl___ack_bit___bit 23
#define reg_gio_rw_i2c0_ctrl___start_bit___lsb 24
#define reg_gio_rw_i2c0_ctrl___start_bit___width 1
#define reg_gio_rw_i2c0_ctrl___start_bit___bit 24
#define reg_gio_rw_i2c0_ctrl___freq___lsb 25
#define reg_gio_rw_i2c0_ctrl___freq___width 2
#define reg_gio_rw_i2c0_ctrl_offset 152
#define reg_gio_rw_i2c0_data___data0___lsb 0
#define reg_gio_rw_i2c0_data___data0___width 8
#define reg_gio_rw_i2c0_data___data1___lsb 8
#define reg_gio_rw_i2c0_data___data1___width 8
#define reg_gio_rw_i2c0_data___data2___lsb 16
#define reg_gio_rw_i2c0_data___data2___width 8
#define reg_gio_rw_i2c0_data___data3___lsb 24
#define reg_gio_rw_i2c0_data___data3___width 8
#define reg_gio_rw_i2c0_data_offset 156
#define reg_gio_rw_i2c0_data2___data4___lsb 0
#define reg_gio_rw_i2c0_data2___data4___width 8
#define reg_gio_rw_i2c0_data2___data5___lsb 8
#define reg_gio_rw_i2c0_data2___data5___width 8
#define reg_gio_rw_i2c0_data2___start_val___lsb 16
#define reg_gio_rw_i2c0_data2___start_val___width 6
#define reg_gio_rw_i2c0_data2___ack_val___lsb 22
#define reg_gio_rw_i2c0_data2___ack_val___width 6
#define reg_gio_rw_i2c0_data2_offset 160
#define reg_gio_rw_i2c1_start___run___lsb 0
#define reg_gio_rw_i2c1_start___run___width 1
#define reg_gio_rw_i2c1_start___run___bit 0
#define reg_gio_rw_i2c1_start_offset 164
#define reg_gio_rw_i2c1_cfg___en___lsb 0
#define reg_gio_rw_i2c1_cfg___en___width 1
#define reg_gio_rw_i2c1_cfg___en___bit 0
#define reg_gio_rw_i2c1_cfg___bit_order___lsb 1
#define reg_gio_rw_i2c1_cfg___bit_order___width 1
#define reg_gio_rw_i2c1_cfg___bit_order___bit 1
#define reg_gio_rw_i2c1_cfg___scl_io___lsb 2
#define reg_gio_rw_i2c1_cfg___scl_io___width 1
#define reg_gio_rw_i2c1_cfg___scl_io___bit 2
#define reg_gio_rw_i2c1_cfg___scl_inv___lsb 3
#define reg_gio_rw_i2c1_cfg___scl_inv___width 1
#define reg_gio_rw_i2c1_cfg___scl_inv___bit 3
#define reg_gio_rw_i2c1_cfg___sda0_io___lsb 4
#define reg_gio_rw_i2c1_cfg___sda0_io___width 1
#define reg_gio_rw_i2c1_cfg___sda0_io___bit 4
#define reg_gio_rw_i2c1_cfg___sda0_idle___lsb 5
#define reg_gio_rw_i2c1_cfg___sda0_idle___width 1
#define reg_gio_rw_i2c1_cfg___sda0_idle___bit 5
#define reg_gio_rw_i2c1_cfg___sda1_io___lsb 6
#define reg_gio_rw_i2c1_cfg___sda1_io___width 1
#define reg_gio_rw_i2c1_cfg___sda1_io___bit 6
#define reg_gio_rw_i2c1_cfg___sda1_idle___lsb 7
#define reg_gio_rw_i2c1_cfg___sda1_idle___width 1
#define reg_gio_rw_i2c1_cfg___sda1_idle___bit 7
#define reg_gio_rw_i2c1_cfg___sda2_io___lsb 8
#define reg_gio_rw_i2c1_cfg___sda2_io___width 1
#define reg_gio_rw_i2c1_cfg___sda2_io___bit 8
#define reg_gio_rw_i2c1_cfg___sda2_idle___lsb 9
#define reg_gio_rw_i2c1_cfg___sda2_idle___width 1
#define reg_gio_rw_i2c1_cfg___sda2_idle___bit 9
#define reg_gio_rw_i2c1_cfg___sda3_io___lsb 10
#define reg_gio_rw_i2c1_cfg___sda3_io___width 1
#define reg_gio_rw_i2c1_cfg___sda3_io___bit 10
#define reg_gio_rw_i2c1_cfg___sda3_idle___lsb 11
#define reg_gio_rw_i2c1_cfg___sda3_idle___width 1
#define reg_gio_rw_i2c1_cfg___sda3_idle___bit 11
#define reg_gio_rw_i2c1_cfg___sda_sel___lsb 12
#define reg_gio_rw_i2c1_cfg___sda_sel___width 2
#define reg_gio_rw_i2c1_cfg___sen_idle___lsb 14
#define reg_gio_rw_i2c1_cfg___sen_idle___width 1
#define reg_gio_rw_i2c1_cfg___sen_idle___bit 14
#define reg_gio_rw_i2c1_cfg___sen_inv___lsb 15
#define reg_gio_rw_i2c1_cfg___sen_inv___width 1
#define reg_gio_rw_i2c1_cfg___sen_inv___bit 15
#define reg_gio_rw_i2c1_cfg___sen_sel___lsb 16
#define reg_gio_rw_i2c1_cfg___sen_sel___width 2
#define reg_gio_rw_i2c1_cfg_offset 168
#define reg_gio_rw_i2c1_ctrl___trf_bits___lsb 0
#define reg_gio_rw_i2c1_ctrl___trf_bits___width 6
#define reg_gio_rw_i2c1_ctrl___switch_dir___lsb 6
#define reg_gio_rw_i2c1_ctrl___switch_dir___width 6
#define reg_gio_rw_i2c1_ctrl___extra_start___lsb 12
#define reg_gio_rw_i2c1_ctrl___extra_start___width 3
#define reg_gio_rw_i2c1_ctrl___early_end___lsb 15
#define reg_gio_rw_i2c1_ctrl___early_end___width 1
#define reg_gio_rw_i2c1_ctrl___early_end___bit 15
#define reg_gio_rw_i2c1_ctrl___start_stop___lsb 16
#define reg_gio_rw_i2c1_ctrl___start_stop___width 1
#define reg_gio_rw_i2c1_ctrl___start_stop___bit 16
#define reg_gio_rw_i2c1_ctrl___ack_dir0___lsb 17
#define reg_gio_rw_i2c1_ctrl___ack_dir0___width 1
#define reg_gio_rw_i2c1_ctrl___ack_dir0___bit 17
#define reg_gio_rw_i2c1_ctrl___ack_dir1___lsb 18
#define reg_gio_rw_i2c1_ctrl___ack_dir1___width 1
#define reg_gio_rw_i2c1_ctrl___ack_dir1___bit 18
#define reg_gio_rw_i2c1_ctrl___ack_dir2___lsb 19
#define reg_gio_rw_i2c1_ctrl___ack_dir2___width 1
#define reg_gio_rw_i2c1_ctrl___ack_dir2___bit 19
#define reg_gio_rw_i2c1_ctrl___ack_dir3___lsb 20
#define reg_gio_rw_i2c1_ctrl___ack_dir3___width 1
#define reg_gio_rw_i2c1_ctrl___ack_dir3___bit 20
#define reg_gio_rw_i2c1_ctrl___ack_dir4___lsb 21
#define reg_gio_rw_i2c1_ctrl___ack_dir4___width 1
#define reg_gio_rw_i2c1_ctrl___ack_dir4___bit 21
#define reg_gio_rw_i2c1_ctrl___ack_dir5___lsb 22
#define reg_gio_rw_i2c1_ctrl___ack_dir5___width 1
#define reg_gio_rw_i2c1_ctrl___ack_dir5___bit 22
#define reg_gio_rw_i2c1_ctrl___ack_bit___lsb 23
#define reg_gio_rw_i2c1_ctrl___ack_bit___width 1
#define reg_gio_rw_i2c1_ctrl___ack_bit___bit 23
#define reg_gio_rw_i2c1_ctrl___start_bit___lsb 24
#define reg_gio_rw_i2c1_ctrl___start_bit___width 1
#define reg_gio_rw_i2c1_ctrl___start_bit___bit 24
#define reg_gio_rw_i2c1_ctrl___freq___lsb 25
#define reg_gio_rw_i2c1_ctrl___freq___width 2
#define reg_gio_rw_i2c1_ctrl_offset 172
#define reg_gio_rw_i2c1_data___data0___lsb 0
#define reg_gio_rw_i2c1_data___data0___width 8
#define reg_gio_rw_i2c1_data___data1___lsb 8
#define reg_gio_rw_i2c1_data___data1___width 8
#define reg_gio_rw_i2c1_data___data2___lsb 16
#define reg_gio_rw_i2c1_data___data2___width 8
#define reg_gio_rw_i2c1_data___data3___lsb 24
#define reg_gio_rw_i2c1_data___data3___width 8
#define reg_gio_rw_i2c1_data_offset 176
#define reg_gio_rw_i2c1_data2___data4___lsb 0
#define reg_gio_rw_i2c1_data2___data4___width 8
#define reg_gio_rw_i2c1_data2___data5___lsb 8
#define reg_gio_rw_i2c1_data2___data5___width 8
#define reg_gio_rw_i2c1_data2___start_val___lsb 16
#define reg_gio_rw_i2c1_data2___start_val___width 6
#define reg_gio_rw_i2c1_data2___ack_val___lsb 22
#define reg_gio_rw_i2c1_data2___ack_val___width 6
#define reg_gio_rw_i2c1_data2_offset 180
#define reg_gio_r_ppwm_stat___freq___lsb 0
#define reg_gio_r_ppwm_stat___freq___width 2
#define reg_gio_r_ppwm_stat_offset 184
#define reg_gio_rw_ppwm_data___data___lsb 0
#define reg_gio_rw_ppwm_data___data___width 8
#define reg_gio_rw_ppwm_data_offset 188
#define reg_gio_rw_pwm0_ctrl___mode___lsb 0
#define reg_gio_rw_pwm0_ctrl___mode___width 2
#define reg_gio_rw_pwm0_ctrl___ccd_override___lsb 2
#define reg_gio_rw_pwm0_ctrl___ccd_override___width 1
#define reg_gio_rw_pwm0_ctrl___ccd_override___bit 2
#define reg_gio_rw_pwm0_ctrl___ccd_val___lsb 3
#define reg_gio_rw_pwm0_ctrl___ccd_val___width 1
#define reg_gio_rw_pwm0_ctrl___ccd_val___bit 3
#define reg_gio_rw_pwm0_ctrl_offset 192
#define reg_gio_rw_pwm0_var___lo___lsb 0
#define reg_gio_rw_pwm0_var___lo___width 13
#define reg_gio_rw_pwm0_var___hi___lsb 13
#define reg_gio_rw_pwm0_var___hi___width 13
#define reg_gio_rw_pwm0_var_offset 196
#define reg_gio_rw_pwm0_data___data___lsb 0
#define reg_gio_rw_pwm0_data___data___width 8
#define reg_gio_rw_pwm0_data_offset 200
#define reg_gio_rw_pwm1_ctrl___mode___lsb 0
#define reg_gio_rw_pwm1_ctrl___mode___width 2
#define reg_gio_rw_pwm1_ctrl___ccd_override___lsb 2
#define reg_gio_rw_pwm1_ctrl___ccd_override___width 1
#define reg_gio_rw_pwm1_ctrl___ccd_override___bit 2
#define reg_gio_rw_pwm1_ctrl___ccd_val___lsb 3
#define reg_gio_rw_pwm1_ctrl___ccd_val___width 1
#define reg_gio_rw_pwm1_ctrl___ccd_val___bit 3
#define reg_gio_rw_pwm1_ctrl_offset 204
#define reg_gio_rw_pwm1_var___lo___lsb 0
#define reg_gio_rw_pwm1_var___lo___width 13
#define reg_gio_rw_pwm1_var___hi___lsb 13
#define reg_gio_rw_pwm1_var___hi___width 13
#define reg_gio_rw_pwm1_var_offset 208
#define reg_gio_rw_pwm1_data___data___lsb 0
#define reg_gio_rw_pwm1_data___data___width 8
#define reg_gio_rw_pwm1_data_offset 212
#define reg_gio_rw_pwm2_ctrl___mode___lsb 0
#define reg_gio_rw_pwm2_ctrl___mode___width 2
#define reg_gio_rw_pwm2_ctrl___ccd_override___lsb 2
#define reg_gio_rw_pwm2_ctrl___ccd_override___width 1
#define reg_gio_rw_pwm2_ctrl___ccd_override___bit 2
#define reg_gio_rw_pwm2_ctrl___ccd_val___lsb 3
#define reg_gio_rw_pwm2_ctrl___ccd_val___width 1
#define reg_gio_rw_pwm2_ctrl___ccd_val___bit 3
#define reg_gio_rw_pwm2_ctrl_offset 216
#define reg_gio_rw_pwm2_var___lo___lsb 0
#define reg_gio_rw_pwm2_var___lo___width 13
#define reg_gio_rw_pwm2_var___hi___lsb 13
#define reg_gio_rw_pwm2_var___hi___width 13
#define reg_gio_rw_pwm2_var_offset 220
#define reg_gio_rw_pwm2_data___data___lsb 0
#define reg_gio_rw_pwm2_data___data___width 8
#define reg_gio_rw_pwm2_data_offset 224
#define reg_gio_rw_pwm_in_cfg___pin___lsb 0
#define reg_gio_rw_pwm_in_cfg___pin___width 3
#define reg_gio_rw_pwm_in_cfg_offset 228
#define reg_gio_r_pwm_in_lo___data___lsb 0
#define reg_gio_r_pwm_in_lo___data___width 32
#define reg_gio_r_pwm_in_lo_offset 232
#define reg_gio_r_pwm_in_hi___data___lsb 0
#define reg_gio_r_pwm_in_hi___data___width 32
#define reg_gio_r_pwm_in_hi_offset 236
#define reg_gio_r_pwm_in_cnt___data___lsb 0
#define reg_gio_r_pwm_in_cnt___data___width 32
#define reg_gio_r_pwm_in_cnt_offset 240
#define regk_gio_anyedge                          0x00000007
#define regk_gio_f100k                            0x00000000
#define regk_gio_f1562                            0x00000000
#define regk_gio_f195                             0x00000003
#define regk_gio_f1m                              0x00000002
#define regk_gio_f390                             0x00000002
#define regk_gio_f400k                            0x00000001
#define regk_gio_f5m                              0x00000003
#define regk_gio_f781                             0x00000001
#define regk_gio_hi                               0x00000001
#define regk_gio_in                               0x00000000
#define regk_gio_intr_pa0                         0x00000000
#define regk_gio_intr_pa1                         0x00000000
#define regk_gio_intr_pa10                        0x00000001
#define regk_gio_intr_pa11                        0x00000001
#define regk_gio_intr_pa12                        0x00000001
#define regk_gio_intr_pa13                        0x00000001
#define regk_gio_intr_pa14                        0x00000001
#define regk_gio_intr_pa15                        0x00000001
#define regk_gio_intr_pa16                        0x00000002
#define regk_gio_intr_pa17                        0x00000002
#define regk_gio_intr_pa18                        0x00000002
#define regk_gio_intr_pa19                        0x00000002
#define regk_gio_intr_pa2                         0x00000000
#define regk_gio_intr_pa20                        0x00000002
#define regk_gio_intr_pa21                        0x00000002
#define regk_gio_intr_pa22                        0x00000002
#define regk_gio_intr_pa23                        0x00000002
#define regk_gio_intr_pa24                        0x00000003
#define regk_gio_intr_pa25                        0x00000003
#define regk_gio_intr_pa26                        0x00000003
#define regk_gio_intr_pa27                        0x00000003
#define regk_gio_intr_pa28                        0x00000003
#define regk_gio_intr_pa29                        0x00000003
#define regk_gio_intr_pa3                         0x00000000
#define regk_gio_intr_pa30                        0x00000003
#define regk_gio_intr_pa31                        0x00000003
#define regk_gio_intr_pa4                         0x00000000
#define regk_gio_intr_pa5                         0x00000000
#define regk_gio_intr_pa6                         0x00000000
#define regk_gio_intr_pa7                         0x00000000
#define regk_gio_intr_pa8                         0x00000001
#define regk_gio_intr_pa9                         0x00000001
#define regk_gio_intr_pb0                         0x00000004
#define regk_gio_intr_pb1                         0x00000004
#define regk_gio_intr_pb10                        0x00000005
#define regk_gio_intr_pb11                        0x00000005
#define regk_gio_intr_pb12                        0x00000005
#define regk_gio_intr_pb13                        0x00000005
#define regk_gio_intr_pb14                        0x00000005
#define regk_gio_intr_pb15                        0x00000005
#define regk_gio_intr_pb16                        0x00000006
#define regk_gio_intr_pb17                        0x00000006
#define regk_gio_intr_pb18                        0x00000006
#define regk_gio_intr_pb19                        0x00000006
#define regk_gio_intr_pb2                         0x00000004
#define regk_gio_intr_pb20                        0x00000006
#define regk_gio_intr_pb21                        0x00000006
#define regk_gio_intr_pb22                        0x00000006
#define regk_gio_intr_pb23                        0x00000006
#define regk_gio_intr_pb24                        0x00000007
#define regk_gio_intr_pb25                        0x00000007
#define regk_gio_intr_pb26                        0x00000007
#define regk_gio_intr_pb27                        0x00000007
#define regk_gio_intr_pb28                        0x00000007
#define regk_gio_intr_pb29                        0x00000007
#define regk_gio_intr_pb3                         0x00000004
#define regk_gio_intr_pb30                        0x00000007
#define regk_gio_intr_pb31                        0x00000007
#define regk_gio_intr_pb4                         0x00000004
#define regk_gio_intr_pb5                         0x00000004
#define regk_gio_intr_pb6                         0x00000004
#define regk_gio_intr_pb7                         0x00000004
#define regk_gio_intr_pb8                         0x00000005
#define regk_gio_intr_pb9                         0x00000005
#define regk_gio_intr_pc0                         0x00000008
#define regk_gio_intr_pc1                         0x00000008
#define regk_gio_intr_pc10                        0x00000009
#define regk_gio_intr_pc11                        0x00000009
#define regk_gio_intr_pc12                        0x00000009
#define regk_gio_intr_pc13                        0x00000009
#define regk_gio_intr_pc14                        0x00000009
#define regk_gio_intr_pc15                        0x00000009
#define regk_gio_intr_pc2                         0x00000008
#define regk_gio_intr_pc3                         0x00000008
#define regk_gio_intr_pc4                         0x00000008
#define regk_gio_intr_pc5                         0x00000008
#define regk_gio_intr_pc6                         0x00000008
#define regk_gio_intr_pc7                         0x00000008
#define regk_gio_intr_pc8                         0x00000009
#define regk_gio_intr_pc9                         0x00000009
#define regk_gio_intr_pd0                         0x0000000c
#define regk_gio_intr_pd1                         0x0000000c
#define regk_gio_intr_pd10                        0x0000000d
#define regk_gio_intr_pd11                        0x0000000d
#define regk_gio_intr_pd12                        0x0000000d
#define regk_gio_intr_pd13                        0x0000000d
#define regk_gio_intr_pd14                        0x0000000d
#define regk_gio_intr_pd15                        0x0000000d
#define regk_gio_intr_pd16                        0x0000000e
#define regk_gio_intr_pd17                        0x0000000e
#define regk_gio_intr_pd18                        0x0000000e
#define regk_gio_intr_pd19                        0x0000000e
#define regk_gio_intr_pd2                         0x0000000c
#define regk_gio_intr_pd20                        0x0000000e
#define regk_gio_intr_pd21                        0x0000000e
#define regk_gio_intr_pd22                        0x0000000e
#define regk_gio_intr_pd23                        0x0000000e
#define regk_gio_intr_pd24                        0x0000000f
#define regk_gio_intr_pd25                        0x0000000f
#define regk_gio_intr_pd26                        0x0000000f
#define regk_gio_intr_pd27                        0x0000000f
#define regk_gio_intr_pd28                        0x0000000f
#define regk_gio_intr_pd29                        0x0000000f
#define regk_gio_intr_pd3                         0x0000000c
#define regk_gio_intr_pd30                        0x0000000f
#define regk_gio_intr_pd31                        0x0000000f
#define regk_gio_intr_pd4                         0x0000000c
#define regk_gio_intr_pd5                         0x0000000c
#define regk_gio_intr_pd6                         0x0000000c
#define regk_gio_intr_pd7                         0x0000000c
#define regk_gio_intr_pd8                         0x0000000d
#define regk_gio_intr_pd9                         0x0000000d
#define regk_gio_lo                               0x00000002
#define regk_gio_lsb                              0x00000000
#define regk_gio_msb                              0x00000001
#define regk_gio_negedge                          0x00000006
#define regk_gio_no                               0x00000000
#define regk_gio_no_switch                        0x0000003f
#define regk_gio_none                             0x00000007
#define regk_gio_off                              0x00000000
#define regk_gio_opendrain                        0x00000000
#define regk_gio_out                              0x00000001
#define regk_gio_posedge                          0x00000005
#define regk_gio_pwm_hfp                          0x00000002
#define regk_gio_pwm_pa0                          0x00000001
#define regk_gio_pwm_pa19                         0x00000004
#define regk_gio_pwm_pa6                          0x00000002
#define regk_gio_pwm_pa7                          0x00000003
#define regk_gio_pwm_pb26                         0x00000005
#define regk_gio_pwm_pd23                         0x00000006
#define regk_gio_pwm_pd31                         0x00000007
#define regk_gio_pwm_std                          0x00000001
#define regk_gio_pwm_var                          0x00000003
#define regk_gio_rw_i2c0_cfg_default              0x00000020
#define regk_gio_rw_i2c0_ctrl_default             0x00010000
#define regk_gio_rw_i2c0_start_default            0x00000000
#define regk_gio_rw_i2c1_cfg_default              0x00000aa0
#define regk_gio_rw_i2c1_ctrl_default             0x00010000
#define regk_gio_rw_i2c1_start_default            0x00000000
#define regk_gio_rw_intr_cfg_default              0x00000000
#define regk_gio_rw_intr_mask_default             0x00000000
#define regk_gio_rw_pa_oe_default                 0x00000000
#define regk_gio_rw_pb_oe_default                 0x00000000
#define regk_gio_rw_pc_oe_default                 0x00000000
#define regk_gio_rw_ppwm_data_default             0x00000000
#define regk_gio_rw_pwm0_ctrl_default             0x00000000
#define regk_gio_rw_pwm1_ctrl_default             0x00000000
#define regk_gio_rw_pwm2_ctrl_default             0x00000000
#define regk_gio_rw_pwm_in_cfg_default            0x00000000
#define regk_gio_sda0                             0x00000000
#define regk_gio_sda1                             0x00000001
#define regk_gio_sda2                             0x00000002
#define regk_gio_sda3                             0x00000003
#define regk_gio_sen                              0x00000000
#define regk_gio_set                              0x00000003
#define regk_gio_yes                              0x00000001
