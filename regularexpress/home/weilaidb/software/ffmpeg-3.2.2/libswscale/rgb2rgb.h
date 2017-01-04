#define SWSCALE_RGB2RGB_H
extern void (*rgb24tobgr32)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*rgb24tobgr16)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*rgb24tobgr15)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*rgb32tobgr24)(const uint8_t *src, uint8_t *dst, int src_size);
extern void    (*rgb32to16)(const uint8_t *src, uint8_t *dst, int src_size);
extern void    (*rgb32to15)(const uint8_t *src, uint8_t *dst, int src_size);
extern void    (*rgb15to16)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*rgb15tobgr24)(const uint8_t *src, uint8_t *dst, int src_size);
extern void    (*rgb15to32)(const uint8_t *src, uint8_t *dst, int src_size);
extern void    (*rgb16to15)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*rgb16tobgr24)(const uint8_t *src, uint8_t *dst, int src_size);
extern void    (*rgb16to32)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*rgb24tobgr24)(const uint8_t *src, uint8_t *dst, int src_size);
extern void    (*rgb24to16)(const uint8_t *src, uint8_t *dst, int src_size);
extern void    (*rgb24to15)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*rgb32tobgr16)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*rgb32tobgr15)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*shuffle_bytes_0321)(const uint8_t *src, uint8_t *dst, int src_size);
extern void (*shuffle_bytes_2103)(const uint8_t *src, uint8_t *dst, int src_size);
void rgb64tobgr48_nobswap(const uint8_t *src, uint8_t *dst, int src_size);
void   rgb64tobgr48_bswap(const uint8_t *src, uint8_t *dst, int src_size);
void rgb48tobgr48_nobswap(const uint8_t *src, uint8_t *dst, int src_size);
void   rgb48tobgr48_bswap(const uint8_t *src, uint8_t *dst, int src_size);
void    rgb64to48_nobswap(const uint8_t *src, uint8_t *dst, int src_size);
void      rgb64to48_bswap(const uint8_t *src, uint8_t *dst, int src_size);
void    rgb24to32(const uint8_t *src, uint8_t *dst, int src_size);
void    rgb32to24(const uint8_t *src, uint8_t *dst, int src_size);
void rgb16tobgr32(const uint8_t *src, uint8_t *dst, int src_size);
void    rgb16to24(const uint8_t *src, uint8_t *dst, int src_size);
void rgb16tobgr16(const uint8_t *src, uint8_t *dst, int src_size);
void rgb16tobgr15(const uint8_t *src, uint8_t *dst, int src_size);
void rgb15tobgr32(const uint8_t *src, uint8_t *dst, int src_size);
void    rgb15to24(const uint8_t *src, uint8_t *dst, int src_size);
void rgb15tobgr16(const uint8_t *src, uint8_t *dst, int src_size);
void rgb15tobgr15(const uint8_t *src, uint8_t *dst, int src_size);
void rgb12tobgr12(const uint8_t *src, uint8_t *dst, int src_size);
void    rgb12to15(const uint8_t *src, uint8_t *dst, int src_size);
void shuffle_bytes_1230(const uint8_t *src, uint8_t *dst, int src_size);
void shuffle_bytes_3012(const uint8_t *src, uint8_t *dst, int src_size);
void shuffle_bytes_3210(const uint8_t *src, uint8_t *dst, int src_size);
void ff_rgb24toyv12_c(const uint8_t *src, uint8_t *ydst, uint8_t *udst,
uint8_t *vdst, int width, int height, int lumStride,
int chromStride, int srcStride, int32_t *rgb2yuv);
extern void (*yv12toyuy2)(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride);
extern void (*yuv422ptoyuy2)(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride);
extern void (*yuy2toyv12)(const uint8_t *src, uint8_t *ydst, uint8_t *udst, uint8_t *vdst,
int width, int height,
int lumStride, int chromStride, int srcStride);
extern void (*yv12touyvy)(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride);
extern void (*yuv422ptouyvy)(const uint8_t *ysrc, const uint8_t *usrc, const uint8_t *vsrc, uint8_t *dst,
int width, int height,
int lumStride, int chromStride, int dstStride);
extern void (*ff_rgb24toyv12)(const uint8_t *src, uint8_t *ydst, uint8_t *udst, uint8_t *vdst,
int width, int height,
int lumStride, int chromStride, int srcStride,
int32_t *rgb2yuv);
extern void (*planar2x)(const uint8_t *src, uint8_t *dst, int width, int height,
int srcStride, int dstStride);
extern void (*interleaveBytes)(const uint8_t *src1, const uint8_t *src2, uint8_t *dst,
int width, int height, int src1Stride,
int src2Stride, int dstStride);
extern void (*deinterleaveBytes)(const uint8_t *src, uint8_t *dst1, uint8_t *dst2,
int width, int height, int srcStride,
int dst1Stride, int dst2Stride);
extern void (*vu9_to_vu12)(const uint8_t *src1, const uint8_t *src2,
uint8_t *dst1, uint8_t *dst2,
int width, int height,
int srcStride1, int srcStride2,
int dstStride1, int dstStride2);
extern void (*yvu9_to_yuy2)(const uint8_t *src1, const uint8_t *src2, const uint8_t *src3,
uint8_t *dst,
int width, int height,
int srcStride1, int srcStride2,
int srcStride3, int dstStride);
extern void (*uyvytoyuv420)(uint8_t *ydst, uint8_t *udst, uint8_t *vdst, const uint8_t *src,
int width, int height,
int lumStride, int chromStride, int srcStride);
extern void (*uyvytoyuv422)(uint8_t *ydst, uint8_t *udst, uint8_t *vdst, const uint8_t *src,
int width, int height,
int lumStride, int chromStride, int srcStride);
extern void (*yuyvtoyuv420)(uint8_t *ydst, uint8_t *udst, uint8_t *vdst, const uint8_t *src,
int width, int height,
int lumStride, int chromStride, int srcStride);
extern void (*yuyvtoyuv422)(uint8_t *ydst, uint8_t *udst, uint8_t *vdst, const uint8_t *src,
int width, int height,
int lumStride, int chromStride, int srcStride);
void ff_sws_rgb2rgb_init(void);
void rgb2rgb_init_x86(void);