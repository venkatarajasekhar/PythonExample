#define LINUX_BCMA_REGS_H_
#define BCMA_IOCTL			0x0408
#define  BCMA_IOCTL_CLK			0x0001
#define  BCMA_IOCTL_FGC			0x0002
#define  BCMA_IOCTL_CORE_BITS		0x3FFC
#define  BCMA_IOCTL_PME_EN		0x4000
#define  BCMA_IOCTL_BIST_EN		0x8000
#define BCMA_RESET_CTL			0x0800
#define  BCMA_RESET_CTL_RESET		0x0001
#define BCMA_PCI_PMCSR			0x44
#define  BCMA_PCI_PE			0x100
#define BCMA_PCI_BAR0_WIN		0x80
#define BCMA_PCI_BAR1_WIN		0x84
#define BCMA_PCI_SPROMCTL		0x88
#define  BCMA_PCI_SPROMCTL_WE		0x10
#define BCMA_PCI_BAR1_CONTROL		0x8c
#define BCMA_PCI_IRQS			0x90
#define BCMA_PCI_IRQMASK		0x94
#define BCMA_PCI_BACKPLANE_IRQS		0x98
#define BCMA_PCI_BAR0_WIN2		0xAC
#define BCMA_PCI_GPIO_IN		0xB0
#define BCMA_PCI_GPIO_OUT		0xB4
#define BCMA_PCI_GPIO_OUT_ENABLE	0xB8
#define  BCMA_PCI_GPIO_SCS		0x10
#define  BCMA_PCI_GPIO_HWRAD		0x20
#define  BCMA_PCI_GPIO_XTAL		0x40
#define  BCMA_PCI_GPIO_PLL		0x80