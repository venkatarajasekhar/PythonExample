#define AVUTIL_SOFTFLOAT_IEEE754_H
#define EXP_BIAS 127
#define MANT_BITS 23
typedef struct SoftFloat_IEEE754  SoftFloat_IEEE754;
static const SoftFloat_IEEE754 FLOAT_0 = ;
static const SoftFloat_IEEE754 FLOAT_1 = ;
static SoftFloat_IEEE754 av_normalize_sf_ieee754(SoftFloat_IEEE754 sf)
static SoftFloat_IEEE754 av_int2sf_ieee754(int64_t n, int e)
static SoftFloat_IEEE754 av_bits2sf_ieee754(uint32_t n)
static int av_sf2int_ieee754(SoftFloat_IEEE754 a)
static SoftFloat_IEEE754 av_div_sf_ieee754(SoftFloat_IEEE754 a, SoftFloat_IEEE754 b)
static SoftFloat_IEEE754 av_mul_sf_ieee754(SoftFloat_IEEE754 a, SoftFloat_IEEE754 b)
static int av_cmp_sf_ieee754(SoftFloat_IEEE754 a, SoftFloat_IEEE754 b)
