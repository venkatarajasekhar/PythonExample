#define HEADER_SIZE 4096
#define rol(value, bits) (((value) << (bits)) | ((value) >> (32 - (bits))))
typedef struct RedSparkContext  RedSparkContext;
static int redspark_probe(AVProbeData *p)
static int redspark_read_header(AVFormatContext *s)
static int redspark_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_redspark_demuxer = ;
