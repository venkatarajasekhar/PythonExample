#define _CI13XXX_h_
#define CI13XXX_PAGE_SIZE  4096ul
#define ENDPT_MAX          (32)
#define CTRL_PAYLOAD_MAX   (64)
#define RX        (0)
#define TX        (1)
struct ci13xxx_td  __attribute__ ((packed));
struct ci13xxx_qh  __attribute__ ((packed));
struct ci13xxx_req ;
struct ci13xxx_ep ;
struct ci13xxx;
struct ci13xxx_udc_driver ;
struct ci13xxx ;
#define REG_BITS   (32)
#define HCCPARAMS_LEN         BIT(17)
#define DCCPARAMS_DEN         (0x1F << 0)
#define DCCPARAMS_DC          BIT(7)
#define TESTMODE_FORCE        BIT(0)
#define USBCMD_RS             BIT(0)
#define USBCMD_RST            BIT(1)
#define USBCMD_SUTW           BIT(13)
#define USBCMD_ATDTW          BIT(14)
#define USBi_UI               BIT(0)
#define USBi_UEI              BIT(1)
#define USBi_PCI              BIT(2)
#define USBi_URI              BIT(6)
#define USBi_SLI              BIT(8)
#define DEVICEADDR_USBADRA    BIT(24)
#define DEVICEADDR_USBADR     (0x7FUL << 25)
#define PORTSC_FPR            BIT(6)
#define PORTSC_SUSP           BIT(7)
#define PORTSC_HSP            BIT(9)
#define PORTSC_PTC            (0x0FUL << 16)
#define DEVLC_PSPD            (0x03UL << 25)
#define    DEVLC_PSPD_HS      (0x02UL << 25)
#define USBMODE_CM            (0x03UL <<  0)
#define    USBMODE_CM_IDLE    (0x00UL <<  0)
#define    USBMODE_CM_DEVICE  (0x02UL <<  0)
#define    USBMODE_CM_HOST    (0x03UL <<  0)
#define USBMODE_SLOM          BIT(3)
#define USBMODE_SDIS          BIT(4)
#define ENDPTCTRL_RXS         BIT(0)
#define ENDPTCTRL_RXT         (0x03UL <<  2)
#define ENDPTCTRL_RXR         BIT(6)
#define ENDPTCTRL_RXE         BIT(7)
#define ENDPTCTRL_TXS         BIT(16)
#define ENDPTCTRL_TXT         (0x03UL << 18)
#define ENDPTCTRL_TXR         BIT(22)
#define ENDPTCTRL_TXE         BIT(23)
#define ci13xxx_printk(level, format, args...) \
do  while (0)
#define err(format, args...)    ci13xxx_printk(KERN_ERR, format, ## args)
#define warn(format, args...)   ci13xxx_printk(KERN_WARNING, format, ## args)
#define info(format, args...)   ci13xxx_printk(KERN_INFO, format, ## args)
#define trace(format, args...)      ci13xxx_printk(KERN_DEBUG, format, ## args)
#define dbg_trace(format, args...)  dev_dbg(dev, format, ##args)
#define trace(format, args...)      do  while (0)
#define dbg_trace(format, args...)  do  while (0)
