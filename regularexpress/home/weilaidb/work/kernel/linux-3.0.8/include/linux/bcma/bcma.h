#define LINUX_BCMA_H_
struct bcma_device;
struct bcma_bus;
enum bcma_hosttype ;
struct bcma_chipinfo ;
struct bcma_host_ops ;
#define BCMA_MANUF_ARM			0x43B
#define BCMA_MANUF_MIPS			0x4A7
#define BCMA_MANUF_BCM			0x4BF
#define BCMA_CL_SIM			0x0
#define BCMA_CL_EROM			0x1
#define BCMA_CL_CORESIGHT		0x9
#define BCMA_CL_VERIF			0xB
#define BCMA_CL_OPTIMO			0xD
#define BCMA_CL_GEN			0xE
#define BCMA_CL_PRIMECELL		0xF
#define BCMA_CORE_OOB_ROUTER		0x367
#define BCMA_CORE_INVALID		0x700
#define BCMA_CORE_CHIPCOMMON		0x800
#define BCMA_CORE_ILINE20		0x801
#define BCMA_CORE_SRAM			0x802
#define BCMA_CORE_SDRAM			0x803
#define BCMA_CORE_PCI			0x804
#define BCMA_CORE_MIPS			0x805
#define BCMA_CORE_ETHERNET		0x806
#define BCMA_CORE_V90			0x807
#define BCMA_CORE_USB11_HOSTDEV		0x808
#define BCMA_CORE_ADSL			0x809
#define BCMA_CORE_ILINE100		0x80A
#define BCMA_CORE_IPSEC			0x80B
#define BCMA_CORE_UTOPIA		0x80C
#define BCMA_CORE_PCMCIA		0x80D
#define BCMA_CORE_INTERNAL_MEM		0x80E
#define BCMA_CORE_MEMC_SDRAM		0x80F
#define BCMA_CORE_OFDM			0x810
#define BCMA_CORE_EXTIF			0x811
#define BCMA_CORE_80211			0x812
#define BCMA_CORE_PHY_A			0x813
#define BCMA_CORE_PHY_B			0x814
#define BCMA_CORE_PHY_G			0x815
#define BCMA_CORE_MIPS_3302		0x816
#define BCMA_CORE_USB11_HOST		0x817
#define BCMA_CORE_USB11_DEV		0x818
#define BCMA_CORE_USB20_HOST		0x819
#define BCMA_CORE_USB20_DEV		0x81A
#define BCMA_CORE_SDIO_HOST		0x81B
#define BCMA_CORE_ROBOSWITCH		0x81C
#define BCMA_CORE_PARA_ATA		0x81D
#define BCMA_CORE_SATA_XORDMA		0x81E
#define BCMA_CORE_ETHERNET_GBIT		0x81F
#define BCMA_CORE_PCIE			0x820
#define BCMA_CORE_PHY_N			0x821
#define BCMA_CORE_SRAM_CTL		0x822
#define BCMA_CORE_MINI_MACPHY		0x823
#define BCMA_CORE_ARM_1176		0x824
#define BCMA_CORE_ARM_7TDMI		0x825
#define BCMA_CORE_PHY_LP		0x826
#define BCMA_CORE_PMU			0x827
#define BCMA_CORE_PHY_SSN		0x828
#define BCMA_CORE_SDIO_DEV		0x829
#define BCMA_CORE_ARM_CM3		0x82A
#define BCMA_CORE_PHY_HT		0x82B
#define BCMA_CORE_MIPS_74K		0x82C
#define BCMA_CORE_MAC_GBIT		0x82D
#define BCMA_CORE_DDR12_MEM_CTL		0x82E
#define BCMA_CORE_PCIE_RC		0x82F
#define BCMA_CORE_OCP_OCP_BRIDGE	0x830
#define BCMA_CORE_SHARED_COMMON		0x831
#define BCMA_CORE_OCP_AHB_BRIDGE	0x832
#define BCMA_CORE_SPI_HOST		0x833
#define BCMA_CORE_I2S			0x834
#define BCMA_CORE_SDR_DDR1_MEM_CTL	0x835
#define BCMA_CORE_SHIM			0x837
#define BCMA_CORE_DEFAULT		0xFFF
#define BCMA_MAX_NR_CORES		16
struct bcma_device ;
static inline void *bcma_get_drvdata(struct bcma_device *core)
static inline void bcma_set_drvdata(struct bcma_device *core, void *drvdata)
struct bcma_driver ;
extern
int __bcma_driver_register(struct bcma_driver *drv, struct module *owner);
static inline int bcma_driver_register(struct bcma_driver *drv)
extern void bcma_driver_unregister(struct bcma_driver *drv);
struct bcma_bus ;
extern inline u32 bcma_read8(struct bcma_device *core, u16 offset)
extern inline u32 bcma_read16(struct bcma_device *core, u16 offset)
extern inline u32 bcma_read32(struct bcma_device *core, u16 offset)
extern inline
void bcma_write8(struct bcma_device *core, u16 offset, u32 value)
extern inline
void bcma_write16(struct bcma_device *core, u16 offset, u32 value)
extern inline
void bcma_write32(struct bcma_device *core, u16 offset, u32 value)
extern inline u32 bcma_aread32(struct bcma_device *core, u16 offset)
extern inline
void bcma_awrite32(struct bcma_device *core, u16 offset, u32 value)
extern bool bcma_core_is_enabled(struct bcma_device *core);
extern int bcma_core_enable(struct bcma_device *core, u32 flags);
