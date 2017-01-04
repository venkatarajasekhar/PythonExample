#define _SFP_MACHINE_H
#define _FP_W_TYPE_SIZE		64
#define _FP_W_TYPE		unsigned long
#define _FP_WS_TYPE		signed long
#define _FP_I_TYPE		long
#define _FP_MUL_MEAT_S(R,X,Y)					\
_FP_MUL_MEAT_1_imm(_FP_WFRACBITS_S,R,X,Y)
#define _FP_MUL_MEAT_D(R,X,Y)					\
_FP_MUL_MEAT_1_wide(_FP_WFRACBITS_D,R,X,Y,umul_ppmm)
#define _FP_MUL_MEAT_Q(R,X,Y)					\
_FP_MUL_MEAT_2_wide(_FP_WFRACBITS_Q,R,X,Y,umul_ppmm)
#define _FP_DIV_MEAT_S(R,X,Y)	_FP_DIV_MEAT_1_imm(S,R,X,Y,_FP_DIV_HELP_imm)
#define _FP_DIV_MEAT_D(R,X,Y)	_FP_DIV_MEAT_1_udiv(D,R,X,Y)
#define _FP_DIV_MEAT_Q(R,X,Y)	_FP_DIV_MEAT_2_udiv(Q,R,X,Y)
#define _FP_NANFRAC_S		_FP_QNANBIT_S
#define _FP_NANFRAC_D		_FP_QNANBIT_D
#define _FP_NANFRAC_Q		_FP_QNANBIT_Q
#define _FP_NANSIGN_S		1
#define _FP_NANSIGN_D		1
#define _FP_NANSIGN_Q		1
#define _FP_KEEPNANFRACP 1
#define _FP_CHOOSENAN(fs, wc, R, X, Y, OP)			\
do  while (0)
#define FP_ROUNDMODE	mode
#define FP_RND_NEAREST	(FPCR_DYN_NORMAL >> FPCR_DYN_SHIFT)
#define FP_RND_ZERO	(FPCR_DYN_CHOPPED >> FPCR_DYN_SHIFT)
#define FP_RND_PINF	(FPCR_DYN_PLUS >> FPCR_DYN_SHIFT)
#define FP_RND_MINF	(FPCR_DYN_MINUS >> FPCR_DYN_SHIFT)
#define FP_EX_INVALID		IEEE_TRAP_ENABLE_INV
#define FP_EX_OVERFLOW		IEEE_TRAP_ENABLE_OVF
#define FP_EX_UNDERFLOW		IEEE_TRAP_ENABLE_UNF
#define FP_EX_DIVZERO		IEEE_TRAP_ENABLE_DZE
#define FP_EX_INEXACT		IEEE_TRAP_ENABLE_INE
#define FP_EX_DENORM		IEEE_TRAP_ENABLE_DNO
#define FP_DENORM_ZERO		(swcr & IEEE_MAP_DMZ)
#define FP_INHIBIT_RESULTS 0
