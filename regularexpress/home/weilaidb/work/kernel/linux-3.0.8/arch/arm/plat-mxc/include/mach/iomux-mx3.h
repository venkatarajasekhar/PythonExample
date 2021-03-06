#define __MACH_IOMUX_MX3_H__
#define	IOMUX_OCONFIG_GPIO (0 << 4)
#define	IOMUX_OCONFIG_FUNC (1 << 4)
#define	IOMUX_OCONFIG_ALT1 (2 << 4)
#define	IOMUX_OCONFIG_ALT2 (3 << 4)
#define	IOMUX_OCONFIG_ALT3 (4 << 4)
#define	IOMUX_OCONFIG_ALT4 (5 << 4)
#define	IOMUX_OCONFIG_ALT5 (6 << 4)
#define	IOMUX_OCONFIG_ALT6 (7 << 4)
#define	IOMUX_ICONFIG_NONE  0
#define	IOMUX_ICONFIG_GPIO  1
#define	IOMUX_ICONFIG_FUNC  2
#define	IOMUX_ICONFIG_ALT1  4
#define	IOMUX_ICONFIG_ALT2  8
#define IOMUX_CONFIG_GPIO (IOMUX_OCONFIG_GPIO | IOMUX_ICONFIG_GPIO)
#define IOMUX_CONFIG_FUNC (IOMUX_OCONFIG_FUNC | IOMUX_ICONFIG_FUNC)
#define IOMUX_CONFIG_ALT1 (IOMUX_OCONFIG_ALT1 | IOMUX_ICONFIG_ALT1)
#define IOMUX_CONFIG_ALT2 (IOMUX_OCONFIG_ALT2 | IOMUX_ICONFIG_ALT2)
enum iomux_pad_config ;
enum iomux_gp_func ;
int mxc_iomux_alloc_pin(unsigned int pin, const char *label);
int mxc_iomux_setup_multiple_pins(const unsigned int *pin_list, unsigned count,
const char *label);
void mxc_iomux_release_pin(unsigned int pin);
void mxc_iomux_release_multiple_pins(const unsigned int *pin_list, int count);
void mxc_iomux_set_gpr(enum iomux_gp_func, bool en);
int mxc_iomux_mode(unsigned int pin_mode);
#define IOMUX_PADNUM_MASK	0x1ff
#define IOMUX_GPIONUM_SHIFT	9
#define IOMUX_GPIONUM_MASK	(0xff << IOMUX_GPIONUM_SHIFT)
#define IOMUX_MODE_SHIFT	17
#define IOMUX_MODE_MASK	(0xff << IOMUX_MODE_SHIFT)
#define IOMUX_PIN(gpionum, padnum) \
(((gpionum << IOMUX_GPIONUM_SHIFT) & IOMUX_GPIONUM_MASK) | \
(padnum & IOMUX_PADNUM_MASK))
#define IOMUX_MODE(pin, mode) (pin | mode << IOMUX_MODE_SHIFT)
#define IOMUX_TO_GPIO(iomux_pin) \
((iomux_pin & IOMUX_GPIONUM_MASK) >> IOMUX_GPIONUM_SHIFT)
#define IOMUX_TO_IRQ(iomux_pin) \
(((iomux_pin & IOMUX_GPIONUM_MASK) >> IOMUX_GPIONUM_SHIFT) + \
MXC_GPIO_IRQ_START)
enum iomux_pins ;
#define PIN_MAX 327
#define NB_PORTS 12
#define MX31_PIN_CSPI3_MOSI__RXD3	IOMUX_MODE(MX31_PIN_CSPI3_MOSI, IOMUX_CONFIG_ALT1)
#define MX31_PIN_CSPI3_MISO__TXD3	IOMUX_MODE(MX31_PIN_CSPI3_MISO, IOMUX_CONFIG_ALT1)
#define MX31_PIN_CSPI3_SCLK__RTS3	IOMUX_MODE(MX31_PIN_CSPI3_SCLK, IOMUX_CONFIG_ALT1)
#define MX31_PIN_CSPI3_SPI_RDY__CTS3	IOMUX_MODE(MX31_PIN_CSPI3_SPI_RDY, IOMUX_CONFIG_ALT1)
#define MX31_PIN_CTS1__CTS1		IOMUX_MODE(MX31_PIN_CTS1, IOMUX_CONFIG_FUNC)
#define MX31_PIN_RTS1__RTS1		IOMUX_MODE(MX31_PIN_RTS1, IOMUX_CONFIG_FUNC)
#define MX31_PIN_TXD1__TXD1		IOMUX_MODE(MX31_PIN_TXD1, IOMUX_CONFIG_FUNC)
#define MX31_PIN_RXD1__RXD1		IOMUX_MODE(MX31_PIN_RXD1, IOMUX_CONFIG_FUNC)
#define MX31_PIN_DCD_DCE1__DCD_DCE1	IOMUX_MODE(MX31_PIN_DCD_DCE1, IOMUX_CONFIG_FUNC)
#define MX31_PIN_RI_DCE1__RI_DCE1	IOMUX_MODE(MX31_PIN_RI_DCE1, IOMUX_CONFIG_FUNC)
#define MX31_PIN_DSR_DCE1__DSR_DCE1	IOMUX_MODE(MX31_PIN_DSR_DCE1, IOMUX_CONFIG_FUNC)
#define MX31_PIN_DTR_DCE1__DTR_DCE1	IOMUX_MODE(MX31_PIN_DTR_DCE1, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CTS2__CTS2		IOMUX_MODE(MX31_PIN_CTS2, IOMUX_CONFIG_FUNC)
#define MX31_PIN_RTS2__RTS2		IOMUX_MODE(MX31_PIN_RTS2, IOMUX_CONFIG_FUNC)
#define MX31_PIN_TXD2__TXD2		IOMUX_MODE(MX31_PIN_TXD2, IOMUX_CONFIG_FUNC)
#define MX31_PIN_RXD2__RXD2		IOMUX_MODE(MX31_PIN_RXD2, IOMUX_CONFIG_FUNC)
#define MX31_PIN_DCD_DTE1__DCD_DTE2	IOMUX_MODE(MX31_PIN_DCD_DTE1, IOMUX_CONFIG_ALT1)
#define MX31_PIN_RI_DTE1__RI_DTE2	IOMUX_MODE(MX31_PIN_RI_DTE1, IOMUX_CONFIG_ALT1)
#define MX31_PIN_DSR_DTE1__DSR_DTE2	IOMUX_MODE(MX31_PIN_DSR_DTE1, IOMUX_CONFIG_ALT1)
#define MX31_PIN_DTR_DTE1__DTR_DTE2	IOMUX_MODE(MX31_PIN_DTR_DTE1, IOMUX_OCONFIG_ALT3 | IOMUX_ICONFIG_NONE)
#define MX31_PIN_PC_RST__CTS5		IOMUX_MODE(MX31_PIN_PC_RST, IOMUX_CONFIG_ALT2)
#define MX31_PIN_PC_VS2__RTS5		IOMUX_MODE(MX31_PIN_PC_VS2, IOMUX_CONFIG_ALT2)
#define MX31_PIN_PC_BVD2__TXD5		IOMUX_MODE(MX31_PIN_PC_BVD2, IOMUX_CONFIG_ALT2)
#define MX31_PIN_PC_BVD1__RXD5		IOMUX_MODE(MX31_PIN_PC_BVD1, IOMUX_CONFIG_ALT2)
#define MX31_PIN_CSPI1_MOSI__MOSI	IOMUX_MODE(MX31_PIN_CSPI1_MOSI, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSPI1_MISO__MISO	IOMUX_MODE(MX31_PIN_CSPI1_MISO, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSPI1_SCLK__SCLK	IOMUX_MODE(MX31_PIN_CSPI1_SCLK, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSPI1_SPI_RDY__SPI_RDY	IOMUX_MODE(MX31_PIN_CSPI1_SPI_RDY, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSPI1_SS0__SS0		IOMUX_MODE(MX31_PIN_CSPI1_SS0, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSPI1_SS1__SS1		IOMUX_MODE(MX31_PIN_CSPI1_SS1, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSPI1_SS2__SS2		IOMUX_MODE(MX31_PIN_CSPI1_SS2, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSPI2_MOSI__MOSI	IOMUX_MODE(MX31_PIN_CSPI2_MOSI, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSPI2_MOSI__SCL	IOMUX_MODE(MX31_PIN_CSPI2_MOSI, IOMUX_CONFIG_ALT1)
#define MX31_PIN_CSPI2_MISO__MISO	IOMUX_MODE(MX31_PIN_CSPI2_MISO, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSPI2_MISO__SDA	IOMUX_MODE(MX31_PIN_CSPI2_MISO, IOMUX_CONFIG_ALT1)
#define MX31_PIN_CSPI2_SCLK__SCLK	IOMUX_MODE(MX31_PIN_CSPI2_SCLK, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSPI2_SPI_RDY__SPI_RDY	IOMUX_MODE(MX31_PIN_CSPI2_SPI_RDY, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSPI2_SS0__SS0		IOMUX_MODE(MX31_PIN_CSPI2_SS0, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSPI2_SS1__SS1		IOMUX_MODE(MX31_PIN_CSPI2_SS1, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSPI2_SS2__SS2		IOMUX_MODE(MX31_PIN_CSPI2_SS2, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSPI3_MOSI__MOSI	IOMUX_MODE(MX31_PIN_CSPI3_MOSI, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSPI3_MISO__MISO	IOMUX_MODE(MX31_PIN_CSPI3_MISO, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSPI3_SCLK__SCLK	IOMUX_MODE(MX31_PIN_CSPI3_SCLK, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSPI3_SPI_RDY__SPI_RDY	IOMUX_MODE(MX31_PIN_CSPI3_SPI_RDY, IOMUX_CONFIG_FUNC)
#define MX31_PIN_BATT_LINE__OWIRE	IOMUX_MODE(MX31_PIN_BATT_LINE, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CS4__CS4		IOMUX_MODE(MX31_PIN_CS4, IOMUX_CONFIG_FUNC)
#define MX31_PIN_SD1_DATA3__SD1_DATA3	IOMUX_MODE(MX31_PIN_SD1_DATA3, IOMUX_CONFIG_FUNC)
#define MX31_PIN_SD1_DATA2__SD1_DATA2	IOMUX_MODE(MX31_PIN_SD1_DATA2, IOMUX_CONFIG_FUNC)
#define MX31_PIN_SD1_DATA1__SD1_DATA1	IOMUX_MODE(MX31_PIN_SD1_DATA1, IOMUX_CONFIG_FUNC)
#define MX31_PIN_SD1_DATA0__SD1_DATA0	IOMUX_MODE(MX31_PIN_SD1_DATA0, IOMUX_CONFIG_FUNC)
#define MX31_PIN_SD1_CLK__SD1_CLK	IOMUX_MODE(MX31_PIN_SD1_CLK, IOMUX_CONFIG_FUNC)
#define MX31_PIN_SD1_CMD__SD1_CMD	IOMUX_MODE(MX31_PIN_SD1_CMD, IOMUX_CONFIG_FUNC)
#define MX31_PIN_ATA_CS0__GPIO3_26	IOMUX_MODE(MX31_PIN_ATA_CS0, IOMUX_CONFIG_GPIO)
#define MX31_PIN_ATA_CS1__GPIO3_27	IOMUX_MODE(MX31_PIN_ATA_CS1, IOMUX_CONFIG_GPIO)
#define MX31_PIN_PC_PWRON__SD2_DATA3	IOMUX_MODE(MX31_PIN_PC_PWRON, IOMUX_CONFIG_ALT1)
#define MX31_PIN_PC_VS1__SD2_DATA2	IOMUX_MODE(MX31_PIN_PC_VS1, IOMUX_CONFIG_ALT1)
#define MX31_PIN_PC_READY__SD2_DATA1	IOMUX_MODE(MX31_PIN_PC_READY, IOMUX_CONFIG_ALT1)
#define MX31_PIN_PC_WAIT_B__SD2_DATA0	IOMUX_MODE(MX31_PIN_PC_WAIT_B, IOMUX_CONFIG_ALT1)
#define MX31_PIN_PC_CD2_B__SD2_CLK	IOMUX_MODE(MX31_PIN_PC_CD2_B, IOMUX_CONFIG_ALT1)
#define MX31_PIN_PC_CD1_B__SD2_CMD	IOMUX_MODE(MX31_PIN_PC_CD1_B, IOMUX_CONFIG_ALT1)
#define MX31_PIN_ATA_DIOR__GPIO3_28	IOMUX_MODE(MX31_PIN_ATA_DIOR, IOMUX_CONFIG_GPIO)
#define MX31_PIN_ATA_DIOW__GPIO3_29	IOMUX_MODE(MX31_PIN_ATA_DIOW, IOMUX_CONFIG_GPIO)
#define MX31_PIN_LD0__LD0		IOMUX_MODE(MX31_PIN_LD0, IOMUX_CONFIG_FUNC)
#define MX31_PIN_LD1__LD1		IOMUX_MODE(MX31_PIN_LD1, IOMUX_CONFIG_FUNC)
#define MX31_PIN_LD2__LD2		IOMUX_MODE(MX31_PIN_LD2, IOMUX_CONFIG_FUNC)
#define MX31_PIN_LD3__LD3		IOMUX_MODE(MX31_PIN_LD3, IOMUX_CONFIG_FUNC)
#define MX31_PIN_LD4__LD4		IOMUX_MODE(MX31_PIN_LD4, IOMUX_CONFIG_FUNC)
#define MX31_PIN_LD5__LD5		IOMUX_MODE(MX31_PIN_LD5, IOMUX_CONFIG_FUNC)
#define MX31_PIN_LD6__LD6		IOMUX_MODE(MX31_PIN_LD6, IOMUX_CONFIG_FUNC)
#define MX31_PIN_LD7__LD7		IOMUX_MODE(MX31_PIN_LD7, IOMUX_CONFIG_FUNC)
#define MX31_PIN_LD8__LD8		IOMUX_MODE(MX31_PIN_LD8, IOMUX_CONFIG_FUNC)
#define MX31_PIN_LD9__LD9		IOMUX_MODE(MX31_PIN_LD9, IOMUX_CONFIG_FUNC)
#define MX31_PIN_LD10__LD10		IOMUX_MODE(MX31_PIN_LD10, IOMUX_CONFIG_FUNC)
#define MX31_PIN_LD11__LD11		IOMUX_MODE(MX31_PIN_LD11, IOMUX_CONFIG_FUNC)
#define MX31_PIN_LD12__LD12		IOMUX_MODE(MX31_PIN_LD12, IOMUX_CONFIG_FUNC)
#define MX31_PIN_LD13__LD13		IOMUX_MODE(MX31_PIN_LD13, IOMUX_CONFIG_FUNC)
#define MX31_PIN_LD14__LD14		IOMUX_MODE(MX31_PIN_LD14, IOMUX_CONFIG_FUNC)
#define MX31_PIN_LD15__LD15		IOMUX_MODE(MX31_PIN_LD15, IOMUX_CONFIG_FUNC)
#define MX31_PIN_LD16__LD16		IOMUX_MODE(MX31_PIN_LD16, IOMUX_CONFIG_FUNC)
#define MX31_PIN_LD17__LD17		IOMUX_MODE(MX31_PIN_LD17, IOMUX_CONFIG_FUNC)
#define MX31_PIN_VSYNC3__VSYNC3		IOMUX_MODE(MX31_PIN_VSYNC3, IOMUX_CONFIG_FUNC)
#define MX31_PIN_HSYNC__HSYNC		IOMUX_MODE(MX31_PIN_HSYNC, IOMUX_CONFIG_FUNC)
#define MX31_PIN_FPSHIFT__FPSHIFT	IOMUX_MODE(MX31_PIN_FPSHIFT, IOMUX_CONFIG_FUNC)
#define MX31_PIN_DRDY0__DRDY0		IOMUX_MODE(MX31_PIN_DRDY0, IOMUX_CONFIG_FUNC)
#define MX31_PIN_D3_REV__D3_REV		IOMUX_MODE(MX31_PIN_D3_REV, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CONTRAST__CONTRAST	IOMUX_MODE(MX31_PIN_CONTRAST, IOMUX_CONFIG_FUNC)
#define MX31_PIN_D3_SPL__D3_SPL		IOMUX_MODE(MX31_PIN_D3_SPL, IOMUX_CONFIG_FUNC)
#define MX31_PIN_D3_CLS__D3_CLS		IOMUX_MODE(MX31_PIN_D3_CLS, IOMUX_CONFIG_FUNC)
#define MX31_PIN_LCS0__GPI03_23		IOMUX_MODE(MX31_PIN_LCS0, IOMUX_CONFIG_GPIO)
#define MX31_PIN_GPIO1_1__GPIO          IOMUX_MODE(MX31_PIN_GPIO1_1, IOMUX_CONFIG_GPIO)
#define MX31_PIN_I2C_CLK__SCL		IOMUX_MODE(MX31_PIN_I2C_CLK, IOMUX_CONFIG_FUNC)
#define MX31_PIN_I2C_DAT__SDA		IOMUX_MODE(MX31_PIN_I2C_DAT, IOMUX_CONFIG_FUNC)
#define MX31_PIN_DCD_DTE1__I2C2_SDA	IOMUX_MODE(MX31_PIN_DCD_DTE1, IOMUX_CONFIG_ALT2)
#define MX31_PIN_RI_DTE1__I2C2_SCL	IOMUX_MODE(MX31_PIN_RI_DTE1, IOMUX_CONFIG_ALT2)
#define MX31_PIN_CSPI2_SS2__I2C3_SDA	IOMUX_MODE(MX31_PIN_CSPI2_SS2, IOMUX_CONFIG_ALT1)
#define MX31_PIN_CSPI2_SCLK__I2C3_SCL	IOMUX_MODE(MX31_PIN_CSPI2_SCLK, IOMUX_CONFIG_ALT1)
#define MX31_PIN_CSI_D4__CSI_D4		IOMUX_MODE(MX31_PIN_CSI_D4, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D5__CSI_D5		IOMUX_MODE(MX31_PIN_CSI_D5, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D6__CSI_D6		IOMUX_MODE(MX31_PIN_CSI_D6, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D7__CSI_D7		IOMUX_MODE(MX31_PIN_CSI_D7, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D8__CSI_D8		IOMUX_MODE(MX31_PIN_CSI_D8, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D9__CSI_D9		IOMUX_MODE(MX31_PIN_CSI_D9, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D10__CSI_D10	IOMUX_MODE(MX31_PIN_CSI_D10, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D11__CSI_D11	IOMUX_MODE(MX31_PIN_CSI_D11, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D12__CSI_D12	IOMUX_MODE(MX31_PIN_CSI_D12, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D13__CSI_D13	IOMUX_MODE(MX31_PIN_CSI_D13, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D14__CSI_D14	IOMUX_MODE(MX31_PIN_CSI_D14, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D15__CSI_D15	IOMUX_MODE(MX31_PIN_CSI_D15, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_HSYNC__CSI_HSYNC	IOMUX_MODE(MX31_PIN_CSI_HSYNC, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_MCLK__CSI_MCLK	IOMUX_MODE(MX31_PIN_CSI_MCLK, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_PIXCLK__CSI_PIXCLK	IOMUX_MODE(MX31_PIN_CSI_PIXCLK, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_VSYNC__CSI_VSYNC	IOMUX_MODE(MX31_PIN_CSI_VSYNC, IOMUX_CONFIG_FUNC)
#define MX31_PIN_GPIO3_0__GPIO3_0	IOMUX_MODE(MX31_PIN_GPIO3_0, IOMUX_CONFIG_GPIO)
#define MX31_PIN_GPIO3_1__GPIO3_1	IOMUX_MODE(MX31_PIN_GPIO3_1, IOMUX_CONFIG_GPIO)
#define MX31_PIN_TXD2__GPIO1_28		IOMUX_MODE(MX31_PIN_TXD2, IOMUX_CONFIG_GPIO)
#define MX31_PIN_CSI_D4__GPIO3_4	IOMUX_MODE(MX31_PIN_CSI_D4, IOMUX_CONFIG_GPIO)
#define MX31_PIN_CSI_D5__GPIO3_5	IOMUX_MODE(MX31_PIN_CSI_D5, IOMUX_CONFIG_GPIO)
#define MX31_PIN_USBOTG_DATA0__USBOTG_DATA0	IOMUX_MODE(MX31_PIN_USBOTG_DATA0, IOMUX_CONFIG_FUNC)
#define MX31_PIN_USBOTG_DATA1__USBOTG_DATA1	IOMUX_MODE(MX31_PIN_USBOTG_DATA1, IOMUX_CONFIG_FUNC)
#define MX31_PIN_USBOTG_DATA2__USBOTG_DATA2	IOMUX_MODE(MX31_PIN_USBOTG_DATA2, IOMUX_CONFIG_FUNC)
#define MX31_PIN_USBOTG_DATA3__USBOTG_DATA3	IOMUX_MODE(MX31_PIN_USBOTG_DATA3, IOMUX_CONFIG_FUNC)
#define MX31_PIN_USBOTG_DATA4__USBOTG_DATA4	IOMUX_MODE(MX31_PIN_USBOTG_DATA4, IOMUX_CONFIG_FUNC)
#define MX31_PIN_USBOTG_DATA5__USBOTG_DATA5	IOMUX_MODE(MX31_PIN_USBOTG_DATA5, IOMUX_CONFIG_FUNC)
#define MX31_PIN_USBOTG_DATA6__USBOTG_DATA6	IOMUX_MODE(MX31_PIN_USBOTG_DATA6, IOMUX_CONFIG_FUNC)
#define MX31_PIN_USBOTG_DATA7__USBOTG_DATA7	IOMUX_MODE(MX31_PIN_USBOTG_DATA7, IOMUX_CONFIG_FUNC)
#define MX31_PIN_USBOTG_CLK__USBOTG_CLK		IOMUX_MODE(MX31_PIN_USBOTG_CLK, IOMUX_CONFIG_FUNC)
#define MX31_PIN_USBOTG_DIR__USBOTG_DIR		IOMUX_MODE(MX31_PIN_USBOTG_DIR, IOMUX_CONFIG_FUNC)
#define MX31_PIN_USBOTG_NXT__USBOTG_NXT		IOMUX_MODE(MX31_PIN_USBOTG_NXT, IOMUX_CONFIG_FUNC)
#define MX31_PIN_USBOTG_STP__USBOTG_STP		IOMUX_MODE(MX31_PIN_USBOTG_STP, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSPI1_MOSI__USBH1_RXDM		IOMUX_MODE(MX31_PIN_CSPI1_MOSI, IOMUX_CONFIG_ALT1)
#define MX31_PIN_CSPI1_MISO__USBH1_RXDP		IOMUX_MODE(MX31_PIN_CSPI1_MISO, IOMUX_CONFIG_ALT1)
#define MX31_PIN_CSPI1_SS0__USBH1_TXDM		IOMUX_MODE(MX31_PIN_CSPI1_SS0, IOMUX_CONFIG_ALT1)
#define MX31_PIN_CSPI1_SS1__USBH1_TXDP		IOMUX_MODE(MX31_PIN_CSPI1_SS1, IOMUX_CONFIG_ALT1)
#define MX31_PIN_CSPI1_SS2__USBH1_RCV		IOMUX_MODE(MX31_PIN_CSPI1_SS2, IOMUX_CONFIG_ALT1)
#define MX31_PIN_CSPI1_SCLK__USBH1_OEB		IOMUX_MODE(MX31_PIN_CSPI1_SCLK, IOMUX_CONFIG_ALT1)
#define MX31_PIN_CSPI1_SPI_RDY__USBH1_FS	IOMUX_MODE(MX31_PIN_CSPI1_SPI_RDY, IOMUX_CONFIG_ALT1)
#define MX31_PIN_SFS6__USBH1_SUSPEND	IOMUX_MODE(MX31_PIN_SFS6, IOMUX_CONFIG_FUNC)
#define MX31_PIN_NFRE_B__GPIO1_11	IOMUX_MODE(MX31_PIN_NFRE_B, IOMUX_CONFIG_GPIO)
#define MX31_PIN_NFALE__GPIO1_12	IOMUX_MODE(MX31_PIN_NFALE, IOMUX_CONFIG_GPIO)
#define MX31_PIN_USBH2_DATA0__USBH2_DATA0	IOMUX_MODE(MX31_PIN_USBH2_DATA0, IOMUX_CONFIG_FUNC)
#define MX31_PIN_USBH2_DATA1__USBH2_DATA1	IOMUX_MODE(MX31_PIN_USBH2_DATA1, IOMUX_CONFIG_FUNC)
#define MX31_PIN_STXD3__USBH2_DATA2	IOMUX_MODE(MX31_PIN_STXD3, IOMUX_CONFIG_FUNC)
#define MX31_PIN_SRXD3__USBH2_DATA3	IOMUX_MODE(MX31_PIN_SRXD3, IOMUX_CONFIG_FUNC)
#define MX31_PIN_SCK3__USBH2_DATA4	IOMUX_MODE(MX31_PIN_SCK3, IOMUX_CONFIG_FUNC)
#define MX31_PIN_SFS3__USBH2_DATA5	IOMUX_MODE(MX31_PIN_SFS3, IOMUX_CONFIG_FUNC)
#define MX31_PIN_STXD6__USBH2_DATA6	IOMUX_MODE(MX31_PIN_STXD6, IOMUX_CONFIG_FUNC)
#define MX31_PIN_SRXD6__USBH2_DATA7	IOMUX_MODE(MX31_PIN_SRXD6, IOMUX_CONFIG_FUNC)
#define MX31_PIN_USBH2_CLK__USBH2_CLK		IOMUX_MODE(MX31_PIN_USBH2_CLK, IOMUX_CONFIG_FUNC)
#define MX31_PIN_USBH2_DIR__USBH2_DIR		IOMUX_MODE(MX31_PIN_USBH2_DIR, IOMUX_CONFIG_FUNC)
#define MX31_PIN_USBH2_NXT__USBH2_NXT		IOMUX_MODE(MX31_PIN_USBH2_NXT, IOMUX_CONFIG_FUNC)
#define MX31_PIN_USBH2_STP__USBH2_STP		IOMUX_MODE(MX31_PIN_USBH2_STP, IOMUX_CONFIG_FUNC)
#define MX31_PIN_SCK6__GPIO1_25		IOMUX_MODE(MX31_PIN_SCK6, IOMUX_CONFIG_GPIO)
#define MX31_PIN_USB_OC__GPIO1_30	IOMUX_MODE(MX31_PIN_USB_OC, IOMUX_CONFIG_GPIO)
#define MX31_PIN_I2C_DAT__I2C1_SDA	IOMUX_MODE(MX31_PIN_I2C_DAT, IOMUX_CONFIG_FUNC)
#define MX31_PIN_I2C_CLK__I2C1_SCL	IOMUX_MODE(MX31_PIN_I2C_CLK, IOMUX_CONFIG_FUNC)
#define MX31_PIN_DCD_DTE1__I2C2_SDA	IOMUX_MODE(MX31_PIN_DCD_DTE1, IOMUX_CONFIG_ALT2)
#define MX31_PIN_RI_DTE1__I2C2_SCL	IOMUX_MODE(MX31_PIN_RI_DTE1, IOMUX_CONFIG_ALT2)
#define MX31_PIN_ATA_CS0__GPIO3_26	IOMUX_MODE(MX31_PIN_ATA_CS0, IOMUX_CONFIG_GPIO)
#define MX31_PIN_ATA_CS1__GPIO3_27	IOMUX_MODE(MX31_PIN_ATA_CS1, IOMUX_CONFIG_GPIO)
#define MX31_PIN_PC_PWRON__SD2_DATA3	IOMUX_MODE(MX31_PIN_PC_PWRON, IOMUX_CONFIG_ALT1)
#define MX31_PIN_PC_VS1__SD2_DATA2	IOMUX_MODE(MX31_PIN_PC_VS1, IOMUX_CONFIG_ALT1)
#define MX31_PIN_PC_READY__SD2_DATA1	IOMUX_MODE(MX31_PIN_PC_READY, IOMUX_CONFIG_ALT1)
#define MX31_PIN_PC_WAIT_B__SD2_DATA0	IOMUX_MODE(MX31_PIN_PC_WAIT_B, IOMUX_CONFIG_ALT1)
#define MX31_PIN_PC_CD2_B__SD2_CLK	IOMUX_MODE(MX31_PIN_PC_CD2_B, IOMUX_CONFIG_ALT1)
#define MX31_PIN_PC_CD1_B__SD2_CMD	IOMUX_MODE(MX31_PIN_PC_CD1_B, IOMUX_CONFIG_ALT1)
#define MX31_PIN_ATA_DIOR__GPIO3_28	IOMUX_MODE(MX31_PIN_ATA_DIOR, IOMUX_CONFIG_GPIO)
#define MX31_PIN_ATA_DIOW__GPIO3_29	IOMUX_MODE(MX31_PIN_ATA_DIOW, IOMUX_CONFIG_GPIO)
#define MX31_PIN_CSI_D4__CSI_D4		IOMUX_MODE(MX31_PIN_CSI_D4, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D5__CSI_D5		IOMUX_MODE(MX31_PIN_CSI_D5, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D6__CSI_D6		IOMUX_MODE(MX31_PIN_CSI_D6, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D7__CSI_D7		IOMUX_MODE(MX31_PIN_CSI_D7, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D8__CSI_D8		IOMUX_MODE(MX31_PIN_CSI_D8, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D9__CSI_D9		IOMUX_MODE(MX31_PIN_CSI_D9, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D10__CSI_D10	IOMUX_MODE(MX31_PIN_CSI_D10, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D11__CSI_D11	IOMUX_MODE(MX31_PIN_CSI_D11, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D12__CSI_D12	IOMUX_MODE(MX31_PIN_CSI_D12, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D13__CSI_D13	IOMUX_MODE(MX31_PIN_CSI_D13, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D14__CSI_D14	IOMUX_MODE(MX31_PIN_CSI_D14, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_D15__CSI_D15	IOMUX_MODE(MX31_PIN_CSI_D15, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_HSYNC__CSI_HSYNC	IOMUX_MODE(MX31_PIN_CSI_HSYNC, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_MCLK__CSI_MCLK	IOMUX_MODE(MX31_PIN_CSI_MCLK, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_PIXCLK__CSI_PIXCLK	IOMUX_MODE(MX31_PIN_CSI_PIXCLK, IOMUX_CONFIG_FUNC)
#define MX31_PIN_CSI_VSYNC__CSI_VSYNC	IOMUX_MODE(MX31_PIN_CSI_VSYNC, IOMUX_CONFIG_FUNC)
#define MX31_PIN_GPIO3_0__GPIO3_0	IOMUX_MODE(MX31_PIN_GPIO3_0, IOMUX_CONFIG_GPIO)
#define MX31_PIN_GPIO3_1__GPIO3_1	IOMUX_MODE(MX31_PIN_GPIO3_1, IOMUX_CONFIG_GPIO)
#define MX31_PIN_TXD2__GPIO1_28		IOMUX_MODE(MX31_PIN_TXD2, IOMUX_CONFIG_GPIO)
#define MX31_PIN_GPIO1_0__GPIO1_0	IOMUX_MODE(MX31_PIN_GPIO1_0, IOMUX_CONFIG_GPIO)
#define MX31_PIN_SVEN0__GPIO2_0		IOMUX_MODE(MX31_PIN_SVEN0, IOMUX_CONFIG_GPIO)
#define MX31_PIN_STX0__GPIO2_1		IOMUX_MODE(MX31_PIN_STX0, IOMUX_CONFIG_GPIO)
#define MX31_PIN_SRX0__GPIO2_2		IOMUX_MODE(MX31_PIN_SRX0, IOMUX_CONFIG_GPIO)
#define MX31_PIN_SIMPD0__GPIO2_3	IOMUX_MODE(MX31_PIN_SIMPD0, IOMUX_CONFIG_GPIO)
#define MX31_PIN_DTR_DCE1__GPIO2_8	IOMUX_MODE(MX31_PIN_DTR_DCE1, IOMUX_CONFIG_GPIO)
#define MX31_PIN_DSR_DCE1__GPIO2_9	IOMUX_MODE(MX31_PIN_DSR_DCE1, IOMUX_CONFIG_GPIO)
#define MX31_PIN_RI_DCE1__GPIO2_10	IOMUX_MODE(MX31_PIN_RI_DCE1, IOMUX_CONFIG_GPIO)
#define MX31_PIN_DCD_DCE1__GPIO2_11	IOMUX_MODE(MX31_PIN_DCD_DCE1, IOMUX_CONFIG_GPIO)
#define MX31_PIN_STXD5__GPIO1_21	IOMUX_MODE(MX31_PIN_STXD5, IOMUX_CONFIG_GPIO)
#define MX31_PIN_SRXD5__GPIO1_22	IOMUX_MODE(MX31_PIN_SRXD5, IOMUX_CONFIG_GPIO)
#define MX31_PIN_GPIO1_3__GPIO1_3	IOMUX_MODE(MX31_PIN_GPIO1_3, IOMUX_CONFIG_GPIO)
#define MX31_PIN_CSPI2_SS1__CSPI3_SS1	IOMUX_MODE(MX31_PIN_CSPI2_SS1, IOMUX_CONFIG_ALT1)
#define MX31_PIN_RTS1__GPIO2_6		IOMUX_MODE(MX31_PIN_RTS1, IOMUX_CONFIG_GPIO)
#define MX31_PIN_CTS1__GPIO2_7		IOMUX_MODE(MX31_PIN_CTS1, IOMUX_CONFIG_GPIO)
#define MX31_PIN_LCS0__GPIO3_23		IOMUX_MODE(MX31_PIN_LCS0, IOMUX_CONFIG_GPIO)
#define MX31_PIN_STXD4__STXD4		IOMUX_MODE(MX31_PIN_STXD4, IOMUX_CONFIG_FUNC)
#define MX31_PIN_SRXD4__SRXD4		IOMUX_MODE(MX31_PIN_SRXD4, IOMUX_CONFIG_FUNC)
#define MX31_PIN_SCK4__SCK4		IOMUX_MODE(MX31_PIN_SCK4, IOMUX_CONFIG_FUNC)
#define MX31_PIN_SFS4__SFS4		IOMUX_MODE(MX31_PIN_SFS4, IOMUX_CONFIG_FUNC)
#define MX31_PIN_STXD5__STXD5		IOMUX_MODE(MX31_PIN_STXD5, IOMUX_CONFIG_FUNC)
#define MX31_PIN_SRXD5__SRXD5		IOMUX_MODE(MX31_PIN_SRXD5, IOMUX_CONFIG_FUNC)
#define MX31_PIN_SCK5__SCK5		IOMUX_MODE(MX31_PIN_SCK5, IOMUX_CONFIG_FUNC)
#define MX31_PIN_SFS5__SFS5		IOMUX_MODE(MX31_PIN_SFS5, IOMUX_CONFIG_FUNC)
#define MX31_PIN_KEY_ROW0_KEY_ROW0	IOMUX_MODE(MX31_PIN_KEY_ROW0, IOMUX_CONFIG_FUNC)
#define MX31_PIN_KEY_ROW1_KEY_ROW1	IOMUX_MODE(MX31_PIN_KEY_ROW1, IOMUX_CONFIG_FUNC)
#define MX31_PIN_KEY_ROW2_KEY_ROW2	IOMUX_MODE(MX31_PIN_KEY_ROW2, IOMUX_CONFIG_FUNC)
#define MX31_PIN_KEY_ROW3_KEY_ROW3	IOMUX_MODE(MX31_PIN_KEY_ROW3, IOMUX_CONFIG_FUNC)
#define MX31_PIN_KEY_ROW4_KEY_ROW4	IOMUX_MODE(MX31_PIN_KEY_ROW4, IOMUX_CONFIG_FUNC)
#define MX31_PIN_KEY_ROW5_KEY_ROW5	IOMUX_MODE(MX31_PIN_KEY_ROW5, IOMUX_CONFIG_FUNC)
#define MX31_PIN_KEY_ROW6_KEY_ROW6	IOMUX_MODE(MX31_PIN_KEY_ROW6, IOMUX_CONFIG_FUNC)
#define MX31_PIN_KEY_ROW7_KEY_ROW7	IOMUX_MODE(MX31_PIN_KEY_ROW7, IOMUX_CONFIG_FUNC)
#define MX31_PIN_KEY_COL0_KEY_COL0	IOMUX_MODE(MX31_PIN_KEY_COL0, IOMUX_CONFIG_FUNC)
#define MX31_PIN_KEY_COL1_KEY_COL1	IOMUX_MODE(MX31_PIN_KEY_COL1, IOMUX_CONFIG_FUNC)
#define MX31_PIN_KEY_COL2_KEY_COL2	IOMUX_MODE(MX31_PIN_KEY_COL2, IOMUX_CONFIG_FUNC)
#define MX31_PIN_KEY_COL3_KEY_COL3	IOMUX_MODE(MX31_PIN_KEY_COL3, IOMUX_CONFIG_FUNC)
#define MX31_PIN_KEY_COL4_KEY_COL4	IOMUX_MODE(MX31_PIN_KEY_COL4, IOMUX_CONFIG_FUNC)
#define MX31_PIN_KEY_COL5_KEY_COL5	IOMUX_MODE(MX31_PIN_KEY_COL5, IOMUX_CONFIG_FUNC)
#define MX31_PIN_KEY_COL6_KEY_COL6	IOMUX_MODE(MX31_PIN_KEY_COL6, IOMUX_CONFIG_FUNC)
#define MX31_PIN_KEY_COL7_KEY_COL7	IOMUX_MODE(MX31_PIN_KEY_COL7, IOMUX_CONFIG_FUNC)
void mxc_iomux_set_pad(enum iomux_pins, u32);
