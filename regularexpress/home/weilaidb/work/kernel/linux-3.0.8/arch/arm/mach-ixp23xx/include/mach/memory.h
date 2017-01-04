#define __ASM_ARCH_MEMORY_H
#define PLAT_PHYS_OFFSET		(0x00000000)
#define IXP23XX_PCI_SDRAM_OFFSET (*((volatile int *)IXP23XX_PCI_SDRAM_BAR) & 0xfffffff0)
#define __phys_to_bus(x)	((x) + (IXP23XX_PCI_SDRAM_OFFSET - PHYS_OFFSET))
#define __bus_to_phys(x)	((x) - (IXP23XX_PCI_SDRAM_OFFSET - PHYS_OFFSET))
#define __virt_to_bus(v)	__phys_to_bus(__virt_to_phys(v))
#define __bus_to_virt(b)	__phys_to_virt(__bus_to_phys(b))
#define __pfn_to_bus(p)		__phys_to_bus(__pfn_to_phys(p))
#define __bus_to_pfn(b)		__phys_to_pfn(__bus_to_phys(b))
#define arch_is_coherent()	1
