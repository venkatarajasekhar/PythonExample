#define _LINUX_RICOH_H
#define RF5C_MODE_CTL		0x1f
#define RF5C_PWR_CTL		0x2f
#define RF5C_CHIP_ID		0x3a
#define RF5C_MODE_CTL_3		0x3b
#define RF5C_IO_OFF(w)		(0x36+((w)<<1))
#define RF5C_MODE_ATA		0x01
#define RF5C_MODE_LED_ENA	0x02
#define RF5C_MODE_CA21		0x04
#define RF5C_MODE_CA22		0x08
#define RF5C_MODE_CA23		0x10
#define RF5C_MODE_CA24		0x20
#define RF5C_MODE_CA25		0x40
#define RF5C_MODE_3STATE_BIT7	0x80
#define RF5C_PWR_VCC_3V		0x01
#define RF5C_PWR_IREQ_HIGH	0x02
#define RF5C_PWR_INPACK_ENA	0x04
#define RF5C_PWR_5V_DET		0x08
#define RF5C_PWR_TC_SEL		0x10
#define RF5C_PWR_DREQ_LOW	0x20
#define RF5C_PWR_DREQ_OFF	0x00
#define RF5C_PWR_DREQ_INPACK	0x40
#define RF5C_PWR_DREQ_SPKR	0x80
#define RF5C_PWR_DREQ_IOIS16	0xc0
#define RF5C_CHIP_RF5C296	0x32
#define RF5C_CHIP_RF5C396	0xb2
#define RF5C_MCTL3_DISABLE	0x01
#define RF5C_MCTL3_DMA_ENA	0x02
#define RL5C46X_BCR_3E0_ENA		0x0800
#define RL5C46X_BCR_3E2_ENA		0x1000
#define RL5C4XX_CONFIG			0x80
#define  RL5C4XX_CONFIG_IO_1_MODE	0x0200
#define  RL5C4XX_CONFIG_IO_0_MODE	0x0100
#define  RL5C4XX_CONFIG_PREFETCH	0x0001
#define RL5C4XX_MISC			0x0082
#define  RL5C4XX_MISC_HW_SUSPEND_ENA	0x0002
#define  RL5C4XX_MISC_VCCEN_POL		0x0100
#define  RL5C4XX_MISC_VPPEN_POL		0x0200
#define  RL5C46X_MISC_SUSPEND		0x0001
#define  RL5C46X_MISC_PWR_SAVE_2	0x0004
#define  RL5C46X_MISC_IFACE_BUSY	0x0008
#define  RL5C46X_MISC_B_LOCK		0x0010
#define  RL5C46X_MISC_A_LOCK		0x0020
#define  RL5C46X_MISC_PCI_LOCK		0x0040
#define  RL5C47X_MISC_IFACE_BUSY	0x0004
#define  RL5C47X_MISC_PCI_INT_MASK	0x0018
#define  RL5C47X_MISC_PCI_INT_DIS	0x0020
#define  RL5C47X_MISC_SUBSYS_WR		0x0040
#define  RL5C47X_MISC_SRIRQ_ENA		0x0080
#define  RL5C47X_MISC_5V_DISABLE	0x0400
#define  RL5C47X_MISC_LED_POL		0x0800
#define RL5C4XX_16BIT_CTL		0x0084
#define  RL5C4XX_16CTL_IO_TIMING	0x0100
#define  RL5C4XX_16CTL_MEM_TIMING	0x0200
#define  RL5C46X_16CTL_LEVEL_1		0x0010
#define  RL5C46X_16CTL_LEVEL_2		0x0020
#define RL5C4XX_16BIT_IO_0		0x0088
#define RL5C4XX_16BIT_MEM_0		0x008a
#define  RL5C4XX_SETUP_MASK		0x0007
#define  RL5C4XX_SETUP_SHIFT		0
#define  RL5C4XX_CMD_MASK		0x01f0
#define  RL5C4XX_CMD_SHIFT		4
#define  RL5C4XX_HOLD_MASK		0x1c00
#define  RL5C4XX_HOLD_SHIFT		10
#define  RL5C4XX_MISC_CONTROL           0x2F
#define  RL5C4XX_ZV_ENABLE              0x08
#define rl_misc(socket)		((socket)->private[0])
#define rl_ctl(socket)		((socket)->private[1])
#define rl_io(socket)		((socket)->private[2])
#define rl_mem(socket)		((socket)->private[3])
#define rl_config(socket)	((socket)->private[4])
static void ricoh_zoom_video(struct pcmcia_socket *sock, int onoff)
static void ricoh_set_zv(struct yenta_socket *socket)
static void ricoh_save_state(struct yenta_socket *socket)
static void ricoh_restore_state(struct yenta_socket *socket)
static int ricoh_override(struct yenta_socket *socket)
