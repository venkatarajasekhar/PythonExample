#define __ASM_ARM_ARCH_IO_H
#define IO_SPACE_LIMIT 0xffff
u8 __inb8(unsigned int port);
void __outb8(u8  val, unsigned int port);
u8 __inb16(unsigned int port);
void __outb16(u8  val, unsigned int port);
u16 __inw(unsigned int port);
void __outw(u16 val, unsigned int port);
u32 __inl(unsigned int port);
void __outl(u32 val, unsigned int port);
u8  __readb(const volatile void __iomem *addr);
u16 __readw(const volatile void __iomem *addr);
u32 __readl(const volatile void __iomem *addr);
void __writeb(u8  val, void __iomem *addr);
void __writew(u16 val, void __iomem *addr);
void __writel(u32 val, void __iomem *addr);
#define inb(p) 			__inb16(p)
#define outb(v,p)		__outb16(v,p)
#define inb(p)			__inb8(p)
#define outb(v,p)		__outb8(v,p)
#define inw(p)			__inw(p)
#define outw(v,p)		__outw(v,p)
#define inl(p)			__inl(p)
#define outl(v,p)		__outl(v,p)
#define readb(b)		__readb(b)
#define readw(b)		__readw(b)
#define readl(b)		__readl(b)
#define readb_relaxed(addr)	readb(addr)
#define readw_relaxed(addr)	readw(addr)
#define readl_relaxed(addr)	readl(addr)
#define writeb(v,b)		__writeb(v,b)
#define writew(v,b)		__writew(v,b)
#define writel(v,b)		__writel(v,b)
static inline void __iomem *__arch_ioremap(unsigned long cookie, size_t size,
unsigned int flags)
#define __arch_ioremap		__arch_ioremap
#define __arch_iounmap(cookie)	do  while (0)
extern void insb(unsigned int port, void *buf, int sz);
extern void insw(unsigned int port, void *buf, int sz);
extern void insl(unsigned int port, void *buf, int sz);
extern void outsb(unsigned int port, const void *buf, int sz);
extern void outsw(unsigned int port, const void *buf, int sz);
extern void outsl(unsigned int port, const void *buf, int sz);
extern void writesw(void __iomem *addr, const void *data, int wordlen);
extern void writesl(void __iomem *addr, const void *data, int longlen);
extern void readsw(const void __iomem *addr, void *data, int wordlen);
extern void readsl(const void __iomem *addr, void *data, int longlen);
