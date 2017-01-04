#define LOOP_FILTER(EXT) \
void ff_vc1_v_loop_filter4_ ## EXT(uint8_t *src, int stride, int pq); \
void ff_vc1_h_loop_filter4_ ## EXT(uint8_t *src, int stride, int pq); \
void ff_vc1_v_loop_filter8_ ## EXT(uint8_t *src, int stride, int pq); \
void ff_vc1_h_loop_filter8_ ## EXT(uint8_t *src, int stride, int pq); \
\
static void vc1_v_loop_filter16_ ## EXT(uint8_t *src, int stride, int pq) \
\
\
static void vc1_h_loop_filter16_ ## EXT(uint8_t *src, int stride, int pq) \
#if HAVE_YASM
LOOP_FILTER(mmxext)
LOOP_FILTER(sse2)
LOOP_FILTER(ssse3)
void ff_vc1_h_loop_filter8_sse4(uint8_t *src, int stride, int pq);
static void vc1_h_loop_filter16_sse4(uint8_t *src, int stride, int pq)
#define DECLARE_FUNCTION(OP, DEPTH, INSN)                       \
static void OP##vc1_mspel_mc00_##DEPTH##INSN(uint8_t *dst,          \
const uint8_t *src, ptrdiff_t stride, int rnd) \
DECLARE_FUNCTION(put_,  8, _mmx)
DECLARE_FUNCTION(put_, 16, _mmx)
DECLARE_FUNCTION(avg_,  8, _mmx)
DECLARE_FUNCTION(avg_, 16, _mmx)
DECLARE_FUNCTION(avg_,  8, _mmxext)
DECLARE_FUNCTION(avg_, 16, _mmxext)
DECLARE_FUNCTION(put_, 16, _sse2)
DECLARE_FUNCTION(avg_, 16, _sse2)
void ff_put_vc1_chroma_mc8_nornd_mmx  (uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
void ff_avg_vc1_chroma_mc8_nornd_mmxext(uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
void ff_avg_vc1_chroma_mc8_nornd_3dnow(uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
void ff_put_vc1_chroma_mc8_nornd_ssse3(uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
void ff_avg_vc1_chroma_mc8_nornd_ssse3(uint8_t *dst, uint8_t *src,
int stride, int h, int x, int y);
void ff_vc1_inv_trans_4x4_dc_mmxext(uint8_t *dest, int linesize,
int16_t *block);
void ff_vc1_inv_trans_4x8_dc_mmxext(uint8_t *dest, int linesize,
int16_t *block);
void ff_vc1_inv_trans_8x4_dc_mmxext(uint8_t *dest, int linesize,
int16_t *block);
void ff_vc1_inv_trans_8x8_dc_mmxext(uint8_t *dest, int linesize,
int16_t *block);
av_cold void ff_vc1dsp_init_x86(VC1DSPContext *dsp)
