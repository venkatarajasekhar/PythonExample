#define __ASM_GENERIC_MMU_CONTEXT_H
struct task_struct;
struct mm_struct;
static inline void enter_lazy_tlb(struct mm_struct *mm,
struct task_struct *tsk)
static inline int init_new_context(struct task_struct *tsk,
struct mm_struct *mm)
static inline void destroy_context(struct mm_struct *mm)
static inline void deactivate_mm(struct task_struct *task,
struct mm_struct *mm)
static inline void switch_mm(struct mm_struct *prev,
struct mm_struct *next,
struct task_struct *tsk)
static inline void activate_mm(struct mm_struct *prev_mm,
struct mm_struct *next_mm)
