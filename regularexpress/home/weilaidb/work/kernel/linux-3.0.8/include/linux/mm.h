#define _LINUX_MM_H
struct mempolicy;
struct anon_vma;
struct file_ra_state;
struct user_struct;
struct writeback_control;
extern unsigned long max_mapnr;
extern unsigned long num_physpages;
extern unsigned long totalram_pages;
extern void * high_memory;
extern int page_cluster;
extern int sysctl_legacy_va_layout;
#define sysctl_legacy_va_layout 0
#define nth_page(page,n) pfn_to_page(page_to_pfn((page)) + (n))
#define PAGE_ALIGN(addr) ALIGN(addr, PAGE_SIZE)
extern struct kmem_cache *vm_area_cachep;
extern struct rb_root nommu_region_tree;
extern struct rw_semaphore nommu_region_sem;
extern unsigned int kobjsize(const void *objp);
#define VM_READ		0x00000001
#define VM_WRITE	0x00000002
#define VM_EXEC		0x00000004
#define VM_SHARED	0x00000008
#define VM_MAYREAD	0x00000010
#define VM_MAYWRITE	0x00000020
#define VM_MAYEXEC	0x00000040
#define VM_MAYSHARE	0x00000080
#define VM_GROWSDOWN	0x00000100
#if defined(CONFIG_STACK_GROWSUP) || defined(CONFIG_IA64)
#define VM_GROWSUP	0x00000200
#define VM_GROWSUP	0x00000000
#define VM_NOHUGEPAGE	0x00000200
#define VM_PFNMAP	0x00000400
#define VM_DENYWRITE	0x00000800
#define VM_EXECUTABLE	0x00001000
#define VM_LOCKED	0x00002000
#define VM_IO           0x00004000
#define VM_SEQ_READ	0x00008000
#define VM_RAND_READ	0x00010000
#define VM_DONTCOPY	0x00020000
#define VM_DONTEXPAND	0x00040000
#define VM_RESERVED	0x00080000
#define VM_ACCOUNT	0x00100000
#define VM_NORESERVE	0x00200000
#define VM_HUGETLB	0x00400000
#define VM_NONLINEAR	0x00800000
#define VM_MAPPED_COPY	0x01000000
#define VM_HUGEPAGE	0x01000000
#define VM_INSERTPAGE	0x02000000
#define VM_ALWAYSDUMP	0x04000000
#define VM_CAN_NONLINEAR 0x08000000
#define VM_MIXEDMAP	0x10000000
#define VM_SAO		0x20000000
#define VM_PFN_AT_MMAP	0x40000000
#define VM_MERGEABLE	0x80000000
#define VM_STACK_INCOMPLETE_SETUP	(VM_RAND_READ | VM_SEQ_READ)
#define VM_STACK_DEFAULT_FLAGS VM_DATA_DEFAULT_FLAGS
#define VM_STACK_FLAGS	(VM_GROWSUP | VM_STACK_DEFAULT_FLAGS | VM_ACCOUNT)
#define VM_STACK_FLAGS	(VM_GROWSDOWN | VM_STACK_DEFAULT_FLAGS | VM_ACCOUNT)
#define VM_READHINTMASK			(VM_SEQ_READ | VM_RAND_READ)
#define VM_ClearReadHint(v)		(v)->vm_flags &= ~VM_READHINTMASK
#define VM_NormalReadHint(v)		(!((v)->vm_flags & VM_READHINTMASK))
#define VM_SequentialReadHint(v)	((v)->vm_flags & VM_SEQ_READ)
#define VM_RandomReadHint(v)		((v)->vm_flags & VM_RAND_READ)
#define VM_SPECIAL (VM_IO | VM_DONTEXPAND | VM_RESERVED | VM_PFNMAP)
extern pgprot_t protection_map[16];
#define FAULT_FLAG_WRITE	0x01
#define FAULT_FLAG_NONLINEAR	0x02
#define FAULT_FLAG_MKWRITE	0x04
#define FAULT_FLAG_ALLOW_RETRY	0x08
#define FAULT_FLAG_RETRY_NOWAIT	0x10
#define FAULT_FLAG_KILLABLE	0x20
static inline int is_linear_pfn_mapping(struct vm_area_struct *vma)
static inline int is_pfn_mapping(struct vm_area_struct *vma)
struct vm_fault ;
struct vm_operations_struct ;
struct mmu_gather;
struct inode;
#define page_private(page)		((page)->private)
#define set_page_private(page, v)	((page)->private = (v))
static inline int put_page_testzero(struct page *page)
static inline int get_page_unless_zero(struct page *page)
extern int page_is_ram(unsigned long pfn);
struct page *vmalloc_to_page(const void *addr);
unsigned long vmalloc_to_pfn(const void *addr);
static inline int is_vmalloc_addr(const void *x)
extern int is_vmalloc_or_module_addr(const void *x);
static inline int is_vmalloc_or_module_addr(const void *x)
static inline void compound_lock(struct page *page)
static inline void compound_unlock(struct page *page)
static inline unsigned long compound_lock_irqsave(struct page *page)
static inline void compound_unlock_irqrestore(struct page *page,
unsigned long flags)
static inline struct page *compound_head(struct page *page)
static inline int page_count(struct page *page)
static inline void get_page(struct page *page)
static inline struct page *virt_to_head_page(const void *x)
static inline void init_page_count(struct page *page)
#define PAGE_BUDDY_MAPCOUNT_VALUE (-128)
static inline int PageBuddy(struct page *page)
static inline void __SetPageBuddy(struct page *page)
static inline void __ClearPageBuddy(struct page *page)
void put_page(struct page *page);
void put_pages_list(struct list_head *pages);
void split_page(struct page *page, unsigned int order);
int split_free_page(struct page *page);
typedef void compound_page_dtor(struct page *);
static inline void set_compound_page_dtor(struct page *page,
compound_page_dtor *dtor)
static inline compound_page_dtor *get_compound_page_dtor(struct page *page)
static inline int compound_order(struct page *page)
static inline int compound_trans_order(struct page *page)
static inline void set_compound_order(struct page *page, unsigned long order)
static inline pte_t maybe_mkwrite(pte_t pte, struct vm_area_struct *vma)
#if defined(CONFIG_SPARSEMEM) && !defined(CONFIG_SPARSEMEM_VMEMMAP)
#define SECTIONS_WIDTH		SECTIONS_SHIFT
#define SECTIONS_WIDTH		0
#define ZONES_WIDTH		ZONES_SHIFT
#if SECTIONS_WIDTH+ZONES_WIDTH+NODES_SHIFT <= BITS_PER_LONG - NR_PAGEFLAGS
#define NODES_WIDTH		NODES_SHIFT
#error "Vmemmap: No space for nodes field in page flags"
#define NODES_WIDTH		0
#define SECTIONS_PGOFF		((sizeof(unsigned long)*8) - SECTIONS_WIDTH)
#define NODES_PGOFF		(SECTIONS_PGOFF - NODES_WIDTH)
#define ZONES_PGOFF		(NODES_PGOFF - ZONES_WIDTH)
#if !(NODES_WIDTH > 0 || NODES_SHIFT == 0)
#define NODE_NOT_IN_PAGE_FLAGS
#define SECTIONS_PGSHIFT	(SECTIONS_PGOFF * (SECTIONS_WIDTH != 0))
#define NODES_PGSHIFT		(NODES_PGOFF * (NODES_WIDTH != 0))
#define ZONES_PGSHIFT		(ZONES_PGOFF * (ZONES_WIDTH != 0))
#define ZONEID_SHIFT		(SECTIONS_SHIFT + ZONES_SHIFT)
#define ZONEID_PGOFF		((SECTIONS_PGOFF < ZONES_PGOFF)? \
SECTIONS_PGOFF : ZONES_PGOFF)
#define ZONEID_SHIFT		(NODES_SHIFT + ZONES_SHIFT)
#define ZONEID_PGOFF		((NODES_PGOFF < ZONES_PGOFF)? \
NODES_PGOFF : ZONES_PGOFF)
#define ZONEID_PGSHIFT		(ZONEID_PGOFF * (ZONEID_SHIFT != 0))
#if SECTIONS_WIDTH+NODES_WIDTH+ZONES_WIDTH > BITS_PER_LONG - NR_PAGEFLAGS
#error SECTIONS_WIDTH+NODES_WIDTH+ZONES_WIDTH > BITS_PER_LONG - NR_PAGEFLAGS
#define ZONES_MASK		((1UL << ZONES_WIDTH) - 1)
#define NODES_MASK		((1UL << NODES_WIDTH) - 1)
#define SECTIONS_MASK		((1UL << SECTIONS_WIDTH) - 1)
#define ZONEID_MASK		((1UL << ZONEID_SHIFT) - 1)
static inline enum zone_type page_zonenum(struct page *page)
static inline int page_zone_id(struct page *page)
static inline int zone_to_nid(struct zone *zone)
extern int page_to_nid(struct page *page);
static inline int page_to_nid(struct page *page)
static inline struct zone *page_zone(struct page *page)
#if defined(CONFIG_SPARSEMEM) && !defined(CONFIG_SPARSEMEM_VMEMMAP)
static inline void set_page_section(struct page *page, unsigned long section)
static inline unsigned long page_to_section(struct page *page)
static inline void set_page_zone(struct page *page, enum zone_type zone)
static inline void set_page_node(struct page *page, unsigned long node)
static inline void set_page_links(struct page *page, enum zone_type zone,
unsigned long node, unsigned long pfn)
static __always_inline void *lowmem_page_address(struct page *page)
#if defined(CONFIG_HIGHMEM) && !defined(WANT_PAGE_VIRTUAL)
#define HASHED_PAGE_VIRTUAL
#if defined(WANT_PAGE_VIRTUAL)
#define page_address(page) ((page)->virtual)
#define set_page_address(page, address)			\
do  while(0)
#define page_address_init()  do  while(0)
#if defined(HASHED_PAGE_VIRTUAL)
void *page_address(struct page *page);
void set_page_address(struct page *page, void *virtual);
void page_address_init(void);
#if !defined(HASHED_PAGE_VIRTUAL) && !defined(WANT_PAGE_VIRTUAL)
#define page_address(page) lowmem_page_address(page)
#define set_page_address(page, address)  do  while(0)
#define page_address_init()  do  while(0)
#define PAGE_MAPPING_ANON	1
#define PAGE_MAPPING_KSM	2
#define PAGE_MAPPING_FLAGS	(PAGE_MAPPING_ANON | PAGE_MAPPING_KSM)
extern struct address_space swapper_space;
static inline struct address_space *page_mapping(struct page *page)
static inline void *page_rmapping(struct page *page)
static inline int PageAnon(struct page *page)
static inline pgoff_t page_index(struct page *page)
static inline void reset_page_mapcount(struct page *page)
static inline int page_mapcount(struct page *page)
static inline int page_mapped(struct page *page)
#define VM_FAULT_MINOR	0
#define VM_FAULT_OOM	0x0001
#define VM_FAULT_SIGBUS	0x0002
#define VM_FAULT_MAJOR	0x0004
#define VM_FAULT_WRITE	0x0008
#define VM_FAULT_HWPOISON 0x0010
#define VM_FAULT_HWPOISON_LARGE 0x0020
#define VM_FAULT_NOPAGE	0x0100
#define VM_FAULT_LOCKED	0x0200
#define VM_FAULT_RETRY	0x0400
#define VM_FAULT_HWPOISON_LARGE_MASK 0xf000
#define VM_FAULT_ERROR	(VM_FAULT_OOM | VM_FAULT_SIGBUS | VM_FAULT_HWPOISON | \
VM_FAULT_HWPOISON_LARGE)
#define VM_FAULT_SET_HINDEX(x) ((x) << 12)
#define VM_FAULT_GET_HINDEX(x) (((x) >> 12) & 0xf)
extern void pagefault_out_of_memory(void);
#define offset_in_page(p)	((unsigned long)(p) & ~PAGE_MASK)
#define SHOW_MEM_FILTER_NODES	(0x0001u)
extern void show_free_areas(unsigned int flags);
extern bool skip_free_areas_node(unsigned int flags, int nid);
int shmem_lock(struct file *file, int lock, struct user_struct *user);
struct file *shmem_file_setup(const char *name, loff_t size, unsigned long flags);
int shmem_zero_setup(struct vm_area_struct *);
extern int can_do_mlock(void);
extern int user_shm_lock(size_t, struct user_struct *);
extern void user_shm_unlock(size_t, struct user_struct *);
struct zap_details ;
struct page *vm_normal_page(struct vm_area_struct *vma, unsigned long addr,
pte_t pte);
int zap_vma_ptes(struct vm_area_struct *vma, unsigned long address,
unsigned long size);
unsigned long zap_page_range(struct vm_area_struct *vma, unsigned long address,
unsigned long size, struct zap_details *);
unsigned long unmap_vmas(struct mmu_gather *tlb,
struct vm_area_struct *start_vma, unsigned long start_addr,
unsigned long end_addr, unsigned long *nr_accounted,
struct zap_details *);
struct mm_walk ;
int walk_page_range(unsigned long addr, unsigned long end,
struct mm_walk *walk);
void free_pgd_range(struct mmu_gather *tlb, unsigned long addr,
unsigned long end, unsigned long floor, unsigned long ceiling);
int copy_page_range(struct mm_struct *dst, struct mm_struct *src,
struct vm_area_struct *vma);
void unmap_mapping_range(struct address_space *mapping,
loff_t const holebegin, loff_t const holelen, int even_cows);
int follow_pfn(struct vm_area_struct *vma, unsigned long address,
unsigned long *pfn);
int follow_phys(struct vm_area_struct *vma, unsigned long address,
unsigned int flags, unsigned long *prot, resource_size_t *phys);
int generic_access_phys(struct vm_area_struct *vma, unsigned long addr,
void *buf, int len, int write);
static inline void unmap_shared_mapping_range(struct address_space *mapping,
loff_t const holebegin, loff_t const holelen)
extern void truncate_pagecache(struct inode *inode, loff_t old, loff_t new);
extern void truncate_setsize(struct inode *inode, loff_t newsize);
extern int vmtruncate(struct inode *inode, loff_t offset);
extern int vmtruncate_range(struct inode *inode, loff_t offset, loff_t end);
int truncate_inode_page(struct address_space *mapping, struct page *page);
int generic_error_remove_page(struct address_space *mapping, struct page *page);
int invalidate_inode_page(struct page *page);
extern int handle_mm_fault(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long address, unsigned int flags);
extern int fixup_user_fault(struct task_struct *tsk, struct mm_struct *mm,
unsigned long address, unsigned int fault_flags);
static inline int handle_mm_fault(struct mm_struct *mm,
struct vm_area_struct *vma, unsigned long address,
unsigned int flags)
static inline int fixup_user_fault(struct task_struct *tsk,
struct mm_struct *mm, unsigned long address,
unsigned int fault_flags)
extern int make_pages_present(unsigned long addr, unsigned long end);
extern int access_process_vm(struct task_struct *tsk, unsigned long addr, void *buf, int len, int write);
extern int access_remote_vm(struct mm_struct *mm, unsigned long addr,
void *buf, int len, int write);
int __get_user_pages(struct task_struct *tsk, struct mm_struct *mm,
unsigned long start, int len, unsigned int foll_flags,
struct page **pages, struct vm_area_struct **vmas,
int *nonblocking);
int get_user_pages(struct task_struct *tsk, struct mm_struct *mm,
unsigned long start, int nr_pages, int write, int force,
struct page **pages, struct vm_area_struct **vmas);
int get_user_pages_fast(unsigned long start, int nr_pages, int write,
struct page **pages);
struct page *get_dump_page(unsigned long addr);
extern int try_to_release_page(struct page * page, gfp_t gfp_mask);
extern void do_invalidatepage(struct page *page, unsigned long offset);
int __set_page_dirty_nobuffers(struct page *page);
int __set_page_dirty_no_writeback(struct page *page);
int redirty_page_for_writepage(struct writeback_control *wbc,
struct page *page);
void account_page_dirtied(struct page *page, struct address_space *mapping);
void account_page_writeback(struct page *page);
int set_page_dirty(struct page *page);
int set_page_dirty_lock(struct page *page);
int clear_page_dirty_for_io(struct page *page);
static inline int vma_growsdown(struct vm_area_struct *vma, unsigned long addr)
static inline int stack_guard_page_start(struct vm_area_struct *vma,
unsigned long addr)
static inline int vma_growsup(struct vm_area_struct *vma, unsigned long addr)
static inline int stack_guard_page_end(struct vm_area_struct *vma,
unsigned long addr)
extern unsigned long move_page_tables(struct vm_area_struct *vma,
unsigned long old_addr, struct vm_area_struct *new_vma,
unsigned long new_addr, unsigned long len);
extern unsigned long do_mremap(unsigned long addr,
unsigned long old_len, unsigned long new_len,
unsigned long flags, unsigned long new_addr);
extern int mprotect_fixup(struct vm_area_struct *vma,
struct vm_area_struct **pprev, unsigned long start,
unsigned long end, unsigned long newflags);
int __get_user_pages_fast(unsigned long start, int nr_pages, int write,
struct page **pages);
static inline void set_mm_counter(struct mm_struct *mm, int member, long value)
#if defined(SPLIT_RSS_COUNTING)
unsigned long get_mm_counter(struct mm_struct *mm, int member);
static inline unsigned long get_mm_counter(struct mm_struct *mm, int member)
static inline void add_mm_counter(struct mm_struct *mm, int member, long value)
static inline void inc_mm_counter(struct mm_struct *mm, int member)
static inline void dec_mm_counter(struct mm_struct *mm, int member)
static inline unsigned long get_mm_rss(struct mm_struct *mm)
static inline unsigned long get_mm_hiwater_rss(struct mm_struct *mm)
static inline unsigned long get_mm_hiwater_vm(struct mm_struct *mm)
static inline void update_hiwater_rss(struct mm_struct *mm)
static inline void update_hiwater_vm(struct mm_struct *mm)
static inline void setmax_mm_hiwater_rss(unsigned long *maxrss,
struct mm_struct *mm)
#if defined(SPLIT_RSS_COUNTING)
void sync_mm_rss(struct task_struct *task, struct mm_struct *mm);
static inline void sync_mm_rss(struct task_struct *task, struct mm_struct *mm)
struct shrink_control ;
struct shrinker ;
#define DEFAULT_SEEKS 2
extern void register_shrinker(struct shrinker *);
extern void unregister_shrinker(struct shrinker *);
int vma_wants_writenotify(struct vm_area_struct *vma);
extern pte_t *__get_locked_pte(struct mm_struct *mm, unsigned long addr,
spinlock_t **ptl);
static inline pte_t *get_locked_pte(struct mm_struct *mm, unsigned long addr,
spinlock_t **ptl)
static inline int __pud_alloc(struct mm_struct *mm, pgd_t *pgd,
unsigned long address)
int __pud_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address);
static inline int __pmd_alloc(struct mm_struct *mm, pud_t *pud,
unsigned long address)
int __pmd_alloc(struct mm_struct *mm, pud_t *pud, unsigned long address);
int __pte_alloc(struct mm_struct *mm, struct vm_area_struct *vma,
pmd_t *pmd, unsigned long address);
int __pte_alloc_kernel(pmd_t *pmd, unsigned long address);
#if defined(CONFIG_MMU) && !defined(__ARCH_HAS_4LEVEL_HACK)
static inline pud_t *pud_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address)
static inline pmd_t *pmd_alloc(struct mm_struct *mm, pud_t *pud, unsigned long address)
#if USE_SPLIT_PTLOCKS
#define __pte_lockptr(page)	&((page)->ptl)
#define pte_lock_init(_page)	do  while (0)
#define pte_lock_deinit(page)	((page)->mapping = NULL)
#define pte_lockptr(mm, pmd)	()
#define pte_lock_init(page)	do  while (0)
#define pte_lock_deinit(page)	do  while (0)
#define pte_lockptr(mm, pmd)	()
static inline void pgtable_page_ctor(struct page *page)
static inline void pgtable_page_dtor(struct page *page)
#define pte_offset_map_lock(mm, pmd, address, ptlp)	\
()
#define pte_unmap_unlock(pte, ptl)	do  while (0)
#define pte_alloc_map(mm, vma, pmd, address)				\
((unlikely(pmd_none(*(pmd))) && __pte_alloc(mm, vma,	\
pmd, address))?	\
NULL: pte_offset_map(pmd, address))
#define pte_alloc_map_lock(mm, pmd, address, ptlp)	\
((unlikely(pmd_none(*(pmd))) && __pte_alloc(mm, NULL,	\
pmd, address))?	\
NULL: pte_offset_map_lock(mm, pmd, address, ptlp))
#define pte_alloc_kernel(pmd, address)			\
((unlikely(pmd_none(*(pmd))) && __pte_alloc_kernel(pmd, address))? \
NULL: pte_offset_kernel(pmd, address))
extern void free_area_init(unsigned long * zones_size);
extern void free_area_init_node(int nid, unsigned long * zones_size,
unsigned long zone_start_pfn, unsigned long *zholes_size);
extern void free_area_init_nodes(unsigned long *max_zone_pfn);
extern void add_active_range(unsigned int nid, unsigned long start_pfn,
unsigned long end_pfn);
extern void remove_active_range(unsigned int nid, unsigned long start_pfn,
unsigned long end_pfn);
extern void remove_all_active_ranges(void);
void sort_node_map(void);
unsigned long __absent_pages_in_range(int nid, unsigned long start_pfn,
unsigned long end_pfn);
extern unsigned long absent_pages_in_range(unsigned long start_pfn,
unsigned long end_pfn);
extern void get_pfn_range_for_nid(unsigned int nid,
unsigned long *start_pfn, unsigned long *end_pfn);
extern unsigned long find_min_pfn_with_active_regions(void);
extern void free_bootmem_with_active_regions(int nid,
unsigned long max_low_pfn);
int add_from_early_node_map(struct range *range, int az,
int nr_range, int nid);
u64 __init find_memory_core_early(int nid, u64 size, u64 align,
u64 goal, u64 limit);
typedef int (*work_fn_t)(unsigned long, unsigned long, void *);
extern void work_with_active_regions(int nid, work_fn_t work_fn, void *data);
extern void sparse_memory_present_with_active_regions(int nid);
#if !defined(CONFIG_ARCH_POPULATES_NODE_MAP) && \
!defined(CONFIG_HAVE_ARCH_EARLY_PFN_TO_NID)
static inline int __early_pfn_to_nid(unsigned long pfn)
extern int __meminit early_pfn_to_nid(unsigned long pfn);
extern int __meminit __early_pfn_to_nid(unsigned long pfn);
extern void set_dma_reserve(unsigned long new_dma_reserve);
extern void memmap_init_zone(unsigned long, int, unsigned long,
unsigned long, enum memmap_context);
extern void setup_per_zone_wmarks(void);
extern int __meminit init_per_zone_wmark_min(void);
extern void mem_init(void);
extern void __init mmap_init(void);
extern void show_mem(unsigned int flags);
extern void si_meminfo(struct sysinfo * val);
extern void si_meminfo_node(struct sysinfo *val, int nid);
extern int after_bootmem;
extern void warn_alloc_failed(gfp_t gfp_mask, int order, const char *fmt, ...);
extern void setup_per_cpu_pageset(void);
extern void zone_pcp_update(struct zone *zone);
extern atomic_long_t mmap_pages_allocated;
extern int nommu_shrink_inode_mappings(struct inode *, size_t, size_t);
void vma_prio_tree_add(struct vm_area_struct *, struct vm_area_struct *old);
void vma_prio_tree_insert(struct vm_area_struct *, struct prio_tree_root *);
void vma_prio_tree_remove(struct vm_area_struct *, struct prio_tree_root *);
struct vm_area_struct *vma_prio_tree_next(struct vm_area_struct *vma,
struct prio_tree_iter *iter);
#define vma_prio_tree_foreach(vma, iter, root, begin, end)	\
for (prio_tree_iter_init(iter, root, begin, end), vma = NULL;	\
(vma = vma_prio_tree_next(vma, iter)); )
static inline void vma_nonlinear_insert(struct vm_area_struct *vma,
struct list_head *list)
extern int __vm_enough_memory(struct mm_struct *mm, long pages, int cap_sys_admin);
extern int vma_adjust(struct vm_area_struct *vma, unsigned long start,
unsigned long end, pgoff_t pgoff, struct vm_area_struct *insert);
extern struct vm_area_struct *vma_merge(struct mm_struct *,
struct vm_area_struct *prev, unsigned long addr, unsigned long end,
unsigned long vm_flags, struct anon_vma *, struct file *, pgoff_t,
struct mempolicy *);
extern struct anon_vma *find_mergeable_anon_vma(struct vm_area_struct *);
extern int split_vma(struct mm_struct *,
struct vm_area_struct *, unsigned long addr, int new_below);
extern int insert_vm_struct(struct mm_struct *, struct vm_area_struct *);
extern void __vma_link_rb(struct mm_struct *, struct vm_area_struct *,
struct rb_node **, struct rb_node *);
extern void unlink_file_vma(struct vm_area_struct *);
extern struct vm_area_struct *copy_vma(struct vm_area_struct **,
unsigned long addr, unsigned long len, pgoff_t pgoff);
extern void exit_mmap(struct mm_struct *);
extern int mm_take_all_locks(struct mm_struct *mm);
extern void mm_drop_all_locks(struct mm_struct *mm);
extern void added_exe_file_vma(struct mm_struct *mm);
extern void removed_exe_file_vma(struct mm_struct *mm);
extern void set_mm_exe_file(struct mm_struct *mm, struct file *new_exe_file);
extern struct file *get_mm_exe_file(struct mm_struct *mm);
extern int may_expand_vm(struct mm_struct *mm, unsigned long npages);
extern int install_special_mapping(struct mm_struct *mm,
unsigned long addr, unsigned long len,
unsigned long flags, struct page **pages);
extern unsigned long get_unmapped_area(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned long do_mmap_pgoff(struct file *file, unsigned long addr,
unsigned long len, unsigned long prot,
unsigned long flag, unsigned long pgoff);
extern unsigned long mmap_region(struct file *file, unsigned long addr,
unsigned long len, unsigned long flags,
vm_flags_t vm_flags, unsigned long pgoff);
static inline unsigned long do_mmap(struct file *file, unsigned long addr,
unsigned long len, unsigned long prot,
unsigned long flag, unsigned long offset)
extern int do_munmap(struct mm_struct *, unsigned long, size_t);
extern unsigned long do_brk(unsigned long, unsigned long);
extern unsigned long page_unuse(struct page *);
extern void truncate_inode_pages(struct address_space *, loff_t);
extern void truncate_inode_pages_range(struct address_space *,
loff_t lstart, loff_t lend);
extern int filemap_fault(struct vm_area_struct *, struct vm_fault *);
int write_one_page(struct page *page, int wait);
void task_dirty_inc(struct task_struct *tsk);
#define VM_MAX_READAHEAD	128
#define VM_MIN_READAHEAD	16
int force_page_cache_readahead(struct address_space *mapping, struct file *filp,
pgoff_t offset, unsigned long nr_to_read);
void page_cache_sync_readahead(struct address_space *mapping,
struct file_ra_state *ra,
struct file *filp,
pgoff_t offset,
unsigned long size);
void page_cache_async_readahead(struct address_space *mapping,
struct file_ra_state *ra,
struct file *filp,
struct page *pg,
pgoff_t offset,
unsigned long size);
unsigned long max_sane_readahead(unsigned long nr);
unsigned long ra_submit(struct file_ra_state *ra,
struct address_space *mapping,
struct file *filp);
extern int expand_stack(struct vm_area_struct *vma, unsigned long address);
extern int expand_downwards(struct vm_area_struct *vma,
unsigned long address);
#if VM_GROWSUP
extern int expand_upwards(struct vm_area_struct *vma, unsigned long address);
#define expand_upwards(vma, address) do  while (0)
extern struct vm_area_struct * find_vma(struct mm_struct * mm, unsigned long addr);
extern struct vm_area_struct * find_vma_prev(struct mm_struct * mm, unsigned long addr,
struct vm_area_struct **pprev);
static inline struct vm_area_struct * find_vma_intersection(struct mm_struct * mm, unsigned long start_addr, unsigned long end_addr)
static inline unsigned long vma_pages(struct vm_area_struct *vma)
pgprot_t vm_get_page_prot(unsigned long vm_flags);
static inline pgprot_t vm_get_page_prot(unsigned long vm_flags)
struct vm_area_struct *find_extend_vma(struct mm_struct *, unsigned long addr);
int remap_pfn_range(struct vm_area_struct *, unsigned long addr,
unsigned long pfn, unsigned long size, pgprot_t);
int vm_insert_page(struct vm_area_struct *, unsigned long addr, struct page *);
int vm_insert_pfn(struct vm_area_struct *vma, unsigned long addr,
unsigned long pfn);
int vm_insert_mixed(struct vm_area_struct *vma, unsigned long addr,
unsigned long pfn);
struct page *follow_page(struct vm_area_struct *, unsigned long address,
unsigned int foll_flags);
#define FOLL_WRITE	0x01
#define FOLL_TOUCH	0x02
#define FOLL_GET	0x04
#define FOLL_DUMP	0x08
#define FOLL_FORCE	0x10
#define FOLL_NOWAIT	0x20
#define FOLL_MLOCK	0x40
#define FOLL_SPLIT	0x80
#define FOLL_HWPOISON	0x100
typedef int (*pte_fn_t)(pte_t *pte, pgtable_t token, unsigned long addr,
void *data);
extern int apply_to_page_range(struct mm_struct *mm, unsigned long address,
unsigned long size, pte_fn_t fn, void *data);
void vm_stat_account(struct mm_struct *, unsigned long, struct file *, long);
static inline void vm_stat_account(struct mm_struct *mm,
unsigned long flags, struct file *file, long pages)
extern int debug_pagealloc_enabled;
extern void kernel_map_pages(struct page *page, int numpages, int enable);
static inline void enable_debug_pagealloc(void)
extern bool kernel_page_present(struct page *page);
static inline void
kernel_map_pages(struct page *page, int numpages, int enable)
static inline void enable_debug_pagealloc(void)
static inline bool kernel_page_present(struct page *page)
extern struct vm_area_struct *get_gate_vma(struct mm_struct *mm);
int in_gate_area_no_mm(unsigned long addr);
int in_gate_area(struct mm_struct *mm, unsigned long addr);
int in_gate_area_no_mm(unsigned long addr);
#define in_gate_area(mm, addr) ()
int drop_caches_sysctl_handler(struct ctl_table *, int,
void __user *, size_t *, loff_t *);
unsigned long shrink_slab(struct shrink_control *shrink,
unsigned long nr_pages_scanned,
unsigned long lru_pages);
#define randomize_va_space 0
extern int randomize_va_space;
const char * arch_vma_name(struct vm_area_struct *vma);
void print_vma_addr(char *prefix, unsigned long rip);
void sparse_mem_maps_populate_node(struct page **map_map,
unsigned long pnum_begin,
unsigned long pnum_end,
unsigned long map_count,
int nodeid);
struct page *sparse_mem_map_populate(unsigned long pnum, int nid);
pgd_t *vmemmap_pgd_populate(unsigned long addr, int node);
pud_t *vmemmap_pud_populate(pgd_t *pgd, unsigned long addr, int node);
pmd_t *vmemmap_pmd_populate(pud_t *pud, unsigned long addr, int node);
pte_t *vmemmap_pte_populate(pmd_t *pmd, unsigned long addr, int node);
void *vmemmap_alloc_block(unsigned long size, int node);
void *vmemmap_alloc_block_buf(unsigned long size, int node);
void vmemmap_verify(pte_t *, int, unsigned long, unsigned long);
int vmemmap_populate_basepages(struct page *start_page,
unsigned long pages, int node);
int vmemmap_populate(struct page *start_page, unsigned long pages, int node);
void vmemmap_populate_print_last(void);
enum mf_flags ;
extern void memory_failure(unsigned long pfn, int trapno);
extern int __memory_failure(unsigned long pfn, int trapno, int flags);
extern int unpoison_memory(unsigned long pfn);
extern int sysctl_memory_failure_early_kill;
extern int sysctl_memory_failure_recovery;
extern void shake_page(struct page *p, int access);
extern atomic_long_t mce_bad_pages;
extern int soft_offline_page(struct page *page, int flags);
extern void dump_page(struct page *page);
#if defined(CONFIG_TRANSPARENT_HUGEPAGE) || defined(CONFIG_HUGETLBFS)
extern void clear_huge_page(struct page *page,
unsigned long addr,
unsigned int pages_per_huge_page);
extern void copy_user_huge_page(struct page *dst, struct page *src,
unsigned long addr, struct vm_area_struct *vma,
unsigned int pages_per_huge_page);
