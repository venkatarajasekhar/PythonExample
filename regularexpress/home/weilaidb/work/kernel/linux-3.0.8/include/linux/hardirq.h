#define LINUX_HARDIRQ_H
#define PREEMPT_BITS	8
#define SOFTIRQ_BITS	8
#define NMI_BITS	1
#define MAX_HARDIRQ_BITS 10
# define HARDIRQ_BITS	MAX_HARDIRQ_BITS
#if HARDIRQ_BITS > MAX_HARDIRQ_BITS
#error HARDIRQ_BITS too high!
#define PREEMPT_SHIFT	0
#define SOFTIRQ_SHIFT	(PREEMPT_SHIFT + PREEMPT_BITS)
#define HARDIRQ_SHIFT	(SOFTIRQ_SHIFT + SOFTIRQ_BITS)
#define NMI_SHIFT	(HARDIRQ_SHIFT + HARDIRQ_BITS)
#define __IRQ_MASK(x)	((1UL << (x))-1)
#define PREEMPT_MASK	(__IRQ_MASK(PREEMPT_BITS) << PREEMPT_SHIFT)
#define SOFTIRQ_MASK	(__IRQ_MASK(SOFTIRQ_BITS) << SOFTIRQ_SHIFT)
#define HARDIRQ_MASK	(__IRQ_MASK(HARDIRQ_BITS) << HARDIRQ_SHIFT)
#define NMI_MASK	(__IRQ_MASK(NMI_BITS)     << NMI_SHIFT)
#define PREEMPT_OFFSET	(1UL << PREEMPT_SHIFT)
#define SOFTIRQ_OFFSET	(1UL << SOFTIRQ_SHIFT)
#define HARDIRQ_OFFSET	(1UL << HARDIRQ_SHIFT)
#define NMI_OFFSET	(1UL << NMI_SHIFT)
#define SOFTIRQ_DISABLE_OFFSET	(2 * SOFTIRQ_OFFSET)
#define PREEMPT_ACTIVE_BITS	1
#define PREEMPT_ACTIVE_SHIFT	(NMI_SHIFT + NMI_BITS)
#define PREEMPT_ACTIVE	(__IRQ_MASK(PREEMPT_ACTIVE_BITS) << PREEMPT_ACTIVE_SHIFT)
#if PREEMPT_ACTIVE < (1 << (NMI_SHIFT + NMI_BITS))
#error PREEMPT_ACTIVE is too low!
#define hardirq_count()	(preempt_count() & HARDIRQ_MASK)
#define softirq_count()	(preempt_count() & SOFTIRQ_MASK)
#define irq_count()	(preempt_count() & (HARDIRQ_MASK | SOFTIRQ_MASK \
| NMI_MASK))
#define in_irq()		(hardirq_count())
#define in_softirq()		(softirq_count())
#define in_interrupt()		(irq_count())
#define in_serving_softirq()	(softirq_count() & SOFTIRQ_OFFSET)
#define in_nmi()	(preempt_count() & NMI_MASK)
#if defined(CONFIG_PREEMPT)
# define PREEMPT_CHECK_OFFSET 1
# define PREEMPT_CHECK_OFFSET 0
#define in_atomic()	((preempt_count() & ~PREEMPT_ACTIVE) != 0)
#define in_atomic_preempt_off() \
((preempt_count() & ~PREEMPT_ACTIVE) != PREEMPT_CHECK_OFFSET)
# define preemptible()	(preempt_count() == 0 && !irqs_disabled())
# define IRQ_EXIT_OFFSET (HARDIRQ_OFFSET-1)
# define preemptible()	0
# define IRQ_EXIT_OFFSET HARDIRQ_OFFSET
#if defined(CONFIG_SMP) || defined(CONFIG_GENERIC_HARDIRQS)
extern void synchronize_irq(unsigned int irq);
# define synchronize_irq(irq)	barrier()
struct task_struct;
#if !defined(CONFIG_VIRT_CPU_ACCOUNTING) && !defined(CONFIG_IRQ_TIME_ACCOUNTING)
static inline void account_system_vtime(struct task_struct *tsk)
extern void account_system_vtime(struct task_struct *tsk);
#if defined(CONFIG_NO_HZ)
#if defined(CONFIG_TINY_RCU) || defined(CONFIG_TINY_PREEMPT_RCU)
extern void rcu_enter_nohz(void);
extern void rcu_exit_nohz(void);
static inline void rcu_irq_enter(void)
static inline void rcu_irq_exit(void)
static inline void rcu_nmi_enter(void)
static inline void rcu_nmi_exit(void)
extern void rcu_irq_enter(void);
extern void rcu_irq_exit(void);
extern void rcu_nmi_enter(void);
extern void rcu_nmi_exit(void);
# define rcu_irq_enter() do  while (0)
# define rcu_irq_exit() do  while (0)
# define rcu_nmi_enter() do  while (0)
# define rcu_nmi_exit() do  while (0)
#define __irq_enter()					\
do  while (0)
extern void irq_enter(void);
#define __irq_exit()					\
do  while (0)
extern void irq_exit(void);
#define nmi_enter()						\
do  while (0)
#define nmi_exit()						\
do  while (0)
