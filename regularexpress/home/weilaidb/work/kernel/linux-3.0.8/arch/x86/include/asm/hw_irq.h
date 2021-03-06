#define _ASM_X86_HW_IRQ_H
extern void apic_timer_interrupt(void);
extern void x86_platform_ipi(void);
extern void error_interrupt(void);
extern void irq_work_interrupt(void);
extern void spurious_interrupt(void);
extern void thermal_interrupt(void);
extern void reschedule_interrupt(void);
extern void mce_self_interrupt(void);
extern void invalidate_interrupt(void);
extern void invalidate_interrupt0(void);
extern void invalidate_interrupt1(void);
extern void invalidate_interrupt2(void);
extern void invalidate_interrupt3(void);
extern void invalidate_interrupt4(void);
extern void invalidate_interrupt5(void);
extern void invalidate_interrupt6(void);
extern void invalidate_interrupt7(void);
extern void invalidate_interrupt8(void);
extern void invalidate_interrupt9(void);
extern void invalidate_interrupt10(void);
extern void invalidate_interrupt11(void);
extern void invalidate_interrupt12(void);
extern void invalidate_interrupt13(void);
extern void invalidate_interrupt14(void);
extern void invalidate_interrupt15(void);
extern void invalidate_interrupt16(void);
extern void invalidate_interrupt17(void);
extern void invalidate_interrupt18(void);
extern void invalidate_interrupt19(void);
extern void invalidate_interrupt20(void);
extern void invalidate_interrupt21(void);
extern void invalidate_interrupt22(void);
extern void invalidate_interrupt23(void);
extern void invalidate_interrupt24(void);
extern void invalidate_interrupt25(void);
extern void invalidate_interrupt26(void);
extern void invalidate_interrupt27(void);
extern void invalidate_interrupt28(void);
extern void invalidate_interrupt29(void);
extern void invalidate_interrupt30(void);
extern void invalidate_interrupt31(void);
extern void irq_move_cleanup_interrupt(void);
extern void reboot_interrupt(void);
extern void threshold_interrupt(void);
extern void call_function_interrupt(void);
extern void call_function_single_interrupt(void);
#define IO_APIC_IRQ(x) (((x) >= NR_IRQS_LEGACY) || ((1<<(x)) & io_apic_irqs))
extern unsigned long io_apic_irqs;
extern void init_VISWS_APIC_irqs(void);
extern void setup_IO_APIC(void);
extern void disable_IO_APIC(void);
struct io_apic_irq_attr ;
static inline void set_io_apic_irq_attr(struct io_apic_irq_attr *irq_attr,
int ioapic, int ioapic_pin,
int trigger, int polarity)
struct irq_2_iommu ;
struct irq_cfg ;
extern int assign_irq_vector(int, struct irq_cfg *, const struct cpumask *);
extern void send_cleanup_vector(struct irq_cfg *);
struct irq_data;
int __ioapic_set_affinity(struct irq_data *, const struct cpumask *,
unsigned int *dest_id);
extern int IO_APIC_get_PCI_irq_vector(int bus, int devfn, int pin, struct io_apic_irq_attr *irq_attr);
extern void setup_ioapic_dest(void);
extern void enable_IO_APIC(void);
extern atomic_t irq_err_count;
extern atomic_t irq_mis_count;
extern void eisa_set_level_irq(unsigned int irq);
extern void smp_apic_timer_interrupt(struct pt_regs *);
extern void smp_spurious_interrupt(struct pt_regs *);
extern void smp_x86_platform_ipi(struct pt_regs *);
extern void smp_error_interrupt(struct pt_regs *);
extern asmlinkage void smp_irq_move_cleanup_interrupt(void);
extern void smp_reschedule_interrupt(struct pt_regs *);
extern void smp_call_function_interrupt(struct pt_regs *);
extern void smp_call_function_single_interrupt(struct pt_regs *);
extern void smp_invalidate_interrupt(struct pt_regs *);
extern asmlinkage void smp_invalidate_interrupt(struct pt_regs *);
extern void (*__initconst interrupt[NR_VECTORS-FIRST_EXTERNAL_VECTOR])(void);
typedef int vector_irq_t[NR_VECTORS];
DECLARE_PER_CPU(vector_irq_t, vector_irq);
extern void setup_vector_irq(int cpu);
extern void lock_vector_lock(void);
extern void unlock_vector_lock(void);
extern void __setup_vector_irq(int cpu);
static inline void lock_vector_lock(void)
static inline void unlock_vector_lock(void)
static inline void __setup_vector_irq(int cpu)
