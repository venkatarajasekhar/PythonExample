#define AVCODEC_G722_H
#define PREV_SAMPLES_BUF_SIZE 1024
typedef struct G722Context  G722Context;
extern const int16_t ff_g722_high_inv_quant[4];
extern const int16_t ff_g722_low_inv_quant4[16];
extern const int16_t ff_g722_low_inv_quant6[64];
void ff_g722_update_low_predictor(struct G722Band *band, const int ilow);
void ff_g722_update_high_predictor(struct G722Band *band, const int dhigh,
const int ihigh);
