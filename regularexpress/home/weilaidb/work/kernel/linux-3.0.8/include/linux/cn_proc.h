#define CN_PROC_H
enum proc_cn_mcast_op ;
struct proc_event ;
void proc_fork_connector(struct task_struct *task);
void proc_exec_connector(struct task_struct *task);
void proc_id_connector(struct task_struct *task, int which_id);
void proc_sid_connector(struct task_struct *task);
void proc_exit_connector(struct task_struct *task);
static inline void proc_fork_connector(struct task_struct *task)
static inline void proc_exec_connector(struct task_struct *task)
static inline void proc_id_connector(struct task_struct *task,
int which_id)
static inline void proc_sid_connector(struct task_struct *task)
static inline void proc_exit_connector(struct task_struct *task)
