#define __ASM_SH_FTRACE_H
#define MCOUNT_INSN_SIZE	4
#define FTRACE_SYSCALL_MAX	NR_syscalls
extern void mcount(void);
#define MCOUNT_ADDR		((long)(mcount))
#define CALL_ADDR		((long)(ftrace_call))
#define STUB_ADDR		((long)(ftrace_stub))
#define GRAPH_ADDR		((long)(ftrace_graph_call))
#define CALLER_ADDR		((long)(ftrace_caller))
#define MCOUNT_INSN_OFFSET	((STUB_ADDR - CALL_ADDR) - 4)
#define GRAPH_INSN_OFFSET	((CALLER_ADDR - GRAPH_ADDR) - 4)
struct dyn_arch_ftrace ;
static inline unsigned long ftrace_call_adjust(unsigned long addr)
extern void *return_address(unsigned int);
#define HAVE_ARCH_CALLER_ADDR
#define CALLER_ADDR0 ((unsigned long)__builtin_return_address(0))
#define CALLER_ADDR1 ((unsigned long)return_address(1))
#define CALLER_ADDR2 ((unsigned long)return_address(2))
#define CALLER_ADDR3 ((unsigned long)return_address(3))
#define CALLER_ADDR4 ((unsigned long)return_address(4))
#define CALLER_ADDR5 ((unsigned long)return_address(5))
#define CALLER_ADDR6 ((unsigned long)return_address(6))