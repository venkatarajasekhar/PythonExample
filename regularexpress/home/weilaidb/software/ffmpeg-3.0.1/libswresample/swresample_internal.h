#define SWRESAMPLE_SWRESAMPLE_INTERNAL_H
#define SWR_CH_MAX 64
#define SQRT3_2      1.22474487139158904909
#define NS_TAPS 20
#if ARCH_X86_64
typedef int64_t integer;
typedef int integer;
typedef void (mix_1_1_func_type)(void *out, const void *in, void *coeffp, integer index, integer len);
typedef void (mix_2_1_func_type)(void *out, const void *in1, const void *in2, void *coeffp, integer index1, integer index2, integer len);
typedef void (mix_any_func_type)(uint8_t **out, const uint8_t **in1, void *coeffp, integer len);
typedef struct AudioData AudioData;
struct DitherContext ;
typedef struct ResampleContext * (* resample_init_func)(struct ResampleContext *c, int out_rate, int in_rate, int filter_size, int phase_shift, int linear,
double cutoff, enum AVSampleFormat format, enum SwrFilterType filter_type, double kaiser_beta, double precision, int cheby);
typedef void    (* resample_free_func)(struct ResampleContext **c);
typedef int     (* multiple_resample_func)(struct ResampleContext *c, AudioData *dst, int dst_size, AudioData *src, int src_size, int *consumed);
typedef int     (* resample_flush_func)(struct SwrContext *c);
typedef int     (* set_compensation_func)(struct ResampleContext *c, int sample_delta, int compensation_distance);
typedef int64_t (* get_delay_func)(struct SwrContext *s, int64_t base);
typedef int     (* invert_initial_buffer_func)(struct ResampleContext *c, AudioData *dst, const AudioData *src, int src_size, int *dst_idx, int *dst_count);
typedef int64_t (* get_out_samples_func)(struct SwrContext *s, int in_samples);
struct Resampler ;
extern struct Resampler const swri_resampler;
extern struct Resampler const swri_soxr_resampler;
struct SwrContext ;
av_warn_unused_result
int swri_realloc_audio(AudioData *a, int count);
void swri_noise_shaping_int16 (SwrContext *s, AudioData *dsts, const AudioData *srcs, const AudioData *noises, int count);
void swri_noise_shaping_int32 (SwrContext *s, AudioData *dsts, const AudioData *srcs, const AudioData *noises, int count);
void swri_noise_shaping_float (SwrContext *s, AudioData *dsts, const AudioData *srcs, const AudioData *noises, int count);
void swri_noise_shaping_double(SwrContext *s, AudioData *dsts, const AudioData *srcs, const AudioData *noises, int count);
av_warn_unused_result
int swri_rematrix_init(SwrContext *s);
void swri_rematrix_free(SwrContext *s);
int swri_rematrix(SwrContext *s, AudioData *out, AudioData *in, int len, int mustcopy);
int swri_rematrix_init_x86(struct SwrContext *s);
av_warn_unused_result
int swri_get_dither(SwrContext *s, void *dst, int len, unsigned seed, enum AVSampleFormat noise_fmt);
av_warn_unused_result
int swri_dither_init(SwrContext *s, enum AVSampleFormat out_fmt, enum AVSampleFormat in_fmt);
void swri_audio_convert_init_aarch64(struct AudioConvert *ac,
enum AVSampleFormat out_fmt,
enum AVSampleFormat in_fmt,
int channels);
void swri_audio_convert_init_arm(struct AudioConvert *ac,
enum AVSampleFormat out_fmt,
enum AVSampleFormat in_fmt,
int channels);
void swri_audio_convert_init_x86(struct AudioConvert *ac,
enum AVSampleFormat out_fmt,
enum AVSampleFormat in_fmt,
int channels);
