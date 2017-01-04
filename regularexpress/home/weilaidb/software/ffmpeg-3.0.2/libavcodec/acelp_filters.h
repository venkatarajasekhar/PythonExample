#define AVCODEC_ACELP_FILTERS_H
typedef struct ACELPFContext ACELPFContext;
void ff_acelp_filter_init(ACELPFContext *c);
void ff_acelp_filter_init_mips(ACELPFContext *c);
extern const int16_t ff_acelp_interp_filter[61];
void ff_acelp_interpolate(int16_t* out, const int16_t* in,
const int16_t* filter_coeffs, int precision,
int frac_pos, int filter_length, int length);
void ff_acelp_interpolatef(float *out, const float *in,
const float *filter_coeffs, int precision,
int frac_pos, int filter_length, int length);
void ff_acelp_high_pass_filter(int16_t* out, int hpf_f[2],
const int16_t* in, int length);
void ff_acelp_apply_order_2_transfer_function(float *out, const float *in,
const float zero_coeffs[2],
const float pole_coeffs[2],
float gain,
float mem[2], int n);
void ff_tilt_compensation(float *mem, float tilt, float *samples, int size);
