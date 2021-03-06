#define _ASM_X86_PROTO_H
void early_idt_handler(void);
void system_call(void);
void syscall_init(void);
void ia32_syscall(void);
void ia32_cstar_target(void);
void ia32_sysenter_target(void);
void syscall32_cpu_init(void);
void x86_configure_nx(void);
void x86_report_nx(void);
extern int reboot_force;
long do_arch_prctl(struct task_struct *task, int code, unsigned long addr);
