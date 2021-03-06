#define _BF538_IRQ_H_
#define NR_PERI_INTS		(2 * 32)
#define IRQ_PLL_WAKEUP		BFIN_IRQ(0)
#define IRQ_DMA0_ERROR		BFIN_IRQ(1)
#define IRQ_PPI_ERROR		BFIN_IRQ(2)
#define IRQ_SPORT0_ERROR	BFIN_IRQ(3)
#define IRQ_SPORT1_ERROR	BFIN_IRQ(4)
#define IRQ_SPI0_ERROR		BFIN_IRQ(5)
#define IRQ_UART0_ERROR		BFIN_IRQ(6)
#define IRQ_RTC			BFIN_IRQ(7)
#define IRQ_PPI			BFIN_IRQ(8)
#define IRQ_SPORT0_RX		BFIN_IRQ(9)
#define IRQ_SPORT0_TX		BFIN_IRQ(10)
#define IRQ_SPORT1_RX		BFIN_IRQ(11)
#define IRQ_SPORT1_TX		BFIN_IRQ(12)
#define IRQ_SPI0		BFIN_IRQ(13)
#define IRQ_UART0_RX		BFIN_IRQ(14)
#define IRQ_UART0_TX		BFIN_IRQ(15)
#define IRQ_TIMER0		BFIN_IRQ(16)
#define IRQ_TIMER1		BFIN_IRQ(17)
#define IRQ_TIMER2		BFIN_IRQ(18)
#define IRQ_PORTF_INTA		BFIN_IRQ(19)
#define IRQ_PORTF_INTB		BFIN_IRQ(20)
#define IRQ_MEM0_DMA0		BFIN_IRQ(21)
#define IRQ_MEM0_DMA1		BFIN_IRQ(22)
#define IRQ_WATCH		BFIN_IRQ(23)
#define IRQ_DMA1_ERROR		BFIN_IRQ(24)
#define IRQ_SPORT2_ERROR	BFIN_IRQ(25)
#define IRQ_SPORT3_ERROR	BFIN_IRQ(26)
#define IRQ_SPI1_ERROR		BFIN_IRQ(28)
#define IRQ_SPI2_ERROR		BFIN_IRQ(29)
#define IRQ_UART1_ERROR		BFIN_IRQ(30)
#define IRQ_UART2_ERROR		BFIN_IRQ(31)
#define IRQ_CAN_ERROR		BFIN_IRQ(32)
#define IRQ_SPORT2_RX		BFIN_IRQ(33)
#define IRQ_SPORT2_TX		BFIN_IRQ(34)
#define IRQ_SPORT3_RX		BFIN_IRQ(35)
#define IRQ_SPORT3_TX		BFIN_IRQ(36)
#define IRQ_SPI1		BFIN_IRQ(39)
#define IRQ_SPI2		BFIN_IRQ(40)
#define IRQ_UART1_RX		BFIN_IRQ(41)
#define IRQ_UART1_TX		BFIN_IRQ(42)
#define IRQ_UART2_RX		BFIN_IRQ(43)
#define IRQ_UART2_TX		BFIN_IRQ(44)
#define IRQ_TWI0		BFIN_IRQ(45)
#define IRQ_TWI1		BFIN_IRQ(46)
#define IRQ_CAN_RX		BFIN_IRQ(47)
#define IRQ_CAN_TX		BFIN_IRQ(48)
#define IRQ_MEM1_DMA0		BFIN_IRQ(49)
#define IRQ_MEM1_DMA1		BFIN_IRQ(50)
#define SYS_IRQS		BFIN_IRQ(63)
#define IRQ_PF0			71
#define IRQ_PF1			72
#define IRQ_PF2			73
#define IRQ_PF3			74
#define IRQ_PF4			75
#define IRQ_PF5			76
#define IRQ_PF6			77
#define IRQ_PF7			78
#define IRQ_PF8			79
#define IRQ_PF9			80
#define IRQ_PF10		81
#define IRQ_PF11		82
#define IRQ_PF12		83
#define IRQ_PF13		84
#define IRQ_PF14		85
#define IRQ_PF15		86
#define GPIO_IRQ_BASE		IRQ_PF0
#define NR_MACH_IRQS		(IRQ_PF15 + 1)
#define IRQ_PLL_WAKEUP_POS	0
#define IRQ_DMA0_ERROR_POS	4
#define IRQ_PPI_ERROR_POS	8
#define IRQ_SPORT0_ERROR_POS	12
#define IRQ_SPORT1_ERROR_POS	16
#define IRQ_SPI0_ERROR_POS	20
#define IRQ_UART0_ERROR_POS	24
#define IRQ_RTC_POS		28
#define IRQ_PPI_POS		0
#define IRQ_SPORT0_RX_POS	4
#define IRQ_SPORT0_TX_POS	8
#define IRQ_SPORT1_RX_POS	12
#define IRQ_SPORT1_TX_POS	16
#define IRQ_SPI0_POS		20
#define IRQ_UART0_RX_POS	24
#define IRQ_UART0_TX_POS	28
#define IRQ_TIMER0_POS		0
#define IRQ_TIMER1_POS		4
#define IRQ_TIMER2_POS		8
#define IRQ_PORTF_INTA_POS	12
#define IRQ_PORTF_INTB_POS	16
#define IRQ_MEM0_DMA0_POS	20
#define IRQ_MEM0_DMA1_POS	24
#define IRQ_WATCH_POS		28
#define IRQ_DMA1_ERROR_POS	0
#define IRQ_SPORT2_ERROR_POS	4
#define IRQ_SPORT3_ERROR_POS	8
#define IRQ_SPI1_ERROR_POS	16
#define IRQ_SPI2_ERROR_POS	20
#define IRQ_UART1_ERROR_POS	24
#define IRQ_UART2_ERROR_POS	28
#define IRQ_CAN_ERROR_POS	0
#define IRQ_SPORT2_RX_POS	4
#define IRQ_SPORT2_TX_POS	8
#define IRQ_SPORT3_RX_POS	12
#define IRQ_SPORT3_TX_POS	16
#define IRQ_SPI1_POS		28
#define IRQ_SPI2_POS		0
#define IRQ_UART1_RX_POS	4
#define IRQ_UART1_TX_POS	8
#define IRQ_UART2_RX_POS	12
#define IRQ_UART2_TX_POS	16
#define IRQ_TWI0_POS		20
#define IRQ_TWI1_POS		24
#define IRQ_CAN_RX_POS		28
#define IRQ_CAN_TX_POS		0
#define IRQ_MEM1_DMA0_POS	4
#define IRQ_MEM1_DMA1_POS	8
