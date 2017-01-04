#define LINUX_BCMA_PRIVATE_H_
#define pr_fmt(fmt)		KBUILD_MODNAME ": " fmt
#define BCMA_CORE_SIZE		0x1000
struct bcma_bus;
extern int bcma_bus_register(struct bcma_bus *bus);
extern void bcma_bus_unregister(struct bcma_bus *bus);
int bcma_bus_scan(struct bcma_bus *bus);
extern int __init bcma_host_pci_init(void);
extern void __exit bcma_host_pci_exit(void);
