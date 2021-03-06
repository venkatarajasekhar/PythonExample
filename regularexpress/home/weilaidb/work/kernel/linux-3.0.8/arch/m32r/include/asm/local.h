#define __M32R_LOCAL_H
typedef struct  local_t;
#define LOCAL_INIT(i)
#define local_read(l)	((l)->counter)
#define local_set(l, i)	(((l)->counter) = (i))
static inline long local_add_return(long i, local_t *l)
static inline long local_sub_return(long i, local_t *l)
#define local_add(i, l) ((void) local_add_return((i), (l)))
#define local_sub(i, l) ((void) local_sub_return((i), (l)))
#define local_sub_and_test(i, l) (local_sub_return((i), (l)) == 0)
static inline long local_inc_return(local_t *l)
static inline long local_dec_return(local_t *l)
#define local_inc(l) ((void)local_inc_return(l))
#define local_dec(l) ((void)local_dec_return(l))
#define local_inc_and_test(l) (local_inc_return(l) == 0)
#define local_dec_and_test(l) (local_dec_return(l) == 0)
#define local_add_negative(i, l) (local_add_return((i), (l)) < 0)
#define local_cmpxchg(l, o, n) (cmpxchg_local(&((l)->counter), (o), (n)))
#define local_xchg(v, new) (xchg_local(&((l)->counter), new))
static inline int local_add_unless(local_t *l, long a, long u)
#define local_inc_not_zero(l) local_add_unless((l), 1, 0)
static inline void local_clear_mask(unsigned long  mask, local_t *addr)
static inline void local_set_mask(unsigned long  mask, local_t *addr)
#define smp_mb__before_local_dec()	barrier()
#define smp_mb__after_local_dec()	barrier()
#define smp_mb__before_local_inc()	barrier()
#define smp_mb__after_local_inc()	barrier()
#define __local_inc(l)		((l)->a.counter++)
#define __local_dec(l)		((l)->a.counter++)
#define __local_add(i, l)	((l)->a.counter += (i))
#define __local_sub(i, l)	((l)->a.counter -= (i))
