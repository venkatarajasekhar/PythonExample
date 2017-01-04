#define AVCODEC_VP3DATA_H
static const int8_t vp31_intra_y_dequant[64] = ;
static const int8_t vp31_intra_c_dequant[64] = ;
static const int8_t vp31_inter_dequant[64] = ;
static const uint8_t vp31_dc_scale_factor[64] = ;
static const uint32_t vp31_ac_scale_factor[64] = ;
static const uint8_t vp31_filter_limit_values[64] = ;
static const uint16_t superblock_run_length_vlc_table[34][2] = ;
static const uint16_t fragment_run_length_vlc_table[30][2] = ;
static const uint8_t mode_code_vlc_table[8][2] = ;
static const uint8_t motion_vector_vlc_table[63][2] = ;
static const int8_t motion_vector_table[63] = ;
static const int8_t fixed_motion_vector_table[64] = ;
static const uint8_t eob_run_base[7] = ;
static const uint8_t eob_run_get_bits[7] = ;
static const uint8_t zero_run_base[32] = ;
static const uint8_t zero_run_get_bits[32] = ;
static const uint8_t coeff_get_bits[32] = ;
static const int16_t coeff_table_token_7_8[1] = ;
static const int16_t coeff_table_token_9[1] = ;
static const int16_t coeff_table_token_10[1] = ;
static const int16_t coeff_table_token_11[1] = ;
static const int16_t coeff_table_token_12[1] = ;
static const int16_t coeff_table_token_13[2] = ;
static const int16_t coeff_table_token_14[2] = ;
static const int16_t coeff_table_token_15[2] = ;
static const int16_t coeff_table_token_16[2] = ;
static const int16_t coeff_table_token_23_24_25_26_27_28_29[2] = ;
static const int16_t coeff_table_token_30[4] = ;
static const int16_t coeff_table_token_31[4] = ;
static const int16_t coeff_table_token_17[4] = ;
static const int16_t coeff_table_token_18[8] = ;
static const int16_t coeff_table_token_19[16] = ;
static const int16_t coeff_table_token_20[32] = ;
static const int16_t coeff_table_token_21[64] = ;
static const int16_t coeff_table_token_22[1024] = ;
static const int16_t *const coeff_tables[32] = ;
static const uint16_t dc_bias[16][32][2] = ;
static const uint16_t ac_bias_0[16][32][2] = ;
static const uint16_t ac_bias_1[16][32][2] = ;
static const uint16_t ac_bias_2[16][32][2] = ;
static const uint16_t ac_bias_3[16][32][2] = ;