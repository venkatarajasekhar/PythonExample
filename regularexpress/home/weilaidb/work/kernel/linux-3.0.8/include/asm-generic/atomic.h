#define __ASM_GENERIC_ATOMIC_H
#error not SMP safe
#define ATOMIC_INIT(i)
#define atomic_read(v)	(*(volatile int *)&(v)->counter)
#define atomic_set(v, i) (((v)->counter) = (i))
static inline int atomic_add_return(int i, atomic_t *v)
static inline int atomic_sub_return(int i, atomic_t *v)
static inline int atomic_add_negative(int i, atomic_t *v)
static inline void atomic_add(int i, atomic_t *v)
static inline void atomic_sub(int i, atomic_t *v)
static inline void atomic_inc(atomic_t *v)
static inline void atomic_dec(atomic_t *v)
#define atomic_dec_return(v)		atomic_sub_return(1, (v))
#define atomic_inc_return(v)		atomic_add_return(1, (v))
#define atomic_sub_and_test(i, v)	(atomic_sub_return((i), (v)) == 0)
#define atomic_dec_and_test(v)		(atomic_sub_return(1, (v)) == 0)
#define atomic_inc_and_test(v)		(atomic_add_return(1, (v)) == 0)
#define atomic_xchg(ptr, v)		(xchg(&(ptr)->counter, (v)))
#define atomic_cmpxchg(v, old, new)	(cmpxchg(&((v)->counter), (old), (new)))
#define cmpxchg_local(ptr, o, n)				  	       \
((__typeof__(*(ptr)))__cmpxchg_local_generic((ptr), (unsigned long)(o),\
(unsigned long)(n), sizeof(*(ptr))))
#define cmpxchg64_local(ptr, o, n) __cmpxchg64_local_generic((ptr), (o), (n))
static inline int atomic_add_unless(atomic_t *v, int a, int u)
#define atomic_inc_not_zero(v) atomic_add_unless((v), 1, 0)
static inline void atomic_clear_mask(unsigned long mask, unsigned long *addr)
#define smp_mb__before_atomic_dec()	barrier()
#define smp_mb__after_atomic_dec()	barrier()
#define smp_mb__before_atomic_inc()	barrier()
#define smp_mb__after_atomic_inc()	barrier()
