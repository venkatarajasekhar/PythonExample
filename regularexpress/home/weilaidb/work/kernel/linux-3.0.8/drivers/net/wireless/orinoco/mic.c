int orinoco_mic_init(struct orinoco_private *priv)
void orinoco_mic_free(struct orinoco_private *priv)
int orinoco_mic(struct crypto_hash *tfm_michael, u8 *key,
u8 *da, u8 *sa, u8 priority,
u8 *data, size_t data_len, u8 *mic)
