static const int requant_tab[4][8] = ;
static void apcm_dequant_add(GetBitContext *gb, int16_t *dst, const int *frame_bits)
static inline int gsm_mult(int a, int b)
static void long_term_synth(int16_t *dst, int lag, int gain_idx)
static inline int decode_log_area(int coded, int factor, int offset)
static av_noinline int get_rrp(int filtered)
static int filter_value(int in, int rrp[8], int v[9])
static void short_term_synth(GSMContext *ctx, int16_t *dst, const int16_t *src)
static int postprocess(int16_t *data, int msr)
static int gsm_decode_block(AVCodecContext *avctx, int16_t *samples,
GetBitContext *gb, int mode)
