#define _ASM_MEM_LAYOUT_H
#define __UL(X)	((unsigned long) (X))
#define __UL(X)	(X)
#define PAGE_SHIFT			14
#define PAGE_SIZE			(1UL << PAGE_SHIFT)
#define PAGE_SIZE			(1 << PAGE_SHIFT)
#define PAGE_MASK			(~(PAGE_SIZE-1))
#define	ARCH_DMA_MINALIGN		L1_CACHE_BYTES
#define	ARCH_SLAB_MINALIGN		L1_CACHE_BYTES
#define PAGE_OFFSET			((unsigned long) &__page_offset)
#define KERNEL_LOWMEM_START		__UL(0xc0000000)
#define KERNEL_LOWMEM_END		__UL(0xd0000000)
#define VMALLOC_START			__UL(0xd0000000)
#define VMALLOC_END			__UL(0xd8000000)
#define PKMAP_BASE			__UL(0xd8000000)
#define PKMAP_END			__UL(0xdc000000)
#define KMAP_ATOMIC_SECONDARY_FRAME	__UL(0xdc000000)
#define KMAP_ATOMIC_PRIMARY_FRAME	__UL(0xdd000000)
#define KERNEL_IO_START			__UL(0xe0000000)
#define BRK_BASE			__UL(2 * 1024 * 1024 + PAGE_SIZE)
#define STACK_TOP			__UL(2 * 1024 * 1024)
#define STACK_TOP_MAX			__UL(0xc0000000)
#define TASK_SIZE			(PAGE_OFFSET)
#define TASK_SIZE			__UL(0xFFFFFFFFUL)
#define TASK_UNMAPPED_BASE		__UL(16 * 1024 * 1024)
#define TASK_UNMAPPED_BASE		__UL(TASK_SIZE / 3)
