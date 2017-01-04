#define __MACH_PUV3_MEMORY_H__
#define PHYS_OFFSET	UL(0x00000000)
#define VECTORS_BASE	UL(0xffff0000)
#define KUSER_BASE	UL(0x80000000)
#define KERNEL_IMAGE_START	0x00408000
#if !defined(__ASSEMBLY__) && defined(CONFIG_PCI)
void puv3_pci_adjust_zones(unsigned long *size, unsigned long *holes);
#define arch_adjust_zones(size, holes) \
puv3_pci_adjust_zones(size, holes)
#define PCI_DMA_THRESHOLD	(PHYS_OFFSET + SZ_128M - 1)
#define is_pcibus_device(dev)	(dev &&			\
(strncmp(dev->bus->name, "pci", 3) == 0))
#define __virt_to_pcibus(x)     (__virt_to_phys((x) + PKUNITY_PCIAHB_BASE))
#define __pcibus_to_virt(x)     (__phys_to_virt(x) - PKUNITY_PCIAHB_BASE)
#define KUSER_VECPAGE_BASE	(KUSER_BASE + UL(0x3fff0000))
#define kuser_vecpage_to_vectors(x)	((x) - (KUSER_VECPAGE_BASE)	\
+ (VECTORS_BASE))