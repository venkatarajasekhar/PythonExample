#define SWRESAMPLE_AUDIOCONVERT_H
typedef void (conv_func_type)(uint8_t *po, const uint8_t *pi, int is, int os, uint8_t *end);
typedef void (simd_func_type)(uint8_t **dst, const uint8_t **src, int len);
typedef struct AudioConvert AudioConvert;
AudioConvert *swri_audio_convert_alloc(enum AVSampleFormat out_fmt,
enum AVSampleFormat in_fmt,
int channels, const int *ch_map,
int flags);
void swri_audio_convert_free(AudioConvert **ctx);
int swri_audio_convert(AudioConvert *ctx, AudioData *out, AudioData *in, int len);
