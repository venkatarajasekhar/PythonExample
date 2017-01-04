#define DSS_HEAD_OFFSET_AUTHOR        0xc
#define DSS_AUTHOR_SIZE               16
#define DSS_HEAD_OFFSET_START_TIME    0x26
#define DSS_HEAD_OFFSET_END_TIME      0x32
#define DSS_TIME_SIZE                 12
#define DSS_HEAD_OFFSET_ACODEC        0x2a4
#define DSS_ACODEC_DSS_SP             0x0
#define DSS_ACODEC_G723_1             0x2
#define DSS_HEAD_OFFSET_COMMENT       0x31e
#define DSS_COMMENT_SIZE              64
#define DSS_BLOCK_SIZE                512
#define DSS_HEADER_SIZE              (DSS_BLOCK_SIZE * 2)
#define DSS_AUDIO_BLOCK_HEADER_SIZE   6
#define DSS_FRAME_SIZE                42
static const uint8_t frame_size[4] = ;
typedef struct DSSDemuxContext  DSSDemuxContext;
static int dss_probe(AVProbeData *p)
static int dss_read_metadata_date(AVFormatContext *s, unsigned int offset,
const char *key)
static int dss_read_metadata_string(AVFormatContext *s, unsigned int offset,
unsigned int size, const char *key)
static int dss_read_header(AVFormatContext *s)
static void dss_skip_audio_header(AVFormatContext *s, AVPacket *pkt)
static void dss_sp_byte_swap(DSSDemuxContext *ctx,
uint8_t *dst, const uint8_t *src)
static int dss_sp_read_packet(AVFormatContext *s, AVPacket *pkt)
static int dss_723_1_read_packet(AVFormatContext *s, AVPacket *pkt)
static int dss_read_packet(AVFormatContext *s, AVPacket *pkt)
static int dss_read_close(AVFormatContext *s)
static int dss_read_seek(AVFormatContext *s, int stream_index,
int64_t timestamp, int flags)
AVInputFormat ff_dss_demuxer = ;
