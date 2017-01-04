#define _MVME147HW_H_
typedef struct  MK48T02;
#define RTC_WRITE	0x80
#define RTC_READ	0x40
#define RTC_STOP	0x20
#define m147_rtc ((MK48T02 * volatile)0xfffe07f8)
struct pcc_regs ;
#define m147_pcc ((struct pcc_regs * volatile)0xfffe1000)
#define PCC_INT_ENAB		0x08
#define PCC_TIMER_INT_CLR	0x80
#define PCC_TIMER_PRELOAD	63936l
#define PCC_LEVEL_ABORT		0x07
#define PCC_LEVEL_SERIAL	0x04
#define PCC_LEVEL_ETH		0x04
#define PCC_LEVEL_TIMER1	0x04
#define PCC_LEVEL_SCSI_PORT	0x04
#define PCC_LEVEL_SCSI_DMA	0x04
#define PCC_IRQ_AC_FAIL		(IRQ_USER+0)
#define PCC_IRQ_BERR		(IRQ_USER+1)
#define PCC_IRQ_ABORT		(IRQ_USER+2)
#define PCC_IRQ_PRINTER		(IRQ_USER+7)
#define PCC_IRQ_TIMER1		(IRQ_USER+8)
#define PCC_IRQ_TIMER2		(IRQ_USER+9)
#define PCC_IRQ_SOFTWARE1	(IRQ_USER+10)
#define PCC_IRQ_SOFTWARE2	(IRQ_USER+11)
#define M147_SCC_A_ADDR		0xfffe3002
#define M147_SCC_B_ADDR		0xfffe3000
#define M147_SCC_PCLK		5000000
#define MVME147_IRQ_SCSI_PORT	(IRQ_USER+0x45)
#define MVME147_IRQ_SCSI_DMA	(IRQ_USER+0x46)
#define MVME147_IRQ_TYPE_PRIO	0
#define MVME147_IRQ_SCC_BASE		(IRQ_USER+32)
#define MVME147_IRQ_SCCB_TX		(IRQ_USER+32)
#define MVME147_IRQ_SCCB_STAT		(IRQ_USER+34)
#define MVME147_IRQ_SCCB_RX		(IRQ_USER+36)
#define MVME147_IRQ_SCCB_SPCOND		(IRQ_USER+38)
#define MVME147_IRQ_SCCA_TX		(IRQ_USER+40)
#define MVME147_IRQ_SCCA_STAT		(IRQ_USER+42)
#define MVME147_IRQ_SCCA_RX		(IRQ_USER+44)
#define MVME147_IRQ_SCCA_SPCOND		(IRQ_USER+46)
#define MVME147_LANCE_BASE	0xfffe1800
#define MVME147_LANCE_IRQ	(IRQ_USER+4)
#define ETHERNET_ADDRESS 0xfffe0778
