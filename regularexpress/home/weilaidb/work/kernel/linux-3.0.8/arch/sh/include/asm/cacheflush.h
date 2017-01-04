#define __ASM_SH_CACHEFLUSH_H
extern void (*local_flush_cache_all)(void *args);
extern void (*local_flush_cache_mm)(void *args);
extern void (*local_flush_cache_dup_mm)(void *args);
extern void (*local_flush_cache_page)(void *args);
extern void (*local_flush_cache_range)(void *args);
extern void (*local_flush_dcache_page)(void *args);
extern void (*local_flush_icache_range)(void *args);
extern void (*local_flush_icache_page)(void *args);
extern void (*local_flush_cache_sigtramp)(void *args);
static inline void cache_noop(void *args)
extern void (*__flush_wback_region)(void *start, int size);
extern void (*__flush_purge_region)(void *start, int size);
extern void (*__flush_invalidate_region)(void *start, int size);
extern void flush_cache_all(void);
extern void flush_cache_mm(struct mm_struct *mm);
extern void flush_cache_dup_mm(struct mm_struct *mm);
extern void flush_cache_page(struct vm_area_struct *vma,
unsigned long addr, unsigned long pfn);
extern void flush_cache_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end);
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 1
extern void flush_dcache_page(struct page *page);
extern void flush_icache_range(unsigned long start, unsigned long end);
extern void flush_icache_page(struct vm_area_struct *vma,
struct page *page);
extern void flush_cache_sigtramp(unsigned long address);
struct flusher_data ;
#define ARCH_HAS_FLUSH_ANON_PAGE
extern void __flush_anon_page(struct page *page, unsigned long);
static inline void flush_anon_page(struct vm_area_struct *vma,
struct page *page, unsigned long vmaddr)
static inline void flush_kernel_vmap_range(void *addr, int size)
static inline void invalidate_kernel_vmap_range(void *addr, int size)
#define ARCH_HAS_FLUSH_KERNEL_DCACHE_PAGE
static inline void flush_kernel_dcache_page(struct page *page)
extern void copy_to_user_page(struct vm_area_struct *vma,
struct page *page, unsigned long vaddr, void *dst, const void *src,
unsigned long len);
extern void copy_from_user_page(struct vm_area_struct *vma,
struct page *page, unsigned long vaddr, void *dst, const void *src,
unsigned long len);
#define flush_cache_vmap(start, end)		local_flush_cache_all(NULL)
#define flush_cache_vunmap(start, end)		local_flush_cache_all(NULL)
#define flush_dcache_mmap_lock(mapping)		do  while (0)
#define flush_dcache_mmap_unlock(mapping)	do  while (0)
void kmap_coherent_init(void);
void *kmap_coherent(struct page *page, unsigned long addr);
void kunmap_coherent(void *kvaddr);
#define PG_dcache_clean	PG_arch_1
void cpu_cache_init(void);
