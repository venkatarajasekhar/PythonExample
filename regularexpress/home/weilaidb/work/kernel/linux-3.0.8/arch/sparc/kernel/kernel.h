#define __SPARC_KERNEL_H
extern const char *sparc_pmu_type;
extern unsigned int fsr_storage;
extern int ncpus_probed;
struct seq_file;
extern void cpucap_info(struct seq_file *);
static inline unsigned long kimage_addr_to_ra(const char *p)
extern void cpu_probe(void);
extern void handle_hw_divzero(struct pt_regs *regs, unsigned long pc,
unsigned long npc, unsigned long psr);
extern int do_user_muldiv (struct pt_regs *, unsigned long);
extern struct irqaction static_irqaction[];
extern int static_irq_count;
extern spinlock_t irq_action_lock;
extern void unexpected_irq(int irq, void *dev_id, struct pt_regs * regs);
extern void init_IRQ(void);
extern void sun4c_init_IRQ(void);
extern unsigned int lvl14_resolution;
extern void sun4m_init_IRQ(void);
extern void sun4m_unmask_profile_irq(void);
extern void sun4m_clear_profile_irq(int cpu);
extern spinlock_t sun4d_imsk_lock;
extern void sun4d_init_IRQ(void);
extern int sun4d_request_irq(unsigned int irq,
irq_handler_t handler,
unsigned long irqflags,
const char *devname, void *dev_id);
extern int show_sun4d_interrupts(struct seq_file *, void *);
extern void sun4d_distribute_irqs(void);
extern void sun4d_free_irq(unsigned int irq, void *dev_id);
extern unsigned int t_nmi[];
extern unsigned int linux_trap_ipi15_sun4d[];
extern unsigned int linux_trap_ipi15_sun4m[];
extern struct tt_entry trapbase_cpu1;
extern struct tt_entry trapbase_cpu2;
extern struct tt_entry trapbase_cpu3;
extern char cputypval[];
extern unsigned long lvl14_save[4];
extern unsigned int real_irq_entry[];
extern unsigned int smp4d_ticker[];
extern unsigned int patchme_maybe_smp_msg[];
extern void floppy_hardint(void);
extern int __smp4m_processor_id(void);
extern int __smp4d_processor_id(void);
extern unsigned long sun4m_cpu_startup;
extern unsigned long sun4d_cpu_startup;
