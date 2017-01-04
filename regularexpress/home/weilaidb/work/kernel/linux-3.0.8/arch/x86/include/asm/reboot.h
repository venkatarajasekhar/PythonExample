#define _ASM_X86_REBOOT_H
struct pt_regs;
struct machine_ops ;
extern struct machine_ops machine_ops;
void native_machine_crash_shutdown(struct pt_regs *regs);
void native_machine_shutdown(void);
void machine_real_restart(unsigned int type);
#define MRR_BIOS	0
#define MRR_APM		1
typedef void (*nmi_shootdown_cb)(int, struct die_args*);
void nmi_shootdown_cpus(nmi_shootdown_cb callback);