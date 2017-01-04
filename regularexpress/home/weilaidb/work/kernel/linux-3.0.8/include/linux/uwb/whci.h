#define _LINUX_UWB_WHCI_H_
#define UWBCAPINFO	0x00
#  define UWBCAPINFO_TO_N_CAPS(c)	(((c) >> 0)  & 0xFull)
#define UWBCAPDATA(n)	(8*(n))
#  define UWBCAPDATA_TO_VERSION(c)	(((c) >> 32) & 0xFFFFull)
#  define UWBCAPDATA_TO_OFFSET(c)	(((c) >> 18) & 0x3FFFull)
#  define UWBCAPDATA_TO_BAR(c)		(((c) >> 16) & 0x3ull)
#  define UWBCAPDATA_TO_SIZE(c)		((((c) >> 8) & 0xFFull) * sizeof(u32))
#  define UWBCAPDATA_TO_CAP_ID(c)	(((c) >> 0)  & 0xFFull)
#define UWBCAPDATA_SIZE(n) (8 + 8*(n))
#define URCCMD		0x00
#  define URCCMD_RESET		(1 << 31)
#  define URCCMD_RS		(1 << 30)
#  define URCCMD_EARV		(1 << 29)
#  define URCCMD_ACTIVE		(1 << 15)
#  define URCCMD_IWR		(1 << 14)
#  define URCCMD_SIZE_MASK	0x00000fff
#define URCSTS		0x04
#  define URCSTS_EPS		(1 << 17)
#  define URCSTS_HALTED		(1 << 16)
#  define URCSTS_HSE		(1 << 10)
#  define URCSTS_ER		(1 <<  9)
#  define URCSTS_RCI		(1 <<  8)
#  define URCSTS_INT_MASK	0x00000700
#  define URCSTS_ISI		0x000000ff
#define URCINTR		0x08
#  define URCINTR_EN_ALL	0x000007ff
#define URCCMDADDR	0x10
#define URCEVTADDR	0x18
#  define URCEVTADDR_OFFSET_MASK 0xfff
static inline
void le_writel(u32 value, void __iomem *addr)
static inline
u32 le_readl(void __iomem *addr)
static inline
void le_writeq(u64 value, void __iomem *addr)
static inline
u64 le_readq(void __iomem *addr)
extern int whci_wait_for(struct device *dev, u32 __iomem *reg,
u32 mask, u32 result,
unsigned long max_ms,  const char *tag);
