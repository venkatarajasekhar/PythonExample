#define _ASM_SPINLOCK_H
static inline int arch_spin_is_locked(arch_spinlock_t *lock)
#define arch_spin_lock_flags(lock, flags) arch_spin_lock(lock)
#define arch_spin_unlock_wait(x) \
while (arch_spin_is_locked(x))
static inline int arch_spin_is_contended(arch_spinlock_t *lock)
#define arch_spin_is_contended	arch_spin_is_contended
static inline void arch_spin_lock(arch_spinlock_t *lock)
static inline void arch_spin_unlock(arch_spinlock_t *lock)
static inline unsigned int arch_spin_trylock(arch_spinlock_t *lock)
#define arch_read_can_lock(rw)	((rw)->lock >= 0)
#define arch_write_can_lock(rw)	(!(rw)->lock)
static inline void arch_read_lock(arch_rwlock_t *rw)
static inline void arch_read_unlock(arch_rwlock_t *rw)
static inline void arch_write_lock(arch_rwlock_t *rw)
static inline void arch_write_unlock(arch_rwlock_t *rw)
static inline int arch_read_trylock(arch_rwlock_t *rw)
static inline int arch_write_trylock(arch_rwlock_t *rw)
#define arch_read_lock_flags(lock, flags) arch_read_lock(lock)
#define arch_write_lock_flags(lock, flags) arch_write_lock(lock)
#define arch_spin_relax(lock)	cpu_relax()
#define arch_read_relax(lock)	cpu_relax()
#define arch_write_relax(lock)	cpu_relax()
