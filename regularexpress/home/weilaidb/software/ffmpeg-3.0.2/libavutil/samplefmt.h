#define AVUTIL_SAMPLEFMT_H
enum AVSampleFormat ;
const char *av_get_sample_fmt_name(enum AVSampleFormat sample_fmt);
enum AVSampleFormat av_get_sample_fmt(const char *name);
enum AVSampleFormat av_get_alt_sample_fmt(enum AVSampleFormat sample_fmt, int planar);
enum AVSampleFormat av_get_packed_sample_fmt(enum AVSampleFormat sample_fmt);
enum AVSampleFormat av_get_planar_sample_fmt(enum AVSampleFormat sample_fmt);
char *av_get_sample_fmt_string(char *buf, int buf_size, enum AVSampleFormat sample_fmt);
int av_get_bytes_per_sample(enum AVSampleFormat sample_fmt);
int av_sample_fmt_is_planar(enum AVSampleFormat sample_fmt);
int av_samples_get_buffer_size(int *linesize, int nb_channels, int nb_samples,
enum AVSampleFormat sample_fmt, int align);
int av_samples_fill_arrays(uint8_t **audio_data, int *linesize,
const uint8_t *buf,
int nb_channels, int nb_samples,
enum AVSampleFormat sample_fmt, int align);
int av_samples_alloc(uint8_t **audio_data, int *linesize, int nb_channels,
int nb_samples, enum AVSampleFormat sample_fmt, int align);
int av_samples_alloc_array_and_samples(uint8_t ***audio_data, int *linesize, int nb_channels,
int nb_samples, enum AVSampleFormat sample_fmt, int align);
int av_samples_copy(uint8_t **dst, uint8_t * const *src, int dst_offset,
int src_offset, int nb_samples, int nb_channels,
enum AVSampleFormat sample_fmt);
int av_samples_set_silence(uint8_t **audio_data, int offset, int nb_samples,
int nb_channels, enum AVSampleFormat sample_fmt);
