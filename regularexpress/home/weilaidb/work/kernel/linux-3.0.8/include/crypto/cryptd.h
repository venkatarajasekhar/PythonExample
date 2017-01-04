#define _CRYPTO_CRYPT_H
struct cryptd_ablkcipher ;
static inline struct cryptd_ablkcipher *__cryptd_ablkcipher_cast(
struct crypto_ablkcipher *tfm)
struct cryptd_ablkcipher *cryptd_alloc_ablkcipher(const char *alg_name,
u32 type, u32 mask);
struct crypto_blkcipher *cryptd_ablkcipher_child(struct cryptd_ablkcipher *tfm);
void cryptd_free_ablkcipher(struct cryptd_ablkcipher *tfm);
struct cryptd_ahash ;
static inline struct cryptd_ahash *__cryptd_ahash_cast(
struct crypto_ahash *tfm)
struct cryptd_ahash *cryptd_alloc_ahash(const char *alg_name,
u32 type, u32 mask);
struct crypto_shash *cryptd_ahash_child(struct cryptd_ahash *tfm);
struct shash_desc *cryptd_shash_desc(struct ahash_request *req);
void cryptd_free_ahash(struct cryptd_ahash *tfm);
struct cryptd_aead ;
static inline struct cryptd_aead *__cryptd_aead_cast(
struct crypto_aead *tfm)
struct cryptd_aead *cryptd_alloc_aead(const char *alg_name,
u32 type, u32 mask);
struct crypto_aead *cryptd_aead_child(struct cryptd_aead *tfm);
void cryptd_free_aead(struct cryptd_aead *tfm);
