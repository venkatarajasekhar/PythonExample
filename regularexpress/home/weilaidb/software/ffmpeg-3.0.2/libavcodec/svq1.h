#define AVCODEC_SVQ1_H
#define SVQ1_BLOCK_SKIP         0
#define SVQ1_BLOCK_INTER        1
#define SVQ1_BLOCK_INTER_4V     2
#define SVQ1_BLOCK_INTRA        3
uint16_t ff_svq1_packet_checksum(const uint8_t *data,
const int length, int value);
extern const int8_t *const ff_svq1_inter_codebooks[6];
extern const int8_t *const ff_svq1_intra_codebooks[6];
extern const uint8_t ff_svq1_block_type_vlc[4][2];
extern const uint8_t ff_svq1_intra_multistage_vlc[6][8][2];
extern const uint8_t ff_svq1_inter_multistage_vlc[6][8][2];
extern const uint16_t ff_svq1_intra_mean_vlc[256][2];
extern const uint16_t ff_svq1_inter_mean_vlc[512][2];
extern const uint16_t ff_svq1_frame_size_table[7][2];
