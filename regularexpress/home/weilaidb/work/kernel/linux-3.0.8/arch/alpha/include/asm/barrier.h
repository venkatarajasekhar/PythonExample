#define __BARRIER_H
#define mb() \
__asm__ __volatile__("mb": : :"memory")
#define rmb() \
__asm__ __volatile__("mb": : :"memory")
#define wmb() \
__asm__ __volatile__("wmb": : :"memory")
#define read_barrier_depends() \
__asm__ __volatile__("mb": : :"memory")
#define __ASM_SMP_MB	"\tmb\n"
#define smp_mb()	mb()
#define smp_rmb()	rmb()
#define smp_wmb()	wmb()
#define smp_read_barrier_depends()	read_barrier_depends()
#define __ASM_SMP_MB
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#define smp_read_barrier_depends()	do  while (0)
#define set_mb(var, value) \
do  while (0)
