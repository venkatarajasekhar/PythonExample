#define AVFORMAT_MXF_H
typedef uint8_t UID[16];
enum MXFMetadataSetType ;
enum MXFFrameLayout ;
typedef struct KLVPacket  KLVPacket;
typedef struct MXFCodecUL  MXFCodecUL;
typedef struct  MXFSamplesPerFrame;
extern const MXFCodecUL ff_mxf_data_definition_uls[];
extern const MXFCodecUL ff_mxf_codec_uls[];
extern const MXFCodecUL ff_mxf_pixel_format_uls[];
extern const MXFCodecUL ff_mxf_codec_tag_uls[];
ff_mxf_decode_pixel_layout;
*ff_mxf_get_samples_per_frame;
#define PRIxUID                             \
\
\
\
UID_ARG \
(x)[0],  (x)[1],  (x)[2],  (x)[3],      \
(x)[4],  (x)[5],  (x)[6],  (x)[7],      \
(x)[8],  (x)[9],  (x)[10], (x)[11],     \
(x)[12], (x)[13], (x)[14], (x)[15]      \
PRINT_KEY                         \
av_log(pc, AV_LOG_VERBOSE,                      \
\
\
\
\
,          \
s, UID_ARG(x));                         \
av_log(pc, AV_LOG_INFO,                         \
\
\
\
\
,                 \
s, UID_ARG(x))
while
