#undef DEBUG
unsigned long isa_io_base;
unsigned long pci_dram_offset;
int pcibios_assign_bus_offset = 1;
static u8 *pci_to_OF_bus_map;
static int pci_assign_all_buses;
static int pci_bus_count;
static void
make_one_node_map(struct device_node *node, u8 pci_bus)
void
pcibios_make_OF_bus_map(void)
typedef int (*pci_OF_scan_iterator)(struct device_node *node, void *data);
static struct device_node *scan_OF_pci_childs(struct device_node *parent,
pci_OF_scan_iterator filter, void *data)
static struct device_node *scan_OF_for_pci_dev(struct device_node *parent,
unsigned int devfn)
static struct device_node *scan_OF_for_pci_bus(struct pci_bus *bus)
struct device_node *
pci_busdev_to_OF_node(struct pci_bus *bus, int devfn)
EXPORT_SYMBOL(pci_busdev_to_OF_node);
struct device_node*
pci_device_to_OF_node(struct pci_dev *dev)
EXPORT_SYMBOL(pci_device_to_OF_node);
static int
find_OF_pci_device_filter(struct device_node *node, void *data)
int
pci_device_from_OF_node(struct device_node *node, u8 *bus, u8 *devfn)
EXPORT_SYMBOL(pci_device_from_OF_node);
void __init
pci_create_OF_bus_map(void)
static void __devinit pcibios_scan_phb(struct pci_controller *hose)
static int __init pcibios_init(void)
subsys_initcall(pcibios_init);
static struct pci_controller*
pci_bus_to_hose(int bus)
long sys_pciconfig_iobase(long which, unsigned long bus, unsigned long devfn)
