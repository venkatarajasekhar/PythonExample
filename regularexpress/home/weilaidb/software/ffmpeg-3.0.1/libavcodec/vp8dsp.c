#define MK_IDCT_DC_ADD4_C(name)                                               \
static void name ## _idct_dc_add4uv_c(uint8_t *dst, int16_t block[4][16],     \
ptrdiff_t stride)                       \
\
\
static void name ## _idct_dc_add4y_c(uint8_t *dst, int16_t block[4][16],      \
ptrdiff_t stride)                        \
#if CONFIG_VP7_DECODER
static void vp7_luma_dc_wht_c(int16_t block[4][4][16], int16_t dc[16])
static void vp7_luma_dc_wht_dc_c(int16_t block[4][4][16], int16_t dc[16])
static void vp7_idct_add_c(uint8_t *dst, int16_t block[16], ptrdiff_t stride)
static void vp7_idct_dc_add_c(uint8_t *dst, int16_t block[16], ptrdiff_t stride)
MK_IDCT_DC_ADD4_C(vp7)
#if CONFIG_VP8_DECODER
static void vp8_luma_dc_wht_c(int16_t block[4][4][16], int16_t dc[16])
static void vp8_luma_dc_wht_dc_c(int16_t block[4][4][16], int16_t dc[16])
#define MUL_20091(a) ((((a) * 20091) >> 16) + (a))
#define MUL_35468(a)  (((a) * 35468) >> 16)
static void vp8_idct_add_c(uint8_t *dst, int16_t block[16], ptrdiff_t stride)
static void vp8_idct_dc_add_c(uint8_t *dst, int16_t block[16], ptrdiff_t stride)
MK_IDCT_DC_ADD4_C(vp8)
#define LOAD_PIXELS                                                           \
int av_unused p3 = p[-4 * stride];                                        \
int av_unused p2 = p[-3 * stride];                                        \
int av_unused p1 = p[-2 * stride];                                        \
int av_unused p0 = p[-1 * stride];                                        \
int av_unused q0 = p[ 0 * stride];                                        \
int av_unused q1 = p[ 1 * stride];                                        \
int av_unused q2 = p[ 2 * stride];                                        \
int av_unused q3 = p[ 3 * stride];
#define clip_int8(n) (cm[(n) + 0x80] - 0x80)
static av_always_inline void filter_common(uint8_t *p, ptrdiff_t stride,
int is4tap, int is_vp7)
static av_always_inline void vp7_filter_common(uint8_t *p, ptrdiff_t stride,
int is4tap)
static av_always_inline void vp8_filter_common(uint8_t *p, ptrdiff_t stride,
int is4tap)
static av_always_inline int vp7_simple_limit(uint8_t *p, ptrdiff_t stride,
int flim)
static av_always_inline int vp8_simple_limit(uint8_t *p, ptrdiff_t stride,
int flim)
#define NORMAL_LIMIT(vpn)                                                     \
static av_always_inline int vp ## vpn ## _normal_limit(uint8_t *p,            \
ptrdiff_t stride,      \
int E, int I)          \
NORMAL_LIMIT(7)
NORMAL_LIMIT(8)
static av_always_inline int hev(uint8_t *p, ptrdiff_t stride, int thresh)
static av_always_inline void filter_mbedge(uint8_t *p, ptrdiff_t stride)
#define LOOP_FILTER(vpn, dir, size, stridea, strideb, maybe_inline)           \
static maybe_inline                                                           \
void vpn ## _ ## dir ## _loop_filter ## size ## _c(uint8_t *dst,              \
ptrdiff_t stride,          \
int flim_E, int flim_I,    \
int hev_thresh)            \
\
\
static maybe_inline                                                           \
void vpn ## _ ## dir ## _loop_filter ## size ## _inner_c(uint8_t *dst,        \
ptrdiff_t stride,    \
int flim_E,          \
int flim_I,          \
int hev_thresh)      \
#define UV_LOOP_FILTER(vpn, dir, stridea, strideb)                            \
LOOP_FILTER(vpn, dir, 8, stridea, strideb, av_always_inline)                  \
static void vpn ## _ ## dir ## _loop_filter8uv_c(uint8_t *dstU,               \
uint8_t *dstV,               \
ptrdiff_t stride, int fE,    \
int fI, int hev_thresh)      \
\
\
static void vpn ## _ ## dir ## _loop_filter8uv_inner_c(uint8_t *dstU,         \
uint8_t *dstV,         \
ptrdiff_t stride,      \
int fE, int fI,        \
int hev_thresh)        \
#define LOOP_FILTER_SIMPLE(vpn)                                               \
static void vpn ## _v_loop_filter_simple_c(uint8_t *dst, ptrdiff_t stride,    \
int flim)                          \
\
\
static void vpn ## _h_loop_filter_simple_c(uint8_t *dst, ptrdiff_t stride,    \
int flim)                          \
#define LOOP_FILTERS(vpn)                \
LOOP_FILTER(vpn, v, 16, 1, stride, ) \
LOOP_FILTER(vpn, h, 16, stride, 1, ) \
UV_LOOP_FILTER(vpn, v, 1, stride)    \
UV_LOOP_FILTER(vpn, h, stride, 1)    \
LOOP_FILTER_SIMPLE(vpn)              \
static const uint8_t subpel_filters[7][6] = ;
#define PUT_PIXELS(WIDTH)                                                     \
static void put_vp8_pixels ## WIDTH ## _c(uint8_t *dst, ptrdiff_t dststride,  \
uint8_t *src, ptrdiff_t srcstride,  \
int h, int x, int y)                \
PUT_PIXELS(16)
PUT_PIXELS(8)
PUT_PIXELS(4)
#define FILTER_6TAP(src, F, stride)                                           \
cm[(F[2] * src[x + 0 * stride] - F[1] * src[x - 1 * stride] +             \
F[0] * src[x - 2 * stride] + F[3] * src[x + 1 * stride] -             \
F[4] * src[x + 2 * stride] + F[5] * src[x + 3 * stride] + 64) >> 7]
#define FILTER_4TAP(src, F, stride)                                           \
cm[(F[2] * src[x + 0 * stride] - F[1] * src[x - 1 * stride] +             \
F[3] * src[x + 1 * stride] - F[4] * src[x + 2 * stride] + 64) >> 7]
#define VP8_EPEL_H(SIZE, TAPS)                                                \
static void put_vp8_epel ## SIZE ## _h ## TAPS ## _c(uint8_t *dst,            \
ptrdiff_t dststride,     \
uint8_t *src,            \
ptrdiff_t srcstride,     \
int h, int mx, int my)   \
#define VP8_EPEL_V(SIZE, TAPS)                                                \
static void put_vp8_epel ## SIZE ## _v ## TAPS ## _c(uint8_t *dst,            \
ptrdiff_t dststride,     \
uint8_t *src,            \
ptrdiff_t srcstride,     \
int h, int mx, int my)   \
#define VP8_EPEL_HV(SIZE, HTAPS, VTAPS)                                       \
static void                                                                   \
put_vp8_epel ## SIZE ## _h ## HTAPS ## v ## VTAPS ## _c(uint8_t *dst,         \
ptrdiff_t dststride,  \
uint8_t *src,         \
ptrdiff_t srcstride,  \
int h, int mx,        \
int my)               \
VP8_EPEL_H(16, 4)
VP8_EPEL_H(8,  4)
VP8_EPEL_H(4,  4)
VP8_EPEL_H(16, 6)
VP8_EPEL_H(8,  6)
VP8_EPEL_H(4,  6)
VP8_EPEL_V(16, 4)
VP8_EPEL_V(8,  4)
VP8_EPEL_V(4,  4)
VP8_EPEL_V(16, 6)
VP8_EPEL_V(8,  6)
VP8_EPEL_V(4,  6)
VP8_EPEL_HV(16, 4, 4)
VP8_EPEL_HV(8,  4, 4)
VP8_EPEL_HV(4,  4, 4)
VP8_EPEL_HV(16, 4, 6)
VP8_EPEL_HV(8,  4, 6)
VP8_EPEL_HV(4,  4, 6)
VP8_EPEL_HV(16, 6, 4)
VP8_EPEL_HV(8,  6, 4)
VP8_EPEL_HV(4,  6, 4)
VP8_EPEL_HV(16, 6, 6)
VP8_EPEL_HV(8,  6, 6)
VP8_EPEL_HV(4,  6, 6)
#define VP8_BILINEAR(SIZE)                                                    \
static void put_vp8_bilinear ## SIZE ## _h_c(uint8_t *dst, ptrdiff_t dstride, \
uint8_t *src, ptrdiff_t sstride, \
int h, int mx, int my)           \
\
\
static void put_vp8_bilinear ## SIZE ## _v_c(uint8_t *dst, ptrdiff_t dstride, \
uint8_t *src, ptrdiff_t sstride, \
int h, int mx, int my)           \
\
\
static void put_vp8_bilinear ## SIZE ## _hv_c(uint8_t *dst,                   \
ptrdiff_t dstride,              \
uint8_t *src,                   \
ptrdiff_t sstride,              \
int h, int mx, int my)          \
VP8_BILINEAR(16)
VP8_BILINEAR(8)
VP8_BILINEAR(4)
#define VP78_MC_FUNC(IDX, SIZE)                                               \
dsp->put_vp8_epel_pixels_tab[IDX][0][0] = put_vp8_pixels ## SIZE ## _c;   \
dsp->put_vp8_epel_pixels_tab[IDX][0][1] = put_vp8_epel ## SIZE ## _h4_c;  \
dsp->put_vp8_epel_pixels_tab[IDX][0][2] = put_vp8_epel ## SIZE ## _h6_c;  \
dsp->put_vp8_epel_pixels_tab[IDX][1][0] = put_vp8_epel ## SIZE ## _v4_c;  \
dsp->put_vp8_epel_pixels_tab[IDX][1][1] = put_vp8_epel ## SIZE ## _h4v4_c; \
dsp->put_vp8_epel_pixels_tab[IDX][1][2] = put_vp8_epel ## SIZE ## _h6v4_c; \
dsp->put_vp8_epel_pixels_tab[IDX][2][0] = put_vp8_epel ## SIZE ## _v6_c;  \
dsp->put_vp8_epel_pixels_tab[IDX][2][1] = put_vp8_epel ## SIZE ## _h4v6_c; \
dsp->put_vp8_epel_pixels_tab[IDX][2][2] = put_vp8_epel ## SIZE ## _h6v6_c
#define VP78_BILINEAR_MC_FUNC(IDX, SIZE)                                      \
dsp->put_vp8_bilinear_pixels_tab[IDX][0][0] = put_vp8_pixels   ## SIZE ## _c; \
dsp->put_vp8_bilinear_pixels_tab[IDX][0][1] = put_vp8_bilinear ## SIZE ## _h_c; \
dsp->put_vp8_bilinear_pixels_tab[IDX][0][2] = put_vp8_bilinear ## SIZE ## _h_c; \
dsp->put_vp8_bilinear_pixels_tab[IDX][1][0] = put_vp8_bilinear ## SIZE ## _v_c; \
dsp->put_vp8_bilinear_pixels_tab[IDX][1][1] = put_vp8_bilinear ## SIZE ## _hv_c; \
dsp->put_vp8_bilinear_pixels_tab[IDX][1][2] = put_vp8_bilinear ## SIZE ## _hv_c; \
dsp->put_vp8_bilinear_pixels_tab[IDX][2][0] = put_vp8_bilinear ## SIZE ## _v_c; \
dsp->put_vp8_bilinear_pixels_tab[IDX][2][1] = put_vp8_bilinear ## SIZE ## _hv_c; \
dsp->put_vp8_bilinear_pixels_tab[IDX][2][2] = put_vp8_bilinear ## SIZE ## _hv_c
av_cold void ff_vp78dsp_init(VP8DSPContext *dsp)
#if CONFIG_VP7_DECODER
LOOP_FILTERS(vp7)
av_cold void ff_vp7dsp_init(VP8DSPContext *dsp)
#if CONFIG_VP8_DECODER
LOOP_FILTERS(vp8)
av_cold void ff_vp8dsp_init(VP8DSPContext *dsp)
