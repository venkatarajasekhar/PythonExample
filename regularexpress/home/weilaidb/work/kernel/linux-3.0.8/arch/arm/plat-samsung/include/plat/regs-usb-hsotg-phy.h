#define __PLAT_S3C64XX_REGS_USB_HSOTG_PHY_H __FILE__
#define S3C_HSOTG_PHYREG(x)	((x) + S3C_VA_USB_HSPHY)
#define S3C_PHYPWR				S3C_HSOTG_PHYREG(0x00)
#define SRC_PHYPWR_OTG_DISABLE			(1 << 4)
#define SRC_PHYPWR_ANALOG_POWERDOWN		(1 << 3)
#define SRC_PHYPWR_FORCE_SUSPEND		(1 << 1)
#define S3C_PHYCLK				S3C_HSOTG_PHYREG(0x04)
#define S3C_PHYCLK_MODE_USB11			(1 << 6)
#define S3C_PHYCLK_EXT_OSC			(1 << 5)
#define S3C_PHYCLK_CLK_FORCE			(1 << 4)
#define S3C_PHYCLK_ID_PULL			(1 << 2)
#define S3C_PHYCLK_CLKSEL_MASK			(0x3 << 0)
#define S3C_PHYCLK_CLKSEL_SHIFT			(0)
#define S3C_PHYCLK_CLKSEL_48M			(0x0 << 0)
#define S3C_PHYCLK_CLKSEL_12M			(0x2 << 0)
#define S3C_PHYCLK_CLKSEL_24M			(0x3 << 0)
#define S3C_RSTCON				S3C_HSOTG_PHYREG(0x08)
#define S3C_RSTCON_PHYCLK			(1 << 2)
#define S3C_RSTCON_HCLK				(1 << 2)
#define S3C_RSTCON_PHY				(1 << 0)
#define S3C_PHYTUNE				S3C_HSOTG_PHYREG(0x20)
