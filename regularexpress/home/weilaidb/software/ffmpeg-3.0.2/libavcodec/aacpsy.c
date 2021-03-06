#define PSY_3GPP_THR_SPREAD_HI   1.5f
#define PSY_3GPP_THR_SPREAD_LOW  3.0f
#define PSY_3GPP_EN_SPREAD_HI_L1 2.0f
#define PSY_3GPP_EN_SPREAD_HI_L2 1.5f
#define PSY_3GPP_EN_SPREAD_HI_S  1.5f
#define PSY_3GPP_EN_SPREAD_LOW_L 3.0f
#define PSY_3GPP_EN_SPREAD_LOW_S 2.0f
#define PSY_3GPP_RPEMIN      0.01f
#define PSY_3GPP_RPELEV      2.0f
#define PSY_3GPP_C1          3.0f
#define PSY_3GPP_C2          1.3219281f
#define PSY_3GPP_C3          0.55935729f
#define PSY_SNR_1DB          7.9432821e-1f
#define PSY_SNR_25DB         3.1622776e-3f
#define PSY_3GPP_SAVE_SLOPE_L  -0.46666667f
#define PSY_3GPP_SAVE_SLOPE_S  -0.36363637f
#define PSY_3GPP_SAVE_ADD_L    -0.84285712f
#define PSY_3GPP_SAVE_ADD_S    -0.75f
#define PSY_3GPP_SPEND_SLOPE_L  0.66666669f
#define PSY_3GPP_SPEND_SLOPE_S  0.81818181f
#define PSY_3GPP_SPEND_ADD_L   -0.35f
#define PSY_3GPP_SPEND_ADD_S   -0.26111111f
#define PSY_3GPP_CLIP_LO_L      0.2f
#define PSY_3GPP_CLIP_LO_S      0.2f
#define PSY_3GPP_CLIP_HI_L      0.95f
#define PSY_3GPP_CLIP_HI_S      0.75f
#define PSY_3GPP_AH_THR_LONG    0.5f
#define PSY_3GPP_AH_THR_SHORT   0.63f
#define PSY_PE_FORGET_SLOPE  511
enum ;
#define PSY_3GPP_BITS_TO_PE(bits) ((bits) * 1.18f)
#define PSY_3GPP_PE_TO_BITS(bits) ((bits) / 1.18f)
#define PSY_LAME_FIR_LEN 21
#define AAC_BLOCK_SIZE_LONG 1024
#define AAC_BLOCK_SIZE_SHORT 128
#define AAC_NUM_BLOCKS_SHORT 8
#define PSY_LAME_NUM_SUBBLOCKS 3
typedef struct AacPsyBandAacPsyBand;
typedef struct AacPsyChannelAacPsyChannel;
typedef struct AacPsyCoeffsAacPsyCoeffs;
typedef struct AacPsyContextAacPsyContext;
typedef struct PsyLamePreset  PsyLamePreset;
static const PsyLamePreset psy_abr_map[] = ;
static const PsyLamePreset psy_vbr_map[] = ;
static const float psy_fir_coeffs[] = ;
#if ARCH_MIPS
#   include "mips/aacpsy_mips.h"
static float lame_calc_attack_threshold(int bitrate)
static av_cold void lame_window_init(AacPsyContext *ctx, AVCodecContext *avctx)
static av_cold float calc_bark(float f)
#define ATH_ADD 4
static av_cold float ath(float f, float add)
static av_cold int psy_3gpp_init(FFPsyContext *ctx)
static float iir_filter(int in, float state[2])
static const uint8_t window_grouping[9] = ;
static av_unused FFPsyWindowInfo psy_3gpp_window(FFPsyContext *ctx,
const int16_t *audio,
const int16_t *la,
int channel, int prev_type)
static int calc_bit_demand(AacPsyContext *ctx, float pe, int bits, int size,
int short_window)
static float calc_pe_3gpp(AacPsyBand *band)
static float calc_reduction_3gpp(float a, float desired_pe, float pe,
float active_lines)
static float calc_reduced_thr_3gpp(AacPsyBand *band, float min_snr,
float reduction)
static void calc_thr_3gpp(const FFPsyWindowInfo *wi, const int num_bands, AacPsyChannel *pch,
const uint8_t *band_sizes, const float *coefs, const int cutoff)
static void psy_hp_filter(const float *firbuf, float *hpfsmpl, const float *psy_fir_coeffs)
static void psy_3gpp_analyze_channel(FFPsyContext *ctx, int channel,
const float *coefs, const FFPsyWindowInfo *wi)
static void psy_3gpp_analyze(FFPsyContext *ctx, int channel,
const float **coeffs, const FFPsyWindowInfo *wi)
static av_cold void psy_3gpp_end(FFPsyContext *apc)
static void lame_apply_block_type(AacPsyChannel *ctx, FFPsyWindowInfo *wi, int uselongblock)
static FFPsyWindowInfo psy_lame_window(FFPsyContext *ctx, const float *audio,
const float *la, int channel, int prev_type)
const FFPsyModel ff_aac_psy_model =
;
