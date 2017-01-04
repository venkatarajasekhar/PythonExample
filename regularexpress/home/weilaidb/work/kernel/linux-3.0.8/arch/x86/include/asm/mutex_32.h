#define _ASM_X86_MUTEX_32_H
#define __mutex_fastpath_lock(count, fail_fn)			\
do  while (0)
static inline int __mutex_fastpath_lock_retval(atomic_t *count,
int (*fail_fn)(atomic_t *))
#define __mutex_fastpath_unlock(count, fail_fn)			\
do  while (0)
#define __mutex_slowpath_needs_to_unlock()	1
static inline int __mutex_fastpath_trylock(atomic_t *count,
int (*fail_fn)(atomic_t *))
