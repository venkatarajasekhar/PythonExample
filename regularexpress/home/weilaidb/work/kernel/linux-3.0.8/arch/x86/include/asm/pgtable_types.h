#define _ASM_X86_PGTABLE_DEFS_H
#define FIRST_USER_ADDRESS	0
#define _PAGE_BIT_PRESENT	0
#define _PAGE_BIT_RW		1
#define _PAGE_BIT_USER		2
#define _PAGE_BIT_PWT		3
#define _PAGE_BIT_PCD		4
#define _PAGE_BIT_ACCESSED	5
#define _PAGE_BIT_DIRTY		6
#define _PAGE_BIT_PSE		7
#define _PAGE_BIT_PAT		7
#define _PAGE_BIT_GLOBAL	8
#define _PAGE_BIT_UNUSED1	9
#define _PAGE_BIT_IOMAP		10
#define _PAGE_BIT_HIDDEN	11
#define _PAGE_BIT_PAT_LARGE	12
#define _PAGE_BIT_SPECIAL	_PAGE_BIT_UNUSED1
#define _PAGE_BIT_CPA_TEST	_PAGE_BIT_UNUSED1
#define _PAGE_BIT_SPLITTING	_PAGE_BIT_UNUSED1
#define _PAGE_BIT_NX           63
#define _PAGE_BIT_PROTNONE	_PAGE_BIT_GLOBAL
#define _PAGE_BIT_FILE		_PAGE_BIT_DIRTY
#define _PAGE_PRESENT	(_AT(pteval_t, 1) << _PAGE_BIT_PRESENT)
#define _PAGE_RW	(_AT(pteval_t, 1) << _PAGE_BIT_RW)
#define _PAGE_USER	(_AT(pteval_t, 1) << _PAGE_BIT_USER)
#define _PAGE_PWT	(_AT(pteval_t, 1) << _PAGE_BIT_PWT)
#define _PAGE_PCD	(_AT(pteval_t, 1) << _PAGE_BIT_PCD)
#define _PAGE_ACCESSED	(_AT(pteval_t, 1) << _PAGE_BIT_ACCESSED)
#define _PAGE_DIRTY	(_AT(pteval_t, 1) << _PAGE_BIT_DIRTY)
#define _PAGE_PSE	(_AT(pteval_t, 1) << _PAGE_BIT_PSE)
#define _PAGE_GLOBAL	(_AT(pteval_t, 1) << _PAGE_BIT_GLOBAL)
#define _PAGE_UNUSED1	(_AT(pteval_t, 1) << _PAGE_BIT_UNUSED1)
#define _PAGE_IOMAP	(_AT(pteval_t, 1) << _PAGE_BIT_IOMAP)
#define _PAGE_PAT	(_AT(pteval_t, 1) << _PAGE_BIT_PAT)
#define _PAGE_PAT_LARGE (_AT(pteval_t, 1) << _PAGE_BIT_PAT_LARGE)
#define _PAGE_SPECIAL	(_AT(pteval_t, 1) << _PAGE_BIT_SPECIAL)
#define _PAGE_CPA_TEST	(_AT(pteval_t, 1) << _PAGE_BIT_CPA_TEST)
#define _PAGE_SPLITTING	(_AT(pteval_t, 1) << _PAGE_BIT_SPLITTING)
#define __HAVE_ARCH_PTE_SPECIAL
#define _PAGE_HIDDEN	(_AT(pteval_t, 1) << _PAGE_BIT_HIDDEN)
#define _PAGE_HIDDEN	(_AT(pteval_t, 0))
#if defined(CONFIG_X86_64) || defined(CONFIG_X86_PAE)
#define _PAGE_NX	(_AT(pteval_t, 1) << _PAGE_BIT_NX)
#define _PAGE_NX	(_AT(pteval_t, 0))
#define _PAGE_FILE	(_AT(pteval_t, 1) << _PAGE_BIT_FILE)
#define _PAGE_PROTNONE	(_AT(pteval_t, 1) << _PAGE_BIT_PROTNONE)
#define _PAGE_TABLE	(_PAGE_PRESENT | _PAGE_RW | _PAGE_USER |	\
_PAGE_ACCESSED | _PAGE_DIRTY)
#define _KERNPG_TABLE	(_PAGE_PRESENT | _PAGE_RW | _PAGE_ACCESSED |	\
_PAGE_DIRTY)
#define _PAGE_CHG_MASK	(PTE_PFN_MASK | _PAGE_PCD | _PAGE_PWT |		\
_PAGE_SPECIAL | _PAGE_ACCESSED | _PAGE_DIRTY)
#define _HPAGE_CHG_MASK (_PAGE_CHG_MASK | _PAGE_PSE)
#define _PAGE_CACHE_MASK	(_PAGE_PCD | _PAGE_PWT)
#define _PAGE_CACHE_WB		(0)
#define _PAGE_CACHE_WC		(_PAGE_PWT)
#define _PAGE_CACHE_UC_MINUS	(_PAGE_PCD)
#define _PAGE_CACHE_UC		(_PAGE_PCD | _PAGE_PWT)
#define PAGE_NONE	__pgprot(_PAGE_PROTNONE | _PAGE_ACCESSED)
#define PAGE_SHARED	__pgprot(_PAGE_PRESENT | _PAGE_RW | _PAGE_USER | \
_PAGE_ACCESSED | _PAGE_NX)
#define PAGE_SHARED_EXEC	__pgprot(_PAGE_PRESENT | _PAGE_RW |	\
_PAGE_USER | _PAGE_ACCESSED)
#define PAGE_COPY_NOEXEC	__pgprot(_PAGE_PRESENT | _PAGE_USER |	\
_PAGE_ACCESSED | _PAGE_NX)
#define PAGE_COPY_EXEC		__pgprot(_PAGE_PRESENT | _PAGE_USER |	\
_PAGE_ACCESSED)
#define PAGE_COPY		PAGE_COPY_NOEXEC
#define PAGE_READONLY		__pgprot(_PAGE_PRESENT | _PAGE_USER |	\
_PAGE_ACCESSED | _PAGE_NX)
#define PAGE_READONLY_EXEC	__pgprot(_PAGE_PRESENT | _PAGE_USER |	\
_PAGE_ACCESSED)
#define __PAGE_KERNEL_EXEC						\
(_PAGE_PRESENT | _PAGE_RW | _PAGE_DIRTY | _PAGE_ACCESSED | _PAGE_GLOBAL)
#define __PAGE_KERNEL		(__PAGE_KERNEL_EXEC | _PAGE_NX)
#define __PAGE_KERNEL_RO		(__PAGE_KERNEL & ~_PAGE_RW)
#define __PAGE_KERNEL_RX		(__PAGE_KERNEL_EXEC & ~_PAGE_RW)
#define __PAGE_KERNEL_EXEC_NOCACHE	(__PAGE_KERNEL_EXEC | _PAGE_PCD | _PAGE_PWT)
#define __PAGE_KERNEL_WC		(__PAGE_KERNEL | _PAGE_CACHE_WC)
#define __PAGE_KERNEL_NOCACHE		(__PAGE_KERNEL | _PAGE_PCD | _PAGE_PWT)
#define __PAGE_KERNEL_UC_MINUS		(__PAGE_KERNEL | _PAGE_PCD)
#define __PAGE_KERNEL_VSYSCALL		(__PAGE_KERNEL_RX | _PAGE_USER)
#define __PAGE_KERNEL_VSYSCALL_NOCACHE	(__PAGE_KERNEL_VSYSCALL | _PAGE_PCD | _PAGE_PWT)
#define __PAGE_KERNEL_LARGE		(__PAGE_KERNEL | _PAGE_PSE)
#define __PAGE_KERNEL_LARGE_NOCACHE	(__PAGE_KERNEL | _PAGE_CACHE_UC | _PAGE_PSE)
#define __PAGE_KERNEL_LARGE_EXEC	(__PAGE_KERNEL_EXEC | _PAGE_PSE)
#define __PAGE_KERNEL_IO		(__PAGE_KERNEL | _PAGE_IOMAP)
#define __PAGE_KERNEL_IO_NOCACHE	(__PAGE_KERNEL_NOCACHE | _PAGE_IOMAP)
#define __PAGE_KERNEL_IO_UC_MINUS	(__PAGE_KERNEL_UC_MINUS | _PAGE_IOMAP)
#define __PAGE_KERNEL_IO_WC		(__PAGE_KERNEL_WC | _PAGE_IOMAP)
#define PAGE_KERNEL			__pgprot(__PAGE_KERNEL)
#define PAGE_KERNEL_RO			__pgprot(__PAGE_KERNEL_RO)
#define PAGE_KERNEL_EXEC		__pgprot(__PAGE_KERNEL_EXEC)
#define PAGE_KERNEL_RX			__pgprot(__PAGE_KERNEL_RX)
#define PAGE_KERNEL_WC			__pgprot(__PAGE_KERNEL_WC)
#define PAGE_KERNEL_NOCACHE		__pgprot(__PAGE_KERNEL_NOCACHE)
#define PAGE_KERNEL_UC_MINUS		__pgprot(__PAGE_KERNEL_UC_MINUS)
#define PAGE_KERNEL_EXEC_NOCACHE	__pgprot(__PAGE_KERNEL_EXEC_NOCACHE)
#define PAGE_KERNEL_LARGE		__pgprot(__PAGE_KERNEL_LARGE)
#define PAGE_KERNEL_LARGE_NOCACHE	__pgprot(__PAGE_KERNEL_LARGE_NOCACHE)
#define PAGE_KERNEL_LARGE_EXEC		__pgprot(__PAGE_KERNEL_LARGE_EXEC)
#define PAGE_KERNEL_VSYSCALL		__pgprot(__PAGE_KERNEL_VSYSCALL)
#define PAGE_KERNEL_VSYSCALL_NOCACHE	__pgprot(__PAGE_KERNEL_VSYSCALL_NOCACHE)
#define PAGE_KERNEL_IO			__pgprot(__PAGE_KERNEL_IO)
#define PAGE_KERNEL_IO_NOCACHE		__pgprot(__PAGE_KERNEL_IO_NOCACHE)
#define PAGE_KERNEL_IO_UC_MINUS		__pgprot(__PAGE_KERNEL_IO_UC_MINUS)
#define PAGE_KERNEL_IO_WC		__pgprot(__PAGE_KERNEL_IO_WC)
#define __P000	PAGE_NONE
#define __P001	PAGE_READONLY
#define __P010	PAGE_COPY
#define __P011	PAGE_COPY
#define __P100	PAGE_READONLY_EXEC
#define __P101	PAGE_READONLY_EXEC
#define __P110	PAGE_COPY_EXEC
#define __P111	PAGE_COPY_EXEC
#define __S000	PAGE_NONE
#define __S001	PAGE_READONLY
#define __S010	PAGE_SHARED
#define __S011	PAGE_SHARED
#define __S100	PAGE_READONLY_EXEC
#define __S101	PAGE_READONLY_EXEC
#define __S110	PAGE_SHARED_EXEC
#define __S111	PAGE_SHARED_EXEC
#define __PAGE_KERNEL_IDENT_LARGE_EXEC	__PAGE_KERNEL_LARGE_EXEC
#define PTE_IDENT_ATTR	 0x003
#define PDE_IDENT_ATTR	 0x067
#define PGD_IDENT_ATTR	 0x001
# include "pgtable_32_types.h"
# include "pgtable_64_types.h"
#define PTE_PFN_MASK		((pteval_t)PHYSICAL_PAGE_MASK)
#define PTE_FLAGS_MASK		(~PTE_PFN_MASK)
typedef struct pgprot  pgprot_t;
typedef struct  pgd_t;
static inline pgd_t native_make_pgd(pgdval_t val)
static inline pgdval_t native_pgd_val(pgd_t pgd)
static inline pgdval_t pgd_flags(pgd_t pgd)
#if PAGETABLE_LEVELS > 3
typedef struct  pud_t;
static inline pud_t native_make_pud(pmdval_t val)
static inline pudval_t native_pud_val(pud_t pud)
static inline pudval_t native_pud_val(pud_t pud)
#if PAGETABLE_LEVELS > 2
typedef struct  pmd_t;
static inline pmd_t native_make_pmd(pmdval_t val)
static inline pmdval_t native_pmd_val(pmd_t pmd)
static inline pmdval_t native_pmd_val(pmd_t pmd)
static inline pudval_t pud_flags(pud_t pud)
static inline pmdval_t pmd_flags(pmd_t pmd)
static inline pte_t native_make_pte(pteval_t val)
static inline pteval_t native_pte_val(pte_t pte)
static inline pteval_t pte_flags(pte_t pte)
#define pgprot_val(x)	((x).pgprot)
#define __pgprot(x)	((pgprot_t)  )
typedef struct page *pgtable_t;
extern pteval_t __supported_pte_mask;
extern void set_nx(void);
extern int nx_enabled;
#define pgprot_writecombine	pgprot_writecombine
extern pgprot_t pgprot_writecombine(pgprot_t prot);
#define __HAVE_PFNMAP_TRACKING
#define __HAVE_PHYS_MEM_ACCESS_PROT
struct file;
pgprot_t phys_mem_access_prot(struct file *file, unsigned long pfn,
unsigned long size, pgprot_t vma_prot);
int phys_mem_access_prot_allowed(struct file *file, unsigned long pfn,
unsigned long size, pgprot_t *vma_prot);
void set_pte_vaddr(unsigned long vaddr, pte_t pte);
extern void native_pagetable_reserve(u64 start, u64 end);
extern void native_pagetable_setup_start(pgd_t *base);
extern void native_pagetable_setup_done(pgd_t *base);
#define native_pagetable_setup_start x86_init_pgd_noop
#define native_pagetable_setup_done  x86_init_pgd_noop
struct seq_file;
extern void arch_report_meminfo(struct seq_file *m);
enum ;
extern void update_page_count(int level, unsigned long pages);
static inline void update_page_count(int level, unsigned long pages)
extern pte_t *lookup_address(unsigned long address, unsigned int *level);
