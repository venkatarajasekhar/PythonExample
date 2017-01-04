#define __ALPHA_IO_H
#define __SLOW_DOWN_IO	do  while (0)
#define SLOW_DOWN_IO	do  while (0)
#define IDENT_ADDR     0xffff800000000000UL
#define IDENT_ADDR     0xfffffc0000000000UL
extern inline void __set_hae(unsigned long new_hae)
extern inline void set_hae(unsigned long new_hae)
static inline unsigned long virt_to_phys(void *address)
static inline void * phys_to_virt(unsigned long address)
static inline unsigned long virt_to_phys(void *address)
static inline void * phys_to_virt(unsigned long address)
#define page_to_phys(page)	page_to_pa(page)
static inline dma_addr_t __deprecated isa_page_to_bus(struct page *page)
#define IO_SPACE_LIMIT 0xffff
extern unsigned long __direct_map_base;
extern unsigned long __direct_map_size;
static inline unsigned long __deprecated virt_to_bus(void *address)
#define isa_virt_to_bus virt_to_bus
static inline void * __deprecated bus_to_virt(unsigned long address)
#define isa_bus_to_virt bus_to_virt
#define IO_CONCAT(a,b)	_IO_CONCAT(a,b)
#define _IO_CONCAT(a,b)	a ## _ ## b
#define REMAP1(TYPE, NAME, QUAL)					\
static inline TYPE generic_##NAME(QUAL void __iomem *addr)		\
#define REMAP2(TYPE, NAME, QUAL)					\
static inline void generic_##NAME(TYPE b, QUAL void __iomem *addr)	\
REMAP1(unsigned int, ioread8,)
REMAP1(unsigned int, ioread16,)
REMAP1(unsigned int, ioread32,)
REMAP1(u8, readb, const volatile)
REMAP1(u16, readw, const volatile)
REMAP1(u32, readl, const volatile)
REMAP1(u64, readq, const volatile)
REMAP2(u8, iowrite8,)
REMAP2(u16, iowrite16,)
REMAP2(u32, iowrite32,)
REMAP2(u8, writeb, volatile)
REMAP2(u16, writew, volatile)
REMAP2(u32, writel, volatile)
REMAP2(u64, writeq, volatile)
#undef REMAP1
#undef REMAP2
extern inline void __iomem *generic_ioportmap(unsigned long a)
static inline void __iomem *generic_ioremap(unsigned long a, unsigned long s)
static inline void generic_iounmap(volatile void __iomem *a)
static inline int generic_is_ioaddr(unsigned long a)
static inline int generic_is_mmio(const volatile void __iomem *a)
#define __IO_PREFIX		generic
#define generic_trivial_rw_bw	0
#define generic_trivial_rw_lq	0
#define generic_trivial_io_bw	0
#define generic_trivial_io_lq	0
#define generic_trivial_iounmap	0
#if defined(CONFIG_ALPHA_APECS)
# include <asm/core_apecs.h>
#elif defined(CONFIG_ALPHA_CIA)
# include <asm/core_cia.h>
#elif defined(CONFIG_ALPHA_IRONGATE)
# include <asm/core_irongate.h>
#elif defined(CONFIG_ALPHA_JENSEN)
# include <asm/jensen.h>
#elif defined(CONFIG_ALPHA_LCA)
# include <asm/core_lca.h>
#elif defined(CONFIG_ALPHA_MARVEL)
# include <asm/core_marvel.h>
#elif defined(CONFIG_ALPHA_MCPCIA)
# include <asm/core_mcpcia.h>
#elif defined(CONFIG_ALPHA_POLARIS)
# include <asm/core_polaris.h>
#elif defined(CONFIG_ALPHA_T2)
# include <asm/core_t2.h>
#elif defined(CONFIG_ALPHA_TSUNAMI)
# include <asm/core_tsunami.h>
#elif defined(CONFIG_ALPHA_TITAN)
# include <asm/core_titan.h>
#elif defined(CONFIG_ALPHA_WILDFIRE)
# include <asm/core_wildfire.h>
#error "What system is this?"
extern u8		inb(unsigned long port);
extern u16		inw(unsigned long port);
extern u32		inl(unsigned long port);
extern void		outb(u8 b, unsigned long port);
extern void		outw(u16 b, unsigned long port);
extern void		outl(u32 b, unsigned long port);
extern u8		readb(const volatile void __iomem *addr);
extern u16		readw(const volatile void __iomem *addr);
extern u32		readl(const volatile void __iomem *addr);
extern u64		readq(const volatile void __iomem *addr);
extern void		writeb(u8 b, volatile void __iomem *addr);
extern void		writew(u16 b, volatile void __iomem *addr);
extern void		writel(u32 b, volatile void __iomem *addr);
extern void		writeq(u64 b, volatile void __iomem *addr);
extern u8		__raw_readb(const volatile void __iomem *addr);
extern u16		__raw_readw(const volatile void __iomem *addr);
extern u32		__raw_readl(const volatile void __iomem *addr);
extern u64		__raw_readq(const volatile void __iomem *addr);
extern void		__raw_writeb(u8 b, volatile void __iomem *addr);
extern void		__raw_writew(u16 b, volatile void __iomem *addr);
extern void		__raw_writel(u32 b, volatile void __iomem *addr);
extern void		__raw_writeq(u64 b, volatile void __iomem *addr);
extern inline void __iomem *ioport_map(unsigned long port, unsigned int size)
extern inline void ioport_unmap(void __iomem *addr)
static inline void __iomem *ioremap(unsigned long port, unsigned long size)
static inline void __iomem *__ioremap(unsigned long port, unsigned long size,
unsigned long flags)
static inline void __iomem * ioremap_nocache(unsigned long offset,
unsigned long size)
static inline void iounmap(volatile void __iomem *addr)
static inline int __is_ioaddr(unsigned long addr)
#define __is_ioaddr(a)		__is_ioaddr((unsigned long)(a))
static inline int __is_mmio(const volatile void __iomem *addr)
#if IO_CONCAT(__IO_PREFIX,trivial_io_bw)
extern inline unsigned int ioread8(void __iomem *addr)
extern inline unsigned int ioread16(void __iomem *addr)
extern inline void iowrite8(u8 b, void __iomem *addr)
extern inline void iowrite16(u16 b, void __iomem *addr)
extern inline u8 inb(unsigned long port)
extern inline u16 inw(unsigned long port)
extern inline void outb(u8 b, unsigned long port)
extern inline void outw(u16 b, unsigned long port)
#if IO_CONCAT(__IO_PREFIX,trivial_io_lq)
extern inline unsigned int ioread32(void __iomem *addr)
extern inline void iowrite32(u32 b, void __iomem *addr)
extern inline u32 inl(unsigned long port)
extern inline void outl(u32 b, unsigned long port)
#if IO_CONCAT(__IO_PREFIX,trivial_rw_bw) == 1
extern inline u8 __raw_readb(const volatile void __iomem *addr)
extern inline u16 __raw_readw(const volatile void __iomem *addr)
extern inline void __raw_writeb(u8 b, volatile void __iomem *addr)
extern inline void __raw_writew(u16 b, volatile void __iomem *addr)
extern inline u8 readb(const volatile void __iomem *addr)
extern inline u16 readw(const volatile void __iomem *addr)
extern inline void writeb(u8 b, volatile void __iomem *addr)
extern inline void writew(u16 b, volatile void __iomem *addr)
#if IO_CONCAT(__IO_PREFIX,trivial_rw_lq) == 1
extern inline u32 __raw_readl(const volatile void __iomem *addr)
extern inline u64 __raw_readq(const volatile void __iomem *addr)
extern inline void __raw_writel(u32 b, volatile void __iomem *addr)
extern inline void __raw_writeq(u64 b, volatile void __iomem *addr)
extern inline u32 readl(const volatile void __iomem *addr)
extern inline u64 readq(const volatile void __iomem *addr)
extern inline void writel(u32 b, volatile void __iomem *addr)
extern inline void writeq(u64 b, volatile void __iomem *addr)
#define inb_p		inb
#define inw_p		inw
#define inl_p		inl
#define outb_p		outb
#define outw_p		outw
#define outl_p		outl
#define readb_relaxed(addr) __raw_readb(addr)
#define readw_relaxed(addr) __raw_readw(addr)
#define readl_relaxed(addr) __raw_readl(addr)
#define readq_relaxed(addr) __raw_readq(addr)
#define mmiowb()
extern void memcpy_fromio(void *, const volatile void __iomem *, long);
extern void memcpy_toio(volatile void __iomem *, const void *, long);
extern void _memset_c_io(volatile void __iomem *, unsigned long, long);
static inline void memset_io(volatile void __iomem *addr, u8 c, long len)
#define __HAVE_ARCH_MEMSETW_IO
static inline void memsetw_io(volatile void __iomem *addr, u16 c, long len)
extern void insb (unsigned long port, void *dst, unsigned long count);
extern void insw (unsigned long port, void *dst, unsigned long count);
extern void insl (unsigned long port, void *dst, unsigned long count);
extern void outsb (unsigned long port, const void *src, unsigned long count);
extern void outsw (unsigned long port, const void *src, unsigned long count);
extern void outsl (unsigned long port, const void *src, unsigned long count);
# define RTC_PORT(x)	((x) + alpha_mv.rtc_port)
# ifdef CONFIG_ALPHA_JENSEN
#  define RTC_PORT(x)	(0x170+(x))
# else
#  define RTC_PORT(x)	(0x70 + (x))
# endif
#define RTC_ALWAYS_BCD	0
#define writeq writeq
#define readq readq
#define xlate_dev_mem_ptr(p)	__va(p)
#define xlate_dev_kmem_ptr(p)	p
