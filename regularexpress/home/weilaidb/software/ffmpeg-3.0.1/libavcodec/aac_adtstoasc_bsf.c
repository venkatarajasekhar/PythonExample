typedef struct AACBSFContext  AACBSFContext;
static int aac_adtstoasc_filter(AVBitStreamFilterContext *bsfc,
AVCodecContext *avctx, const char *args,
uint8_t  **poutbuf, int *poutbuf_size,
const uint8_t *buf, int      buf_size,
int keyframe)
AVBitStreamFilter ff_aac_adtstoasc_bsf = ;
