#define FSCACHE_DEBUG_LEVEL THREAD
atomic_t fscache_n_op_pend;
atomic_t fscache_n_op_run;
atomic_t fscache_n_op_enqueue;
atomic_t fscache_n_op_requeue;
atomic_t fscache_n_op_deferred_release;
atomic_t fscache_n_op_release;
atomic_t fscache_n_op_gc;
atomic_t fscache_n_op_cancelled;
atomic_t fscache_n_op_rejected;
atomic_t fscache_n_attr_changed;
atomic_t fscache_n_attr_changed_ok;
atomic_t fscache_n_attr_changed_nobufs;
atomic_t fscache_n_attr_changed_nomem;
atomic_t fscache_n_attr_changed_calls;
atomic_t fscache_n_allocs;
atomic_t fscache_n_allocs_ok;
atomic_t fscache_n_allocs_wait;
atomic_t fscache_n_allocs_nobufs;
atomic_t fscache_n_allocs_intr;
atomic_t fscache_n_allocs_object_dead;
atomic_t fscache_n_alloc_ops;
atomic_t fscache_n_alloc_op_waits;
atomic_t fscache_n_retrievals;
atomic_t fscache_n_retrievals_ok;
atomic_t fscache_n_retrievals_wait;
atomic_t fscache_n_retrievals_nodata;
atomic_t fscache_n_retrievals_nobufs;
atomic_t fscache_n_retrievals_intr;
atomic_t fscache_n_retrievals_nomem;
atomic_t fscache_n_retrievals_object_dead;
atomic_t fscache_n_retrieval_ops;
atomic_t fscache_n_retrieval_op_waits;
atomic_t fscache_n_stores;
atomic_t fscache_n_stores_ok;
atomic_t fscache_n_stores_again;
atomic_t fscache_n_stores_nobufs;
atomic_t fscache_n_stores_oom;
atomic_t fscache_n_store_ops;
atomic_t fscache_n_store_calls;
atomic_t fscache_n_store_pages;
atomic_t fscache_n_store_radix_deletes;
atomic_t fscache_n_store_pages_over_limit;
atomic_t fscache_n_store_vmscan_not_storing;
atomic_t fscache_n_store_vmscan_gone;
atomic_t fscache_n_store_vmscan_busy;
atomic_t fscache_n_store_vmscan_cancelled;
atomic_t fscache_n_marks;
atomic_t fscache_n_uncaches;
atomic_t fscache_n_acquires;
atomic_t fscache_n_acquires_null;
atomic_t fscache_n_acquires_no_cache;
atomic_t fscache_n_acquires_ok;
atomic_t fscache_n_acquires_nobufs;
atomic_t fscache_n_acquires_oom;
atomic_t fscache_n_updates;
atomic_t fscache_n_updates_null;
atomic_t fscache_n_updates_run;
atomic_t fscache_n_relinquishes;
atomic_t fscache_n_relinquishes_null;
atomic_t fscache_n_relinquishes_waitcrt;
atomic_t fscache_n_relinquishes_retire;
atomic_t fscache_n_cookie_index;
atomic_t fscache_n_cookie_data;
atomic_t fscache_n_cookie_special;
atomic_t fscache_n_object_alloc;
atomic_t fscache_n_object_no_alloc;
atomic_t fscache_n_object_lookups;
atomic_t fscache_n_object_lookups_negative;
atomic_t fscache_n_object_lookups_positive;
atomic_t fscache_n_object_lookups_timed_out;
atomic_t fscache_n_object_created;
atomic_t fscache_n_object_avail;
atomic_t fscache_n_object_dead;
atomic_t fscache_n_checkaux_none;
atomic_t fscache_n_checkaux_okay;
atomic_t fscache_n_checkaux_update;
atomic_t fscache_n_checkaux_obsolete;
atomic_t fscache_n_cop_alloc_object;
atomic_t fscache_n_cop_lookup_object;
atomic_t fscache_n_cop_lookup_complete;
atomic_t fscache_n_cop_grab_object;
atomic_t fscache_n_cop_update_object;
atomic_t fscache_n_cop_drop_object;
atomic_t fscache_n_cop_put_object;
atomic_t fscache_n_cop_sync_cache;
atomic_t fscache_n_cop_attr_changed;
atomic_t fscache_n_cop_read_or_alloc_page;
atomic_t fscache_n_cop_read_or_alloc_pages;
atomic_t fscache_n_cop_allocate_page;
atomic_t fscache_n_cop_allocate_pages;
atomic_t fscache_n_cop_write_page;
atomic_t fscache_n_cop_uncache_page;
atomic_t fscache_n_cop_dissociate_pages;
static int fscache_stats_show(struct seq_file *m, void *v)
static int fscache_stats_open(struct inode *inode, struct file *file)
const struct file_operations fscache_stats_fops = ;