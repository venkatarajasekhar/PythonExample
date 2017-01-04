#define __SPARC64_IO_H
#define __SLOW_DOWN_IO	do  while (0)
#define SLOW_DOWN_IO	do  while (0)
extern unsigned long kern_base, kern_size;
#define page_to_phys(page)	(page_to_pfn(page) << PAGE_SHIFT)
static inline u8 _inb(unsigned long addr)
static inline u16 _inw(unsigned long addr)
static inline u32 _inl(unsigned long addr)
static inline void _outb(u8 b, unsigned long addr)
static inline void _outw(u16 w, unsigned long addr)
static inline void _outl(u32 l, unsigned long addr)
#define inb(__addr)		(_inb((unsigned long)(__addr)))
#define inw(__addr)		(_inw((unsigned long)(__addr)))
#define inl(__addr)		(_inl((unsigned long)(__addr)))
#define outb(__b, __addr)	(_outb((u8)(__b), (unsigned long)(__addr)))
#define outw(__w, __addr)	(_outw((u16)(__w), (unsigned long)(__addr)))
#define outl(__l, __addr)	(_outl((u32)(__l), (unsigned long)(__addr)))
#define inb_p(__addr) 		inb(__addr)
#define outb_p(__b, __addr)	outb(__b, __addr)
#define inw_p(__addr)		inw(__addr)
#define outw_p(__w, __addr)	outw(__w, __addr)
#define inl_p(__addr)		inl(__addr)
#define outl_p(__l, __addr)	outl(__l, __addr)
extern void outsb(unsigned long, const void *, unsigned long);
extern void outsw(unsigned long, const void *, unsigned long);
extern void outsl(unsigned long, const void *, unsigned long);
extern void insb(unsigned long, void *, unsigned long);
extern void insw(unsigned long, void *, unsigned long);
extern void insl(unsigned long, void *, unsigned long);
static inline void ioread8_rep(void __iomem *port, void *buf, unsigned long count)
static inline void ioread16_rep(void __iomem *port, void *buf, unsigned long count)
static inline void ioread32_rep(void __iomem *port, void *buf, unsigned long count)
static inline void iowrite8_rep(void __iomem *port, const void *buf, unsigned long count)
static inline void iowrite16_rep(void __iomem *port, const void *buf, unsigned long count)
static inline void iowrite32_rep(void __iomem *port, const void *buf, unsigned long count)
static inline u8 _readb(const volatile void __iomem *addr)
static inline u16 _readw(const volatile void __iomem *addr)
static inline u32 _readl(const volatile void __iomem *addr)
static inline u64 _readq(const volatile void __iomem *addr)
static inline void _writeb(u8 b, volatile void __iomem *addr)
static inline void _writew(u16 w, volatile void __iomem *addr)
static inline void _writel(u32 l, volatile void __iomem *addr)
static inline void _writeq(u64 q, volatile void __iomem *addr)
#define readb(__addr)		_readb(__addr)
#define readw(__addr)		_readw(__addr)
#define readl(__addr)		_readl(__addr)
#define readq(__addr)		_readq(__addr)
#define readb_relaxed(__addr)	_readb(__addr)
#define readw_relaxed(__addr)	_readw(__addr)
#define readl_relaxed(__addr)	_readl(__addr)
#define readq_relaxed(__addr)	_readq(__addr)
#define writeb(__b, __addr)	_writeb(__b, __addr)
#define writew(__w, __addr)	_writew(__w, __addr)
#define writel(__l, __addr)	_writel(__l, __addr)
#define writeq(__q, __addr)	_writeq(__q, __addr)
static inline u8 _raw_readb(unsigned long addr)
static inline u16 _raw_readw(unsigned long addr)
static inline u32 _raw_readl(unsigned long addr)
static inline u64 _raw_readq(unsigned long addr)
static inline void _raw_writeb(u8 b, unsigned long addr)
static inline void _raw_writew(u16 w, unsigned long addr)
static inline void _raw_writel(u32 l, unsigned long addr)
static inline void _raw_writeq(u64 q, unsigned long addr)
#define __raw_readb(__addr)		(_raw_readb((unsigned long)(__addr)))
#define __raw_readw(__addr)		(_raw_readw((unsigned long)(__addr)))
#define __raw_readl(__addr)		(_raw_readl((unsigned long)(__addr)))
#define __raw_readq(__addr)		(_raw_readq((unsigned long)(__addr)))
#define __raw_writeb(__b, __addr)	(_raw_writeb((u8)(__b), (unsigned long)(__addr)))
#define __raw_writew(__w, __addr)	(_raw_writew((u16)(__w), (unsigned long)(__addr)))
#define __raw_writel(__l, __addr)	(_raw_writel((u32)(__l), (unsigned long)(__addr)))
#define __raw_writeq(__q, __addr)	(_raw_writeq((u64)(__q), (unsigned long)(__addr)))
#define IO_SPACE_LIMIT 0xffffffffffffffffUL
static inline u8 _sbus_readb(const volatile void __iomem *addr)
static inline u16 _sbus_readw(const volatile void __iomem *addr)
static inline u32 _sbus_readl(const volatile void __iomem *addr)
static inline u64 _sbus_readq(const volatile void __iomem *addr)
static inline void _sbus_writeb(u8 b, volatile void __iomem *addr)
static inline void _sbus_writew(u16 w, volatile void __iomem *addr)
static inline void _sbus_writel(u32 l, volatile void __iomem *addr)
static inline void _sbus_writeq(u64 l, volatile void __iomem *addr)
#define sbus_readb(__addr)		_sbus_readb(__addr)
#define sbus_readw(__addr)		_sbus_readw(__addr)
#define sbus_readl(__addr)		_sbus_readl(__addr)
#define sbus_readq(__addr)		_sbus_readq(__addr)
#define sbus_writeb(__b, __addr)	_sbus_writeb(__b, __addr)
#define sbus_writew(__w, __addr)	_sbus_writew(__w, __addr)
#define sbus_writel(__l, __addr)	_sbus_writel(__l, __addr)
#define sbus_writeq(__l, __addr)	_sbus_writeq(__l, __addr)
static inline void _sbus_memset_io(volatile void __iomem *dst, int c, __kernel_size_t n)
#define sbus_memset_io(d,c,sz)	_sbus_memset_io(d,c,sz)
static inline void
_memset_io(volatile void __iomem *dst, int c, __kernel_size_t n)
#define memset_io(d,c,sz)	_memset_io(d,c,sz)
static inline void
_sbus_memcpy_fromio(void *dst, const volatile void __iomem *src,
__kernel_size_t n)
#define sbus_memcpy_fromio(d, s, sz)	_sbus_memcpy_fromio(d, s, sz)
static inline void
_memcpy_fromio(void *dst, const volatile void __iomem *src, __kernel_size_t n)
#define memcpy_fromio(d,s,sz)	_memcpy_fromio(d,s,sz)
static inline void
_sbus_memcpy_toio(volatile void __iomem *dst, const void *src,
__kernel_size_t n)
#define sbus_memcpy_toio(d, s, sz)	_sbus_memcpy_toio(d, s, sz)
static inline void
_memcpy_toio(volatile void __iomem *dst, const void *src, __kernel_size_t n)
#define memcpy_toio(d,s,sz)	_memcpy_toio(d,s,sz)
#define mmiowb()
static inline void __iomem *ioremap(unsigned long offset, unsigned long size)
#define ioremap_nocache(X,Y)		ioremap((X),(Y))
#define ioremap_wc(X,Y)			ioremap((X),(Y))
static inline void iounmap(volatile void __iomem *addr)
#define ioread8(X)			readb(X)
#define ioread16(X)			readw(X)
#define ioread16be(X)			__raw_readw(X)
#define ioread32(X)			readl(X)
#define ioread32be(X)			__raw_readl(X)
#define iowrite8(val,X)			writeb(val,X)
#define iowrite16(val,X)		writew(val,X)
#define iowrite16be(val,X)		__raw_writew(val,X)
#define iowrite32(val,X)		writel(val,X)
#define iowrite32be(val,X)		__raw_writel(val,X)
extern void __iomem *ioport_map(unsigned long port, unsigned int nr);
extern void ioport_unmap(void __iomem *);
struct pci_dev;
extern void __iomem *pci_iomap(struct pci_dev *dev, int bar, unsigned long max);
extern void pci_iounmap(struct pci_dev *dev, void __iomem *);
static inline int sbus_can_dma_64bit(void)
static inline int sbus_can_burst64(void)
struct device;
extern void sbus_set_sbus64(struct device *, int);
#define xlate_dev_mem_ptr(p)	__va(p)
#define xlate_dev_kmem_ptr(p)	p
