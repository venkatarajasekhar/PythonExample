#define __ASMS390_ELF_H
#define R_390_NONE		0
#define R_390_8			1
#define R_390_12		2
#define R_390_16		3
#define R_390_32		4
#define R_390_PC32		5
#define R_390_GOT12		6
#define R_390_GOT32		7
#define R_390_PLT32		8
#define R_390_COPY		9
#define R_390_GLOB_DAT		10
#define R_390_JMP_SLOT		11
#define R_390_RELATIVE		12
#define R_390_GOTOFF32		13
#define R_390_GOTPC		14
#define R_390_GOT16		15
#define R_390_PC16		16
#define R_390_PC16DBL		17
#define R_390_PLT16DBL		18
#define R_390_PC32DBL		19
#define R_390_PLT32DBL		20
#define R_390_GOTPCDBL		21
#define R_390_64		22
#define R_390_PC64		23
#define R_390_GOT64		24
#define R_390_PLT64		25
#define R_390_GOTENT		26
#define R_390_GOTOFF16		27
#define R_390_GOTOFF64		28
#define R_390_GOTPLT12		29
#define R_390_GOTPLT16		30
#define R_390_GOTPLT32		31
#define R_390_GOTPLT64		32
#define R_390_GOTPLTENT		33
#define R_390_PLTOFF16		34
#define R_390_PLTOFF32		35
#define R_390_PLTOFF64		36
#define R_390_TLS_LOAD		37
#define R_390_TLS_GDCALL	38
#define R_390_TLS_LDCALL	39
#define R_390_TLS_GD32		40
#define R_390_TLS_GD64		41
#define R_390_TLS_GOTIE12	42
#define R_390_TLS_GOTIE32	43
#define R_390_TLS_GOTIE64	44
#define R_390_TLS_LDM32		45
#define R_390_TLS_LDM64		46
#define R_390_TLS_IE32		47
#define R_390_TLS_IE64		48
#define R_390_TLS_IEENT		49
#define R_390_TLS_LE32		50
#define R_390_TLS_LE64		51
#define R_390_TLS_LDO32		52
#define R_390_TLS_LDO64		53
#define R_390_TLS_DTPMOD	54
#define R_390_TLS_DTPOFF	55
#define R_390_TLS_TPOFF		56
#define R_390_20		57
#define R_390_GOT20		58
#define R_390_GOTPLT20		59
#define R_390_TLS_GOTIE20	60
#define R_390_NUM	61
#define HWCAP_S390_ESAN3	1
#define HWCAP_S390_ZARCH	2
#define HWCAP_S390_STFLE	4
#define HWCAP_S390_MSA		8
#define HWCAP_S390_LDISP	16
#define HWCAP_S390_EIMM		32
#define HWCAP_S390_DFP		64
#define HWCAP_S390_HPAGE	128
#define HWCAP_S390_ETF3EH	256
#define HWCAP_S390_HIGH_GPRS	512
#define ELF_CLASS	ELFCLASS32
#define ELF_CLASS	ELFCLASS64
#define ELF_DATA	ELFDATA2MSB
#define ELF_ARCH	EM_S390
typedef s390_fp_regs elf_fpregset_t;
typedef s390_regs elf_gregset_t;
typedef s390_fp_regs compat_elf_fpregset_t;
typedef s390_compat_regs compat_elf_gregset_t;
extern unsigned int vdso_enabled;
#define elf_check_arch(x) \
(((x)->e_machine == EM_S390 || (x)->e_machine == EM_S390_OLD) \
&& (x)->e_ident[EI_CLASS] == ELF_CLASS)
#define compat_elf_check_arch(x) \
(((x)->e_machine == EM_S390 || (x)->e_machine == EM_S390_OLD) \
&& (x)->e_ident[EI_CLASS] == ELF_CLASS)
#define compat_start_thread	start_thread31
#define ELF_PLAT_INIT(_r, load_addr) \
do  while (0)
#define CORE_DUMP_USE_REGSET
#define ELF_EXEC_PAGESIZE	4096
extern unsigned long randomize_et_dyn(unsigned long base);
#define ELF_ET_DYN_BASE		(randomize_et_dyn(STACK_TOP / 3 * 2))
extern unsigned long elf_hwcap;
#define ELF_HWCAP (elf_hwcap)
#define ELF_PLATFORM_SIZE 8
extern char elf_platform[];
#define ELF_PLATFORM (elf_platform)
#define SET_PERSONALITY(ex) set_personality(PER_LINUX)
#define SET_PERSONALITY(ex)					\
do  while (0)
#define STACK_RND_MASK	0x7ffUL
#define ARCH_DLINFO							    \
do  while (0)
struct linux_binprm;
#define ARCH_HAS_SETUP_ADDITIONAL_PAGES 1
int arch_setup_additional_pages(struct linux_binprm *, int);
extern unsigned long arch_randomize_brk(struct mm_struct *mm);
#define arch_randomize_brk arch_randomize_brk
