#define _ASM_M32R_PGALLOC_H
#define pmd_populate_kernel(mm, pmd, pte)	\
set_pmd(pmd, __pmd(_PAGE_TABLE + __pa(pte)))
static __inline__ void pmd_populate(struct mm_struct *mm, pmd_t *pmd,
pgtable_t pte)
#define pmd_pgtable(pmd) pmd_page(pmd)
static __inline__ pgd_t *pgd_alloc(struct mm_struct *mm)
static inline void pgd_free(struct mm_struct *mm, pgd_t *pgd)
static __inline__ pte_t *pte_alloc_one_kernel(struct mm_struct *mm,
unsigned long address)
static __inline__ pgtable_t pte_alloc_one(struct mm_struct *mm,
unsigned long address)
static inline void pte_free_kernel(struct mm_struct *mm, pte_t *pte)
static inline void pte_free(struct mm_struct *mm, pgtable_t pte)
#define __pte_free_tlb(tlb, pte, addr)	pte_free((tlb)->mm, (pte))
#define pmd_alloc_one(mm, addr)		()
#define pmd_free(mm, x)			do  while (0)
#define __pmd_free_tlb(tlb, x, addr)	do  while (0)
#define pgd_populate(mm, pmd, pte)	BUG()
#define check_pgt_cache()	do  while (0)