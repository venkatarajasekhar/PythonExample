#define SCHl_TAG MKTAG('S', 'C', 'H', 'l')
#define SEAD_TAG MKTAG('S', 'E', 'A', 'D')
#define SNDC_TAG MKTAG('S', 'N', 'D', 'C')
#define SEND_TAG MKTAG('S', 'E', 'N', 'D')
#define SHEN_TAG MKTAG('S', 'H', 'E', 'N')
#define SDEN_TAG MKTAG('S', 'D', 'E', 'N')
#define SEEN_TAG MKTAG('S', 'E', 'E', 'N')
#define ISNh_TAG MKTAG('1', 'S', 'N', 'h')
#define EACS_TAG MKTAG('E', 'A', 'C', 'S')
#define ISNd_TAG MKTAG('1', 'S', 'N', 'd')
#define ISNe_TAG MKTAG('1', 'S', 'N', 'e')
#define PT00_TAG MKTAG('P', 'T', 0x0, 0x0)
#define GSTR_TAG MKTAG('G', 'S', 'T', 'R')
#define SCDl_TAG MKTAG('S', 'C', 'D', 'l')
#define SCEl_TAG MKTAG('S', 'C', 'E', 'l')
#define kVGT_TAG MKTAG('k', 'V', 'G', 'T')
#define fVGT_TAG MKTAG('f', 'V', 'G', 'T')
#define mTCD_TAG MKTAG('m', 'T', 'C', 'D')
#define MADk_TAG MKTAG('M', 'A', 'D', 'k')
#define MADm_TAG MKTAG('M', 'A', 'D', 'm')
#define MADe_TAG MKTAG('M', 'A', 'D', 'e')
#define MPCh_TAG MKTAG('M', 'P', 'C', 'h')
#define TGQs_TAG MKTAG('T', 'G', 'Q', 's')
#define pQGT_TAG MKTAG('p', 'Q', 'G', 'T')
#define pIQT_TAG MKTAG('p', 'I', 'Q', 'T')
#define MVhd_TAG MKTAG('M', 'V', 'h', 'd')
#define MV0K_TAG MKTAG('M', 'V', '0', 'K')
#define MV0F_TAG MKTAG('M', 'V', '0', 'F')
#define AVhd_TAG MKTAG('A', 'V', 'h', 'd')
#define AV0K_TAG MKTAG('A', 'V', '0', 'K')
#define AV0F_TAG MKTAG('A', 'V', '0', 'F')
#define MVIh_TAG MKTAG('M', 'V', 'I', 'h')
#define MVIf_TAG MKTAG('M', 'V', 'I', 'f')
#define AVP6_TAG MKTAG('A', 'V', 'P', '6')
typedef struct VideoProperties  VideoProperties;
typedef struct EaDemuxContext  EaDemuxContext;
static uint32_t read_arbitrary(AVIOContext *pb)
static int process_audio_header_elements(AVFormatContext *s)
static void process_audio_header_eacs(AVFormatContext *s)
static void process_audio_header_sead(AVFormatContext *s)
static void process_video_header_mdec(AVFormatContext *s, VideoProperties *video)
static int process_video_header_vp6(AVFormatContext *s, VideoProperties *video)
static void process_video_header_cmv(AVFormatContext *s, VideoProperties *video)
static int process_ea_header(AVFormatContext *s)
static int ea_probe(AVProbeData *p)
static int init_video_stream(AVFormatContext *s, VideoProperties *video)
static int ea_read_header(AVFormatContext *s)
static int ea_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_ea_demuxer = ;
