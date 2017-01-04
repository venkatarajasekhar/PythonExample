#define AVUTIL_RC4_H
typedef struct AVRC4  AVRC4;
AVRC4 *av_rc4_alloc(void);
int av_rc4_init(struct AVRC4 *d, const uint8_t *key, int key_bits, int decrypt);
void av_rc4_crypt(struct AVRC4 *d, uint8_t *dst, const uint8_t *src, int count, uint8_t *iv, int decrypt);
