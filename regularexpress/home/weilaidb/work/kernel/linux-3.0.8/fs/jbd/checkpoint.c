static inline void __buffer_unlink_first(struct journal_head *jh)
static inline void __buffer_unlink(struct journal_head *jh)
static inline void __buffer_relink_io(struct journal_head *jh)
static int __try_to_free_cp_buf(struct journal_head *jh)
void __log_wait_for_space(journal_t *journal)
static void jbd_sync_bh(journal_t *journal, struct buffer_head *bh)
__releases(journal->j_list_lock)
static int __wait_cp_io(journal_t *journal, transaction_t *transaction)
#define NR_BATCH	64
static void
__flush_batch(journal_t *journal, struct buffer_head **bhs, int *batch_count)
static int __process_buffer(journal_t *journal, struct journal_head *jh,
struct buffer_head **bhs, int *batch_count)
int log_do_checkpoint(journal_t *journal)
int cleanup_journal_tail(journal_t *journal)
static int journal_clean_one_cp_list(struct journal_head *jh, int *released)
int __journal_clean_checkpoint_list(journal_t *journal)
int __journal_remove_checkpoint(struct journal_head *jh)
void __journal_insert_checkpoint(struct journal_head *jh,
transaction_t *transaction)
void __journal_drop_transaction(journal_t *journal, transaction_t *transaction)
