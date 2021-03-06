#define __ASM_SH_SYSCALLS_64_H
struct pt_regs;
asmlinkage int sys_fork(unsigned long r2, unsigned long r3,
unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs *pregs);
asmlinkage int sys_clone(unsigned long clone_flags, unsigned long newsp,
unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs *pregs);
asmlinkage int sys_vfork(unsigned long r2, unsigned long r3,
unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs *pregs);
asmlinkage int sys_execve(const char *ufilename, char **uargv,
char **uenvp, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs *pregs);
asmlinkage long long do_syscall_trace_enter(struct pt_regs *regs);
asmlinkage void do_syscall_trace_leave(struct pt_regs *regs);
