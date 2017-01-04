#define _FIB_LOOKUP_H
struct fib_alias ;
#define FA_S_ACCESSED	0x01
static inline void fib_alias_accessed(struct fib_alias *fa)
extern void fib_release_info(struct fib_info *);
extern struct fib_info *fib_create_info(struct fib_config *cfg);
extern int fib_nh_match(struct fib_config *cfg, struct fib_info *fi);
extern int fib_dump_info(struct sk_buff *skb, u32 pid, u32 seq, int event,
u32 tb_id, u8 type, __be32 dst,
int dst_len, u8 tos, struct fib_info *fi,
unsigned int);
extern void rtmsg_fib(int event, __be32 key, struct fib_alias *fa,
int dst_len, u32 tb_id, struct nl_info *info,
unsigned int nlm_flags);
extern struct fib_alias *fib_find_alias(struct list_head *fah,
u8 tos, u32 prio);
extern int fib_detect_death(struct fib_info *fi, int order,
struct fib_info **last_resort,
int *last_idx, int dflt);
static inline void fib_result_assign(struct fib_result *res,
struct fib_info *fi)
struct fib_prop ;
extern const struct fib_prop fib_props[RTN_MAX + 1];