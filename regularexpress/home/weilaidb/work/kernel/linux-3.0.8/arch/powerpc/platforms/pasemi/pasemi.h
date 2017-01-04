#define _PASEMI_PASEMI_H
extern unsigned long pas_get_boot_time(void);
extern void pas_pci_init(void);
extern void __devinit pas_pci_irq_fixup(struct pci_dev *dev);
extern void __devinit pas_pci_dma_dev_setup(struct pci_dev *dev);
extern void __iomem *pasemi_pci_getcfgaddr(struct pci_dev *dev, int offset);
extern void __init alloc_iobmap_l2(void);
extern void __init pasemi_map_registers(void);
extern void idle_spin(void);
extern void idle_doze(void);
extern int check_astate(void);
extern void restore_astate(int cpu);
static inline int check_astate(void)
static inline void restore_astate(int cpu)