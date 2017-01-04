extern void die(const char *, struct pt_regs *, long);
asmlinkage unsigned int tlb_entry_i_dat;
asmlinkage unsigned int tlb_entry_d_dat;
#define tlb_entry_i tlb_entry_i_dat
#define tlb_entry_d tlb_entry_d_dat
unsigned int tlb_entry_i_dat[NR_CPUS];
unsigned int tlb_entry_d_dat[NR_CPUS];
#define tlb_entry_i tlb_entry_i_dat[smp_processor_id()]
#define tlb_entry_d tlb_entry_d_dat[smp_processor_id()]
extern void init_tlb(void);
#define ACE_PROTECTION		1
#define ACE_WRITE		2
#define ACE_USERMODE		4
#define ACE_INSTRUCTION		8
asmlinkage void do_page_fault(struct pt_regs *regs, unsigned long error_code,
unsigned long address)
#define TLB_MASK	(NR_TLB_ENTRIES - 1)
#define ITLB_END	(unsigned long *)(ITLB_BASE + (NR_TLB_ENTRIES * 8))
#define DTLB_END	(unsigned long *)(DTLB_BASE + (NR_TLB_ENTRIES * 8))
void update_mmu_cache(struct vm_area_struct *vma, unsigned long vaddr,
pte_t *ptep)
void local_flush_tlb_page(struct vm_area_struct *vma, unsigned long page)
void local_flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end)
void local_flush_tlb_mm(struct mm_struct *mm)
void local_flush_tlb_all(void)
void __init init_mmu(void)
