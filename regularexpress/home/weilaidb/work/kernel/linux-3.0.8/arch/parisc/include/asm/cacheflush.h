#define _PARISC_CACHEFLUSH_H
void flush_data_cache_local(void *);
void flush_instruction_cache_local(void *);
void flush_data_cache(void);
void flush_instruction_cache(void);
#define flush_data_cache() flush_data_cache_local(NULL)
#define flush_instruction_cache() flush_instruction_cache_local(NULL)
#define flush_cache_dup_mm(mm) flush_cache_mm(mm)
void flush_user_icache_range_asm(unsigned long, unsigned long);
void flush_kernel_icache_range_asm(unsigned long, unsigned long);
void flush_user_dcache_range_asm(unsigned long, unsigned long);
void flush_kernel_dcache_range_asm(unsigned long, unsigned long);
void flush_kernel_dcache_page_asm(void *);
void flush_kernel_icache_page(void *);
void flush_user_dcache_range(unsigned long, unsigned long);
void flush_user_icache_range(unsigned long, unsigned long);
void flush_cache_all_local(void);
void flush_cache_all(void);
void flush_cache_mm(struct mm_struct *mm);
#define ARCH_HAS_FLUSH_KERNEL_DCACHE_PAGE
void flush_kernel_dcache_page_addr(void *addr);
static inline void flush_kernel_dcache_page(struct page *page)
#define flush_kernel_dcache_range(start,size) \
flush_kernel_dcache_range_asm((start), (start)+(size));
static inline void flush_kernel_vmap_range(void *vaddr, int size)
static inline void invalidate_kernel_vmap_range(void *vaddr, int size)
#define flush_cache_vmap(start, end)		flush_cache_all()
#define flush_cache_vunmap(start, end)		flush_cache_all()
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 1
extern void flush_dcache_page(struct page *page);
#define flush_dcache_mmap_lock(mapping) \
spin_lock_irq(&(mapping)->tree_lock)
#define flush_dcache_mmap_unlock(mapping) \
spin_unlock_irq(&(mapping)->tree_lock)
#define flush_icache_page(vma,page)	do  while (0)
#define flush_icache_range(s,e)		do  while (0)
#define copy_to_user_page(vma, page, vaddr, dst, src, len) \
do  while (0)
#define copy_from_user_page(vma, page, vaddr, dst, src, len) \
do  while (0)
void flush_cache_page(struct vm_area_struct *vma, unsigned long vmaddr, unsigned long pfn);
void flush_cache_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end);
void flush_dcache_page_asm(unsigned long phys_addr, unsigned long vaddr);
#define ARCH_HAS_FLUSH_ANON_PAGE
static inline void
flush_anon_page(struct vm_area_struct *vma, struct page *page, unsigned long vmaddr)
void mark_rodata_ro(void);
#define ARCH_HAS_KMAP
void kunmap_parisc(void *addr);
static inline void *kmap(struct page *page)
#define kunmap(page)			kunmap_parisc(page_address(page))
static inline void *__kmap_atomic(struct page *page)
static inline void __kunmap_atomic(void *addr)
#define kmap_atomic_prot(page, prot)	kmap_atomic(page)
#define kmap_atomic_pfn(pfn)	kmap_atomic(pfn_to_page(pfn))
#define kmap_atomic_to_page(ptr)	virt_to_page(ptr)
