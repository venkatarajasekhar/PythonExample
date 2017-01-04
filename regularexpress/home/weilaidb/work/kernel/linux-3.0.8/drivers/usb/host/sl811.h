#define SL811_EP_A(base)	((base) + 0)
#define SL811_EP_B(base)	((base) + 8)
#define SL811_HOST_BUF		0x00
#define SL811_PERIPH_EP0	0x00
#define SL811_PERIPH_EP1	0x10
#define SL811_PERIPH_EP2	0x20
#define SL811_PERIPH_EP3	0x30
#define SL11H_HOSTCTLREG	0
#	define SL11H_HCTLMASK_ARM	0x01
#	define SL11H_HCTLMASK_ENABLE	0x02
#	define SL11H_HCTLMASK_IN	0x00
#	define SL11H_HCTLMASK_OUT	0x04
#	define SL11H_HCTLMASK_ISOCH	0x10
#	define SL11H_HCTLMASK_AFTERSOF	0x20
#	define SL11H_HCTLMASK_TOGGLE	0x40
#	define SL11H_HCTLMASK_PREAMBLE	0x80
#define SL11H_BUFADDRREG	1
#define SL11H_BUFLNTHREG	2
#define SL11H_PKTSTATREG	3
#	define SL11H_STATMASK_ACK	0x01
#	define SL11H_STATMASK_ERROR	0x02
#	define SL11H_STATMASK_TMOUT	0x04
#	define SL11H_STATMASK_SEQ	0x08
#	define SL11H_STATMASK_SETUP	0x10
#	define SL11H_STATMASK_OVF	0x20
#	define SL11H_STATMASK_NAK	0x40
#	define SL11H_STATMASK_STALL	0x80
#define SL11H_PIDEPREG		3
#	define	SL_SETUP	0xd0
#	define	SL_IN		0x90
#	define	SL_OUT		0x10
#	define	SL_SOF		0x50
#	define	SL_PREAMBLE	0xc0
#	define	SL_NAK		0xa0
#	define	SL_STALL	0xe0
#	define	SL_DATA0	0x30
#	define	SL_DATA1	0xb0
#define SL11H_XFERCNTREG	4
#define SL11H_DEVADDRREG	4
#define SL11H_CTLREG1		5
#	define SL11H_CTL1MASK_SOF_ENA	0x01
#	define SL11H_CTL1MASK_FORCE	0x18
#		define SL11H_CTL1MASK_NORMAL	0x00
#		define SL11H_CTL1MASK_SE0	0x08
#		define SL11H_CTL1MASK_J		0x10
#		define SL11H_CTL1MASK_K		0x18
#	define SL11H_CTL1MASK_LSPD	0x20
#	define SL11H_CTL1MASK_SUSPEND	0x40
#define SL11H_IRQ_ENABLE	6
#	define SL11H_INTMASK_DONE_A	0x01
#	define SL11H_INTMASK_DONE_B	0x02
#	define SL11H_INTMASK_SOFINTR	0x10
#	define SL11H_INTMASK_INSRMV	0x20
#	define SL11H_INTMASK_RD		0x40
#	define SL11H_INTMASK_DP		0x80
#define SL11S_ADDRESS		7
#define SL11H_IRQ_STATUS	0x0D
#define SL11H_HWREVREG		0x0E
#	define SL11H_HWRMASK_HWREV	0xF0
#define SL11H_SOFLOWREG		0x0E
#define SL11H_SOFTMRREG		0x0F
#define SL811HS_CTLREG2		0x0F
#	define SL811HS_CTL2MASK_SOF_MASK	0x3F
#	define SL811HS_CTL2MASK_DSWAP		0x40
#	define SL811HS_CTL2MASK_HOST		0x80
#define SL811HS_CTL2_INIT	(SL811HS_CTL2MASK_HOST | 0x2e)
#define H_MAXPACKET	120
#define SL11H_DATA_START	0x10
#define	SL811HS_PACKET_BUF(is_a)	((is_a) \
? SL11H_DATA_START \
: (SL11H_DATA_START + H_MAXPACKET))
#define	LOG2_PERIODIC_SIZE	5
#define	PERIODIC_SIZE		(1 << LOG2_PERIODIC_SIZE)
struct sl811 ;
static inline struct sl811 *hcd_to_sl811(struct usb_hcd *hcd)
static inline struct usb_hcd *sl811_to_hcd(struct sl811 *sl811)
struct sl811h_ep ;
static inline u8 sl811_read(struct sl811 *sl811, int reg)
static inline void sl811_write(struct sl811 *sl811, int reg, u8 val)
static inline void
sl811_write_buf(struct sl811 *sl811, int addr, const void *buf, size_t count)
static inline void
sl811_read_buf(struct sl811 *sl811, int addr, void *buf, size_t count)
#define DBG(stuff...)		printk(KERN_DEBUG "sl811: " stuff)
#define DBG(stuff...)		dowhile(0)
#    define VDBG		DBG
#    define VDBG(stuff...)	dowhile(0)
#    define PACKET		VDBG
#    define PACKET(stuff...)	dowhile(0)
#define ERR(stuff...)		printk(KERN_ERR "sl811: " stuff)
#define WARNING(stuff...)	printk(KERN_WARNING "sl811: " stuff)
#define INFO(stuff...)		printk(KERN_INFO "sl811: " stuff)
