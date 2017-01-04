#define _ASM_PARISC_IRQ_H
#define NO_IRQ		(-1)
#define GSC_IRQ_BASE	16
#define GSC_IRQ_MAX	63
#define CPU_IRQ_BASE	64
#define CPU_IRQ_BASE	16
#define TIMER_IRQ	(CPU_IRQ_BASE + 0)
#define	IPI_IRQ		(CPU_IRQ_BASE + 1)
#define CPU_IRQ_MAX	(CPU_IRQ_BASE + (BITS_PER_LONG - 1))
#define NR_IRQS		(CPU_IRQ_MAX + 1)
static __inline__ int irq_canonicalize(int irq)
struct irq_chip;
struct irq_data;
void cpu_ack_irq(struct irq_data *d);
void cpu_eoi_irq(struct irq_data *d);
extern int txn_alloc_irq(unsigned int nbits);
extern int txn_claim_irq(int);
extern unsigned int txn_alloc_data(unsigned int);
extern unsigned long txn_alloc_addr(unsigned int);
extern unsigned long txn_affinity_addr(unsigned int irq, int cpu);
extern int cpu_claim_irq(unsigned int irq, struct irq_chip *, void *);
extern int cpu_check_affinity(struct irq_data *d, const struct cpumask *dest);
extern struct tasklet_struct power_tasklet;
