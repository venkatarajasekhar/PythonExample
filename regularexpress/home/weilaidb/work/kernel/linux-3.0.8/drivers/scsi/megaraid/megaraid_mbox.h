#define _MEGARAID_H_
#define MEGARAID_VERSION	"2.20.5.1"
#define MEGARAID_EXT_VERSION	"(Release Date: Thu Nov 16 15:32:35 EST 2006)"
#define PCI_DEVICE_ID_PERC4_DI_DISCOVERY		0x000E
#define PCI_SUBSYS_ID_PERC4_DI_DISCOVERY		0x0123
#define PCI_DEVICE_ID_PERC4_SC				0x1960
#define PCI_SUBSYS_ID_PERC4_SC				0x0520
#define PCI_DEVICE_ID_PERC4_DC				0x1960
#define PCI_SUBSYS_ID_PERC4_DC				0x0518
#define PCI_DEVICE_ID_VERDE				0x0407
#define PCI_DEVICE_ID_PERC4_DI_EVERGLADES		0x000F
#define PCI_SUBSYS_ID_PERC4_DI_EVERGLADES		0x014A
#define PCI_DEVICE_ID_PERC4E_SI_BIGBEND			0x0013
#define PCI_SUBSYS_ID_PERC4E_SI_BIGBEND			0x016c
#define PCI_DEVICE_ID_PERC4E_DI_KOBUK			0x0013
#define PCI_SUBSYS_ID_PERC4E_DI_KOBUK			0x016d
#define PCI_DEVICE_ID_PERC4E_DI_CORVETTE		0x0013
#define PCI_SUBSYS_ID_PERC4E_DI_CORVETTE		0x016e
#define PCI_DEVICE_ID_PERC4E_DI_EXPEDITION		0x0013
#define PCI_SUBSYS_ID_PERC4E_DI_EXPEDITION		0x016f
#define PCI_DEVICE_ID_PERC4E_DI_GUADALUPE		0x0013
#define PCI_SUBSYS_ID_PERC4E_DI_GUADALUPE		0x0170
#define PCI_DEVICE_ID_DOBSON				0x0408
#define PCI_DEVICE_ID_MEGARAID_SCSI_320_0		0x1960
#define PCI_SUBSYS_ID_MEGARAID_SCSI_320_0		0xA520
#define PCI_DEVICE_ID_MEGARAID_SCSI_320_1		0x1960
#define PCI_SUBSYS_ID_MEGARAID_SCSI_320_1		0x0520
#define PCI_DEVICE_ID_MEGARAID_SCSI_320_2		0x1960
#define PCI_SUBSYS_ID_MEGARAID_SCSI_320_2		0x0518
#define PCI_DEVICE_ID_MEGARAID_I4_133_RAID		0x1960
#define PCI_SUBSYS_ID_MEGARAID_I4_133_RAID		0x0522
#define PCI_DEVICE_ID_MEGARAID_SATA_150_4		0x1960
#define PCI_SUBSYS_ID_MEGARAID_SATA_150_4		0x4523
#define PCI_DEVICE_ID_MEGARAID_SATA_150_6		0x1960
#define PCI_SUBSYS_ID_MEGARAID_SATA_150_6		0x0523
#define PCI_DEVICE_ID_LINDSAY				0x0409
#define PCI_DEVICE_ID_INTEL_RAID_SRCS16			0x1960
#define PCI_SUBSYS_ID_INTEL_RAID_SRCS16			0x0523
#define PCI_DEVICE_ID_INTEL_RAID_SRCU41L_LAKE_SHETEK	0x1960
#define PCI_SUBSYS_ID_INTEL_RAID_SRCU41L_LAKE_SHETEK	0x0520
#define PCI_SUBSYS_ID_PERC3_QC				0x0471
#define PCI_SUBSYS_ID_PERC3_DC				0x0493
#define PCI_SUBSYS_ID_PERC3_SC				0x0475
#define PCI_SUBSYS_ID_CERC_ATA100_4CH			0x0511
#define MBOX_MAX_SCSI_CMDS	128
#define MBOX_MAX_USER_CMDS	32
#define MBOX_DEF_CMD_PER_LUN	64
#define MBOX_DEFAULT_SG_SIZE	26
#define MBOX_MAX_SG_SIZE	32
#define MBOX_MAX_SECTORS	128
#define MBOX_TIMEOUT		30
#define MBOX_BUSY_WAIT		10
#define MBOX_RESET_WAIT		180
#define MBOX_RESET_EXT_WAIT	120
#define MBOX_SYNC_WAIT_CNT	0xFFFF
#define MBOX_SYNC_DELAY_200	200
#define MBOX_IBUF_SIZE		4096
typedef struct  mbox_ccb_t;
#define MAX_LD_EXTENDED64	64
typedef struct  mraid_device_t;
#define ADAP2RAIDDEV(adp)	((mraid_device_t *)((adp)->raid_device))
#define MAILBOX_LOCK(rdev)	(&(rdev)->mailbox_lock)
#define IS_RAID_CH(rdev, ch)	(((rdev)->channel_class >> (ch)) & 0x01)
#define RDINDOOR(rdev)		readl((rdev)->baseaddr + 0x20)
#define RDOUTDOOR(rdev)		readl((rdev)->baseaddr + 0x2C)
#define WRINDOOR(rdev, value)	writel(value, (rdev)->baseaddr + 0x20)
#define WROUTDOOR(rdev, value)	writel(value, (rdev)->baseaddr + 0x2C)
