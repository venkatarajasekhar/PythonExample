asmlinkage void ret_from_fork(void);
void (*pm_idle)(void);
EXPORT_SYMBOL(pm_idle);
void (*pm_power_off)(void);
EXPORT_SYMBOL(pm_power_off);
static void default_idle(void)
void (*idle)(void) = default_idle;
void cpu_idle(void)
void machine_restart(char * __unused)
void machine_halt(void)
void machine_power_off(void)
void show_regs(struct pt_regs * regs)
int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags)
EXPORT_SYMBOL(kernel_thread);
void flush_thread(void)
asmlinkage int m68k_fork(struct pt_regs *regs)
asmlinkage int m68k_vfork(struct pt_regs *regs)
asmlinkage int m68k_clone(struct pt_regs *regs)
int copy_thread(unsigned long clone_flags,
unsigned long usp, unsigned long topstk,
struct task_struct * p, struct pt_regs * regs)
int dump_fpu(struct pt_regs *regs, struct user_m68kfp_struct *fpu)
EXPORT_SYMBOL(dump_fpu);
void dump(struct pt_regs *fp)
asmlinkage int sys_execve(const char *name,
const char *const *argv,
const char *const *envp)
unsigned long get_wchan(struct task_struct *p)
unsigned long thread_saved_pc(struct task_struct *tsk)
