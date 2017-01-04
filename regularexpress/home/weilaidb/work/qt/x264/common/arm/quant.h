#define X264_ARM_QUANT_H
int x264_quant_2x2_dc_armv6( int16_t dct[4], int mf, int bias );
int x264_quant_2x2_dc_neon( int16_t dct[4], int mf, int bias );
int x264_quant_4x4_dc_neon( int16_t dct[16], int mf, int bias );
int x264_quant_4x4_neon( int16_t dct[16], uint16_t mf[16], uint16_t bias[16] );
int x264_quant_4x4x4_neon( int16_t dct[4][16], uint16_t mf[16], uint16_t bias[16] );
int x264_quant_8x8_neon( int16_t dct[64], uint16_t mf[64], uint16_t bias[64] );
void x264_dequant_4x4_dc_neon( int16_t dct[16], int dequant_mf[6][16], int i_qp );
void x264_dequant_4x4_neon( int16_t dct[16], int dequant_mf[6][16], int i_qp );
void x264_dequant_8x8_neon( int16_t dct[64], int dequant_mf[6][64], int i_qp );
int x264_decimate_score15_neon( int16_t * );
int x264_decimate_score16_neon( int16_t * );
int x264_decimate_score64_neon( int16_t * );
int x264_coeff_last4_arm( int16_t * );
int x264_coeff_last8_arm( int16_t * );
int x264_coeff_last15_neon( int16_t * );
int x264_coeff_last16_neon( int16_t * );
int x264_coeff_last64_neon( int16_t * );
void x264_denoise_dct_neon( dctcoef *, uint32_t *, udctcoef *, int );
