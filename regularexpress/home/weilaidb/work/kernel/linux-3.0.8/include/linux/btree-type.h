#define __BTREE_TP(pfx, type, sfx)	pfx ## type ## sfx
#define _BTREE_TP(pfx, type, sfx)	__BTREE_TP(pfx, type, sfx)
#define BTREE_TP(pfx)			_BTREE_TP(pfx, BTREE_TYPE_SUFFIX,)
#define BTREE_FN(name)			BTREE_TP(btree_ ## name)
#define BTREE_TYPE_HEAD			BTREE_TP(struct btree_head)
#define VISITOR_FN			BTREE_TP(visitor)
#define VISITOR_FN_T			_BTREE_TP(visitor, BTREE_TYPE_SUFFIX, _t)
BTREE_TYPE_HEAD ;
static inline void BTREE_FN(init_mempool)(BTREE_TYPE_HEAD *head,
mempool_t *mempool)
static inline int BTREE_FN(init)(BTREE_TYPE_HEAD *head)
static inline void BTREE_FN(destroy)(BTREE_TYPE_HEAD *head)
static inline int BTREE_FN(merge)(BTREE_TYPE_HEAD *target,
BTREE_TYPE_HEAD *victim,
gfp_t gfp)
#if (BITS_PER_LONG > BTREE_TYPE_BITS)
static inline void *BTREE_FN(lookup)(BTREE_TYPE_HEAD *head, BTREE_KEYTYPE key)
static inline int BTREE_FN(insert)(BTREE_TYPE_HEAD *head, BTREE_KEYTYPE key,
void *val, gfp_t gfp)
static inline int BTREE_FN(update)(BTREE_TYPE_HEAD *head, BTREE_KEYTYPE key,
void *val)
static inline void *BTREE_FN(remove)(BTREE_TYPE_HEAD *head, BTREE_KEYTYPE key)
static inline void *BTREE_FN(last)(BTREE_TYPE_HEAD *head, BTREE_KEYTYPE *key)
static inline void *BTREE_FN(get_prev)(BTREE_TYPE_HEAD *head, BTREE_KEYTYPE *key)
static inline void *BTREE_FN(lookup)(BTREE_TYPE_HEAD *head, BTREE_KEYTYPE key)
static inline int BTREE_FN(insert)(BTREE_TYPE_HEAD *head, BTREE_KEYTYPE key,
void *val, gfp_t gfp)
static inline int BTREE_FN(update)(BTREE_TYPE_HEAD *head, BTREE_KEYTYPE key,
void *val)
static inline void *BTREE_FN(remove)(BTREE_TYPE_HEAD *head, BTREE_KEYTYPE key)
static inline void *BTREE_FN(last)(BTREE_TYPE_HEAD *head, BTREE_KEYTYPE *key)
static inline void *BTREE_FN(get_prev)(BTREE_TYPE_HEAD *head, BTREE_KEYTYPE *key)
void VISITOR_FN(void *elem, unsigned long opaque, unsigned long *key,
size_t index, void *__func);
typedef void (*VISITOR_FN_T)(void *elem, unsigned long opaque,
BTREE_KEYTYPE key, size_t index);
static inline size_t BTREE_FN(visitor)(BTREE_TYPE_HEAD *head,
unsigned long opaque,
VISITOR_FN_T func2)
static inline size_t BTREE_FN(grim_visitor)(BTREE_TYPE_HEAD *head,
unsigned long opaque,
VISITOR_FN_T func2)
#undef VISITOR_FN
#undef VISITOR_FN_T
#undef __BTREE_TP
#undef _BTREE_TP
#undef BTREE_TP
#undef BTREE_FN
#undef BTREE_TYPE_HEAD
#undef BTREE_TYPE_SUFFIX
#undef BTREE_TYPE_GEO
#undef BTREE_KEYTYPE
#undef BTREE_TYPE_BITS
