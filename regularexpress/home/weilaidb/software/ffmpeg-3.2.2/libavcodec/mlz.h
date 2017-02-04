#define AVCODEC_MLZ_H
#define CODE_UNSET          -1
#define CODE_BIT_INIT       9
#define DIC_INDEX_INIT      512
#define DIC_INDEX_MAX       32768
#define FLUSH_CODE          256
#define FREEZE_CODE         257
#define FIRST_CODE          258
#define MAX_CODE            32767
#define TABLE_SIZE          35023
typedef struct MLZDict  MLZDict;
typedef struct MLZ  MLZ;
ff_mlz_init_dict;
ff_mlz_flush_dict;
ff_mlz_decompression;
