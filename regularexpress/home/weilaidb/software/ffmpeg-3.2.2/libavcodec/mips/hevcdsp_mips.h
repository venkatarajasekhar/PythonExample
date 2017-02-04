#define AVCODEC_MIPS_HEVCDSP_MIPS_H
MC                                                 \
void ff_hevc_put_hevc_##PEL##_##DIR##WIDTH##_8_msa(int16_t *dst,            \
uint8_t *src,          \
ptrdiff_t src_stride,  \
int height,            \
intptr_t mx,           \
intptr_t my,           \
int width)
MC(pel, pixels, 4);
MC(pel, pixels, 6);
MC(pel, pixels, 8);
MC(pel, pixels, 12);
MC(pel, pixels, 16);
MC(pel, pixels, 24);
MC(pel, pixels, 32);
MC(pel, pixels, 48);
MC(pel, pixels, 64);
MC(qpel, h, 4);
MC(qpel, h, 8);
MC(qpel, h, 12);
MC(qpel, h, 16);
MC(qpel, h, 24);
MC(qpel, h, 32);
MC(qpel, h, 48);
MC(qpel, h, 64);
MC(qpel, v, 4);
MC(qpel, v, 8);
MC(qpel, v, 12);
MC(qpel, v, 16);
MC(qpel, v, 24);
MC(qpel, v, 32);
MC(qpel, v, 48);
MC(qpel, v, 64);
MC(qpel, hv, 4);
MC(qpel, hv, 8);
MC(qpel, hv, 12);
MC(qpel, hv, 16);
MC(qpel, hv, 24);
MC(qpel, hv, 32);
MC(qpel, hv, 48);
MC(qpel, hv, 64);
MC(epel, h, 4);
MC(epel, h, 6);
MC(epel, h, 8);
MC(epel, h, 12);
MC(epel, h, 16);
MC(epel, h, 24);
MC(epel, h, 32);
MC(epel, h, 48);
MC(epel, h, 64);
MC(epel, v, 4);
MC(epel, v, 6);
MC(epel, v, 8);
MC(epel, v, 12);
MC(epel, v, 16);
MC(epel, v, 24);
MC(epel, v, 32);
MC(epel, v, 48);
MC(epel, v, 64);
MC(epel, hv, 4);
MC(epel, hv, 6);
MC(epel, hv, 8);
MC(epel, hv, 12);
MC(epel, hv, 16);
MC(epel, hv, 24);
MC(epel, hv, 32);
MC(epel, hv, 48);
MC(epel, hv, 64);
#undef MC
UNI_MC                                                \
void ff_hevc_put_hevc_uni_##PEL##_##DIR##WIDTH##_8_msa(uint8_t *dst,           \
ptrdiff_t dst_stride, \
uint8_t *src,         \
ptrdiff_t src_stride, \
int height,           \
intptr_t mx,          \
intptr_t my,          \
int width)
UNI_MC(pel, pixels, 4);
UNI_MC(pel, pixels, 6);
UNI_MC(pel, pixels, 8);
UNI_MC(pel, pixels, 12);
UNI_MC(pel, pixels, 16);
UNI_MC(pel, pixels, 24);
UNI_MC(pel, pixels, 32);
UNI_MC(pel, pixels, 48);
UNI_MC(pel, pixels, 64);
UNI_MC(qpel, h, 4);
UNI_MC(qpel, h, 8);
UNI_MC(qpel, h, 12);
UNI_MC(qpel, h, 16);
UNI_MC(qpel, h, 24);
UNI_MC(qpel, h, 32);
UNI_MC(qpel, h, 48);
UNI_MC(qpel, h, 64);
UNI_MC(qpel, v, 4);
UNI_MC(qpel, v, 8);
UNI_MC(qpel, v, 12);
UNI_MC(qpel, v, 16);
UNI_MC(qpel, v, 24);
UNI_MC(qpel, v, 32);
UNI_MC(qpel, v, 48);
UNI_MC(qpel, v, 64);
UNI_MC(qpel, hv, 4);
UNI_MC(qpel, hv, 8);
UNI_MC(qpel, hv, 12);
UNI_MC(qpel, hv, 16);
UNI_MC(qpel, hv, 24);
UNI_MC(qpel, hv, 32);
UNI_MC(qpel, hv, 48);
UNI_MC(qpel, hv, 64);
UNI_MC(epel, h, 4);
UNI_MC(epel, h, 6);
UNI_MC(epel, h, 8);
UNI_MC(epel, h, 12);
UNI_MC(epel, h, 16);
UNI_MC(epel, h, 24);
UNI_MC(epel, h, 32);
UNI_MC(epel, h, 48);
UNI_MC(epel, h, 64);
UNI_MC(epel, v, 4);
UNI_MC(epel, v, 6);
UNI_MC(epel, v, 8);
UNI_MC(epel, v, 12);
UNI_MC(epel, v, 16);
UNI_MC(epel, v, 24);
UNI_MC(epel, v, 32);
UNI_MC(epel, v, 48);
UNI_MC(epel, v, 64);
UNI_MC(epel, hv, 4);
UNI_MC(epel, hv, 6);
UNI_MC(epel, hv, 8);
UNI_MC(epel, hv, 12);
UNI_MC(epel, hv, 16);
UNI_MC(epel, hv, 24);
UNI_MC(epel, hv, 32);
UNI_MC(epel, hv, 48);
UNI_MC(epel, hv, 64);
#undef UNI_MC
UNI_W_MC                                         \
void ff_hevc_put_hevc_uni_w_##PEL##_##DIR##WIDTH##_8_msa(uint8_t *dst,    \
ptrdiff_t      \
dst_stride,    \
uint8_t *src,  \
ptrdiff_t      \
src_stride,    \
int height,    \
int denom,     \
int weight,    \
int offset,    \
intptr_t mx,   \
intptr_t my,   \
int width)
UNI_W_MC(pel, pixels, 4);
UNI_W_MC(pel, pixels, 6);
UNI_W_MC(pel, pixels, 8);
UNI_W_MC(pel, pixels, 12);
UNI_W_MC(pel, pixels, 16);
UNI_W_MC(pel, pixels, 24);
UNI_W_MC(pel, pixels, 32);
UNI_W_MC(pel, pixels, 48);
UNI_W_MC(pel, pixels, 64);
UNI_W_MC(qpel, h, 4);
UNI_W_MC(qpel, h, 8);
UNI_W_MC(qpel, h, 12);
UNI_W_MC(qpel, h, 16);
UNI_W_MC(qpel, h, 24);
UNI_W_MC(qpel, h, 32);
UNI_W_MC(qpel, h, 48);
UNI_W_MC(qpel, h, 64);
UNI_W_MC(qpel, v, 4);
UNI_W_MC(qpel, v, 8);
UNI_W_MC(qpel, v, 12);
UNI_W_MC(qpel, v, 16);
UNI_W_MC(qpel, v, 24);
UNI_W_MC(qpel, v, 32);
UNI_W_MC(qpel, v, 48);
UNI_W_MC(qpel, v, 64);
UNI_W_MC(qpel, hv, 4);
UNI_W_MC(qpel, hv, 8);
UNI_W_MC(qpel, hv, 12);
UNI_W_MC(qpel, hv, 16);
UNI_W_MC(qpel, hv, 24);
UNI_W_MC(qpel, hv, 32);
UNI_W_MC(qpel, hv, 48);
UNI_W_MC(qpel, hv, 64);
UNI_W_MC(epel, h, 4);
UNI_W_MC(epel, h, 6);
UNI_W_MC(epel, h, 8);
UNI_W_MC(epel, h, 12);
UNI_W_MC(epel, h, 16);
UNI_W_MC(epel, h, 24);
UNI_W_MC(epel, h, 32);
UNI_W_MC(epel, h, 48);
UNI_W_MC(epel, h, 64);
UNI_W_MC(epel, v, 4);
UNI_W_MC(epel, v, 6);
UNI_W_MC(epel, v, 8);
UNI_W_MC(epel, v, 12);
UNI_W_MC(epel, v, 16);
UNI_W_MC(epel, v, 24);
UNI_W_MC(epel, v, 32);
UNI_W_MC(epel, v, 48);
UNI_W_MC(epel, v, 64);
UNI_W_MC(epel, hv, 4);
UNI_W_MC(epel, hv, 6);
UNI_W_MC(epel, hv, 8);
UNI_W_MC(epel, hv, 12);
UNI_W_MC(epel, hv, 16);
UNI_W_MC(epel, hv, 24);
UNI_W_MC(epel, hv, 32);
UNI_W_MC(epel, hv, 48);
UNI_W_MC(epel, hv, 64);
#undef UNI_W_MC
BI_MC                                                 \
void ff_hevc_put_hevc_bi_##PEL##_##DIR##WIDTH##_8_msa(uint8_t *dst,            \
ptrdiff_t dst_stride,  \
uint8_t *src,          \
ptrdiff_t src_stride,  \
int16_t *src_16bit,    \
int height,            \
intptr_t mx,           \
intptr_t my,           \
int width)
BI_MC(pel, pixels, 4);
BI_MC(pel, pixels, 6);
BI_MC(pel, pixels, 8);
BI_MC(pel, pixels, 12);
BI_MC(pel, pixels, 16);
BI_MC(pel, pixels, 24);
BI_MC(pel, pixels, 32);
BI_MC(pel, pixels, 48);
BI_MC(pel, pixels, 64);
BI_MC(qpel, h, 4);
BI_MC(qpel, h, 8);
BI_MC(qpel, h, 12);
BI_MC(qpel, h, 16);
BI_MC(qpel, h, 24);
BI_MC(qpel, h, 32);
BI_MC(qpel, h, 48);
BI_MC(qpel, h, 64);
BI_MC(qpel, v, 4);
BI_MC(qpel, v, 8);
BI_MC(qpel, v, 12);
BI_MC(qpel, v, 16);
BI_MC(qpel, v, 24);
BI_MC(qpel, v, 32);
BI_MC(qpel, v, 48);
BI_MC(qpel, v, 64);
BI_MC(qpel, hv, 4);
BI_MC(qpel, hv, 8);
BI_MC(qpel, hv, 12);
BI_MC(qpel, hv, 16);
BI_MC(qpel, hv, 24);
BI_MC(qpel, hv, 32);
BI_MC(qpel, hv, 48);
BI_MC(qpel, hv, 64);
BI_MC(epel, h, 4);
BI_MC(epel, h, 6);
BI_MC(epel, h, 8);
BI_MC(epel, h, 12);
BI_MC(epel, h, 16);
BI_MC(epel, h, 24);
BI_MC(epel, h, 32);
BI_MC(epel, h, 48);
BI_MC(epel, h, 64);
BI_MC(epel, v, 4);
BI_MC(epel, v, 6);
BI_MC(epel, v, 8);
BI_MC(epel, v, 12);
BI_MC(epel, v, 16);
BI_MC(epel, v, 24);
BI_MC(epel, v, 32);
BI_MC(epel, v, 48);
BI_MC(epel, v, 64);
BI_MC(epel, hv, 4);
BI_MC(epel, hv, 6);
BI_MC(epel, hv, 8);
BI_MC(epel, hv, 12);
BI_MC(epel, hv, 16);
BI_MC(epel, hv, 24);
BI_MC(epel, hv, 32);
BI_MC(epel, hv, 48);
BI_MC(epel, hv, 64);
#undef BI_MC
BI_W_MC                                               \
void ff_hevc_put_hevc_bi_w_##PEL##_##DIR##WIDTH##_8_msa(uint8_t *dst,          \
ptrdiff_t            \
dst_stride,          \
uint8_t *src,        \
ptrdiff_t            \
src_stride,          \
int16_t *src_16bit,  \
int height,          \
int denom,           \
int weight0,         \
int weight1,         \
int offset0,         \
int offset1,         \
intptr_t mx,         \
intptr_t my,         \
int width)
BI_W_MC(pel, pixels, 4);
BI_W_MC(pel, pixels, 6);
BI_W_MC(pel, pixels, 8);
BI_W_MC(pel, pixels, 12);
BI_W_MC(pel, pixels, 16);
BI_W_MC(pel, pixels, 24);
BI_W_MC(pel, pixels, 32);
BI_W_MC(pel, pixels, 48);
BI_W_MC(pel, pixels, 64);
BI_W_MC(qpel, h, 4);
BI_W_MC(qpel, h, 8);
BI_W_MC(qpel, h, 12);
BI_W_MC(qpel, h, 16);
BI_W_MC(qpel, h, 24);
BI_W_MC(qpel, h, 32);
BI_W_MC(qpel, h, 48);
BI_W_MC(qpel, h, 64);
BI_W_MC(qpel, v, 4);
BI_W_MC(qpel, v, 8);
BI_W_MC(qpel, v, 12);
BI_W_MC(qpel, v, 16);
BI_W_MC(qpel, v, 24);
BI_W_MC(qpel, v, 32);
BI_W_MC(qpel, v, 48);
BI_W_MC(qpel, v, 64);
BI_W_MC(qpel, hv, 4);
BI_W_MC(qpel, hv, 8);
BI_W_MC(qpel, hv, 12);
BI_W_MC(qpel, hv, 16);
BI_W_MC(qpel, hv, 24);
BI_W_MC(qpel, hv, 32);
BI_W_MC(qpel, hv, 48);
BI_W_MC(qpel, hv, 64);
BI_W_MC(epel, h, 4);
BI_W_MC(epel, h, 6);
BI_W_MC(epel, h, 8);
BI_W_MC(epel, h, 12);
BI_W_MC(epel, h, 16);
BI_W_MC(epel, h, 24);
BI_W_MC(epel, h, 32);
BI_W_MC(epel, h, 48);
BI_W_MC(epel, h, 64);
BI_W_MC(epel, v, 4);
BI_W_MC(epel, v, 6);
BI_W_MC(epel, v, 8);
BI_W_MC(epel, v, 12);
BI_W_MC(epel, v, 16);
BI_W_MC(epel, v, 24);
BI_W_MC(epel, v, 32);
BI_W_MC(epel, v, 48);
BI_W_MC(epel, v, 64);
BI_W_MC(epel, hv, 4);
BI_W_MC(epel, hv, 6);
BI_W_MC(epel, hv, 8);
BI_W_MC(epel, hv, 12);
BI_W_MC(epel, hv, 16);
BI_W_MC(epel, hv, 24);
BI_W_MC(epel, hv, 32);
BI_W_MC(epel, hv, 48);
BI_W_MC(epel, hv, 64);
#undef BI_W_MC
ff_hevc_loop_filter_luma_h_8_msa;
ff_hevc_loop_filter_luma_v_8_msa;
ff_hevc_loop_filter_chroma_h_8_msa;
ff_hevc_loop_filter_chroma_v_8_msa;
ff_hevc_sao_band_filter_0_8_msa;
ff_hevc_sao_edge_filter_8_msa;
ff_hevc_idct_4x4_msa;
ff_hevc_idct_8x8_msa;
ff_hevc_idct_16x16_msa;
ff_hevc_idct_32x32_msa;
ff_hevc_idct_dc_4x4_msa;
ff_hevc_idct_dc_8x8_msa;
ff_hevc_idct_dc_16x16_msa;
ff_hevc_idct_dc_32x32_msa;
ff_hevc_addblk_4x4_msa;
ff_hevc_addblk_8x8_msa;
ff_hevc_addblk_16x16_msa;
ff_hevc_addblk_32x32_msa;
ff_hevc_idct_luma_4x4_msa;
