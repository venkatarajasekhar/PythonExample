#define AVCODEC_XFACE_H
#define XFACE_WIDTH  48
#define XFACE_HEIGHT 48
#define XFACE_PIXELS (XFACE_WIDTH * XFACE_HEIGHT)
#define XFACE_FIRST_PRINT '!'
#define XFACE_LAST_PRINT '~'
#define XFACE_PRINTS (XFACE_LAST_PRINT - XFACE_FIRST_PRINT + 1)
#define XFACE_MAX_DIGITS 666
#define XFACE_BITSPERWORD 8
#define XFACE_WORDCARRY (1 << XFACE_BITSPERWORD)
#define XFACE_WORDMASK (XFACE_WORDCARRY - 1)
#define XFACE_MAX_WORDS 546
typedef struct  BigInt;
ff_big_add;
ff_big_div;
ff_big_mul;
enum XFaceColor ;
typedef struct  ProbRange;
extern const ProbRange ff_xface_probranges_per_level[4][3];
extern const ProbRange ff_xface_probranges_2x2[16];
ff_xface_generate_face;
