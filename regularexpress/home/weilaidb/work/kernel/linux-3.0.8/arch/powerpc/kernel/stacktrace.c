static void save_context_stack(struct stack_trace *trace, unsigned long sp,
struct task_struct *tsk, int savesched)
void save_stack_trace(struct stack_trace *trace)
EXPORT_SYMBOL_GPL(save_stack_trace);
void save_stack_trace_tsk(struct task_struct *tsk, struct stack_trace *trace)
EXPORT_SYMBOL_GPL(save_stack_trace_tsk);
