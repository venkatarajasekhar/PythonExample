static struct signal_struct init_signals = INIT_SIGNALS(init_signals);
static struct sighand_struct init_sighand = INIT_SIGHAND(init_sighand);
struct task_struct init_task = INIT_TASK(init_task);
EXPORT_SYMBOL(init_task);
union thread_union init_thread_union __init_task_data =
;
union thread_union cpu0_irqstack
__attribute__((__section__(".data..init_irqstack"))) =
;
