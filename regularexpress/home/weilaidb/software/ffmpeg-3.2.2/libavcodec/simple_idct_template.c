#undef W1
#undef W2
#undef W3
#undef W4
#undef W5
#undef W6
#undef W7
#undef ROW_SHIFT
#undef COL_SHIFT
#undef DC_SHIFT
#undef MUL
#undef MAC
#if BIT_DEPTH == 8
#define W1  22725
#define W2  21407
#define W3  19266
#define W4  16383
#define W5  12873
#define W6  8867
#define W7  4520
#define ROW_SHIFT 11
#define COL_SHIFT 20
#define DC_SHIFT 3
MUL    MUL16(a, b)
MAC MAC16(a, b, c)
#elif BIT_DEPTH == 10 || BIT_DEPTH == 12
# if BIT_DEPTH == 10
#define W1 22725
#define W2 21407
#define W3 19265
#define W4 16384
#define W5 12873
#define W6  8867
#define W7  4520
#   ifdef EXTRA_SHIFT
#define ROW_SHIFT 13
#define COL_SHIFT 18
#define DC_SHIFT  1
#   else
#define ROW_SHIFT 12
#define COL_SHIFT 19
#define DC_SHIFT  2
#   endif
# else
#define W1 45451
#define W2 42813
#define W3 38531
#define W4 32767
#define W5 25746
#define W6 17734
#define W7 9041
#define ROW_SHIFT 16
#define COL_SHIFT 17
#define DC_SHIFT -1
# endif
MUL    ((a) * (b))
MAC ((a) += (b) * (c))
#error
FUNC(int16_t *row, int extra_shift)
FUNC(int16_t *row, int extra_shift)
#define IDCT_COLS do  while (0)
FUNC(int16_t *col)
FUNC(pixel *dest, int line_size,
int16_t *col)
FUNC(pixel *dest, int line_size,
int16_t *col)
FUNC(int16_t *col)
FUNC(uint8_t *dest_, int line_size, int16_t *block)
FUNC(uint8_t *dest_, int line_size, int16_t *block)
FUNC(int16_t *block)
