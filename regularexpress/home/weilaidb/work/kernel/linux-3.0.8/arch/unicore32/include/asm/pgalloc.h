#define __UNICORE_PGALLOC_H__
#define check_pgt_cache()		do  while (0)
#define _PAGE_USER_TABLE	(PMD_TYPE_TABLE | PMD_PRESENT)
#define _PAGE_KERNEL_TABLE	(PMD_TYPE_TABLE | PMD_PRESENT)
extern pgd_t *get_pgd_slow(struct mm_struct *mm);
extern void free_pgd_slow(struct mm_struct *mm, pgd_t *pgd);
#define pgd_alloc(mm)			get_pgd_slow(mm)
#define pgd_free(mm, pgd)		free_pgd_slow(mm, pgd)
#define PGALLOC_GFP	(GFP_KERNEL | __GFP_NOTRACK | __GFP_REPEAT | __GFP_ZERO)
static inline pte_t *
pte_alloc_one_kernel(struct mm_struct *mm, unsigned long addr)
static inline pgtable_t
pte_alloc_one(struct mm_struct *mm, unsigned long addr)
static inline void pte_free_kernel(struct mm_struct *mm, pte_t *pte)
static inline void pte_free(struct mm_struct *mm, pgtable_t pte)
static inline void __pmd_populate(pmd_t *pmdp, unsigned long pmdval)
static inline void
pmd_populate_kernel(struct mm_struct *mm, pmd_t *pmdp, pte_t *ptep)
static inline void
pmd_populate(struct mm_struct *mm, pmd_t *pmdp, pgtable_t ptep)
#define pmd_pgtable(pmd) pmd_page(pmd)
