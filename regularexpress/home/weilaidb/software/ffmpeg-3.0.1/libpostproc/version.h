#define POSTPROC_VERSION_H
#define LIBPOSTPROC_VERSION_MAJOR  54
#define LIBPOSTPROC_VERSION_MINOR   0
#define LIBPOSTPROC_VERSION_MICRO 100
#define LIBPOSTPROC_VERSION_INT AV_VERSION_INT(LIBPOSTPROC_VERSION_MAJOR, \
LIBPOSTPROC_VERSION_MINOR, \
LIBPOSTPROC_VERSION_MICRO)
#define LIBPOSTPROC_VERSION     AV_VERSION(LIBPOSTPROC_VERSION_MAJOR, \
LIBPOSTPROC_VERSION_MINOR, \
LIBPOSTPROC_VERSION_MICRO)
#define LIBPOSTPROC_BUILD       LIBPOSTPROC_VERSION_INT
#define LIBPOSTPROC_IDENT       "postproc" AV_STRINGIFY(LIBPOSTPROC_VERSION)
#define FF_API_QP_TYPE     (LIBPOSTPROC_VERSION_MAJOR < 55)
