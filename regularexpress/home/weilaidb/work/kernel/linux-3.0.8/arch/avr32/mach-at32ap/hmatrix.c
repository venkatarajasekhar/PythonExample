static inline void __hmatrix_write_reg(unsigned long offset, u32 value)
static inline u32 __hmatrix_read_reg(unsigned long offset)
void hmatrix_write_reg(unsigned long offset, u32 value)
u32 hmatrix_read_reg(unsigned long offset)
void hmatrix_sfr_set_bits(unsigned int slave_id, u32 mask)
void hmatrix_sfr_clear_bits(unsigned int slave_id, u32 mask)