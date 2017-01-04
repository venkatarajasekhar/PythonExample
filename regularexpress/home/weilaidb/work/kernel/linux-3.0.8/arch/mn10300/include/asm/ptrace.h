#define _ASM_PTRACE_H
#define PT_A3		0
#define PT_A2		1
#define PT_D3		2
#define	PT_D2		3
#define PT_MCVF		4
#define	PT_MCRL		5
#define PT_MCRH		6
#define	PT_MDRQ		7
#define	PT_E1		8
#define	PT_E0		9
#define	PT_E7		10
#define	PT_E6		11
#define	PT_E5		12
#define	PT_E4		13
#define	PT_E3		14
#define	PT_E2		15
#define	PT_SP		16
#define	PT_LAR		17
#define	PT_LIR		18
#define	PT_MDR		19
#define	PT_A1		20
#define	PT_A0		21
#define	PT_D1		22
#define	PT_D0		23
#define PT_ORIG_D0	24
#define	PT_EPSW		25
#define	PT_PC		26
#define NR_PTREGS	27
struct pt_regs ;
#define PTRACE_GETREGS            12
#define PTRACE_SETREGS            13
#define PTRACE_GETFPREGS          14
#define PTRACE_SETFPREGS          15
#define PTRACE_O_TRACESYSGOOD     0x00000001
#define user_mode(regs)			(((regs)->epsw & EPSW_nSL) == EPSW_nSL)
#define instruction_pointer(regs)	((regs)->pc)
#define user_stack_pointer(regs)	((regs)->sp)
extern void show_regs(struct pt_regs *);
#define arch_has_single_step()	(1)
#define profile_pc(regs) ((regs)->pc)
