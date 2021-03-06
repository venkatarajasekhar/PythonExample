#define _ASM_MICROBLAZE_IO_H
#define _IO_BASE	0
#define _ISA_MEM_BASE	0
#define PCI_DRAM_OFFSET	0
#define _IO_BASE	isa_io_base
#define _ISA_MEM_BASE	isa_mem_base
#define PCI_DRAM_OFFSET	pci_dram_offset
extern unsigned long isa_io_base;
extern unsigned long pci_io_base;
extern unsigned long pci_dram_offset;
extern resource_size_t isa_mem_base;
#define IO_SPACE_LIMIT (0xFFFFFFFF)
static inline unsigned char __raw_readb(const volatile void __iomem *addr)
static inline unsigned short __raw_readw(const volatile void __iomem *addr)
static inline unsigned int __raw_readl(const volatile void __iomem *addr)
static inline unsigned long __raw_readq(const volatile void __iomem *addr)
static inline void __raw_writeb(unsigned char v, volatile void __iomem *addr)
static inline void __raw_writew(unsigned short v, volatile void __iomem *addr)
static inline void __raw_writel(unsigned int v, volatile void __iomem *addr)
static inline void __raw_writeq(unsigned long v, volatile void __iomem *addr)
static inline unsigned char readb(const volatile void __iomem *addr)
static inline unsigned short readw(const volatile void __iomem *addr)
static inline unsigned int readl(const volatile void __iomem *addr)
static inline void writeb(unsigned char v, volatile void __iomem *addr)
static inline void writew(unsigned short v, volatile void __iomem *addr)
static inline void writel(unsigned int v, volatile void __iomem *addr)
#define ioread8(addr)		__raw_readb((u8 *)(addr))
#define ioread16(addr)		__raw_readw((u16 *)(addr))
#define ioread32(addr)		__raw_readl((u32 *)(addr))
#define iowrite8(v, addr)	__raw_writeb((u8)(v), (u8 *)(addr))
#define iowrite16(v, addr)	__raw_writew((u16)(v), (u16 *)(addr))
#define iowrite32(v, addr)	__raw_writel((u32)(v), (u32 *)(addr))
#define ioread16be(addr)	__raw_readw((u16 *)(addr))
#define ioread32be(addr)	__raw_readl((u32 *)(addr))
#define iowrite16be(v, addr)	__raw_writew((u16)(v), (u16 *)(addr))
#define iowrite32be(v, addr)	__raw_writel((u32)(v), (u32 *)(addr))
#define inb(port)		readb((u8 *)((port)))
#define outb(val, port)		writeb((val), (u8 *)((unsigned long)(port)))
#define inw(port)		readw((u16 *)((port)))
#define outw(val, port)		writew((val), (u16 *)((unsigned long)(port)))
#define inl(port)		readl((u32 *)((port)))
#define outl(val, port)		writel((val), (u32 *)((unsigned long)(port)))
#define inb_p(port)		inb((port))
#define outb_p(val, port)	outb((val), (port))
#define inw_p(port)		inw((port))
#define outw_p(val, port)	outw((val), (port))
#define inl_p(port)		inl((port))
#define outl_p(val, port)	outl((val), (port))
#define memset_io(a, b, c)	memset((void *)(a), (b), (c))
#define memcpy_fromio(a, b, c)	memcpy((a), (void *)(b), (c))
#define memcpy_toio(a, b, c)	memcpy((void *)(a), (b), (c))
#define phys_to_virt(addr)	((void *)__phys_to_virt(addr))
#define virt_to_phys(addr)	((unsigned long)__virt_to_phys(addr))
#define virt_to_bus(addr)	((unsigned long)__virt_to_phys(addr))
#define page_to_bus(page)	(page_to_phys(page))
#define bus_to_virt(addr)	(phys_to_virt(addr))
extern void iounmap(void *addr);
extern void __iomem *ioremap(phys_addr_t address, unsigned long size);
#define ioremap_writethrough(addr, size) ioremap((addr), (size))
#define ioremap_nocache(addr, size)      ioremap((addr), (size))
#define ioremap_fullcache(addr, size)    ioremap((addr), (size))
static inline unsigned long __iomem virt_to_phys(volatile void *address)
#define virt_to_bus virt_to_phys
static inline void *phys_to_virt(unsigned long address)
#define bus_to_virt(a) phys_to_virt(a)
static inline void __iomem *__ioremap(phys_addr_t address, unsigned long size,
unsigned long flags)
#define ioremap(physaddr, size)	((void __iomem *)(unsigned long)(physaddr))
#define iounmap(addr)		((void)0)
#define ioremap_nocache(physaddr, size)	ioremap(physaddr, size)
#define xlate_dev_mem_ptr(p)	__va(p)
#define xlate_dev_kmem_ptr(p)	p
#define out_be32(a, v) __raw_writel((v), (void __iomem __force *)(a))
#define out_be16(a, v) __raw_writew((v), (a))
#define in_be32(a) __raw_readl((const void __iomem __force *)(a))
#define in_be16(a) __raw_readw(a)
#define writel_be(v, a)	out_be32((__force unsigned *)a, v)
#define readl_be(a)	in_be32((__force unsigned *)a)
#define out_le32(a, v) __raw_writel(__cpu_to_le32(v), (a))
#define out_le16(a, v) __raw_writew(__cpu_to_le16(v), (a))
#define in_le32(a) __le32_to_cpu(__raw_readl(a))
#define in_le16(a) __le16_to_cpu(__raw_readw(a))
#define out_8(a, v) __raw_writeb((v), (a))
#define in_8(a) __raw_readb(a)
#define mmiowb()
#define ioport_map(port, nr)	((void __iomem *)(port))
#define ioport_unmap(addr)
