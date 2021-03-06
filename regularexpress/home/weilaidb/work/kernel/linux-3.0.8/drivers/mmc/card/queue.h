#define MMC_QUEUE_H
struct request;
struct task_struct;
struct mmc_queue ;
extern int mmc_init_queue(struct mmc_queue *, struct mmc_card *, spinlock_t *,
const char *);
extern void mmc_cleanup_queue(struct mmc_queue *);
extern void mmc_queue_suspend(struct mmc_queue *);
extern void mmc_queue_resume(struct mmc_queue *);
extern unsigned int mmc_queue_map_sg(struct mmc_queue *);
extern void mmc_queue_bounce_pre(struct mmc_queue *);
extern void mmc_queue_bounce_post(struct mmc_queue *);
