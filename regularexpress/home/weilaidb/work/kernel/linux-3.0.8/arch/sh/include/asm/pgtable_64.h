#define __ASM_SH_PGTABLE_64_H
#define pte_ERROR(e) \
printk("%s:%d: bad pte %016Lx.\n", __FILE__, __LINE__, pte_val(e))
#define pgd_ERROR(e) \
printk("%s:%d: bad pgd %08lx.\n", __FILE__, __LINE__, pgd_val(e))
#define set_pmd(pmdptr, pmdval) (*(pmdptr) = pmdval)
static __inline__ void set_pte(pte_t *pteptr, pte_t pteval)
#define set_pte_at(mm,addr,ptep,pteval) set_pte(ptep,pteval)
#define pgd_index(address) (((address) >> PGDIR_SHIFT) & (PTRS_PER_PGD-1))
#define __pgd_offset(address) pgd_index(address)
#define pgd_offset(mm, address) ((mm)->pgd+pgd_index(address))
#define pgd_offset_k(address) pgd_offset(&init_mm, address)
#define __pud_offset(address)	(((address) >> PUD_SHIFT) & (PTRS_PER_PUD-1))
#define __pmd_offset(address)	(((address) >> PMD_SHIFT) & (PTRS_PER_PMD-1))
#define _PMD_EMPTY		0x0
#define pmd_present(pmd_entry)	(pmd_val(pmd_entry) & _PAGE_PRESENT)
#define pmd_clear(pmd_entry_p)	(set_pmd((pmd_entry_p), __pmd(_PMD_EMPTY)))
#define pmd_none(pmd_entry)	(pmd_val((pmd_entry)) == _PMD_EMPTY)
#define pmd_bad(pmd_entry)	((pmd_val(pmd_entry) & (~PAGE_MASK & ~_PAGE_USER)) != _KERNPG_TABLE)
#define pmd_page_vaddr(pmd_entry) \
((unsigned long) __va(pmd_val(pmd_entry) & PAGE_MASK))
#define pmd_page(pmd) \
(virt_to_page(pmd_val(pmd)))
#define pte_index(address) \
((address >> PAGE_SHIFT) & (PTRS_PER_PTE - 1))
#define __pte_offset(address)	pte_index(address)
#define pte_offset_kernel(dir, addr) \
((pte_t *) ((pmd_val(*(dir))) & PAGE_MASK) + pte_index((addr)))
#define pte_offset_map(dir,addr)	pte_offset_kernel(dir, addr)
#define pte_unmap(pte)		do  while (0)
#define IOBASE_VADDR	0xff000000
#define IOBASE_END	0xffffffff
#define _PAGE_WT	0x001
#define _PAGE_DEVICE	0x001
#define _PAGE_CACHABLE	0x002
#define _PAGE_PRESENT	0x004
#define _PAGE_FILE	0x004
#define _PAGE_SIZE0	0x008
#define _PAGE_SIZE1	0x010
#define _PAGE_SHARED	0x020
#define _PAGE_READ	0x040
#define _PAGE_EXECUTE	0x080
#define _PAGE_WRITE	0x100
#define _PAGE_USER	0x200
#define _PAGE_DIRTY	0x400
#define _PAGE_ACCESSED	0x800
#define _PAGE_EXT(x)		((unsigned long long)(x) << 32)
#define _PAGE_WIRED	_PAGE_EXT(0x001)
#define _PAGE_SPECIAL	_PAGE_EXT(0x002)
#define _PAGE_CLEAR_FLAGS	(_PAGE_PRESENT | _PAGE_FILE | _PAGE_SHARED | \
_PAGE_DIRTY | _PAGE_ACCESSED | _PAGE_WIRED)
#define _PAGE_FLAGS_HARDWARE_MASK	(NEFF_MASK & ~(_PAGE_CLEAR_FLAGS))
#if defined(CONFIG_HUGETLB_PAGE_SIZE_64K)
#define _PAGE_SZHUGE	(_PAGE_SIZE0)
#elif defined(CONFIG_HUGETLB_PAGE_SIZE_1MB)
#define _PAGE_SZHUGE	(_PAGE_SIZE1)
#elif defined(CONFIG_HUGETLB_PAGE_SIZE_512MB)
#define _PAGE_SZHUGE	(_PAGE_SIZE0 | _PAGE_SIZE1)
# define _PAGE_SZHUGE	(0)
#define _KERNPG_TABLE	(_PAGE_PRESENT | _PAGE_READ | _PAGE_WRITE | \
_PAGE_EXECUTE | \
_PAGE_CACHABLE | _PAGE_ACCESSED | _PAGE_DIRTY | \
_PAGE_SHARED)
#define _PAGE_TABLE	(_KERNPG_TABLE | _PAGE_USER)
#define _PAGE_CHG_MASK	(PTE_MASK | _PAGE_ACCESSED | _PAGE_DIRTY | \
_PAGE_SPECIAL)
#define _PAGE_COMMON	(_PAGE_PRESENT | _PAGE_USER | \
_PAGE_CACHABLE | _PAGE_ACCESSED)
#define PAGE_NONE	__pgprot(_PAGE_CACHABLE | _PAGE_ACCESSED)
#define PAGE_SHARED	__pgprot(_PAGE_COMMON | _PAGE_READ | _PAGE_WRITE | \
_PAGE_SHARED)
#define PAGE_EXECREAD	__pgprot(_PAGE_COMMON | _PAGE_READ | _PAGE_EXECUTE)
#define PAGE_COPY	PAGE_EXECREAD
#define PAGE_READONLY	__pgprot(_PAGE_COMMON | _PAGE_READ)
#define PAGE_WRITEONLY	__pgprot(_PAGE_COMMON | _PAGE_WRITE)
#define PAGE_RWX	__pgprot(_PAGE_COMMON | _PAGE_READ | \
_PAGE_WRITE | _PAGE_EXECUTE)
#define PAGE_KERNEL	__pgprot(_KERNPG_TABLE)
#define PAGE_KERNEL_NOCACHE \
__pgprot(_PAGE_PRESENT | _PAGE_READ | _PAGE_WRITE | \
_PAGE_EXECUTE | _PAGE_ACCESSED | \
_PAGE_DIRTY | _PAGE_SHARED)
#define pgprot_noncached(x) __pgprot(((x).pgprot & ~(_PAGE_CACHABLE)) | _PAGE_DEVICE)
#define pgprot_writecombine(prot) __pgprot(pgprot_val(prot) & ~_PAGE_CACHABLE)
#define _PTE_EMPTY	0x0
#define pte_present(x)	(pte_val(x) & _PAGE_PRESENT)
#define pte_clear(mm,addr,xp)	(set_pte_at(mm, addr, xp, __pte(_PTE_EMPTY)))
#define pte_none(x)	(pte_val(x) == _PTE_EMPTY)
#define pte_pagenr(x)		(((unsigned long) (pte_val(x)) - \
__MEMORY_START) >> PAGE_SHIFT)
#define pte_page(x)		(mem_map + pte_pagenr(x))
#define pages_to_mb(x) ((x) >> (20-PAGE_SHIFT))
static inline int pte_dirty(pte_t pte)
static inline int pte_young(pte_t pte)
static inline int pte_file(pte_t pte)
static inline int pte_write(pte_t pte)
static inline int pte_special(pte_t pte)
static inline pte_t pte_wrprotect(pte_t pte)
static inline pte_t pte_mkclean(pte_t pte)
static inline pte_t pte_mkold(pte_t pte)
static inline pte_t pte_mkwrite(pte_t pte)
static inline pte_t pte_mkdirty(pte_t pte)
static inline pte_t pte_mkyoung(pte_t pte)
static inline pte_t pte_mkhuge(pte_t pte)
static inline pte_t pte_mkspecial(pte_t pte)
#define mk_pte(page,pgprot)							\
()
#define mk_pte_phys(physpage, pgprot) \
()
static inline pte_t pte_modify(pte_t pte, pgprot_t newprot)
#define __swp_type(x)			(((x).val & 3) + (((x).val >> 1) & 0x3c))
#define __swp_offset(x)			((x).val >> 8)
#define __swp_entry(type, offset)	((swp_entry_t) )
#define __pte_to_swp_entry(pte)		((swp_entry_t) )
#define __swp_entry_to_pte(x)		((pte_t) )
#define PTE_FILE_MAX_BITS		29
#define pte_to_pgoff(pte)		(pte_val(pte))
#define pgoff_to_pte(off)		((pte_t) )
#define pfn_pte(pfn, prot)	__pte(((pfn) << PAGE_SHIFT) | pgprot_val(prot))
#define pfn_pmd(pfn, prot)	__pmd(((pfn) << PAGE_SHIFT) | pgprot_val(prot))
