typedef struct TTAContext  TTAContext;
static unsigned long tta_check_crc(unsigned long checksum, const uint8_t *buf,
unsigned int len)
static int tta_probe(AVProbeData *p)
static int tta_read_header(AVFormatContext *s)
static int tta_read_packet(AVFormatContext *s, AVPacket *pkt)
static int tta_read_seek(AVFormatContext *s, int stream_index, int64_t timestamp, int flags)
AVInputFormat ff_tta_demuxer = ;
