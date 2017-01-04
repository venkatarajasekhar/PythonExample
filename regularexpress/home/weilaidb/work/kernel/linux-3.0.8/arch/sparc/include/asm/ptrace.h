#define __SPARC_PTRACE_H
#if defined(__sparc__) && defined(__arch64__)
#define PT_REGS_MAGIC 0x57ac6c00
struct pt_regs ;
struct pt_regs32 ;
struct reg_window ;
struct reg_window32 ;
struct sparc_stackf ;
struct sparc_stackf32 ;
struct sparc_trapf ;
struct pt_regs ;
struct reg_window32 ;
struct sparc_stackf ;
#define TRACEREG_SZ	sizeof(struct pt_regs)
#define STACKFRAME_SZ	sizeof(struct sparc_stackf)
#define TRACEREG32_SZ	sizeof(struct pt_regs32)
#define STACKFRAME32_SZ	sizeof(struct sparc_stackf32)
#define UREG_G0        0
#define UREG_G1        1
#define UREG_G2        2
#define UREG_G3        3
#define UREG_G4        4
#define UREG_G5        5
#define UREG_G6        6
#define UREG_G7        7
#define UREG_I0        8
#define UREG_I1        9
#define UREG_I2        10
#define UREG_I3        11
#define UREG_I4        12
#define UREG_I5        13
#define UREG_I6        14
#define UREG_I7        15
#define UREG_FP        UREG_I6
#define UREG_RETPC     UREG_I7
#if defined(__sparc__) && defined(__arch64__)
static inline int pt_regs_trap_type(struct pt_regs *regs)
static inline bool pt_regs_is_syscall(struct pt_regs *regs)
static inline bool pt_regs_clear_syscall(struct pt_regs *regs)
#define arch_ptrace_stop_needed(exit_code, info) \
()
#define arch_ptrace_stop(exit_code, info) \
synchronize_user_stack()
struct global_reg_snapshot ;
extern struct global_reg_snapshot global_reg_snapshot[NR_CPUS];
#define force_successful_syscall_return()	    \
do  while (0)
#define user_mode(regs) (!((regs)->tstate & TSTATE_PRIV))
#define instruction_pointer(regs) ((regs)->tpc)
#define instruction_pointer_set(regs, val) ((regs)->tpc = (val))
#define user_stack_pointer(regs) ((regs)->u_regs[UREG_FP])
#define regs_return_value(regs) ((regs)->u_regs[UREG_I0])
extern unsigned long profile_pc(struct pt_regs *);
#define profile_pc(regs) instruction_pointer(regs)
extern void show_regs(struct pt_regs *);
#define TRACEREG_SZ		0xa0
#define STACKFRAME_SZ		0xc0
#define TRACEREG32_SZ		0x50
#define STACKFRAME32_SZ		0x60
static inline bool pt_regs_is_syscall(struct pt_regs *regs)
static inline bool pt_regs_clear_syscall(struct pt_regs *regs)
#define arch_ptrace_stop_needed(exit_code, info) \
()
#define arch_ptrace_stop(exit_code, info) \
synchronize_user_stack()
#define user_mode(regs) (!((regs)->psr & PSR_PS))
#define instruction_pointer(regs) ((regs)->pc)
#define user_stack_pointer(regs) ((regs)->u_regs[UREG_FP])
unsigned long profile_pc(struct pt_regs *);
extern void show_regs(struct pt_regs *);
#define TRACEREG_SZ       0x50
#define STACKFRAME_SZ     0x60
#define STACK_BIAS		2047
#define PT_V9_G0     0x00
#define PT_V9_G1     0x08
#define PT_V9_G2     0x10
#define PT_V9_G3     0x18
#define PT_V9_G4     0x20
#define PT_V9_G5     0x28
#define PT_V9_G6     0x30
#define PT_V9_G7     0x38
#define PT_V9_I0     0x40
#define PT_V9_I1     0x48
#define PT_V9_I2     0x50
#define PT_V9_I3     0x58
#define PT_V9_I4     0x60
#define PT_V9_I5     0x68
#define PT_V9_I6     0x70
#define PT_V9_FP     PT_V9_I6
#define PT_V9_I7     0x78
#define PT_V9_TSTATE 0x80
#define PT_V9_TPC    0x88
#define PT_V9_TNPC   0x90
#define PT_V9_Y      0x98
#define PT_V9_MAGIC  0x9c
#define PT_TSTATE	PT_V9_TSTATE
#define PT_TPC		PT_V9_TPC
#define PT_TNPC		PT_V9_TNPC
#define PT_PSR    0x0
#define PT_PC     0x4
#define PT_NPC    0x8
#define PT_Y      0xc
#define PT_G0     0x10
#define PT_WIM    PT_G0
#define PT_G1     0x14
#define PT_G2     0x18
#define PT_G3     0x1c
#define PT_G4     0x20
#define PT_G5     0x24
#define PT_G6     0x28
#define PT_G7     0x2c
#define PT_I0     0x30
#define PT_I1     0x34
#define PT_I2     0x38
#define PT_I3     0x3c
#define PT_I4     0x40
#define PT_I5     0x44
#define PT_I6     0x48
#define PT_FP     PT_I6
#define PT_I7     0x4c
#define RW_V9_L0     0x00
#define RW_V9_L1     0x08
#define RW_V9_L2     0x10
#define RW_V9_L3     0x18
#define RW_V9_L4     0x20
#define RW_V9_L5     0x28
#define RW_V9_L6     0x30
#define RW_V9_L7     0x38
#define RW_V9_I0     0x40
#define RW_V9_I1     0x48
#define RW_V9_I2     0x50
#define RW_V9_I3     0x58
#define RW_V9_I4     0x60
#define RW_V9_I5     0x68
#define RW_V9_I6     0x70
#define RW_V9_I7     0x78
#define RW_L0     0x00
#define RW_L1     0x04
#define RW_L2     0x08
#define RW_L3     0x0c
#define RW_L4     0x10
#define RW_L5     0x14
#define RW_L6     0x18
#define RW_L7     0x1c
#define RW_I0     0x20
#define RW_I1     0x24
#define RW_I2     0x28
#define RW_I3     0x2c
#define RW_I4     0x30
#define RW_I5     0x34
#define RW_I6     0x38
#define RW_I7     0x3c
#define SF_V9_L0     0x00
#define SF_V9_L1     0x08
#define SF_V9_L2     0x10
#define SF_V9_L3     0x18
#define SF_V9_L4     0x20
#define SF_V9_L5     0x28
#define SF_V9_L6     0x30
#define SF_V9_L7     0x38
#define SF_V9_I0     0x40
#define SF_V9_I1     0x48
#define SF_V9_I2     0x50
#define SF_V9_I3     0x58
#define SF_V9_I4     0x60
#define SF_V9_I5     0x68
#define SF_V9_FP     0x70
#define SF_V9_PC     0x78
#define SF_V9_RETP   0x80
#define SF_V9_XARG0  0x88
#define SF_V9_XARG1  0x90
#define SF_V9_XARG2  0x98
#define SF_V9_XARG3  0xa0
#define SF_V9_XARG4  0xa8
#define SF_V9_XARG5  0xb0
#define SF_V9_XXARG  0xb8
#define SF_L0     0x00
#define SF_L1     0x04
#define SF_L2     0x08
#define SF_L3     0x0c
#define SF_L4     0x10
#define SF_L5     0x14
#define SF_L6     0x18
#define SF_L7     0x1c
#define SF_I0     0x20
#define SF_I1     0x24
#define SF_I2     0x28
#define SF_I3     0x2c
#define SF_I4     0x30
#define SF_I5     0x34
#define SF_FP     0x38
#define SF_PC     0x3c
#define SF_RETP   0x40
#define SF_XARG0  0x44
#define SF_XARG1  0x48
#define SF_XARG2  0x4c
#define SF_XARG3  0x50
#define SF_XARG4  0x54
#define SF_XARG5  0x58
#define SF_XXARG  0x5c
#define GR_SNAP_TSTATE	0x00
#define GR_SNAP_TPC	0x08
#define GR_SNAP_TNPC	0x10
#define GR_SNAP_O7	0x18
#define GR_SNAP_I7	0x20
#define GR_SNAP_RPC	0x28
#define GR_SNAP_THREAD	0x30
#define GR_SNAP_PAD1	0x38
#define PTRACE_SPARC_DETACH       11
#define PTRACE_GETREGS            12
#define PTRACE_SETREGS            13
#define PTRACE_GETFPREGS          14
#define PTRACE_SETFPREGS          15
#define PTRACE_READDATA           16
#define PTRACE_WRITEDATA          17
#define PTRACE_READTEXT           18
#define PTRACE_WRITETEXT          19
#define PTRACE_GETFPAREGS         20
#define PTRACE_SETFPAREGS         21
#define PTRACE_GETREGS64	  22
#define PTRACE_SETREGS64	  23
#define PTRACE_GETFPREGS64	  25
#define PTRACE_SETFPREGS64	  26
