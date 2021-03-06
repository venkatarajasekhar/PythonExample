static struct kmem_cache *netfs_trans_dst;
static mempool_t *netfs_trans_dst_pool;
static void netfs_trans_init_static(struct netfs_trans *t, int num, int size)
static int netfs_trans_send_pages(struct netfs_trans *t, struct netfs_state *st)
int netfs_trans_send(struct netfs_trans *t, struct netfs_state *st)
static inline int netfs_trans_cmp(unsigned int gen, unsigned int new)
struct netfs_trans_dst *netfs_trans_search(struct netfs_state *st, unsigned int gen)
static int netfs_trans_insert(struct netfs_trans_dst *ndst, struct netfs_state *st)
int netfs_trans_remove_nolock(struct netfs_trans_dst *dst, struct netfs_state *st)
static int netfs_trans_remove_state(struct netfs_trans_dst *dst)
static int netfs_trans_push_dst(struct netfs_trans *t, struct netfs_state *st)
static void netfs_trans_free_dst(struct netfs_trans_dst *dst)
static void netfs_trans_remove_dst(struct netfs_trans_dst *dst)
void netfs_trans_drop_dst(struct netfs_trans_dst *dst)
void netfs_trans_drop_dst_nostate(struct netfs_trans_dst *dst)
void netfs_trans_drop_trans(struct netfs_trans *t, struct netfs_state *st)
void netfs_trans_drop_last(struct netfs_trans *t, struct netfs_state *st)
static int netfs_trans_push(struct netfs_trans *t, struct netfs_state *st)
int netfs_trans_finish_send(struct netfs_trans *t, struct pohmelfs_sb *psb)
int netfs_trans_finish(struct netfs_trans *t, struct pohmelfs_sb *psb)
int netfs_trans_resend(struct netfs_trans *t, struct pohmelfs_sb *psb)
void *netfs_trans_add(struct netfs_trans *t, unsigned int size)
void netfs_trans_free(struct netfs_trans *t)
struct netfs_trans *netfs_trans_alloc(struct pohmelfs_sb *psb, unsigned int size,
unsigned int flags, unsigned int nr)
int netfs_trans_init(void)
void netfs_trans_exit(void)
