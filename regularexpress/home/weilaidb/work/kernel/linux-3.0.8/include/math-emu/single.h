#define    __MATH_EMU_SINGLE_H__
#if _FP_W_TYPE_SIZE < 32
#error "Here's a nickel kid.  Go buy yourself a real computer."
#define _FP_FRACBITS_S		24
#define _FP_FRACXBITS_S		(_FP_W_TYPE_SIZE - _FP_FRACBITS_S)
#define _FP_WFRACBITS_S		(_FP_WORKBITS + _FP_FRACBITS_S)
#define _FP_WFRACXBITS_S	(_FP_W_TYPE_SIZE - _FP_WFRACBITS_S)
#define _FP_EXPBITS_S		8
#define _FP_EXPBIAS_S		127
#define _FP_EXPMAX_S		255
#define _FP_QNANBIT_S		((_FP_W_TYPE)1 << (_FP_FRACBITS_S-2))
#define _FP_IMPLBIT_S		((_FP_W_TYPE)1 << (_FP_FRACBITS_S-1))
#define _FP_OVERFLOW_S		((_FP_W_TYPE)1 << (_FP_WFRACBITS_S))
union _FP_UNION_S
;
#define FP_DECL_S(X)		_FP_DECL(1,X)
#define FP_UNPACK_RAW_S(X,val)	_FP_UNPACK_RAW_1(S,X,val)
#define FP_UNPACK_RAW_SP(X,val)	_FP_UNPACK_RAW_1_P(S,X,val)
#define FP_PACK_RAW_S(val,X)	_FP_PACK_RAW_1(S,val,X)
#define FP_PACK_RAW_SP(val,X)		\
do  while (0)
#define FP_UNPACK_S(X,val)		\
do  while (0)
#define FP_UNPACK_SP(X,val)		\
do  while (0)
#define FP_PACK_S(val,X)		\
do  while (0)
#define FP_PACK_SP(val,X)		\
do  while (0)
#define FP_ISSIGNAN_S(X)		_FP_ISSIGNAN(S,1,X)
#define FP_NEG_S(R,X)			_FP_NEG(S,1,R,X)
#define FP_ADD_S(R,X,Y)			_FP_ADD(S,1,R,X,Y)
#define FP_SUB_S(R,X,Y)			_FP_SUB(S,1,R,X,Y)
#define FP_MUL_S(R,X,Y)			_FP_MUL(S,1,R,X,Y)
#define FP_DIV_S(R,X,Y)			_FP_DIV(S,1,R,X,Y)
#define FP_SQRT_S(R,X)			_FP_SQRT(S,1,R,X)
#define _FP_SQRT_MEAT_S(R,S,T,X,Q)	_FP_SQRT_MEAT_1(R,S,T,X,Q)
#define FP_CMP_S(r,X,Y,un)	_FP_CMP(S,1,r,X,Y,un)
#define FP_CMP_EQ_S(r,X,Y)	_FP_CMP_EQ(S,1,r,X,Y)
#define FP_TO_INT_S(r,X,rsz,rsg)	_FP_TO_INT(S,1,r,X,rsz,rsg)
#define FP_TO_INT_ROUND_S(r,X,rsz,rsg)	_FP_TO_INT_ROUND(S,1,r,X,rsz,rsg)
#define FP_FROM_INT_S(X,r,rs,rt)	_FP_FROM_INT(S,1,X,r,rs,rt)
#define _FP_FRAC_HIGH_S(X)	_FP_FRAC_HIGH_1(X)
#define _FP_FRAC_HIGH_RAW_S(X)	_FP_FRAC_HIGH_1(X)
