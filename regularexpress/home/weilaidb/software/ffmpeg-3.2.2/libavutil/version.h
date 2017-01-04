#define AVUTIL_VERSION_H
#define AV_VERSION_INT(a, b, c) ((a)<<16 | (b)<<8 | (c))
#define AV_VERSION_DOT(a, b, c) a ##.## b ##.## c
#define AV_VERSION(a, b, c) AV_VERSION_DOT(a, b, c)
#define AV_VERSION_MAJOR(a) ((a) >> 16)
#define AV_VERSION_MINOR(a) (((a) & 0x00FF00) >> 8)
#define AV_VERSION_MICRO(a) ((a) & 0xFF)
#define LIBAVUTIL_VERSION_MAJOR  55
#define LIBAVUTIL_VERSION_MINOR  34
#define LIBAVUTIL_VERSION_MICRO 100
#define LIBAVUTIL_VERSION_INT   AV_VERSION_INT(LIBAVUTIL_VERSION_MAJOR, \
LIBAVUTIL_VERSION_MINOR, \
LIBAVUTIL_VERSION_MICRO)
#define LIBAVUTIL_VERSION       AV_VERSION(LIBAVUTIL_VERSION_MAJOR,     \
LIBAVUTIL_VERSION_MINOR,     \
LIBAVUTIL_VERSION_MICRO)
#define LIBAVUTIL_BUILD         LIBAVUTIL_VERSION_INT
#define LIBAVUTIL_IDENT         "Lavu" AV_STRINGIFY(LIBAVUTIL_VERSION)
#define FF_API_VDPAU                    (LIBAVUTIL_VERSION_MAJOR < 56)
#define FF_API_XVMC                     (LIBAVUTIL_VERSION_MAJOR < 56)
#define FF_API_OPT_TYPE_METADATA        (LIBAVUTIL_VERSION_MAJOR < 56)
#define FF_API_DLOG                     (LIBAVUTIL_VERSION_MAJOR < 56)
#define FF_API_VAAPI                    (LIBAVUTIL_VERSION_MAJOR < 56)
#define FF_API_FRAME_QP                 (LIBAVUTIL_VERSION_MAJOR < 56)
#define FF_API_PLUS1_MINUS1             (LIBAVUTIL_VERSION_MAJOR < 56)
#define FF_API_ERROR_FRAME              (LIBAVUTIL_VERSION_MAJOR < 56)
#define FF_API_CRC_BIG_TABLE            (LIBAVUTIL_VERSION_MAJOR < 56)
#define FF_API_PKT_PTS                  (LIBAVUTIL_VERSION_MAJOR < 56)
