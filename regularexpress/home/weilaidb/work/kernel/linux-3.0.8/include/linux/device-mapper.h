#define _LINUX_DEVICE_MAPPER_H
struct dm_dev;
struct dm_target;
struct dm_table;
struct mapped_device;
struct bio_vec;
typedef enum  status_type_t;
union map_info ;
typedef int (*dm_ctr_fn) (struct dm_target *target,
unsigned int argc, char **argv);
typedef void (*dm_dtr_fn) (struct dm_target *ti);
typedef int (*dm_map_fn) (struct dm_target *ti, struct bio *bio,
union map_info *map_context);
typedef int (*dm_map_request_fn) (struct dm_target *ti, struct request *clone,
union map_info *map_context);
typedef int (*dm_endio_fn) (struct dm_target *ti,
struct bio *bio, int error,
union map_info *map_context);
typedef int (*dm_request_endio_fn) (struct dm_target *ti,
struct request *clone, int error,
union map_info *map_context);
typedef void (*dm_flush_fn) (struct dm_target *ti);
typedef void (*dm_presuspend_fn) (struct dm_target *ti);
typedef void (*dm_postsuspend_fn) (struct dm_target *ti);
typedef int (*dm_preresume_fn) (struct dm_target *ti);
typedef void (*dm_resume_fn) (struct dm_target *ti);
typedef int (*dm_status_fn) (struct dm_target *ti, status_type_t status_type,
char *result, unsigned int maxlen);
typedef int (*dm_message_fn) (struct dm_target *ti, unsigned argc, char **argv);
typedef int (*dm_ioctl_fn) (struct dm_target *ti, unsigned int cmd,
unsigned long arg);
typedef int (*dm_merge_fn) (struct dm_target *ti, struct bvec_merge_data *bvm,
struct bio_vec *biovec, int max_size);
typedef int (*iterate_devices_callout_fn) (struct dm_target *ti,
struct dm_dev *dev,
sector_t start, sector_t len,
void *data);
typedef int (*dm_iterate_devices_fn) (struct dm_target *ti,
iterate_devices_callout_fn fn,
void *data);
typedef void (*dm_io_hints_fn) (struct dm_target *ti,
struct queue_limits *limits);
typedef int (*dm_busy_fn) (struct dm_target *ti);
void dm_error(const char *message);
int dm_set_device_limits(struct dm_target *ti, struct dm_dev *dev,
sector_t start, sector_t len, void *data);
struct dm_dev ;
int dm_get_device(struct dm_target *ti, const char *path, fmode_t mode,
struct dm_dev **result);
void dm_put_device(struct dm_target *ti, struct dm_dev *d);
struct target_type ;
struct dm_target ;
struct dm_target_callbacks ;
int dm_register_target(struct target_type *t);
void dm_unregister_target(struct target_type *t);
#define DM_ANY_MINOR (-1)
int dm_create(int minor, struct mapped_device **md);
struct mapped_device *dm_get_md(dev_t dev);
void dm_get(struct mapped_device *md);
void dm_put(struct mapped_device *md);
void dm_set_mdptr(struct mapped_device *md, void *ptr);
void *dm_get_mdptr(struct mapped_device *md);
int dm_suspend(struct mapped_device *md, unsigned suspend_flags);
int dm_resume(struct mapped_device *md);
uint32_t dm_get_event_nr(struct mapped_device *md);
int dm_wait_event(struct mapped_device *md, int event_nr);
uint32_t dm_next_uevent_seq(struct mapped_device *md);
void dm_uevent_add(struct mapped_device *md, struct list_head *elist);
const char *dm_device_name(struct mapped_device *md);
int dm_copy_name_and_uuid(struct mapped_device *md, char *name, char *uuid);
struct gendisk *dm_disk(struct mapped_device *md);
int dm_suspended(struct dm_target *ti);
int dm_noflush_suspending(struct dm_target *ti);
union map_info *dm_get_mapinfo(struct bio *bio);
union map_info *dm_get_rq_mapinfo(struct request *rq);
int dm_get_geometry(struct mapped_device *md, struct hd_geometry *geo);
int dm_set_geometry(struct mapped_device *md, struct hd_geometry *geo);
int dm_table_create(struct dm_table **result, fmode_t mode,
unsigned num_targets, struct mapped_device *md);
int dm_table_add_target(struct dm_table *t, const char *type,
sector_t start, sector_t len, char *params);
void dm_table_add_target_callbacks(struct dm_table *t, struct dm_target_callbacks *cb);
int dm_table_complete(struct dm_table *t);
struct dm_table *dm_get_live_table(struct mapped_device *md);
void dm_table_get(struct dm_table *t);
void dm_table_put(struct dm_table *t);
sector_t dm_table_get_size(struct dm_table *t);
unsigned int dm_table_get_num_targets(struct dm_table *t);
fmode_t dm_table_get_mode(struct dm_table *t);
struct mapped_device *dm_table_get_md(struct dm_table *t);
void dm_table_event(struct dm_table *t);
struct dm_table *dm_swap_table(struct mapped_device *md,
struct dm_table *t);
void *dm_vcalloc(unsigned long nmemb, unsigned long elem_size);
#define DM_NAME "device-mapper"
#define DMCRIT(f, arg...) \
printk(KERN_CRIT DM_NAME ": " DM_MSG_PREFIX ": " f "\n", ## arg)
#define DMERR(f, arg...) \
printk(KERN_ERR DM_NAME ": " DM_MSG_PREFIX ": " f "\n", ## arg)
#define DMERR_LIMIT(f, arg...) \
do  while (0)
#define DMWARN(f, arg...) \
printk(KERN_WARNING DM_NAME ": " DM_MSG_PREFIX ": " f "\n", ## arg)
#define DMWARN_LIMIT(f, arg...) \
do  while (0)
#define DMINFO(f, arg...) \
printk(KERN_INFO DM_NAME ": " DM_MSG_PREFIX ": " f "\n", ## arg)
#define DMINFO_LIMIT(f, arg...) \
do  while (0)
#  define DMDEBUG(f, arg...) \
printk(KERN_DEBUG DM_NAME ": " DM_MSG_PREFIX " DEBUG: " f "\n", ## arg)
#  define DMDEBUG_LIMIT(f, arg...) \
do  while (0)
#  define DMDEBUG(f, arg...) do  while (0)
#  define DMDEBUG_LIMIT(f, arg...) do  while (0)
#define DMEMIT(x...) sz += ((sz >= maxlen) ? \
0 : scnprintf(result + sz, maxlen - sz, x))
#define SECTOR_SHIFT 9
#define DM_ENDIO_INCOMPLETE	1
#define DM_ENDIO_REQUEUE	2
#define DM_MAPIO_SUBMITTED	0
#define DM_MAPIO_REMAPPED	1
#define DM_MAPIO_REQUEUE	DM_ENDIO_REQUEUE
#define dm_div_up(n, sz) (((n) + (sz) - 1) / (sz))
#define dm_sector_div_up(n, sz) ( \
\
)
#define dm_round_up(n, sz) (dm_div_up((n), (sz)) * (sz))
#define dm_array_too_big(fixed, obj, num) \
((num) > (UINT_MAX - (fixed)) / (obj))
#define dm_target_offset(ti, sector) ((sector) - (ti)->begin)
static inline sector_t to_sector(unsigned long n)
static inline unsigned long to_bytes(sector_t n)
void dm_dispatch_request(struct request *rq);
void dm_requeue_unmapped_request(struct request *rq);
void dm_kill_unmapped_request(struct request *rq, int error);
int dm_underlying_device_busy(struct request_queue *q);
