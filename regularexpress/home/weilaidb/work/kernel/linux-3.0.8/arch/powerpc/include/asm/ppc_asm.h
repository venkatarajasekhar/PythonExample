#define _ASM_POWERPC_PPC_ASM_H
#error __FILE__ should only be used in assembler files
#define SZL			(BITS_PER_LONG/8)
#define ACCOUNT_CPU_USER_ENTRY(ra, rb)
#define ACCOUNT_CPU_USER_EXIT(ra, rb)
#define ACCOUNT_STOLEN_TIME
#define ACCOUNT_CPU_USER_ENTRY(ra, rb)					\
beq	2f;	\
MFTB(ra);		\
ld	rb,PACA_STARTTIME_USER(r13);				\
std	ra,PACA_STARTTIME(r13);					\
subf	rb,rb,ra;	\
ld	ra,PACA_USER_TIME(r13);					\
add	ra,ra,rb;	\
std	ra,PACA_USER_TIME(r13);					\
2:
#define ACCOUNT_CPU_USER_EXIT(ra, rb)					\
MFTB(ra);		\
ld	rb,PACA_STARTTIME(r13);					\
std	ra,PACA_STARTTIME_USER(r13);				\
subf	rb,rb,ra;	\
ld	ra,PACA_SYSTEM_TIME(r13);				\
add	ra,ra,rb;	\
std	ra,PACA_SYSTEM_TIME(r13)
#define ACCOUNT_STOLEN_TIME						\
BEGIN_FW_FTR_SECTION;							\
beq	33f;							\	\
ld	r10,PACALPPACAPTR(r13);		\
ld	r11,PACA_DTL_RIDX(r13);	\
ld	r10,LPPACA_DTLIDX(r10);	\
cmpd	cr1,r11,r10;						\
beq+	cr1,33f;						\
bl	.accumulate_stolen_time;				\
33:									\
END_FW_FTR_SECTION_IFSET(FW_FEATURE_SPLPAR)
#define ACCOUNT_STOLEN_TIME
#define SAVE_GPR(n, base)	std	n,GPR0+8*(n)(base)
#define REST_GPR(n, base)	ld	n,GPR0+8*(n)(base)
#define SAVE_NVGPRS(base)	SAVE_8GPRS(14, base); SAVE_10GPRS(22, base)
#define REST_NVGPRS(base)	REST_8GPRS(14, base); REST_10GPRS(22, base)
#define SAVE_GPR(n, base)	stw	n,GPR0+4*(n)(base)
#define REST_GPR(n, base)	lwz	n,GPR0+4*(n)(base)
#define SAVE_NVGPRS(base)	SAVE_GPR(13, base); SAVE_8GPRS(14, base); \
SAVE_10GPRS(22, base)
#define REST_NVGPRS(base)	REST_GPR(13, base); REST_8GPRS(14, base); \
REST_10GPRS(22, base)
#define SAVE_2GPRS(n, base)	SAVE_GPR(n, base); SAVE_GPR(n+1, base)
#define SAVE_4GPRS(n, base)	SAVE_2GPRS(n, base); SAVE_2GPRS(n+2, base)
#define SAVE_8GPRS(n, base)	SAVE_4GPRS(n, base); SAVE_4GPRS(n+4, base)
#define SAVE_10GPRS(n, base)	SAVE_8GPRS(n, base); SAVE_2GPRS(n+8, base)
#define REST_2GPRS(n, base)	REST_GPR(n, base); REST_GPR(n+1, base)
#define REST_4GPRS(n, base)	REST_2GPRS(n, base); REST_2GPRS(n+2, base)
#define REST_8GPRS(n, base)	REST_4GPRS(n, base); REST_4GPRS(n+4, base)
#define REST_10GPRS(n, base)	REST_8GPRS(n, base); REST_2GPRS(n+8, base)
#define SAVE_FPR(n, base)	stfd	n,THREAD_FPR0+8*TS_FPRWIDTH*(n)(base)
#define SAVE_2FPRS(n, base)	SAVE_FPR(n, base); SAVE_FPR(n+1, base)
#define SAVE_4FPRS(n, base)	SAVE_2FPRS(n, base); SAVE_2FPRS(n+2, base)
#define SAVE_8FPRS(n, base)	SAVE_4FPRS(n, base); SAVE_4FPRS(n+4, base)
#define SAVE_16FPRS(n, base)	SAVE_8FPRS(n, base); SAVE_8FPRS(n+8, base)
#define SAVE_32FPRS(n, base)	SAVE_16FPRS(n, base); SAVE_16FPRS(n+16, base)
#define REST_FPR(n, base)	lfd	n,THREAD_FPR0+8*TS_FPRWIDTH*(n)(base)
#define REST_2FPRS(n, base)	REST_FPR(n, base); REST_FPR(n+1, base)
#define REST_4FPRS(n, base)	REST_2FPRS(n, base); REST_2FPRS(n+2, base)
#define REST_8FPRS(n, base)	REST_4FPRS(n, base); REST_4FPRS(n+4, base)
#define REST_16FPRS(n, base)	REST_8FPRS(n, base); REST_8FPRS(n+8, base)
#define REST_32FPRS(n, base)	REST_16FPRS(n, base); REST_16FPRS(n+16, base)
#define SAVE_VR(n,b,base)	li b,THREAD_VR0+(16*(n));  stvx n,base,b
#define SAVE_2VRS(n,b,base)	SAVE_VR(n,b,base); SAVE_VR(n+1,b,base)
#define SAVE_4VRS(n,b,base)	SAVE_2VRS(n,b,base); SAVE_2VRS(n+2,b,base)
#define SAVE_8VRS(n,b,base)	SAVE_4VRS(n,b,base); SAVE_4VRS(n+4,b,base)
#define SAVE_16VRS(n,b,base)	SAVE_8VRS(n,b,base); SAVE_8VRS(n+8,b,base)
#define SAVE_32VRS(n,b,base)	SAVE_16VRS(n,b,base); SAVE_16VRS(n+16,b,base)
#define REST_VR(n,b,base)	li b,THREAD_VR0+(16*(n)); lvx n,base,b
#define REST_2VRS(n,b,base)	REST_VR(n,b,base); REST_VR(n+1,b,base)
#define REST_4VRS(n,b,base)	REST_2VRS(n,b,base); REST_2VRS(n+2,b,base)
#define REST_8VRS(n,b,base)	REST_4VRS(n,b,base); REST_4VRS(n+4,b,base)
#define REST_16VRS(n,b,base)	REST_8VRS(n,b,base); REST_8VRS(n+8,b,base)
#define REST_32VRS(n,b,base)	REST_16VRS(n,b,base); REST_16VRS(n+16,b,base)
#define SAVE_VSR(n,b,base)	li b,THREAD_VSR0+(16*(n));  STXVD2X(n,base,b)
#define SAVE_2VSRS(n,b,base)	SAVE_VSR(n,b,base); SAVE_VSR(n+1,b,base)
#define SAVE_4VSRS(n,b,base)	SAVE_2VSRS(n,b,base); SAVE_2VSRS(n+2,b,base)
#define SAVE_8VSRS(n,b,base)	SAVE_4VSRS(n,b,base); SAVE_4VSRS(n+4,b,base)
#define SAVE_16VSRS(n,b,base)	SAVE_8VSRS(n,b,base); SAVE_8VSRS(n+8,b,base)
#define SAVE_32VSRS(n,b,base)	SAVE_16VSRS(n,b,base); SAVE_16VSRS(n+16,b,base)
#define REST_VSR(n,b,base)	li b,THREAD_VSR0+(16*(n)); LXVD2X(n,base,b)
#define REST_2VSRS(n,b,base)	REST_VSR(n,b,base); REST_VSR(n+1,b,base)
#define REST_4VSRS(n,b,base)	REST_2VSRS(n,b,base); REST_2VSRS(n+2,b,base)
#define REST_8VSRS(n,b,base)	REST_4VSRS(n,b,base); REST_4VSRS(n+4,b,base)
#define REST_16VSRS(n,b,base)	REST_8VSRS(n,b,base); REST_8VSRS(n+8,b,base)
#define REST_32VSRS(n,b,base)	REST_16VSRS(n,b,base); REST_16VSRS(n+16,b,base)
#define SAVE_VSRU(n,b,base)	li b,THREAD_VR0+(16*(n));  STXVD2X(n+32,base,b)
#define SAVE_2VSRSU(n,b,base)	SAVE_VSRU(n,b,base); SAVE_VSRU(n+1,b,base)
#define SAVE_4VSRSU(n,b,base)	SAVE_2VSRSU(n,b,base); SAVE_2VSRSU(n+2,b,base)
#define SAVE_8VSRSU(n,b,base)	SAVE_4VSRSU(n,b,base); SAVE_4VSRSU(n+4,b,base)
#define SAVE_16VSRSU(n,b,base)	SAVE_8VSRSU(n,b,base); SAVE_8VSRSU(n+8,b,base)
#define SAVE_32VSRSU(n,b,base)	SAVE_16VSRSU(n,b,base); SAVE_16VSRSU(n+16,b,base)
#define REST_VSRU(n,b,base)	li b,THREAD_VR0+(16*(n)); LXVD2X(n+32,base,b)
#define REST_2VSRSU(n,b,base)	REST_VSRU(n,b,base); REST_VSRU(n+1,b,base)
#define REST_4VSRSU(n,b,base)	REST_2VSRSU(n,b,base); REST_2VSRSU(n+2,b,base)
#define REST_8VSRSU(n,b,base)	REST_4VSRSU(n,b,base); REST_4VSRSU(n+4,b,base)
#define REST_16VSRSU(n,b,base)	REST_8VSRSU(n,b,base); REST_8VSRSU(n+8,b,base)
#define REST_32VSRSU(n,b,base)	REST_16VSRSU(n,b,base); REST_16VSRSU(n+16,b,base)
#define SAVE_EVR(n,s,base)	evmergehi s,s,n; stw s,THREAD_EVR0+4*(n)(base)
#define SAVE_2EVRS(n,s,base)	SAVE_EVR(n,s,base); SAVE_EVR(n+1,s,base)
#define SAVE_4EVRS(n,s,base)	SAVE_2EVRS(n,s,base); SAVE_2EVRS(n+2,s,base)
#define SAVE_8EVRS(n,s,base)	SAVE_4EVRS(n,s,base); SAVE_4EVRS(n+4,s,base)
#define SAVE_16EVRS(n,s,base)	SAVE_8EVRS(n,s,base); SAVE_8EVRS(n+8,s,base)
#define SAVE_32EVRS(n,s,base)	SAVE_16EVRS(n,s,base); SAVE_16EVRS(n+16,s,base)
#define REST_EVR(n,s,base)	lwz s,THREAD_EVR0+4*(n)(base); evmergelo n,s,n
#define REST_2EVRS(n,s,base)	REST_EVR(n,s,base); REST_EVR(n+1,s,base)
#define REST_4EVRS(n,s,base)	REST_2EVRS(n,s,base); REST_2EVRS(n+2,s,base)
#define REST_8EVRS(n,s,base)	REST_4EVRS(n,s,base); REST_4EVRS(n+4,s,base)
#define REST_16EVRS(n,s,base)	REST_8EVRS(n,s,base); REST_8EVRS(n+8,s,base)
#define REST_32EVRS(n,s,base)	REST_16EVRS(n,s,base); REST_16EVRS(n+16,s,base)
#define HMT_VERY_LOW	or	31,31,31	# very low priority
#define HMT_LOW		or	1,1,1
#define HMT_MEDIUM_LOW  or	6,6,6		# medium low priority
#define HMT_MEDIUM	or	2,2,2
#define HMT_MEDIUM_HIGH or	5,5,5		# medium high priority
#define HMT_HIGH	or	3,3,3
#define HMT_EXTRA_HIGH	or	7,7,7		# power7 only
#define XGLUE(a,b) a##b
#define GLUE(a,b) XGLUE(a,b)
#define _GLOBAL(name) \
.section ".text"; \
.align 2 ; \
.globl name; \
.globl GLUE(.,name); \
.section ".opd","aw"; \
name: \
.quad GLUE(.,name); \
.quad .TOC.@tocbase; \
.quad 0; \
.previous; \
.type GLUE(.,name),@function; \
GLUE(.,name):
#define _INIT_GLOBAL(name) \
__REF; \
.align 2 ; \
.globl name; \
.globl GLUE(.,name); \
.section ".opd","aw"; \
name: \
.quad GLUE(.,name); \
.quad .TOC.@tocbase; \
.quad 0; \
.previous; \
.type GLUE(.,name),@function; \
GLUE(.,name):
#define _KPROBE(name) \
.section ".kprobes.text","a"; \
.align 2 ; \
.globl name; \
.globl GLUE(.,name); \
.section ".opd","aw"; \
name: \
.quad GLUE(.,name); \
.quad .TOC.@tocbase; \
.quad 0; \
.previous; \
.type GLUE(.,name),@function; \
GLUE(.,name):
#define _STATIC(name) \
.section ".text"; \
.align 2 ; \
.section ".opd","aw"; \
name: \
.quad GLUE(.,name); \
.quad .TOC.@tocbase; \
.quad 0; \
.previous; \
.type GLUE(.,name),@function; \
GLUE(.,name):
#define _INIT_STATIC(name) \
__REF; \
.align 2 ; \
.section ".opd","aw"; \
name: \
.quad GLUE(.,name); \
.quad .TOC.@tocbase; \
.quad 0; \
.previous; \
.type GLUE(.,name),@function; \
GLUE(.,name):
#define _ENTRY(n)	\
.globl n;	\
n:
#define _GLOBAL(n)	\
.text;		\
.stabs __stringify(n:F-1),N_FUN,0,0,n;\
.globl n;	\
n:
#define _KPROBE(n)	\
.section ".kprobes.text","a";	\
.globl	n;	\
n:
#define LOAD_REG_IMMEDIATE(reg,expr)		\
lis     (reg),(expr)@highest;		\
ori     (reg),(reg),(expr)@higher;	\
rldicr  (reg),(reg),32,31;		\
oris    (reg),(reg),(expr)@h;		\
ori     (reg),(reg),(expr)@l;
#define LOAD_REG_ADDR(reg,name)			\
ld	(reg),name@got(r2)
#define LOAD_REG_ADDRBASE(reg,name)	LOAD_REG_ADDR(reg,name)
#define ADDROFF(name)			0
#define LRSAVE	16
#define LOAD_REG_IMMEDIATE(reg,expr)		\
lis	(reg),(expr)@ha;		\
addi	(reg),(reg),(expr)@l;
#define LOAD_REG_ADDR(reg,name)		LOAD_REG_IMMEDIATE(reg, name)
#define LOAD_REG_ADDRBASE(reg, name)	lis	(reg),name@ha
#define ADDROFF(name)			name@l
#define LRSAVE	4
#define SYNC				\
BEGIN_FTR_SECTION			\
sync;				\
isync;				\
END_FTR_SECTION_IFSET(CPU_FTR_601)
#define SYNC_601			\
BEGIN_FTR_SECTION			\
sync;				\
END_FTR_SECTION_IFSET(CPU_FTR_601)
#define ISYNC_601			\
BEGIN_FTR_SECTION			\
isync;				\
END_FTR_SECTION_IFSET(CPU_FTR_601)
#define	SYNC
#define SYNC_601
#define ISYNC_601
#define MFTB(dest)			\
90:	mftb  dest;			\
BEGIN_FTR_SECTION_NESTED(96);		\
cmpwi dest,0;			\
beq-  90b;			\
END_FTR_SECTION_NESTED(CPU_FTR_CELL_TB_BUG, CPU_FTR_CELL_TB_BUG, 96)
#define MFTB(dest)			mftb dest
#define TLBSYNC
#define TLBSYNC				\
BEGIN_FTR_SECTION			\
tlbsync;			\
sync;				\
END_FTR_SECTION_IFCLR(CPU_FTR_601)
#if !defined(CONFIG_4xx) && !defined(CONFIG_8xx)
#define tlbia					\
li	r4,1024;			\
mtctr	r4;				\
lis	r4,KERNELBASE@h;		\
0:	tlbie	r4;				\
addi	r4,r4,0x1000;			\
bdnz	0b
#define PPC440EP_ERR42 isync
#define PPC440EP_ERR42
#if defined(CONFIG_BOOKE) && !defined(CONFIG_PPC64)
#define toreal(rd)
#define fromreal(rd)
#define tophys(rd,rs)				\
addis	rd,rs,0
#define tovirt(rd,rs)				\
addis	rd,rs,0
#elif defined(CONFIG_PPC64)
#define toreal(rd)
#define fromreal(rd)
#define tophys(rd,rs)                           \
clrldi	rd,rs,2
#define tovirt(rd,rs)                           \
rotldi	rd,rs,16;			\
ori	rd,rd,((KERNELBASE>>48)&0xFFFF);\
rotldi	rd,rd,48
#define toreal(rd)	tophys(rd,rd)
#define fromreal(rd)	tovirt(rd,rd)
#define tophys(rd,rs)				\
0:	addis	rd,rs,-PAGE_OFFSET@h;		\
.section ".vtop_fixup","aw";		\
.align  1;				\
.long   0b;				\
.previous
#define tovirt(rd,rs)				\
0:	addis	rd,rs,PAGE_OFFSET@h;		\
.section ".ptov_fixup","aw";		\
.align  1;				\
.long   0b;				\
.previous
#define RFI		rfid
#define MTMSRD(r)	mtmsrd	r
#define FIX_SRR1(ra, rb)
#define	RFI		rfi
#define RFI		rfi; b .
#define MTMSRD(r)	mtmsr	r
#define CLR_TOP32(r)
#define	cr0	0
#define	cr1	1
#define	cr2	2
#define	cr3	3
#define	cr4	4
#define	cr5	5
#define	cr6	6
#define	cr7	7
#define	r0	0
#define	r1	1
#define	r2	2
#define	r3	3
#define	r4	4
#define	r5	5
#define	r6	6
#define	r7	7
#define	r8	8
#define	r9	9
#define	r10	10
#define	r11	11
#define	r12	12
#define	r13	13
#define	r14	14
#define	r15	15
#define	r16	16
#define	r17	17
#define	r18	18
#define	r19	19
#define	r20	20
#define	r21	21
#define	r22	22
#define	r23	23
#define	r24	24
#define	r25	25
#define	r26	26
#define	r27	27
#define	r28	28
#define	r29	29
#define	r30	30
#define	r31	31
#define	fr0	0
#define	fr1	1
#define	fr2	2
#define	fr3	3
#define	fr4	4
#define	fr5	5
#define	fr6	6
#define	fr7	7
#define	fr8	8
#define	fr9	9
#define	fr10	10
#define	fr11	11
#define	fr12	12
#define	fr13	13
#define	fr14	14
#define	fr15	15
#define	fr16	16
#define	fr17	17
#define	fr18	18
#define	fr19	19
#define	fr20	20
#define	fr21	21
#define	fr22	22
#define	fr23	23
#define	fr24	24
#define	fr25	25
#define	fr26	26
#define	fr27	27
#define	fr28	28
#define	fr29	29
#define	fr30	30
#define	fr31	31
#define	vr0	0
#define	vr1	1
#define	vr2	2
#define	vr3	3
#define	vr4	4
#define	vr5	5
#define	vr6	6
#define	vr7	7
#define	vr8	8
#define	vr9	9
#define	vr10	10
#define	vr11	11
#define	vr12	12
#define	vr13	13
#define	vr14	14
#define	vr15	15
#define	vr16	16
#define	vr17	17
#define	vr18	18
#define	vr19	19
#define	vr20	20
#define	vr21	21
#define	vr22	22
#define	vr23	23
#define	vr24	24
#define	vr25	25
#define	vr26	26
#define	vr27	27
#define	vr28	28
#define	vr29	29
#define	vr30	30
#define	vr31	31
#define	vsr0	0
#define	vsr1	1
#define	vsr2	2
#define	vsr3	3
#define	vsr4	4
#define	vsr5	5
#define	vsr6	6
#define	vsr7	7
#define	vsr8	8
#define	vsr9	9
#define	vsr10	10
#define	vsr11	11
#define	vsr12	12
#define	vsr13	13
#define	vsr14	14
#define	vsr15	15
#define	vsr16	16
#define	vsr17	17
#define	vsr18	18
#define	vsr19	19
#define	vsr20	20
#define	vsr21	21
#define	vsr22	22
#define	vsr23	23
#define	vsr24	24
#define	vsr25	25
#define	vsr26	26
#define	vsr27	27
#define	vsr28	28
#define	vsr29	29
#define	vsr30	30
#define	vsr31	31
#define	vsr32	32
#define	vsr33	33
#define	vsr34	34
#define	vsr35	35
#define	vsr36	36
#define	vsr37	37
#define	vsr38	38
#define	vsr39	39
#define	vsr40	40
#define	vsr41	41
#define	vsr42	42
#define	vsr43	43
#define	vsr44	44
#define	vsr45	45
#define	vsr46	46
#define	vsr47	47
#define	vsr48	48
#define	vsr49	49
#define	vsr50	50
#define	vsr51	51
#define	vsr52	52
#define	vsr53	53
#define	vsr54	54
#define	vsr55	55
#define	vsr56	56
#define	vsr57	57
#define	vsr58	58
#define	vsr59	59
#define	vsr60	60
#define	vsr61	61
#define	vsr62	62
#define	vsr63	63
#define	evr0	0
#define	evr1	1
#define	evr2	2
#define	evr3	3
#define	evr4	4
#define	evr5	5
#define	evr6	6
#define	evr7	7
#define	evr8	8
#define	evr9	9
#define	evr10	10
#define	evr11	11
#define	evr12	12
#define	evr13	13
#define	evr14	14
#define	evr15	15
#define	evr16	16
#define	evr17	17
#define	evr18	18
#define	evr19	19
#define	evr20	20
#define	evr21	21
#define	evr22	22
#define	evr23	23
#define	evr24	24
#define	evr25	25
#define	evr26	26
#define	evr27	27
#define	evr28	28
#define	evr29	29
#define	evr30	30
#define	evr31	31
#define N_FUN	36
#define N_RSYM	64
#define N_SLINE	68
#define N_SO	100