#define __ASM_ARCH_24A0_REGS_CLOCK_H __FILE__
#define S3C24A0_MPLLCON		S3C2410_CLKREG(0x10)
#define S3C24A0_UPLLCON		S3C2410_CLKREG(0x14)
#define S3C24A0_CLKCON		S3C2410_CLKREG(0x20)
#define S3C24A0_CLKSRC		S3C2410_CLKREG(0x24)
#define S3C24A0_CLKDIVN		S3C2410_CLKREG(0x28)
#define S3C24A0_CLKCON_VLX	(1<<29)
#define S3C24A0_CLKCON_VPOST	(1<<28)
#define S3C24A0_CLKCON_WDT	(1<<27)
#define S3C24A0_CLKCON_MPEGDCTQ	(1<<26)
#define S3C24A0_CLKCON_VPOSTIF	(1<<25)
#define S3C24A0_CLKCON_MPEG4IF	(1<<24)
#define S3C24A0_CLKCON_CAM_UPLL	(1<<23)
#define S3C24A0_CLKCON_LCDC	(1<<22)
#define S3C24A0_CLKCON_CAM_HCLK	(1<<21)
#define S3C24A0_CLKCON_MPEG4	(1<<20)
#define S3C24A0_CLKCON_KEYPAD	(1<<19)
#define S3C24A0_CLKCON_ADC	(1<<18)
#define S3C24A0_CLKCON_SDI	(1<<17)
#define S3C24A0_CLKCON_MS	(1<<16)
#define S3C24A0_CLKCON_USBD	(1<<15)
#define S3C24A0_CLKCON_GPIO	(1<<14)
#define S3C24A0_CLKCON_IIS	(1<<13)
#define S3C24A0_CLKCON_IIC	(1<<12)
#define S3C24A0_CLKCON_SPI	(1<<11)
#define S3C24A0_CLKCON_UART1	(1<<10)
#define S3C24A0_CLKCON_UART0	(1<<9)
#define S3C24A0_CLKCON_PWMT	(1<<8)
#define S3C24A0_CLKCON_USBH	(1<<7)
#define S3C24A0_CLKCON_AC97	(1<<6)
#define S3C24A0_CLKCON_IrDA	(1<<4)
#define S3C24A0_CLKCON_IDLE	(1<<2)
#define S3C24A0_CLKCON_MON	(1<<1)
#define S3C24A0_CLKCON_STOP	(1<<0)
#define S3C24A0_CLKSRC_OSC	(1<<8)
#define S3C24A0_CLKSRC_UPLL	(1<<7)
#define S3C24A0_CLKSRC_MPLL	(1<<5)
#define S3C24A0_CLKSRC_EXT	(1<<4)
#define S3C2410_MPLLCON		S3C24A0_MPLLCON
#define S3C2410_UPLLCON		S3C24A0_UPLLCON
#define S3C2410_CLKCON		S3C24A0_CLKCON
#define S3C2410_CLKSLOW		S3C24A0_CLKSRC
#define S3C2410_CLKDIVN		S3C24A0_CLKDIVN
#define S3C2410_CLKCON_IDLE	S3C24A0_CLKCON_IDLE
#define S3C2410_CLKCON_POWER	S3C24A0_CLKCON_STOP
#define S3C2410_CLKCON_LCDC	S3C24A0_CLKCON_LCDC
#define S3C2410_CLKCON_USBH	S3C24A0_CLKCON_USBH
#define S3C2410_CLKCON_USBD	S3C24A0_CLKCON_USBD
#define S3C2410_CLKCON_PWMT	S3C24A0_CLKCON_PWMT
#define S3C2410_CLKCON_SDI	S3C24A0_CLKCON_SDI
#define S3C2410_CLKCON_UART0	S3C24A0_CLKCON_UART0
#define S3C2410_CLKCON_UART1	S3C24A0_CLKCON_UART1
#define S3C2410_CLKCON_GPIO	S3C24A0_CLKCON_GPIO
#define S3C2410_CLKCON_ADC	S3C24A0_CLKCON_ADC
#define S3C2410_CLKCON_IIC	S3C24A0_CLKCON_IIC
#define S3C2410_CLKCON_IIS	S3C24A0_CLKCON_IIS
#define S3C2410_CLKCON_SPI	S3C24A0_CLKCON_SPI
#define S3C2410_CLKSLOW_UCLK_OFF	S3C24A0_CLKSRC_UPLL
#define S3C2410_CLKSLOW_MPLL_OFF	S3C24A0_CLKSRC_MPLL
#define S3C2410_CLKSLOW_SLOW		(0xFF)
#define S3C2410_CLKSLOW_GET_SLOWVAL(x)	(0x1)
