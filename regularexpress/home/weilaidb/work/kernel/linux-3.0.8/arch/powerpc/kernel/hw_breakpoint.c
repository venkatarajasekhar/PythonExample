static DEFINE_PER_CPU(struct perf_event *, bp_per_reg);
int hw_breakpoint_slots(int type)
int arch_install_hw_breakpoint(struct perf_event *bp)
void arch_uninstall_hw_breakpoint(struct perf_event *bp)
void arch_unregister_hw_breakpoint(struct perf_event *bp)
int arch_check_bp_in_kernelspace(struct perf_event *bp)
int arch_bp_generic_fields(int type, int *gen_bp_type)
int arch_validate_hwbkpt_settings(struct perf_event *bp)
void thread_change_pc(struct task_struct *tsk, struct pt_regs *regs)
int __kprobes hw_breakpoint_handler(struct die_args *args)
int __kprobes single_step_dabr_instruction(struct die_args *args)
int __kprobes hw_breakpoint_exceptions_notify(
struct notifier_block *unused, unsigned long val, void *data)
void flush_ptrace_hw_breakpoint(struct task_struct *tsk)
void hw_breakpoint_pmu_read(struct perf_event *bp)
