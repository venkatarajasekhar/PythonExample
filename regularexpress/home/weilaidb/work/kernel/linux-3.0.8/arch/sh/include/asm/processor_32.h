#define __ASM_SH_PROCESSOR_32_H
#define current_text_addr() ()
#define CCN_PVR		0xff000030
#define CCN_CVR		0xff000040
#define CCN_PRR		0xff000044
#define TASK_SIZE	0x7c000000UL
#define STACK_TOP	TASK_SIZE
#define STACK_TOP_MAX	STACK_TOP
#define TASK_UNMAPPED_BASE	(TASK_SIZE / 3)
#define SR_DSP		0x00001000
#define SR_IMASK	0x000000f0
#define SR_FD		0x00008000
#define SR_MD		0x40000000
struct sh_dsp_struct ;
struct sh_fpu_hard_struct ;
struct sh_fpu_soft_struct ;
union thread_xstate ;
struct thread_struct ;
#define INIT_THREAD
struct task_struct;
extern void start_thread(struct pt_regs *regs, unsigned long new_pc, unsigned long new_sp);
extern void release_thread(struct task_struct *);
void prepare_to_copy(struct task_struct *tsk);
extern int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags);
#define copy_segments(p, mm)	do  while(0)
#define release_segments(mm)	do  while(0)
static __inline__ void disable_fpu(void)
static __inline__ void enable_fpu(void)
#define FPSCR_INIT  0x00080000
#define	FPSCR_CAUSE_MASK	0x0001f000
#define	FPSCR_FLAG_MASK		0x0000007c
#define thread_saved_pc(tsk)	(tsk->thread.pc)
void show_trace(struct task_struct *tsk, unsigned long *sp,
struct pt_regs *regs);
void show_code(struct pt_regs *regs);
static inline void show_code(struct pt_regs *regs)
extern unsigned long get_wchan(struct task_struct *p);
#define KSTK_EIP(tsk)  (task_pt_regs(tsk)->pc)
#define KSTK_ESP(tsk)  (task_pt_regs(tsk)->regs[15])
#if defined(CONFIG_CPU_SH2A) || defined(CONFIG_CPU_SH4)
#define PREFETCH_STRIDE		L1_CACHE_BYTES
#define ARCH_HAS_PREFETCH
#define ARCH_HAS_PREFETCHW
static inline void prefetch(const void *x)
static inline void prefetchw(const void *x)
