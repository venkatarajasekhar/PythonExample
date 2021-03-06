#define _SIS_H_
#define VER_MAJOR		1
#define VER_MINOR		8
#define VER_LEVEL		9
#define SIS_NEW_CONFIG_COMPAT
#undef SISFBDEBUG
#define DPRINTK(fmt, args...) printk(KERN_DEBUG "%s: " fmt, __func__ , ## args)
#define TWDEBUG(x) printk(KERN_INFO x "\n");
#define DPRINTK(fmt, args...)
#define TWDEBUG(x)
#define SISFAIL(x) do  while(0)
#define PCI_DEVICE_ID_SI_650_VGA	0x6325
#define PCI_DEVICE_ID_SI_650		0x0650
#define PCI_DEVICE_ID_SI_651		0x0651
#define PCI_DEVICE_ID_SI_740		0x0740
#define PCI_DEVICE_ID_SI_330		0x0330
#define PCI_DEVICE_ID_SI_660_VGA	0x6330
#define PCI_DEVICE_ID_SI_661		0x0661
#define PCI_DEVICE_ID_SI_741		0x0741
#define PCI_DEVICE_ID_SI_660		0x0660
#define PCI_DEVICE_ID_SI_760		0x0760
#define PCI_DEVICE_ID_SI_761		0x0761
#define PCI_VENDOR_ID_XGI		0x18ca
#define PCI_DEVICE_ID_XGI_20		0x0020
#define PCI_DEVICE_ID_XGI_40		0x0040
#define FB_ACCEL_SIS_GLAMOUR_2	40
#define FB_ACCEL_SIS_XABRE	41
#define FB_ACCEL_XGI_VOLARI_V	47
#define FB_ACCEL_XGI_VOLARI_Z	48
#define HW_CURSOR_CAP		0x80
#define TURBO_QUEUE_CAP		0x40
#define AGP_CMD_QUEUE_CAP	0x20
#define VM_CMD_QUEUE_CAP	0x10
#define MMIO_CMD_QUEUE_CAP	0x08
#define TURBO_QUEUE_AREA_SIZE	(512 * 1024)
#define HW_CURSOR_AREA_SIZE_300	4096
#define COMMAND_QUEUE_AREA_SIZE	(512 * 1024)
#define COMMAND_QUEUE_AREA_SIZE_Z7 (128 * 1024)
#define HW_CURSOR_AREA_SIZE_315	16384
#define COMMAND_QUEUE_THRESHOLD	0x1F
#define SIS_OH_ALLOC_SIZE	4000
#define SENTINEL		0x7fffffff
#define SEQ_ADR			0x14
#define SEQ_DATA		0x15
#define DAC_ADR			0x18
#define DAC_DATA		0x19
#define CRTC_ADR		0x24
#define CRTC_DATA		0x25
#define DAC2_ADR		(0x16-0x30)
#define DAC2_DATA		(0x17-0x30)
#define VB_PART1_ADR		(0x04-0x30)
#define VB_PART1_DATA		(0x05-0x30)
#define VB_PART2_ADR		(0x10-0x30)
#define VB_PART2_DATA		(0x11-0x30)
#define VB_PART3_ADR		(0x12-0x30)
#define VB_PART3_DATA		(0x13-0x30)
#define VB_PART4_ADR		(0x14-0x30)
#define VB_PART4_DATA		(0x15-0x30)
#define SISSR			ivideo->SiS_Pr.SiS_P3c4
#define SISCR			ivideo->SiS_Pr.SiS_P3d4
#define SISDACA			ivideo->SiS_Pr.SiS_P3c8
#define SISDACD			ivideo->SiS_Pr.SiS_P3c9
#define SISPART1		ivideo->SiS_Pr.SiS_Part1Port
#define SISPART2		ivideo->SiS_Pr.SiS_Part2Port
#define SISPART3		ivideo->SiS_Pr.SiS_Part3Port
#define SISPART4		ivideo->SiS_Pr.SiS_Part4Port
#define SISPART5		ivideo->SiS_Pr.SiS_Part5Port
#define SISDAC2A		SISPART5
#define SISDAC2D		(SISPART5 + 1)
#define SISMISCR		(ivideo->SiS_Pr.RelIO + 0x1c)
#define SISMISCW		ivideo->SiS_Pr.SiS_P3c2
#define SISINPSTAT		(ivideo->SiS_Pr.RelIO + 0x2a)
#define SISPEL			ivideo->SiS_Pr.SiS_P3c6
#define SISVGAENABLE		(ivideo->SiS_Pr.RelIO + 0x13)
#define SISVID			(ivideo->SiS_Pr.RelIO + 0x02 - 0x30)
#define SISCAP			(ivideo->SiS_Pr.RelIO + 0x00 - 0x30)
#define IND_SIS_PASSWORD		0x05
#define IND_SIS_COLOR_MODE		0x06
#define IND_SIS_RAMDAC_CONTROL		0x07
#define IND_SIS_DRAM_SIZE		0x14
#define IND_SIS_MODULE_ENABLE		0x1E
#define IND_SIS_PCI_ADDRESS_SET		0x20
#define IND_SIS_TURBOQUEUE_ADR		0x26
#define IND_SIS_TURBOQUEUE_SET		0x27
#define IND_SIS_POWER_ON_TRAP		0x38
#define IND_SIS_POWER_ON_TRAP2		0x39
#define IND_SIS_CMDQUEUE_SET		0x26
#define IND_SIS_CMDQUEUE_THRESHOLD	0x27
#define IND_SIS_AGP_IO_PAD	0x48
#define SIS_CRT2_WENABLE_300	0x24
#define SIS_CRT2_WENABLE_315	0x2F
#define SIS_PASSWORD		0x86
#define SIS_INTERLACED_MODE	0x20
#define SIS_8BPP_COLOR_MODE	0x0
#define SIS_15BPP_COLOR_MODE	0x1
#define SIS_16BPP_COLOR_MODE	0x2
#define SIS_32BPP_COLOR_MODE	0x4
#define SIS_ENABLE_2D		0x40
#define SIS_MEM_MAP_IO_ENABLE	0x01
#define SIS_PCI_ADDR_ENABLE	0x80
#define SIS_AGP_CMDQUEUE_ENABLE		0x80
#define SIS_VRAM_CMDQUEUE_ENABLE	0x40
#define SIS_MMIO_CMD_ENABLE		0x20
#define SIS_CMD_QUEUE_SIZE_512k		0x00
#define SIS_CMD_QUEUE_SIZE_1M		0x04
#define SIS_CMD_QUEUE_SIZE_2M		0x08
#define SIS_CMD_QUEUE_SIZE_4M		0x0C
#define SIS_CMD_QUEUE_RESET		0x01
#define SIS_CMD_AUTO_CORR		0x02
#define SIS_CMD_QUEUE_SIZE_Z7_64k	0x00
#define SIS_CMD_QUEUE_SIZE_Z7_128k	0x04
#define SIS_SIMULTANEOUS_VIEW_ENABLE	0x01
#define SIS_MODE_SELECT_CRT2		0x02
#define SIS_VB_OUTPUT_COMPOSITE		0x04
#define SIS_VB_OUTPUT_SVIDEO		0x08
#define SIS_VB_OUTPUT_SCART		0x10
#define SIS_VB_OUTPUT_LCD		0x20
#define SIS_VB_OUTPUT_CRT2		0x40
#define SIS_VB_OUTPUT_HIVISION		0x80
#define SIS_VB_OUTPUT_DISABLE	0x20
#define SIS_DRIVER_MODE		0x40
#define SIS_VB_COMPOSITE	0x01
#define SIS_VB_SVIDEO		0x02
#define SIS_VB_SCART		0x04
#define SIS_VB_LCD		0x08
#define SIS_VB_CRT2		0x10
#define SIS_CRT1		0x20
#define SIS_VB_HIVISION		0x40
#define SIS_VB_YPBPR		0x80
#define SIS_VB_TV		(SIS_VB_COMPOSITE | SIS_VB_SVIDEO | \
SIS_VB_SCART | SIS_VB_HIVISION | SIS_VB_YPBPR)
#define SIS_EXTERNAL_CHIP_MASK			0x0E
#define SIS_EXTERNAL_CHIP_SIS301		0x01
#define SIS_EXTERNAL_CHIP_LVDS			0x02
#define SIS_EXTERNAL_CHIP_TRUMPION		0x03
#define SIS_EXTERNAL_CHIP_LVDS_CHRONTEL		0x04
#define SIS_EXTERNAL_CHIP_CHRONTEL		0x05
#define SIS310_EXTERNAL_CHIP_LVDS		0x02
#define SIS310_EXTERNAL_CHIP_LVDS_CHRONTEL	0x03
#define SIS_AGP_2X		0x20
#define VB_CONEXANT		0x00000800
#define VB_TRUMPION		VB_CONEXANT
#define VB_302ELV		0x00004000
#define VB_301			0x00100000
#define VB_301B			0x00200000
#define VB_302B			0x00400000
#define VB_30xBDH		0x00800000
#define VB_LVDS			0x01000000
#define VB_CHRONTEL		0x02000000
#define VB_301LV		0x04000000
#define VB_302LV		0x08000000
#define VB_301C			0x10000000
#define VB_SISBRIDGE		(VB_301|VB_301B|VB_301C|VB_302B|VB_301LV|VB_302LV|VB_302ELV)
#define VB_VIDEOBRIDGE		(VB_SISBRIDGE | VB_LVDS | VB_CHRONTEL | VB_CONEXANT)
#define VB2_SISUMC		0x00000001
#define VB2_301			0x00000002
#define VB2_301B		0x00000004
#define VB2_301C		0x00000008
#define VB2_307T		0x00000010
#define VB2_302B		0x00000800
#define VB2_301LV		0x00001000
#define VB2_302LV		0x00002000
#define VB2_302ELV		0x00004000
#define VB2_307LV		0x00008000
#define VB2_30xBDH		0x08000000
#define VB2_CONEXANT		0x10000000
#define VB2_TRUMPION		0x20000000
#define VB2_LVDS		0x40000000
#define VB2_CHRONTEL		0x80000000
#define VB2_SISLVDSBRIDGE	(VB2_301LV | VB2_302LV | VB2_302ELV | VB2_307LV)
#define VB2_SISTMDSBRIDGE	(VB2_301   | VB2_301B  | VB2_301C   | VB2_302B | VB2_307T)
#define VB2_SISBRIDGE		(VB2_SISLVDSBRIDGE | VB2_SISTMDSBRIDGE)
#define VB2_SISTMDSLCDABRIDGE	(VB2_301C | VB2_307T)
#define VB2_SISLCDABRIDGE	(VB2_SISTMDSLCDABRIDGE | VB2_301LV | VB2_302LV | VB2_302ELV | VB2_307LV)
#define VB2_SISHIVISIONBRIDGE	(VB2_301  | VB2_301B | VB2_302B)
#define VB2_SISYPBPRBRIDGE	(VB2_301C | VB2_307T | VB2_SISLVDSBRIDGE)
#define VB2_SISYPBPRARBRIDGE	(VB2_301C | VB2_307T | VB2_307LV)
#define VB2_SISTAP4SCALER	(VB2_301C | VB2_307T | VB2_302ELV | VB2_307LV)
#define VB2_SISTVBRIDGE		(VB2_SISHIVISIONBRIDGE | VB2_SISYPBPRBRIDGE)
#define VB2_SISVGA2BRIDGE	(VB2_301 | VB2_301B | VB2_301C | VB2_302B | VB2_307T)
#define VB2_VIDEOBRIDGE		(VB2_SISBRIDGE | VB2_LVDS | VB2_CHRONTEL | VB2_CONEXANT)
#define VB2_30xB		(VB2_301B  | VB2_301C   | VB2_302B  | VB2_307T)
#define VB2_30xBLV		(VB2_30xB  | VB2_SISLVDSBRIDGE)
#define VB2_30xC		(VB2_301C  | VB2_307T)
#define VB2_30xCLV		(VB2_301C  | VB2_307T   | VB2_302ELV| VB2_307LV)
#define VB2_SISEMIBRIDGE	(VB2_302LV | VB2_302ELV | VB2_307LV)
#define VB2_LCD162MHZBRIDGE	(VB2_301C  | VB2_307T)
#define VB2_LCDOVER1280BRIDGE	(VB2_301C  | VB2_307T   | VB2_302LV | VB2_302ELV | VB2_307LV)
#define VB2_LCDOVER1600BRIDGE	(VB2_307T  | VB2_307LV)
#define VB2_RAMDAC202MHZBRIDGE	(VB2_301C  | VB2_307T)
void SiS_SetReg(SISIOADDRESS, u8, u8);
void SiS_SetRegByte(SISIOADDRESS, u8);
void SiS_SetRegShort(SISIOADDRESS, u16);
void SiS_SetRegLong(SISIOADDRESS, u32);
void SiS_SetRegANDOR(SISIOADDRESS, u8, u8, u8);
void SiS_SetRegAND(SISIOADDRESS, u8, u8);
void SiS_SetRegOR(SISIOADDRESS, u8, u8);
u8 SiS_GetReg(SISIOADDRESS, u8);
u8 SiS_GetRegByte(SISIOADDRESS);
u16 SiS_GetRegShort(SISIOADDRESS);
u32 SiS_GetRegLong(SISIOADDRESS);
#define MMIO_IN8(base, offset)  readb((base+offset))
#define MMIO_IN16(base, offset) readw((base+offset))
#define MMIO_IN32(base, offset) readl((base+offset))
#define MMIO_OUT8(base, offset, val)  writeb(((u8)(val)), (base+offset))
#define MMIO_OUT16(base, offset, val) writew(((u16)(val)), (base+offset))
#define MMIO_OUT32(base, offset, val) writel(((u32)(val)), (base+offset))
#define Q_BASE_ADDR		0x85C0
#define Q_WRITE_PTR		0x85C4
#define Q_READ_PTR		0x85C8
#define Q_STATUS		0x85CC
#define MMIO_QUEUE_PHYBASE      Q_BASE_ADDR
#define MMIO_QUEUE_WRITEPORT    Q_WRITE_PTR
#define MMIO_QUEUE_READPORT     Q_READ_PTR
#define FB_BLANK_UNBLANK	0
#define FB_BLANK_NORMAL		1
#define FB_BLANK_VSYNC_SUSPEND	2
#define FB_BLANK_HSYNC_SUSPEND	3
#define FB_BLANK_POWERDOWN	4
enum _SIS_LCD_TYPE ;
enum _SIS_CMDTYPE ;
struct SIS_OH ;
struct SIS_OHALLOC ;
struct SIS_HEAP ;
struct sis_video_info ;
