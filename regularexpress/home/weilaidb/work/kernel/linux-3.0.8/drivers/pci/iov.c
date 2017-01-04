#define VIRTFN_ID_LEN	16
static inline u8 virtfn_bus(struct pci_dev *dev, int id)
static inline u8 virtfn_devfn(struct pci_dev *dev, int id)
static struct pci_bus *virtfn_add_bus(struct pci_bus *bus, int busnr)
static void virtfn_remove_bus(struct pci_bus *bus, int busnr)
static int virtfn_add(struct pci_dev *dev, int id, int reset)
static void virtfn_remove(struct pci_dev *dev, int id, int reset)
static int sriov_migration(struct pci_dev *dev)
static void sriov_migration_task(struct work_struct *work)
static int sriov_enable_migration(struct pci_dev *dev, int nr_virtfn)
static void sriov_disable_migration(struct pci_dev *dev)
static int sriov_enable(struct pci_dev *dev, int nr_virtfn)
static void sriov_disable(struct pci_dev *dev)
static int sriov_init(struct pci_dev *dev, int pos)
static void sriov_release(struct pci_dev *dev)
static void sriov_restore_state(struct pci_dev *dev)
int pci_iov_init(struct pci_dev *dev)
void pci_iov_release(struct pci_dev *dev)
int pci_iov_resource_bar(struct pci_dev *dev, int resno,
enum pci_bar_type *type)
resource_size_t pci_sriov_resource_alignment(struct pci_dev *dev, int resno)
void pci_restore_iov_state(struct pci_dev *dev)
int pci_iov_bus_range(struct pci_bus *bus)
int pci_enable_sriov(struct pci_dev *dev, int nr_virtfn)
EXPORT_SYMBOL_GPL(pci_enable_sriov);
void pci_disable_sriov(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(pci_disable_sriov);
irqreturn_t pci_sriov_migration(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(pci_sriov_migration);
int pci_num_vf(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(pci_num_vf);
static int ats_alloc_one(struct pci_dev *dev, int ps)
static void ats_free_one(struct pci_dev *dev)
int pci_enable_ats(struct pci_dev *dev, int ps)
void pci_disable_ats(struct pci_dev *dev)
int pci_ats_queue_depth(struct pci_dev *dev)
