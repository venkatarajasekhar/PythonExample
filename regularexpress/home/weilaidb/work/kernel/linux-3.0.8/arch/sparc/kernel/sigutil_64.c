int save_fpu_state(struct pt_regs *regs, __siginfo_fpu_t __user *fpu)
int restore_fpu_state(struct pt_regs *regs, __siginfo_fpu_t __user *fpu)
int save_rwin_state(int wsaved, __siginfo_rwin_t __user *rwin)
int restore_rwin_state(__siginfo_rwin_t __user *rp)
