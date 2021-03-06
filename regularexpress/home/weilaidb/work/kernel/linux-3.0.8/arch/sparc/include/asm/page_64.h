#define _SPARC64_PAGE_H
#if defined(CONFIG_SPARC64_PAGE_SIZE_8KB)
#define PAGE_SHIFT   13
#elif defined(CONFIG_SPARC64_PAGE_SIZE_64KB)
#define PAGE_SHIFT   16
#error No page size specified in kernel configuration
#define PAGE_SIZE    (_AC(1,UL) << PAGE_SHIFT)
#define PAGE_MASK    (~(PAGE_SIZE-1))
#if PAGE_SHIFT < 14
#define DCACHE_ALIASING_POSSIBLE
#if defined(CONFIG_HUGETLB_PAGE_SIZE_4MB)
#define HPAGE_SHIFT		22
#elif defined(CONFIG_HUGETLB_PAGE_SIZE_512K)
#define HPAGE_SHIFT		19
#elif defined(CONFIG_HUGETLB_PAGE_SIZE_64K)
#define HPAGE_SHIFT		16
#define HPAGE_SIZE		(_AC(1,UL) << HPAGE_SHIFT)
#define HPAGE_MASK		(~(HPAGE_SIZE - 1UL))
#define HUGETLB_PAGE_ORDER	(HPAGE_SHIFT - PAGE_SHIFT)
#define HAVE_ARCH_HUGETLB_UNMAPPED_AREA
#define WANT_PAGE_VIRTUAL
extern void _clear_page(void *page);
#define clear_page(X)	_clear_page((void *)(X))
struct page;
extern void clear_user_page(void *addr, unsigned long vaddr, struct page *page);
#define copy_page(X,Y)	memcpy((void *)(X), (void *)(Y), PAGE_SIZE)
extern void copy_user_page(void *to, void *from, unsigned long vaddr, struct page *topage);
#define STRICT_MM_TYPECHECKS
typedef struct  pte_t;
typedef struct  iopte_t;
typedef struct  pmd_t;
typedef struct  pgd_t;
typedef struct  pgprot_t;
#define pte_val(x)	((x).pte)
#define iopte_val(x)	((x).iopte)
#define pmd_val(x)      ((x).pmd)
#define pgd_val(x)	((x).pgd)
#define pgprot_val(x)	((x).pgprot)
#define __pte(x)	((pte_t)  )
#define __iopte(x)	((iopte_t)  )
#define __pmd(x)        ((pmd_t)  )
#define __pgd(x)	((pgd_t)  )
#define __pgprot(x)	((pgprot_t)  )
typedef unsigned long pte_t;
typedef unsigned long iopte_t;
typedef unsigned int pmd_t;
typedef unsigned int pgd_t;
typedef unsigned long pgprot_t;
#define pte_val(x)	(x)
#define iopte_val(x)	(x)
#define pmd_val(x)      (x)
#define pgd_val(x)	(x)
#define pgprot_val(x)	(x)
#define __pte(x)	(x)
#define __iopte(x)	(x)
#define __pmd(x)        (x)
#define __pgd(x)	(x)
#define __pgprot(x)	(x)
typedef struct page *pgtable_t;
#define TASK_UNMAPPED_BASE	(test_thread_flag(TIF_32BIT) ? \
(_AC(0x0000000070000000,UL)) : \
(_AC(0xfffff80000000000,UL) + (1UL << 32UL)))
#define PAGE_OFFSET		_AC(0xFFFFF80000000000,UL)
#define __pa(x)			((unsigned long)(x) - PAGE_OFFSET)
#define __va(x)			((void *)((unsigned long) (x) + PAGE_OFFSET))
#define pfn_to_kaddr(pfn)	__va((pfn) << PAGE_SHIFT)
#define virt_to_page(kaddr)	pfn_to_page(__pa(kaddr)>>PAGE_SHIFT)
#define virt_addr_valid(kaddr)	pfn_valid(__pa(kaddr) >> PAGE_SHIFT)
#define virt_to_phys __pa
#define phys_to_virt __va
#define VM_DATA_DEFAULT_FLAGS	(VM_READ | VM_WRITE | VM_EXEC | \
VM_MAYREAD | VM_MAYWRITE | VM_MAYEXEC)
