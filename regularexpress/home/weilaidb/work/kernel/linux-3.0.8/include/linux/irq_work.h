#define _LINUX_IRQ_WORK_H
struct irq_work ;
static inline
void init_irq_work(struct irq_work *entry, void (*func)(struct irq_work *))
bool irq_work_queue(struct irq_work *entry);
void irq_work_run(void);
void irq_work_sync(struct irq_work *entry);
