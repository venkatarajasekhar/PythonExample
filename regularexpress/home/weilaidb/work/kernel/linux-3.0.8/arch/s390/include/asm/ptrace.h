#define _S390_PTRACE_H
#define PT_PSWMASK  0x00
#define PT_PSWADDR  0x04
#define PT_GPR0     0x08
#define PT_GPR1     0x0C
#define PT_GPR2     0x10
#define PT_GPR3     0x14
#define PT_GPR4     0x18
#define PT_GPR5     0x1C
#define PT_GPR6     0x20
#define PT_GPR7     0x24
#define PT_GPR8     0x28
#define PT_GPR9     0x2C
#define PT_GPR10    0x30
#define PT_GPR11    0x34
#define PT_GPR12    0x38
#define PT_GPR13    0x3C
#define PT_GPR14    0x40
#define PT_GPR15    0x44
#define PT_ACR0     0x48
#define PT_ACR1     0x4C
#define PT_ACR2     0x50
#define PT_ACR3     0x54
#define PT_ACR4	    0x58
#define PT_ACR5	    0x5C
#define PT_ACR6	    0x60
#define PT_ACR7	    0x64
#define PT_ACR8	    0x68
#define PT_ACR9	    0x6C
#define PT_ACR10    0x70
#define PT_ACR11    0x74
#define PT_ACR12    0x78
#define PT_ACR13    0x7C
#define PT_ACR14    0x80
#define PT_ACR15    0x84
#define PT_ORIGGPR2 0x88
#define PT_FPC	    0x90
#define PT_FPR0_HI  0x98
#define PT_FPR0_LO  0x9C
#define PT_FPR1_HI  0xA0
#define PT_FPR1_LO  0xA4
#define PT_FPR2_HI  0xA8
#define PT_FPR2_LO  0xAC
#define PT_FPR3_HI  0xB0
#define PT_FPR3_LO  0xB4
#define PT_FPR4_HI  0xB8
#define PT_FPR4_LO  0xBC
#define PT_FPR5_HI  0xC0
#define PT_FPR5_LO  0xC4
#define PT_FPR6_HI  0xC8
#define PT_FPR6_LO  0xCC
#define PT_FPR7_HI  0xD0
#define PT_FPR7_LO  0xD4
#define PT_FPR8_HI  0xD8
#define PT_FPR8_LO  0XDC
#define PT_FPR9_HI  0xE0
#define PT_FPR9_LO  0xE4
#define PT_FPR10_HI 0xE8
#define PT_FPR10_LO 0xEC
#define PT_FPR11_HI 0xF0
#define PT_FPR11_LO 0xF4
#define PT_FPR12_HI 0xF8
#define PT_FPR12_LO 0xFC
#define PT_FPR13_HI 0x100
#define PT_FPR13_LO 0x104
#define PT_FPR14_HI 0x108
#define PT_FPR14_LO 0x10C
#define PT_FPR15_HI 0x110
#define PT_FPR15_LO 0x114
#define PT_CR_9	    0x118
#define PT_CR_10    0x11C
#define PT_CR_11    0x120
#define PT_IEEE_IP  0x13C
#define PT_LASTOFF  PT_IEEE_IP
#define PT_ENDREGS  0x140-1
#define GPR_SIZE	4
#define CR_SIZE		4
#define STACK_FRAME_OVERHEAD	96
#define PT_PSWMASK  0x00
#define PT_PSWADDR  0x08
#define PT_GPR0     0x10
#define PT_GPR1     0x18
#define PT_GPR2     0x20
#define PT_GPR3     0x28
#define PT_GPR4     0x30
#define PT_GPR5     0x38
#define PT_GPR6     0x40
#define PT_GPR7     0x48
#define PT_GPR8     0x50
#define PT_GPR9     0x58
#define PT_GPR10    0x60
#define PT_GPR11    0x68
#define PT_GPR12    0x70
#define PT_GPR13    0x78
#define PT_GPR14    0x80
#define PT_GPR15    0x88
#define PT_ACR0     0x90
#define PT_ACR1     0x94
#define PT_ACR2     0x98
#define PT_ACR3     0x9C
#define PT_ACR4	    0xA0
#define PT_ACR5	    0xA4
#define PT_ACR6	    0xA8
#define PT_ACR7	    0xAC
#define PT_ACR8	    0xB0
#define PT_ACR9	    0xB4
#define PT_ACR10    0xB8
#define PT_ACR11    0xBC
#define PT_ACR12    0xC0
#define PT_ACR13    0xC4
#define PT_ACR14    0xC8
#define PT_ACR15    0xCC
#define PT_ORIGGPR2 0xD0
#define PT_FPC	    0xD8
#define PT_FPR0     0xE0
#define PT_FPR1     0xE8
#define PT_FPR2     0xF0
#define PT_FPR3     0xF8
#define PT_FPR4     0x100
#define PT_FPR5     0x108
#define PT_FPR6     0x110
#define PT_FPR7     0x118
#define PT_FPR8     0x120
#define PT_FPR9     0x128
#define PT_FPR10    0x130
#define PT_FPR11    0x138
#define PT_FPR12    0x140
#define PT_FPR13    0x148
#define PT_FPR14    0x150
#define PT_FPR15    0x158
#define PT_CR_9     0x160
#define PT_CR_10    0x168
#define PT_CR_11    0x170
#define PT_IEEE_IP  0x1A8
#define PT_LASTOFF  PT_IEEE_IP
#define PT_ENDREGS  0x1B0-1
#define GPR_SIZE	8
#define CR_SIZE		8
#define STACK_FRAME_OVERHEAD    160
#define NUM_GPRS	16
#define NUM_FPRS	16
#define NUM_CRS		16
#define NUM_ACRS	16
#define NUM_CR_WORDS	3
#define FPR_SIZE	8
#define FPC_SIZE	4
#define FPC_PAD_SIZE	4
#define ACR_SIZE	4
#define PTRACE_OLDSETOPTIONS         21
typedef union
freg_t;
typedef struct
s390_fp_regs;
#define FPC_EXCEPTION_MASK      0xF8000000
#define FPC_FLAGS_MASK          0x00F80000
#define FPC_DXC_MASK            0x0000FF00
#define FPC_RM_MASK             0x00000003
#define FPC_VALID_MASK          0xF8F8FF03
typedef struct
__attribute__ ((aligned(8))) psw_t;
typedef struct
__attribute__ ((aligned(8))) psw_compat_t;
#define PSW_MASK_PER		0x40000000UL
#define PSW_MASK_DAT		0x04000000UL
#define PSW_MASK_IO		0x02000000UL
#define PSW_MASK_EXT		0x01000000UL
#define PSW_MASK_KEY		0x00F00000UL
#define PSW_MASK_MCHECK		0x00040000UL
#define PSW_MASK_WAIT		0x00020000UL
#define PSW_MASK_PSTATE		0x00010000UL
#define PSW_MASK_ASC		0x0000C000UL
#define PSW_MASK_CC		0x00003000UL
#define PSW_MASK_PM		0x00000F00UL
#define PSW_ADDR_AMODE		0x80000000UL
#define PSW_ADDR_INSN		0x7FFFFFFFUL
#define PSW_BASE_BITS		0x00080000UL
#define PSW_DEFAULT_KEY		(((unsigned long) PAGE_DEFAULT_ACC) << 20)
#define PSW_ASC_PRIMARY		0x00000000UL
#define PSW_ASC_ACCREG		0x00004000UL
#define PSW_ASC_SECONDARY	0x00008000UL
#define PSW_ASC_HOME		0x0000C000UL
#define PSW_MASK_PER		0x4000000000000000UL
#define PSW_MASK_DAT		0x0400000000000000UL
#define PSW_MASK_IO		0x0200000000000000UL
#define PSW_MASK_EXT		0x0100000000000000UL
#define PSW_MASK_KEY		0x00F0000000000000UL
#define PSW_MASK_MCHECK		0x0004000000000000UL
#define PSW_MASK_WAIT		0x0002000000000000UL
#define PSW_MASK_PSTATE		0x0001000000000000UL
#define PSW_MASK_ASC		0x0000C00000000000UL
#define PSW_MASK_CC		0x0000300000000000UL
#define PSW_MASK_PM		0x00000F0000000000UL
#define PSW_ADDR_AMODE		0x0000000000000000UL
#define PSW_ADDR_INSN		0xFFFFFFFFFFFFFFFFUL
#define PSW_BASE_BITS		0x0000000180000000UL
#define PSW_BASE32_BITS		0x0000000080000000UL
#define PSW_DEFAULT_KEY		(((unsigned long) PAGE_DEFAULT_ACC) << 52)
#define PSW_ASC_PRIMARY		0x0000000000000000UL
#define PSW_ASC_ACCREG		0x0000400000000000UL
#define PSW_ASC_SECONDARY	0x0000800000000000UL
#define PSW_ASC_HOME		0x0000C00000000000UL
extern long psw_kernel_bits;
extern long psw_user_bits;
extern long psw_user32_bits;
#define PSW_MASK_MERGE(CURRENT,NEW) \
(((CURRENT) & ~(PSW_MASK_CC|PSW_MASK_PM)) | \
((NEW) & (PSW_MASK_CC|PSW_MASK_PM)))
typedef struct
s390_regs;
typedef struct
s390_compat_regs;
typedef struct
s390_compat_regs_high;
struct pt_regs
;
struct per_regs ;
struct per_event ;
struct per_struct_kernel ;
#define PER_EVENT_MASK			0xE9000000UL
#define PER_EVENT_BRANCH		0x80000000UL
#define PER_EVENT_IFETCH		0x40000000UL
#define PER_EVENT_STORE			0x20000000UL
#define PER_EVENT_STORE_REAL		0x08000000UL
#define PER_EVENT_NULLIFICATION		0x01000000UL
#define PER_CONTROL_MASK		0x00a00000UL
#define PER_CONTROL_BRANCH_ADDRESS	0x00800000UL
#define PER_CONTROL_ALTERATION		0x00200000UL
typedef struct
per_cr_words;
#define PER_EM_MASK 0xE8000000UL
typedef	struct
per_cr_bits;
typedef struct
per_lowcore_words;
typedef struct
per_lowcore_bits;
typedef struct
per_struct;
typedef struct
ptrace_area;
#define PTRACE_PEEKUSR_AREA           0x5000
#define PTRACE_POKEUSR_AREA           0x5001
#define PTRACE_PEEKTEXT_AREA	      0x5002
#define PTRACE_PEEKDATA_AREA	      0x5003
#define PTRACE_POKETEXT_AREA	      0x5004
#define PTRACE_POKEDATA_AREA 	      0x5005
#define PTRACE_GET_LAST_BREAK	      0x5006
#define PTRACE_PROT                       21
typedef enum
ptprot_flags;
typedef struct
ptprot_area;
#define S390_BREAKPOINT
#define S390_BREAKPOINT_U16 ((__u16)0x0001)
#define S390_SYSCALL_OPCODE ((__u16)0x0a00)
#define S390_SYSCALL_SIZE   2
struct user_regs_struct
;
#define arch_has_single_step()	(1)
extern void show_regs(struct pt_regs * regs);
#define user_mode(regs) (((regs)->psw.mask & PSW_MASK_PSTATE) != 0)
#define instruction_pointer(regs) ((regs)->psw.addr & PSW_ADDR_INSN)
#define user_stack_pointer(regs)((regs)->gprs[15])
#define regs_return_value(regs)((regs)->gprs[2])
#define profile_pc(regs) instruction_pointer(regs)
int regs_query_register_offset(const char *name);
const char *regs_query_register_name(unsigned int offset);
unsigned long regs_get_register(struct pt_regs *regs, unsigned int offset);
unsigned long regs_get_kernel_stack_nth(struct pt_regs *regs, unsigned int n);
static inline unsigned long kernel_stack_pointer(struct pt_regs *regs)
