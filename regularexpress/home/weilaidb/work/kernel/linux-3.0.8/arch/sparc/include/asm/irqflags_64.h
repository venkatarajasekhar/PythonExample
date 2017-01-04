#define _ASM_IRQFLAGS_H
static inline notrace unsigned long arch_local_save_flags(void)
static inline notrace void arch_local_irq_restore(unsigned long flags)
static inline notrace void arch_local_irq_disable(void)
static inline notrace void arch_local_irq_enable(void)
static inline notrace int arch_irqs_disabled_flags(unsigned long flags)
static inline notrace int arch_irqs_disabled(void)
static inline notrace unsigned long arch_local_irq_save(void)
