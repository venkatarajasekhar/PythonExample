#define _LINUX_RING_BUFFER_H
struct ring_buffer;
struct ring_buffer_iter;
struct ring_buffer_event ;
enum ring_buffer_type ;
unsigned ring_buffer_event_length(struct ring_buffer_event *event);
void *ring_buffer_event_data(struct ring_buffer_event *event);
void ring_buffer_discard_commit(struct ring_buffer *buffer,
struct ring_buffer_event *event);
struct ring_buffer *
__ring_buffer_alloc(unsigned long size, unsigned flags, struct lock_class_key *key);
#define ring_buffer_alloc(size, flags)			\
()
void ring_buffer_free(struct ring_buffer *buffer);
int ring_buffer_resize(struct ring_buffer *buffer, unsigned long size);
void ring_buffer_change_overwrite(struct ring_buffer *buffer, int val);
struct ring_buffer_event *ring_buffer_lock_reserve(struct ring_buffer *buffer,
unsigned long length);
int ring_buffer_unlock_commit(struct ring_buffer *buffer,
struct ring_buffer_event *event);
int ring_buffer_write(struct ring_buffer *buffer,
unsigned long length, void *data);
struct ring_buffer_event *
ring_buffer_peek(struct ring_buffer *buffer, int cpu, u64 *ts,
unsigned long *lost_events);
struct ring_buffer_event *
ring_buffer_consume(struct ring_buffer *buffer, int cpu, u64 *ts,
unsigned long *lost_events);
struct ring_buffer_iter *
ring_buffer_read_prepare(struct ring_buffer *buffer, int cpu);
void ring_buffer_read_prepare_sync(void);
void ring_buffer_read_start(struct ring_buffer_iter *iter);
void ring_buffer_read_finish(struct ring_buffer_iter *iter);
struct ring_buffer_event *
ring_buffer_iter_peek(struct ring_buffer_iter *iter, u64 *ts);
struct ring_buffer_event *
ring_buffer_read(struct ring_buffer_iter *iter, u64 *ts);
void ring_buffer_iter_reset(struct ring_buffer_iter *iter);
int ring_buffer_iter_empty(struct ring_buffer_iter *iter);
unsigned long ring_buffer_size(struct ring_buffer *buffer);
void ring_buffer_reset_cpu(struct ring_buffer *buffer, int cpu);
void ring_buffer_reset(struct ring_buffer *buffer);
int ring_buffer_swap_cpu(struct ring_buffer *buffer_a,
struct ring_buffer *buffer_b, int cpu);
static inline int
ring_buffer_swap_cpu(struct ring_buffer *buffer_a,
struct ring_buffer *buffer_b, int cpu)
int ring_buffer_empty(struct ring_buffer *buffer);
int ring_buffer_empty_cpu(struct ring_buffer *buffer, int cpu);
void ring_buffer_record_disable(struct ring_buffer *buffer);
void ring_buffer_record_enable(struct ring_buffer *buffer);
void ring_buffer_record_disable_cpu(struct ring_buffer *buffer, int cpu);
void ring_buffer_record_enable_cpu(struct ring_buffer *buffer, int cpu);
unsigned long ring_buffer_entries(struct ring_buffer *buffer);
unsigned long ring_buffer_overruns(struct ring_buffer *buffer);
unsigned long ring_buffer_entries_cpu(struct ring_buffer *buffer, int cpu);
unsigned long ring_buffer_overrun_cpu(struct ring_buffer *buffer, int cpu);
unsigned long ring_buffer_commit_overrun_cpu(struct ring_buffer *buffer, int cpu);
u64 ring_buffer_time_stamp(struct ring_buffer *buffer, int cpu);
void ring_buffer_normalize_time_stamp(struct ring_buffer *buffer,
int cpu, u64 *ts);
void ring_buffer_set_clock(struct ring_buffer *buffer,
u64 (*clock)(void));
size_t ring_buffer_page_len(void *page);
void *ring_buffer_alloc_read_page(struct ring_buffer *buffer);
void ring_buffer_free_read_page(struct ring_buffer *buffer, void *data);
int ring_buffer_read_page(struct ring_buffer *buffer, void **data_page,
size_t len, int cpu, int full);
struct trace_seq;
int ring_buffer_print_entry_header(struct trace_seq *s);
int ring_buffer_print_page_header(struct trace_seq *s);
enum ring_buffer_flags ;
