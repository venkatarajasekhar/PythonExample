#define SWRESAMPLE_VERSION_H
#define LIBSWRESAMPLE_VERSION_MAJOR   2
#define LIBSWRESAMPLE_VERSION_MINOR   3
#define LIBSWRESAMPLE_VERSION_MICRO 100
#define LIBSWRESAMPLE_VERSION_INT  AV_VERSION_INT(LIBSWRESAMPLE_VERSION_MAJOR, \
LIBSWRESAMPLE_VERSION_MINOR, \
LIBSWRESAMPLE_VERSION_MICRO)
#define LIBSWRESAMPLE_VERSION      AV_VERSION(LIBSWRESAMPLE_VERSION_MAJOR, \
LIBSWRESAMPLE_VERSION_MINOR, \
LIBSWRESAMPLE_VERSION_MICRO)
#define LIBSWRESAMPLE_BUILD        LIBSWRESAMPLE_VERSION_INT
#define LIBSWRESAMPLE_IDENT        "SwR" AV_STRINGIFY(LIBSWRESAMPLE_VERSION)