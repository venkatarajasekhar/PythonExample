#define _ASM_X86_PGTABLE_64_H
extern pud_t level3_kernel_pgt[512];
extern pud_t level3_ident_pgt[512];
extern pmd_t level2_kernel_pgt[512];
extern pmd_t level2_fixmap_pgt[512];
extern pmd_t level2_ident_pgt[512];
extern pgd_t init_level4_pgt[];
#define swapper_pg_dir init_level4_pgt
extern void paging_init(void);
#define pte_ERROR(e)					\
printk("%s:%d: bad pte %p(%016lx).\n",		\
__FILE__, __LINE__, &(e), pte_val(e))
#define pmd_ERROR(e)					\
printk("%s:%d: bad pmd %p(%016lx).\n",		\
__FILE__, __LINE__, &(e), pmd_val(e))
#define pud_ERROR(e)					\
printk("%s:%d: bad pud %p(%016lx).\n",		\
__FILE__, __LINE__, &(e), pud_val(e))
#define pgd_ERROR(e)					\
printk("%s:%d: bad pgd %p(%016lx).\n",		\
__FILE__, __LINE__, &(e), pgd_val(e))
struct mm_struct;
void set_pte_vaddr_pud(pud_t *pud_page, unsigned long vaddr, pte_t new_pte);
static inline void native_pte_clear(struct mm_struct *mm, unsigned long addr,
pte_t *ptep)
static inline void native_set_pte(pte_t *ptep, pte_t pte)
static inline void native_set_pte_atomic(pte_t *ptep, pte_t pte)
static inline void native_set_pmd(pmd_t *pmdp, pmd_t pmd)
static inline void native_pmd_clear(pmd_t *pmd)
static inline pte_t native_ptep_get_and_clear(pte_t *xp)
static inline pmd_t native_pmdp_get_and_clear(pmd_t *xp)
static inline void native_set_pud(pud_t *pudp, pud_t pud)
static inline void native_pud_clear(pud_t *pud)
static inline void native_set_pgd(pgd_t *pgdp, pgd_t pgd)
static inline void native_pgd_clear(pgd_t *pgd)
extern void sync_global_pgds(unsigned long start, unsigned long end);
static inline int pgd_large(pgd_t pgd)
#define mk_kernel_pgd(address) __pgd((address) | _KERNPG_TABLE)
#define pte_to_pgoff(pte) ((pte_val((pte)) & PHYSICAL_PAGE_MASK) >> PAGE_SHIFT)
#define pgoff_to_pte(off) ((pte_t) )
#define PTE_FILE_MAX_BITS __PHYSICAL_MASK_SHIFT
#define pte_offset_map(dir, address) pte_offset_kernel((dir), (address))
#define pte_unmap(pte) ((void)(pte))
#define update_mmu_cache(vma, address, ptep) do  while (0)
#if _PAGE_BIT_FILE < _PAGE_BIT_PROTNONE
#define SWP_TYPE_BITS (_PAGE_BIT_FILE - _PAGE_BIT_PRESENT - 1)
#define SWP_OFFSET_SHIFT (_PAGE_BIT_PROTNONE + 1)
#define SWP_TYPE_BITS (_PAGE_BIT_PROTNONE - _PAGE_BIT_PRESENT - 1)
#define SWP_OFFSET_SHIFT (_PAGE_BIT_FILE + 1)
#define MAX_SWAPFILES_CHECK() BUILD_BUG_ON(MAX_SWAPFILES_SHIFT > SWP_TYPE_BITS)
#define __swp_type(x)			(((x).val >> (_PAGE_BIT_PRESENT + 1)) \
& ((1U << SWP_TYPE_BITS) - 1))
#define __swp_offset(x)			((x).val >> SWP_OFFSET_SHIFT)
#define __swp_entry(type, offset)	((swp_entry_t) )
#define __pte_to_swp_entry(pte)		((swp_entry_t) )
#define __swp_entry_to_pte(x)		((pte_t) )
extern int kern_addr_valid(unsigned long addr);
extern void cleanup_highmap(void);
#define HAVE_ARCH_UNMAPPED_AREA
#define HAVE_ARCH_UNMAPPED_AREA_TOPDOWN
#define pgtable_cache_init()   do  while (0)
#define check_pgt_cache()      do  while (0)
#define PAGE_AGP    PAGE_KERNEL_NOCACHE
#define HAVE_PAGE_AGP 1
#define	kc_vaddr_to_offset(v) ((v) & __VIRTUAL_MASK)
#define	kc_offset_to_vaddr(o) ((o) | ~__VIRTUAL_MASK)
#define __HAVE_ARCH_PTE_SAME
