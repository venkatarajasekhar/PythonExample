#define add_ssaaaa(sh, sl, ah, al, bh, bl) \
((sl) = (al) + (bl), (sh) = (ah) + (bh) + ((sl) < (al)))
#define sub_ddmmss(sh, sl, ah, al, bh, bl) \
((sl) = (al) - (bl), (sh) = (ah) - (bh) - ((al) < (bl)))
#define umul_ppmm(wh, wl, u, v)			\
__asm__ ("mulq %2,%3,%1; umulh %2,%3,%0"	\
: "=r" ((UDItype)(wh)),		\
"=&r" ((UDItype)(wl))		\
: "r" ((UDItype)(u)),		\
"r" ((UDItype)(v)))
#define udiv_qrnnd(q, r, n1, n0, d)				\
do  while (0)
extern unsigned long __udiv_qrnnd (unsigned long *, unsigned long,
unsigned long , unsigned long);
#define UDIV_NEEDS_NORMALIZATION 1
#define abort()			goto bad_insn
#define __LITTLE_ENDIAN -1
#define __BYTE_ORDER __LITTLE_ENDIAN