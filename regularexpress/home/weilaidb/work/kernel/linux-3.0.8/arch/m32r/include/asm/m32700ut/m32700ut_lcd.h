#define _M32700UT_M32700UT_LCD_H
#define M32700UT_LCD_BASE	(0x10000000)
#define M32700UT_LCD_BASE	(0x10000000 + NONCACHE_OFFSET)
#define M32700UT_LCD_IRQ_BAT_INT	(M32700UT_LCD_PLD_IRQ_BASE + 1)
#define M32700UT_LCD_IRQ_USB_INT1	(M32700UT_LCD_PLD_IRQ_BASE + 2)
#define M32700UT_LCD_IRQ_AUDT0		(M32700UT_LCD_PLD_IRQ_BASE + 3)
#define M32700UT_LCD_IRQ_AUDT2		(M32700UT_LCD_PLD_IRQ_BASE + 4)
#define M32700UT_LCD_IRQ_BATSIO_RCV	(M32700UT_LCD_PLD_IRQ_BASE + 16)
#define M32700UT_LCD_IRQ_BATSIO_SND	(M32700UT_LCD_PLD_IRQ_BASE + 17)
#define M32700UT_LCD_IRQ_ASNDSIO_RCV	(M32700UT_LCD_PLD_IRQ_BASE + 18)
#define M32700UT_LCD_IRQ_ASNDSIO_SND	(M32700UT_LCD_PLD_IRQ_BASE + 19)
#define M32700UT_LCD_IRQ_ACNLSIO_SND	(M32700UT_LCD_PLD_IRQ_BASE + 21)
#define M32700UT_LCD_ICUISTS	__reg16(M32700UT_LCD_BASE + 0x300002)
#define M32700UT_LCD_ICUISTS_VECB_MASK	(0xf000)
#define M32700UT_LCD_VECB(x)	((x) & M32700UT_LCD_ICUISTS_VECB_MASK)
#define M32700UT_LCD_ICUISTS_ISN_MASK	(0x07c0)
#define M32700UT_LCD_ICUISTS_ISN(x)	((x) & M32700UT_LCD_ICUISTS_ISN_MASK)
#define M32700UT_LCD_ICUIREQ0	__reg16(M32700UT_LCD_BASE + 0x300004)
#define M32700UT_LCD_ICUIREQ1	__reg16(M32700UT_LCD_BASE + 0x300006)
#define M32700UT_LCD_ICUCR1	__reg16(M32700UT_LCD_BASE + 0x300020)
#define M32700UT_LCD_ICUCR2	__reg16(M32700UT_LCD_BASE + 0x300022)
#define M32700UT_LCD_ICUCR3	__reg16(M32700UT_LCD_BASE + 0x300024)
#define M32700UT_LCD_ICUCR4	__reg16(M32700UT_LCD_BASE + 0x300026)
#define M32700UT_LCD_ICUCR16	__reg16(M32700UT_LCD_BASE + 0x300030)
#define M32700UT_LCD_ICUCR17	__reg16(M32700UT_LCD_BASE + 0x300032)
#define M32700UT_LCD_ICUCR18	__reg16(M32700UT_LCD_BASE + 0x300034)
#define M32700UT_LCD_ICUCR19	__reg16(M32700UT_LCD_BASE + 0x300036)
#define M32700UT_LCD_ICUCR21	__reg16(M32700UT_LCD_BASE + 0x30003a)