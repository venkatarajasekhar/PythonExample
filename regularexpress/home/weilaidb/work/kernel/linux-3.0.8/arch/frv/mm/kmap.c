#undef DEBUG
void __iomem *__ioremap(unsigned long physaddr, unsigned long size, int cacheflag)
void iounmap(void volatile __iomem *addr)
void kernel_set_cachemode(void *addr, unsigned long size, int cmode)
