#define _ASM_X86_PAGE_64_DEFS_H
#define THREAD_ORDER	1
#define THREAD_SIZE  (PAGE_SIZE << THREAD_ORDER)
#define CURRENT_MASK (~(THREAD_SIZE - 1))
#define EXCEPTION_STACK_ORDER 0
#define EXCEPTION_STKSZ (PAGE_SIZE << EXCEPTION_STACK_ORDER)
#define DEBUG_STACK_ORDER (EXCEPTION_STACK_ORDER + 1)
#define DEBUG_STKSZ (PAGE_SIZE << DEBUG_STACK_ORDER)
#define IRQ_STACK_ORDER 2
#define IRQ_STACK_SIZE (PAGE_SIZE << IRQ_STACK_ORDER)
#define STACKFAULT_STACK 1
#define DOUBLEFAULT_STACK 2
#define NMI_STACK 3
#define DEBUG_STACK 4
#define MCE_STACK 5
#define N_EXCEPTION_STACKS 5
#define PUD_PAGE_SIZE		(_AC(1, UL) << PUD_SHIFT)
#define PUD_PAGE_MASK		(~(PUD_PAGE_SIZE-1))
#define __PAGE_OFFSET           _AC(0xffff880000000000, UL)
#define __PHYSICAL_START	((CONFIG_PHYSICAL_START +	 	\
(CONFIG_PHYSICAL_ALIGN - 1)) &	\
~(CONFIG_PHYSICAL_ALIGN - 1))
#define __START_KERNEL		(__START_KERNEL_map + __PHYSICAL_START)
#define __START_KERNEL_map	_AC(0xffffffff80000000, UL)
#define __PHYSICAL_MASK_SHIFT	46
#define __VIRTUAL_MASK_SHIFT	47
#define KERNEL_IMAGE_SIZE	(512 * 1024 * 1024)
#define KERNEL_IMAGE_START	_AC(0xffffffff80000000, UL)
void clear_page(void *page);
void copy_page(void *to, void *from);
extern unsigned long max_pfn;
extern unsigned long phys_base;
extern unsigned long __phys_addr(unsigned long);
#define __phys_reloc_hide(x)	(x)
#define vmemmap ((struct page *)VMEMMAP_START)
extern void init_extra_mapping_uc(unsigned long phys, unsigned long size);
extern void init_extra_mapping_wb(unsigned long phys, unsigned long size);
#define pfn_valid(pfn)          ((pfn) < max_pfn)