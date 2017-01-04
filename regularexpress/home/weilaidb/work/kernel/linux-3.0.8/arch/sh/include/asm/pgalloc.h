#define __ASM_SH_PGALLOC_H
#define QUICK_PT 0
extern pgd_t *pgd_alloc(struct mm_struct *);
extern void pgd_free(struct mm_struct *mm, pgd_t *pgd);
#if PAGETABLE_LEVELS > 2
extern void pud_populate(struct mm_struct *mm, pud_t *pudp, pmd_t *pmd);
extern pmd_t *pmd_alloc_one(struct mm_struct *mm, unsigned long address);
extern void pmd_free(struct mm_struct *mm, pmd_t *pmd);
static inline void pmd_populate_kernel(struct mm_struct *mm, pmd_t *pmd,
pte_t *pte)
static inline void pmd_populate(struct mm_struct *mm, pmd_t *pmd,
pgtable_t pte)
#define pmd_pgtable(pmd) pmd_page(pmd)
static inline pte_t *pte_alloc_one_kernel(struct mm_struct *mm,
unsigned long address)
static inline pgtable_t pte_alloc_one(struct mm_struct *mm,
unsigned long address)
static inline void pte_free_kernel(struct mm_struct *mm, pte_t *pte)
static inline void pte_free(struct mm_struct *mm, pgtable_t pte)
#define __pte_free_tlb(tlb,pte,addr)			\
do  while (0)
static inline void check_pgt_cache(void)
