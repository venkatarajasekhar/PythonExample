void x264_predict_4x4_dc_top_neon( uint8_t *src );
void x264_predict_4x4_ddr_neon( uint8_t *src );
void x264_predict_4x4_ddl_neon( uint8_t *src );
void x264_predict_8x8c_dc_top_neon( uint8_t *src );
void x264_predict_8x8c_dc_left_neon( uint8_t *src );
void x264_predict_8x8c_p_neon( uint8_t *src );
void x264_predict_8x16c_dc_left_neon( uint8_t *src );
void x264_predict_8x16c_dc_top_neon( uint8_t *src );
void x264_predict_8x16c_p_neon( uint8_t *src );
void x264_predict_8x8_ddl_neon( uint8_t *src, uint8_t edge[36] );
void x264_predict_8x8_ddr_neon( uint8_t *src, uint8_t edge[36] );
void x264_predict_8x8_vl_neon( uint8_t *src, uint8_t edge[36] );
void x264_predict_8x8_vr_neon( uint8_t *src, uint8_t edge[36] );
void x264_predict_8x8_hd_neon( uint8_t *src, uint8_t edge[36] );
void x264_predict_8x8_hu_neon( uint8_t *src, uint8_t edge[36] );
void x264_predict_16x16_dc_top_neon( uint8_t *src );
void x264_predict_16x16_dc_left_neon( uint8_t *src );
void x264_predict_16x16_p_neon( uint8_t *src );
void x264_predict_4x4_init_aarch64( int cpu, x264_predict_t pf[12] )
void x264_predict_8x8c_init_aarch64( int cpu, x264_predict_t pf[7] )
void x264_predict_8x16c_init_aarch64( int cpu, x264_predict_t pf[7] )
void x264_predict_8x8_init_aarch64( int cpu, x264_predict8x8_t pf[12], x264_predict_8x8_filter_t *predict_filter )
void x264_predict_16x16_init_aarch64( int cpu, x264_predict_t pf[7] )
