#define __ASM_ARCH_24A0_IRQS_H __FILE__
#define IRQ_EINT0t2	S3C2410_IRQ(0)
#define IRQ_EINT0	IRQ_EINT0t2
#define IRQ_EINT3t6	S3C2410_IRQ(1)
#define IRQ_EINT7t10	S3C2410_IRQ(2)
#define IRQ_EINT11t14	S3C2410_IRQ(3)
#define IRQ_EINT15t18	S3C2410_IRQ(4)
#define IRQ_TICK	S3C2410_IRQ(5)
#define IRQ_DCTQ	S3C2410_IRQ(6)
#define IRQ_MC		S3C2410_IRQ(7)
#define IRQ_ME		S3C2410_IRQ(8)
#define IRQ_KEYPAD	S3C2410_IRQ(9)
#define IRQ_TIMER0	S3C2410_IRQ(10)
#define IRQ_TIMER1	S3C2410_IRQ(11)
#define IRQ_TIMER2	S3C2410_IRQ(12)
#define IRQ_TIMER3_4	S3C2410_IRQ(13)
#define IRQ_OS_TIMER	IRQ_TIMER3_4
#define IRQ_LCD		S3C2410_IRQ(14)
#define IRQ_CAM_C	S3C2410_IRQ(15)
#define IRQ_WDT_BATFLT	S3C2410_IRQ(16)
#define IRQ_UART0	S3C2410_IRQ(17)
#define IRQ_CAM_P	S3C2410_IRQ(18)
#define IRQ_MODEM	S3C2410_IRQ(19)
#define IRQ_DMA		S3C2410_IRQ(20)
#define IRQ_SDI		S3C2410_IRQ(21)
#define IRQ_SPI0	S3C2410_IRQ(22)
#define IRQ_UART1	S3C2410_IRQ(23)
#define IRQ_AC97_NFLASH	S3C2410_IRQ(24)
#define IRQ_USBD	S3C2410_IRQ(25)
#define IRQ_USBH	S3C2410_IRQ(26)
#define IRQ_IIC		S3C2410_IRQ(27)
#define IRQ_IRDA_MSTICK	S3C2410_IRQ(28)
#define IRQ_VLX_SPI1	S3C2410_IRQ(29)
#define IRQ_RTC		S3C2410_IRQ(30)
#define IRQ_ADC_PEN     S3C2410_IRQ(31)
#define IRQ_EINT00	S3C2410_IRQ(32)
#define IRQ_EINT1	S3C2410_IRQ(33)
#define IRQ_EINT2	S3C2410_IRQ(34)
#define IRQ_EINT3	S3C2410_IRQ(35)
#define IRQ_EINT4	S3C2410_IRQ(36)
#define IRQ_EINT5	S3C2410_IRQ(37)
#define IRQ_EINT6	S3C2410_IRQ(38)
#define IRQ_EINT7	S3C2410_IRQ(39)
#define IRQ_EINT8	S3C2410_IRQ(40)
#define IRQ_EINT9	S3C2410_IRQ(41)
#define IRQ_EINT10	S3C2410_IRQ(42)
#define IRQ_EINT11	S3C2410_IRQ(43)
#define IRQ_EINT12	S3C2410_IRQ(44)
#define IRQ_EINT13	S3C2410_IRQ(45)
#define IRQ_EINT14	S3C2410_IRQ(46)
#define IRQ_EINT15	S3C2410_IRQ(47)
#define IRQ_EINT16	S3C2410_IRQ(48)
#define IRQ_EINT17	S3C2410_IRQ(49)
#define IRQ_EINT18	S3C2410_IRQ(50)
#define IRQ_EINT_BIT(x) ((x) - IRQ_EINT00)
#define IRQ_S3CUART_RX0		S3C2410_IRQ(51)
#define IRQ_S3CUART_TX0		S3C2410_IRQ(52)
#define IRQ_S3CUART_ERR0	S3C2410_IRQ(53)
#define IRQ_S3CUART_RX1		S3C2410_IRQ(54)
#define IRQ_S3CUART_TX1		S3C2410_IRQ(55)
#define IRQ_S3CUART_ERR1	S3C2410_IRQ(56)
#define IRQ_S3CUART_RX2		(0x0)
#define IRQ_S3CUART_TX2		(0x0)
#define IRQ_S3CUART_ERR2	(0x0)
#define IRQ_IRDA	S3C2410_IRQ(57)
#define IRQ_MSTICK	S3C2410_IRQ(58)
#define IRQ_RESERVED0	S3C2410_IRQ(59)
#define IRQ_RESERVED1	S3C2410_IRQ(60)
#define IRQ_RESERVED2	S3C2410_IRQ(61)
#define IRQ_TIMER3	S3C2410_IRQ(62)
#define IRQ_TIMER4	S3C2410_IRQ(63)
#define IRQ_WDT		S3C2410_IRQ(64)
#define IRQ_BATFLT	S3C2410_IRQ(65)
#define IRQ_POST	S3C2410_IRQ(66)
#define IRQ_DISP_FIFO	S3C2410_IRQ(67)
#define IRQ_PENUP	S3C2410_IRQ(68)
#define IRQ_PENDN	S3C2410_IRQ(69)
#define IRQ_ADC		S3C2410_IRQ(70)
#define IRQ_DISP_FRAME	S3C2410_IRQ(71)
#define IRQ_NFLASH	S3C2410_IRQ(72)
#define IRQ_AC97	S3C2410_IRQ(73)
#define IRQ_SPI1	S3C2410_IRQ(74)
#define IRQ_VLX		S3C2410_IRQ(75)
#define IRQ_DMA0	S3C2410_IRQ(76)
#define IRQ_DMA1	S3C2410_IRQ(77)
#define IRQ_DMA2	S3C2410_IRQ(78)
#define IRQ_DMA3	S3C2410_IRQ(79)
#define IRQ_TC		(0x0)
#define NR_IRQS		(IRQ_DMA3+1)
