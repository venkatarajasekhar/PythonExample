#define AVCODEC_VORBIS_H
extern const float ff_vorbis_floor1_inverse_db_table[256];
extern const float * const ff_vorbis_vwin[8];
extern const uint8_t ff_vorbis_channel_layout_offsets[8][8];
extern const uint8_t ff_vorbis_encoding_channel_layout_offsets[8][8];
extern const uint64_t ff_vorbis_channel_layouts[9];
typedef struct vorbis_floor1_entry  vorbis_floor1_entry;
int ff_vorbis_ready_floor1_list(AVCodecContext *avctx,
vorbis_floor1_entry *list, int values);
unsigned int ff_vorbis_nth_root(unsigned int x, unsigned int n);
int ff_vorbis_len2vlc(uint8_t *bits, uint32_t *codes, unsigned num);
void ff_vorbis_floor1_render_list(vorbis_floor1_entry * list, int values,
uint16_t *y_list, int *flag,
int multiplier, float * out, int samples);
void ff_vorbis_inverse_coupling(float *mag, float *ang, intptr_t blocksize);
#define ilog(i) av_log2(2*(i))
