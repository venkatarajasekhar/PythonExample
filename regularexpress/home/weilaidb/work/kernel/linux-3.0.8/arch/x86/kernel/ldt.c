static void flush_ldt(void *current_mm)
static int alloc_ldt(mm_context_t *pc, int mincount, int reload)
static inline int copy_ldt(mm_context_t *new, mm_context_t *old)
int init_new_context(struct task_struct *tsk, struct mm_struct *mm)
void destroy_context(struct mm_struct *mm)
static int read_ldt(void __user *ptr, unsigned long bytecount)
static int read_default_ldt(void __user *ptr, unsigned long bytecount)
static int write_ldt(void __user *ptr, unsigned long bytecount, int oldmode)
asmlinkage int sys_modify_ldt(int func, void __user *ptr,
unsigned long bytecount)
