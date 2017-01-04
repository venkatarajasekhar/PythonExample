#define _ARM_HW_BREAKPOINT_H
struct task_struct;
struct arch_hw_breakpoint_ctrl ;
struct arch_hw_breakpoint ;
static inline u32 encode_ctrl_reg(struct arch_hw_breakpoint_ctrl ctrl)
static inline void decode_ctrl_reg(u32 reg,
struct arch_hw_breakpoint_ctrl *ctrl)
#define ARM_DEBUG_ARCH_RESERVED	0
#define ARM_DEBUG_ARCH_V6	1
#define ARM_DEBUG_ARCH_V6_1	2
#define ARM_DEBUG_ARCH_V7_ECP14	3
#define ARM_DEBUG_ARCH_V7_MM	4
#define ARM_BREAKPOINT_EXECUTE	0
#define ARM_BREAKPOINT_LOAD	1
#define ARM_BREAKPOINT_STORE	2
#define ARM_BREAKPOINT_PRIV	1
#define ARM_BREAKPOINT_USER	2
#define ARM_BREAKPOINT_LEN_1	0x1
#define ARM_BREAKPOINT_LEN_2	0x3
#define ARM_BREAKPOINT_LEN_4	0xf
#define ARM_BREAKPOINT_LEN_8	0xff
#define ARM_MAX_BRP		16
#define ARM_MAX_WRP		16
#define ARM_MAX_HBP_SLOTS	(ARM_MAX_BRP + ARM_MAX_WRP)
#define ARM_DSCR_MOE(x)			((x >> 2) & 0xf)
#define ARM_ENTRY_BREAKPOINT		0x1
#define ARM_ENTRY_ASYNC_WATCHPOINT	0x2
#define ARM_ENTRY_SYNC_WATCHPOINT	0xa
#define ARM_DSCR_HDBGEN		(1 << 14)
#define ARM_DSCR_MDBGEN		(1 << 15)
#define ARM_OP2_BVR		4
#define ARM_OP2_BCR		5
#define ARM_OP2_WVR		6
#define ARM_OP2_WCR		7
#define ARM_BASE_BVR		64
#define ARM_BASE_BCR		80
#define ARM_BASE_WVR		96
#define ARM_BASE_WCR		112
#define ARM_DBG_READ(M, OP2, VAL) do  while (0)
#define ARM_DBG_WRITE(M, OP2, VAL) do  while (0)
struct notifier_block;
struct perf_event;
struct pmu;
extern struct pmu perf_ops_bp;
extern int arch_bp_generic_fields(struct arch_hw_breakpoint_ctrl ctrl,
int *gen_len, int *gen_type);
extern int arch_check_bp_in_kernelspace(struct perf_event *bp);
extern int arch_validate_hwbkpt_settings(struct perf_event *bp);
extern int hw_breakpoint_exceptions_notify(struct notifier_block *unused,
unsigned long val, void *data);
extern u8 arch_get_debug_arch(void);
extern u8 arch_get_max_wp_len(void);
extern void clear_ptrace_hw_breakpoint(struct task_struct *tsk);
int arch_install_hw_breakpoint(struct perf_event *bp);
void arch_uninstall_hw_breakpoint(struct perf_event *bp);
void hw_breakpoint_pmu_read(struct perf_event *bp);
int hw_breakpoint_slots(int type);
static inline void clear_ptrace_hw_breakpoint(struct task_struct *tsk)
