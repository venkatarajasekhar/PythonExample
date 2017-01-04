#define __SPARC64_PCI_H
#define pcibios_assign_all_busses()	0
#define PCIBIOS_MIN_IO		0UL
#define PCIBIOS_MIN_MEM		0UL
#define PCI_IRQ_NONE		0xffffffff
static inline void pcibios_set_master(struct pci_dev *dev)
static inline void pcibios_penalize_isa_irq(int irq, int active)
#define PCI_DMA_BUS_IS_PHYS	(0)
#define PCI64_REQUIRED_MASK	(~(u64)0)
#define PCI64_ADDR_BASE		0xfffc000000000000UL
static inline void pci_dma_burst_advice(struct pci_dev *pdev,
enum pci_dma_burst_strategy *strat,
unsigned long *strategy_parameter)
extern int pci_domain_nr(struct pci_bus *bus);
static inline int pci_proc_domain(struct pci_bus *bus)
#define HAVE_PCI_MMAP
#define HAVE_ARCH_PCI_GET_UNMAPPED_AREA
#define get_pci_unmapped_area get_fb_unmapped_area
extern int pci_mmap_page_range(struct pci_dev *dev, struct vm_area_struct *vma,
enum pci_mmap_state mmap_state,
int write_combine);
extern void
pcibios_resource_to_bus(struct pci_dev *dev, struct pci_bus_region *region,
struct resource *res);
extern void
pcibios_bus_to_resource(struct pci_dev *dev, struct resource *res,
struct pci_bus_region *region);
static inline int pci_get_legacy_ide_irq(struct pci_dev *dev, int channel)
struct device_node;
extern struct device_node *pci_device_to_OF_node(struct pci_dev *pdev);
#define HAVE_ARCH_PCI_RESOURCE_TO_USER
extern void pci_resource_to_user(const struct pci_dev *dev, int bar,
const struct resource *rsrc,
resource_size_t *start, resource_size_t *end);
