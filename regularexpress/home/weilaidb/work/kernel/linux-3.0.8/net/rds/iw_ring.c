DECLARE_WAIT_QUEUE_HEAD(rds_iw_ring_empty_wait);
void rds_iw_ring_init(struct rds_iw_work_ring *ring, u32 nr)
static inline u32 __rds_iw_ring_used(struct rds_iw_work_ring *ring)
void rds_iw_ring_resize(struct rds_iw_work_ring *ring, u32 nr)
static int __rds_iw_ring_empty(struct rds_iw_work_ring *ring)
u32 rds_iw_ring_alloc(struct rds_iw_work_ring *ring, u32 val, u32 *pos)
void rds_iw_ring_free(struct rds_iw_work_ring *ring, u32 val)
void rds_iw_ring_unalloc(struct rds_iw_work_ring *ring, u32 val)
int rds_iw_ring_empty(struct rds_iw_work_ring *ring)
int rds_iw_ring_low(struct rds_iw_work_ring *ring)
u32 rds_iw_ring_oldest(struct rds_iw_work_ring *ring)
u32 rds_iw_ring_completed(struct rds_iw_work_ring *ring, u32 wr_id, u32 oldest)
