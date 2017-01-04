#define _ASM_IA64_MCA_ASM_H
#define PSR_IC		13
#define PSR_I		14
#define	PSR_DT		17
#define PSR_RT		27
#define PSR_MC		35
#define PSR_IT		36
#define PSR_BN		44
#define INST_VA_TO_PA(addr)							\
dep	addr	= 0, addr, 61, 3
#define DATA_VA_TO_PA(addr)							\
tpa	addr	= addr
#define DATA_PA_TO_VA(addr,temp)							\
mov	temp	= 0x7	;;							\
dep	addr	= temp, addr, 61, 3
#define GET_THIS_PADDR(reg, var)		\
mov	reg = IA64_KR(PER_CPU_DATA);;	\
addl	reg = THIS_CPU(var), reg
#define  PHYSICAL_MODE_ENTER(temp1, temp2, start_addr, old_psr)				\
mov	old_psr = psr;								\
;;										\
dep	old_psr = 0, old_psr, 32, 32;						\
\
mov	ar.rsc = 0 ;								\
;;										\
srlz.d;										\
mov	temp2 = ar.bspstore;							\
;;										\
DATA_VA_TO_PA(temp2);								\
;;										\
mov	temp1 = ar.rnat;							\
;;										\
mov	ar.bspstore = temp2;							\
;;										\
mov	ar.rnat = temp1;							\
mov	temp1 = psr;								\
mov	temp2 = psr;								\
;;										\
\
dep	temp2 = 0, temp2, PSR_IC, 2;						\
;;										\
mov	psr.l = temp2;								\
;;										\
srlz.d;										\
dep	temp1 = 0, temp1, 32, 32;						\
;;										\
dep	temp1 = 0, temp1, PSR_IT, 1;						\
;;										\
dep	temp1 = 0, temp1, PSR_DT, 1;						\
;;										\
dep	temp1 = 0, temp1, PSR_RT, 1;						\
;;										\
dep	temp1 = 0, temp1, PSR_I, 1;						\
;;										\
dep	temp1 = 0, temp1, PSR_IC, 1;						\
;;										\
dep	temp1 = -1, temp1, PSR_MC, 1;						\
;;										\
mov	cr.ipsr = temp1;							\
;;										\
LOAD_PHYSICAL(p0, temp2, start_addr);						\
;;										\
mov	cr.iip = temp2;								\
mov	cr.ifs = r0;								\
DATA_VA_TO_PA(sp);								\
DATA_VA_TO_PA(gp);								\
;;										\
srlz.i;										\
;;										\
nop	1;									\
nop	2;									\
nop	1;									\
nop	2;									\
rfi;										\
;;
#define VIRTUAL_MODE_ENTER(temp1, temp2, start_addr, old_psr)	\
mov	temp2 = psr;					\
;;							\
mov	old_psr = temp2;				\
;;							\
dep	temp2 = 0, temp2, PSR_IC, 2;			\
;;							\
mov	psr.l = temp2;					\
mov	ar.rsc = 0;					\
;;							\
srlz.d;							\
mov	r13 = ar.k6;					\
mov	temp2 = ar.bspstore;				\
;;							\
DATA_PA_TO_VA(temp2,temp1);				\
;;							\
mov	temp1 = ar.rnat;				\
;;							\
mov	ar.bspstore = temp2;				\
;;							\
mov	ar.rnat = temp1;				\
;;							\
mov	temp1 = old_psr;				\
;;							\
mov	temp2 = 1;					\
;;							\
dep	temp1 = temp2, temp1, PSR_IC, 1;		\
;;							\
dep	temp1 = temp2, temp1, PSR_IT, 1;		\
;;							\
dep	temp1 = temp2, temp1, PSR_DT, 1;		\
;;							\
dep	temp1 = temp2, temp1, PSR_RT, 1;		\
;;							\
dep	temp1 = temp2, temp1, PSR_BN, 1;		\
;;							\
\
mov     cr.ipsr = temp1;				\
movl	temp2 = start_addr;				\
;;							\
mov	cr.iip = temp2;					\
movl	gp = __gp					\
;;							\
DATA_PA_TO_VA(sp, temp1);				\
srlz.i;							\
;;							\
nop	1;						\
nop	2;						\
nop	1;						\
rfi							\
;;
#define ALIGN16(x)			((x)&~15)
#define MCA_PT_REGS_OFFSET		ALIGN16(KERNEL_STACK_SIZE-IA64_PT_REGS_SIZE)
#define MCA_SWITCH_STACK_OFFSET		ALIGN16(MCA_PT_REGS_OFFSET-IA64_SWITCH_STACK_SIZE)
#define MCA_SOS_OFFSET			ALIGN16(MCA_SWITCH_STACK_OFFSET-IA64_SAL_OS_STATE_SIZE)
#define MCA_SP_OFFSET			ALIGN16(MCA_SOS_OFFSET-16)
