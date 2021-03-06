#define _CRIS_ARCH_UACCESS_H
#define __put_user_asm(x, addr, err, op)			\
__asm__ __volatile__(					\
"	"op" %1,[%2]\n"				\
"2:\n"						\
"	.section .fixup,\"ax\"\n"		\
"3:	move.d %3,%0\n"				\
"	jump 2b\n"				\
"	.previous\n"				\
"	.section __ex_table,\"a\"\n"		\
"	.dword 2b,3b\n"				\
"	.previous\n"				\
: "=r" (err)					\
: "r" (x), "r" (addr), "g" (-EFAULT), "0" (err))
#define __put_user_asm_64(x, addr, err)				\
__asm__ __volatile__(					\
"	move.d %M1,[%2]\n"			\
"2:	move.d %H1,[%2+4]\n"			\
"4:\n"						\
"	.section .fixup,\"ax\"\n"		\
"3:	move.d %3,%0\n"				\
"	jump 4b\n"				\
"	.previous\n"				\
"	.section __ex_table,\"a\"\n"		\
"	.dword 2b,3b\n"				\
"	.dword 4b,3b\n"				\
"	.previous\n"				\
: "=r" (err)					\
: "r" (x), "r" (addr), "g" (-EFAULT), "0" (err))
#define __get_user_asm(x, addr, err, op)		\
__asm__ __volatile__(				\
"	"op" [%2],%1\n"			\
"2:\n"					\
"	.section .fixup,\"ax\"\n"	\
"3:	move.d %3,%0\n"			\
"	moveq 0,%1\n"			\
"	jump 2b\n"			\
"	.previous\n"			\
"	.section __ex_table,\"a\"\n"	\
"	.dword 2b,3b\n"			\
"	.previous\n"			\
: "=r" (err), "=r" (x)			\
: "r" (addr), "g" (-EFAULT), "0" (err))
#define __get_user_asm_64(x, addr, err)			\
__asm__ __volatile__(				\
"	move.d [%2],%M1\n"		\
"2:	move.d [%2+4],%H1\n"		\
"4:\n"					\
"	.section .fixup,\"ax\"\n"	\
"3:	move.d %3,%0\n"			\
"	moveq 0,%1\n"			\
"	jump 4b\n"			\
"	.previous\n"			\
"	.section __ex_table,\"a\"\n"	\
"	.dword 2b,3b\n"			\
"	.dword 4b,3b\n"			\
"	.previous\n"			\
: "=r" (err), "=r" (x)			\
: "r" (addr), "g" (-EFAULT), "0" (err))
static inline long
__do_strncpy_from_user(char *dst, const char *src, long count)
#define __asm_copy_user_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm__ __volatile__ (				\
COPY				\
"1:\n"					\
"	.section .fixup,\"ax\"\n"	\
FIXUP				\
"	jump 1b\n"			\
"	.previous\n"			\
"	.section __ex_table,\"a\"\n"	\
TENTRY				\
"	.previous\n"			\
: "=r" (to), "=r" (from), "=r" (ret)	\
: "0" (to), "1" (from), "2" (ret)	\
: "r9", "memory")
#define __asm_copy_from_user_1(to, from, ret) \
__asm_copy_user_cont(to, from, ret,	\
"	move.b [%1+],$r9\n"	\
"2:	move.b $r9,[%0+]\n",	\
"3:	addq 1,%2\n"		\
"	clear.b [%0+]\n",	\
"	.dword 2b,3b\n")
#define __asm_copy_from_user_2x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_user_cont(to, from, ret,		\
"	move.w [%1+],$r9\n"		\
"2:	move.w $r9,[%0+]\n" COPY,	\
"3:	addq 2,%2\n"			\
"	clear.w [%0+]\n" FIXUP,		\
"	.dword 2b,3b\n" TENTRY)
#define __asm_copy_from_user_2(to, from, ret) \
__asm_copy_from_user_2x_cont(to, from, ret, "", "", "")
#define __asm_copy_from_user_3(to, from, ret)		\
__asm_copy_from_user_2x_cont(to, from, ret,	\
"	move.b [%1+],$r9\n"		\
"4:	move.b $r9,[%0+]\n",		\
"5:	addq 1,%2\n"			\
"	clear.b [%0+]\n",		\
"	.dword 4b,5b\n")
#define __asm_copy_from_user_4x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_user_cont(to, from, ret,		\
"	move.d [%1+],$r9\n"		\
"2:	move.d $r9,[%0+]\n" COPY,	\
"3:	addq 4,%2\n"			\
"	clear.d [%0+]\n" FIXUP,		\
"	.dword 2b,3b\n" TENTRY)
#define __asm_copy_from_user_4(to, from, ret) \
__asm_copy_from_user_4x_cont(to, from, ret, "", "", "")
#define __asm_copy_from_user_5(to, from, ret) \
__asm_copy_from_user_4x_cont(to, from, ret,	\
"	move.b [%1+],$r9\n"		\
"4:	move.b $r9,[%0+]\n",		\
"5:	addq 1,%2\n"			\
"	clear.b [%0+]\n",		\
"	.dword 4b,5b\n")
#define __asm_copy_from_user_6x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_from_user_4x_cont(to, from, ret,	\
"	move.w [%1+],$r9\n"		\
"4:	move.w $r9,[%0+]\n" COPY,	\
"5:	addq 2,%2\n"			\
"	clear.w [%0+]\n" FIXUP,		\
"	.dword 4b,5b\n" TENTRY)
#define __asm_copy_from_user_6(to, from, ret) \
__asm_copy_from_user_6x_cont(to, from, ret, "", "", "")
#define __asm_copy_from_user_7(to, from, ret) \
__asm_copy_from_user_6x_cont(to, from, ret,	\
"	move.b [%1+],$r9\n"		\
"6:	move.b $r9,[%0+]\n",		\
"7:	addq 1,%2\n"			\
"	clear.b [%0+]\n",		\
"	.dword 6b,7b\n")
#define __asm_copy_from_user_8x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_from_user_4x_cont(to, from, ret,	\
"	move.d [%1+],$r9\n"		\
"4:	move.d $r9,[%0+]\n" COPY,	\
"5:	addq 4,%2\n"			\
"	clear.d [%0+]\n" FIXUP,		\
"	.dword 4b,5b\n" TENTRY)
#define __asm_copy_from_user_8(to, from, ret) \
__asm_copy_from_user_8x_cont(to, from, ret, "", "", "")
#define __asm_copy_from_user_9(to, from, ret) \
__asm_copy_from_user_8x_cont(to, from, ret,	\
"	move.b [%1+],$r9\n"		\
"6:	move.b $r9,[%0+]\n",		\
"7:	addq 1,%2\n"			\
"	clear.b [%0+]\n",		\
"	.dword 6b,7b\n")
#define __asm_copy_from_user_10x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_from_user_8x_cont(to, from, ret,	\
"	move.w [%1+],$r9\n"		\
"6:	move.w $r9,[%0+]\n" COPY,	\
"7:	addq 2,%2\n"			\
"	clear.w [%0+]\n" FIXUP,		\
"	.dword 6b,7b\n" TENTRY)
#define __asm_copy_from_user_10(to, from, ret) \
__asm_copy_from_user_10x_cont(to, from, ret, "", "", "")
#define __asm_copy_from_user_11(to, from, ret)		\
__asm_copy_from_user_10x_cont(to, from, ret,	\
"	move.b [%1+],$r9\n"		\
"8:	move.b $r9,[%0+]\n",		\
"9:	addq 1,%2\n"			\
"	clear.b [%0+]\n",		\
"	.dword 8b,9b\n")
#define __asm_copy_from_user_12x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_from_user_8x_cont(to, from, ret,	\
"	move.d [%1+],$r9\n"		\
"6:	move.d $r9,[%0+]\n" COPY,	\
"7:	addq 4,%2\n"			\
"	clear.d [%0+]\n" FIXUP,		\
"	.dword 6b,7b\n" TENTRY)
#define __asm_copy_from_user_12(to, from, ret) \
__asm_copy_from_user_12x_cont(to, from, ret, "", "", "")
#define __asm_copy_from_user_13(to, from, ret) \
__asm_copy_from_user_12x_cont(to, from, ret,	\
"	move.b [%1+],$r9\n"		\
"8:	move.b $r9,[%0+]\n",		\
"9:	addq 1,%2\n"			\
"	clear.b [%0+]\n",		\
"	.dword 8b,9b\n")
#define __asm_copy_from_user_14x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_from_user_12x_cont(to, from, ret,	\
"	move.w [%1+],$r9\n"		\
"8:	move.w $r9,[%0+]\n" COPY,	\
"9:	addq 2,%2\n"			\
"	clear.w [%0+]\n" FIXUP,		\
"	.dword 8b,9b\n" TENTRY)
#define __asm_copy_from_user_14(to, from, ret) \
__asm_copy_from_user_14x_cont(to, from, ret, "", "", "")
#define __asm_copy_from_user_15(to, from, ret) \
__asm_copy_from_user_14x_cont(to, from, ret,	\
"	move.b [%1+],$r9\n"		\
"10:	move.b $r9,[%0+]\n",		\
"11:	addq 1,%2\n"			\
"	clear.b [%0+]\n",		\
"	.dword 10b,11b\n")
#define __asm_copy_from_user_16x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_from_user_12x_cont(to, from, ret,	\
"	move.d [%1+],$r9\n"		\
"8:	move.d $r9,[%0+]\n" COPY,	\
"9:	addq 4,%2\n"			\
"	clear.d [%0+]\n" FIXUP,		\
"	.dword 8b,9b\n" TENTRY)
#define __asm_copy_from_user_16(to, from, ret) \
__asm_copy_from_user_16x_cont(to, from, ret, "", "", "")
#define __asm_copy_from_user_20x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_from_user_16x_cont(to, from, ret,	\
"	move.d [%1+],$r9\n"		\
"10:	move.d $r9,[%0+]\n" COPY,	\
"11:	addq 4,%2\n"			\
"	clear.d [%0+]\n" FIXUP,		\
"	.dword 10b,11b\n" TENTRY)
#define __asm_copy_from_user_20(to, from, ret) \
__asm_copy_from_user_20x_cont(to, from, ret, "", "", "")
#define __asm_copy_from_user_24x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_from_user_20x_cont(to, from, ret,	\
"	move.d [%1+],$r9\n"		\
"12:	move.d $r9,[%0+]\n" COPY,	\
"13:	addq 4,%2\n"			\
"	clear.d [%0+]\n" FIXUP,		\
"	.dword 12b,13b\n" TENTRY)
#define __asm_copy_from_user_24(to, from, ret) \
__asm_copy_from_user_24x_cont(to, from, ret, "", "", "")
#define __asm_copy_to_user_1(to, from, ret)	\
__asm_copy_user_cont(to, from, ret,	\
"	move.b [%1+],$r9\n"	\
"	move.b $r9,[%0+]\n2:\n",	\
"3:	addq 1,%2\n",		\
"	.dword 2b,3b\n")
#define __asm_copy_to_user_2x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_user_cont(to, from, ret,		\
"	move.w [%1+],$r9\n"		\
"	move.w $r9,[%0+]\n2:\n" COPY,	\
"3:	addq 2,%2\n" FIXUP,		\
"	.dword 2b,3b\n" TENTRY)
#define __asm_copy_to_user_2(to, from, ret) \
__asm_copy_to_user_2x_cont(to, from, ret, "", "", "")
#define __asm_copy_to_user_3(to, from, ret) \
__asm_copy_to_user_2x_cont(to, from, ret,	\
"	move.b [%1+],$r9\n"		\
"	move.b $r9,[%0+]\n4:\n",		\
"5:	addq 1,%2\n",			\
"	.dword 4b,5b\n")
#define __asm_copy_to_user_4x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_user_cont(to, from, ret,		\
"	move.d [%1+],$r9\n"		\
"	move.d $r9,[%0+]\n2:\n" COPY,	\
"3:	addq 4,%2\n" FIXUP,		\
"	.dword 2b,3b\n" TENTRY)
#define __asm_copy_to_user_4(to, from, ret) \
__asm_copy_to_user_4x_cont(to, from, ret, "", "", "")
#define __asm_copy_to_user_5(to, from, ret) \
__asm_copy_to_user_4x_cont(to, from, ret,	\
"	move.b [%1+],$r9\n"		\
"	move.b $r9,[%0+]\n4:\n",		\
"5:	addq 1,%2\n",			\
"	.dword 4b,5b\n")
#define __asm_copy_to_user_6x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_to_user_4x_cont(to, from, ret,	\
"	move.w [%1+],$r9\n"		\
"	move.w $r9,[%0+]\n4:\n" COPY,	\
"5:	addq 2,%2\n" FIXUP,		\
"	.dword 4b,5b\n" TENTRY)
#define __asm_copy_to_user_6(to, from, ret) \
__asm_copy_to_user_6x_cont(to, from, ret, "", "", "")
#define __asm_copy_to_user_7(to, from, ret) \
__asm_copy_to_user_6x_cont(to, from, ret,	\
"	move.b [%1+],$r9\n"		\
"	move.b $r9,[%0+]\n6:\n",		\
"7:	addq 1,%2\n",			\
"	.dword 6b,7b\n")
#define __asm_copy_to_user_8x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_to_user_4x_cont(to, from, ret,	\
"	move.d [%1+],$r9\n"		\
"	move.d $r9,[%0+]\n4:\n" COPY,	\
"5:	addq 4,%2\n"  FIXUP,		\
"	.dword 4b,5b\n" TENTRY)
#define __asm_copy_to_user_8(to, from, ret) \
__asm_copy_to_user_8x_cont(to, from, ret, "", "", "")
#define __asm_copy_to_user_9(to, from, ret) \
__asm_copy_to_user_8x_cont(to, from, ret,	\
"	move.b [%1+],$r9\n"		\
"	move.b $r9,[%0+]\n6:\n",		\
"7:	addq 1,%2\n",			\
"	.dword 6b,7b\n")
#define __asm_copy_to_user_10x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_to_user_8x_cont(to, from, ret,	\
"	move.w [%1+],$r9\n"		\
"	move.w $r9,[%0+]\n6:\n" COPY,	\
"7:	addq 2,%2\n" FIXUP,		\
"	.dword 6b,7b\n" TENTRY)
#define __asm_copy_to_user_10(to, from, ret) \
__asm_copy_to_user_10x_cont(to, from, ret, "", "", "")
#define __asm_copy_to_user_11(to, from, ret) \
__asm_copy_to_user_10x_cont(to, from, ret,	\
"	move.b [%1+],$r9\n"		\
"	move.b $r9,[%0+]\n8:\n",		\
"9:	addq 1,%2\n",			\
"	.dword 8b,9b\n")
#define __asm_copy_to_user_12x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_to_user_8x_cont(to, from, ret,	\
"	move.d [%1+],$r9\n"		\
"	move.d $r9,[%0+]\n6:\n" COPY,	\
"7:	addq 4,%2\n" FIXUP,		\
"	.dword 6b,7b\n" TENTRY)
#define __asm_copy_to_user_12(to, from, ret) \
__asm_copy_to_user_12x_cont(to, from, ret, "", "", "")
#define __asm_copy_to_user_13(to, from, ret) \
__asm_copy_to_user_12x_cont(to, from, ret,	\
"	move.b [%1+],$r9\n"		\
"	move.b $r9,[%0+]\n8:\n",		\
"9:	addq 1,%2\n",			\
"	.dword 8b,9b\n")
#define __asm_copy_to_user_14x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_to_user_12x_cont(to, from, ret,	\
"	move.w [%1+],$r9\n"		\
"	move.w $r9,[%0+]\n8:\n" COPY,	\
"9:	addq 2,%2\n" FIXUP,		\
"	.dword 8b,9b\n" TENTRY)
#define __asm_copy_to_user_14(to, from, ret)	\
__asm_copy_to_user_14x_cont(to, from, ret, "", "", "")
#define __asm_copy_to_user_15(to, from, ret) \
__asm_copy_to_user_14x_cont(to, from, ret,	\
"	move.b [%1+],$r9\n"		\
"	move.b $r9,[%0+]\n10:\n",		\
"11:	addq 1,%2\n",			\
"	.dword 10b,11b\n")
#define __asm_copy_to_user_16x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_to_user_12x_cont(to, from, ret,	\
"	move.d [%1+],$r9\n"		\
"	move.d $r9,[%0+]\n8:\n" COPY,	\
"9:	addq 4,%2\n" FIXUP,		\
"	.dword 8b,9b\n" TENTRY)
#define __asm_copy_to_user_16(to, from, ret) \
__asm_copy_to_user_16x_cont(to, from, ret, "", "", "")
#define __asm_copy_to_user_20x_cont(to, from, ret, COPY, FIXUP, TENTRY) \
__asm_copy_to_user_16x_cont(to, from, ret,	\
"	move.d [%1+],$r9\n"		\
"	move.d $r9,[%0+]\n10:\n" COPY,	\
"11:	addq 4,%2\n" FIXUP,		\
"	.dword 10b,11b\n" TENTRY)
#define __asm_copy_to_user_20(to, from, ret) \
__asm_copy_to_user_20x_cont(to, from, ret, "", "", "")
#define __asm_copy_to_user_24x_cont(to, from, ret, COPY, FIXUP, TENTRY)	\
__asm_copy_to_user_20x_cont(to, from, ret,	\
"	move.d [%1+],$r9\n"		\
"	move.d $r9,[%0+]\n12:\n" COPY,	\
"13:	addq 4,%2\n" FIXUP,		\
"	.dword 12b,13b\n" TENTRY)
#define __asm_copy_to_user_24(to, from, ret)	\
__asm_copy_to_user_24x_cont(to, from, ret, "", "", "")
#define __asm_clear(to, ret, CLEAR, FIXUP, TENTRY) \
__asm__ __volatile__ (				\
CLEAR				\
"1:\n"					\
"	.section .fixup,\"ax\"\n"	\
FIXUP				\
"	jump 1b\n"			\
"	.previous\n"			\
"	.section __ex_table,\"a\"\n"	\
TENTRY				\
"	.previous"			\
: "=r" (to), "=r" (ret)			\
: "0" (to), "1" (ret)			\
: "memory")
#define __asm_clear_1(to, ret) \
__asm_clear(to, ret,			\
"	clear.b [%0+]\n2:\n",	\
"3:	addq 1,%1\n",		\
"	.dword 2b,3b\n")
#define __asm_clear_2(to, ret) \
__asm_clear(to, ret,			\
"	clear.w [%0+]\n2:\n",	\
"3:	addq 2,%1\n",		\
"	.dword 2b,3b\n")
#define __asm_clear_3(to, ret) \
__asm_clear(to, ret,			\
"	clear.w [%0+]\n"	\
"2:	clear.b [%0+]\n3:\n",	\
"4:	addq 2,%1\n"		\
"5:	addq 1,%1\n",		\
"	.dword 2b,4b\n"		\
"	.dword 3b,5b\n")
#define __asm_clear_4x_cont(to, ret, CLEAR, FIXUP, TENTRY) \
__asm_clear(to, ret,				\
"	clear.d [%0+]\n2:\n" CLEAR,	\
"3:	addq 4,%1\n" FIXUP,		\
"	.dword 2b,3b\n" TENTRY)
#define __asm_clear_4(to, ret) \
__asm_clear_4x_cont(to, ret, "", "", "")
#define __asm_clear_8x_cont(to, ret, CLEAR, FIXUP, TENTRY) \
__asm_clear_4x_cont(to, ret,			\
"	clear.d [%0+]\n4:\n" CLEAR,	\
"5:	addq 4,%1\n" FIXUP,		\
"	.dword 4b,5b\n" TENTRY)
#define __asm_clear_8(to, ret) \
__asm_clear_8x_cont(to, ret, "", "", "")
#define __asm_clear_12x_cont(to, ret, CLEAR, FIXUP, TENTRY) \
__asm_clear_8x_cont(to, ret,			\
"	clear.d [%0+]\n6:\n" CLEAR,	\
"7:	addq 4,%1\n" FIXUP,		\
"	.dword 6b,7b\n" TENTRY)
#define __asm_clear_12(to, ret) \
__asm_clear_12x_cont(to, ret, "", "", "")
#define __asm_clear_16x_cont(to, ret, CLEAR, FIXUP, TENTRY) \
__asm_clear_12x_cont(to, ret,			\
"	clear.d [%0+]\n8:\n" CLEAR,	\
"9:	addq 4,%1\n" FIXUP,		\
"	.dword 8b,9b\n" TENTRY)
#define __asm_clear_16(to, ret) \
__asm_clear_16x_cont(to, ret, "", "", "")
#define __asm_clear_20x_cont(to, ret, CLEAR, FIXUP, TENTRY) \
__asm_clear_16x_cont(to, ret,			\
"	clear.d [%0+]\n10:\n" CLEAR,	\
"11:	addq 4,%1\n" FIXUP,		\
"	.dword 10b,11b\n" TENTRY)
#define __asm_clear_20(to, ret) \
__asm_clear_20x_cont(to, ret, "", "", "")
#define __asm_clear_24x_cont(to, ret, CLEAR, FIXUP, TENTRY) \
__asm_clear_20x_cont(to, ret,			\
"	clear.d [%0+]\n12:\n" CLEAR,	\
"13:	addq 4,%1\n" FIXUP,		\
"	.dword 12b,13b\n" TENTRY)
#define __asm_clear_24(to, ret) \
__asm_clear_24x_cont(to, ret, "", "", "")
static inline long
strnlen_user(const char *s, long n)
