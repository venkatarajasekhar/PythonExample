#define __ASM_AVR32_PGALLOC_H
#define QUICK_PGD	0
#define QUICK_PT	1
static inline void pmd_populate_kernel(struct mm_struct *mm,
pmd_t *pmd, pte_t *pte)
static inline void pmd_populate(struct mm_struct *mm, pmd_t *pmd,
pgtable_t pte)
#define pmd_pgtable(pmd) pmd_page(pmd)
static inline void pgd_ctor(void *x)
static inline pgd_t *pgd_alloc(struct mm_struct *mm)
static inline void pgd_free(struct mm_struct *mm, pgd_t *pgd)
static inline pte_t *pte_alloc_one_kernel(struct mm_struct *mm,
unsigned long address)
static inline pgtable_t pte_alloc_one(struct mm_struct *mm,
unsigned long address)
static inline void pte_free_kernel(struct mm_struct *mm, pte_t *pte)
static inline void pte_free(struct mm_struct *mm, pgtable_t pte)
#define __pte_free_tlb(tlb,pte,addr)			\
do  while (0)
static inline void check_pgt_cache(void)
