static void igb_raise_eec_clk(struct e1000_hw *hw, u32 *eecd)
static void igb_lower_eec_clk(struct e1000_hw *hw, u32 *eecd)
static void igb_shift_out_eec_bits(struct e1000_hw *hw, u16 data, u16 count)
static u16 igb_shift_in_eec_bits(struct e1000_hw *hw, u16 count)
static s32 igb_poll_eerd_eewr_done(struct e1000_hw *hw, int ee_reg)
s32 igb_acquire_nvm(struct e1000_hw *hw)
static void igb_standby_nvm(struct e1000_hw *hw)
static void e1000_stop_nvm(struct e1000_hw *hw)
void igb_release_nvm(struct e1000_hw *hw)
static s32 igb_ready_nvm_eeprom(struct e1000_hw *hw)
s32 igb_read_nvm_spi(struct e1000_hw *hw, u16 offset, u16 words, u16 *data)
s32 igb_read_nvm_eerd(struct e1000_hw *hw, u16 offset, u16 words, u16 *data)
s32 igb_write_nvm_spi(struct e1000_hw *hw, u16 offset, u16 words, u16 *data)
s32 igb_read_part_string(struct e1000_hw *hw, u8 *part_num, u32 part_num_size)
s32 igb_read_mac_addr(struct e1000_hw *hw)
s32 igb_validate_nvm_checksum(struct e1000_hw *hw)
s32 igb_update_nvm_checksum(struct e1000_hw *hw)
