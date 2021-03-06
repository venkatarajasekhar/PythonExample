#define LINUX_BCMA_DRIVER_CC_H_
#define BCMA_CC_ID			0x0000
#define  BCMA_CC_ID_ID			0x0000FFFF
#define  BCMA_CC_ID_ID_SHIFT		0
#define  BCMA_CC_ID_REV			0x000F0000
#define  BCMA_CC_ID_REV_SHIFT		16
#define  BCMA_CC_ID_PKG			0x00F00000
#define  BCMA_CC_ID_PKG_SHIFT		20
#define  BCMA_CC_ID_NRCORES		0x0F000000
#define  BCMA_CC_ID_NRCORES_SHIFT	24
#define  BCMA_CC_ID_TYPE		0xF0000000
#define  BCMA_CC_ID_TYPE_SHIFT		28
#define BCMA_CC_CAP			0x0004
#define  BCMA_CC_CAP_NRUART		0x00000003
#define  BCMA_CC_CAP_MIPSEB		0x00000004
#define  BCMA_CC_CAP_UARTCLK		0x00000018
#define   BCMA_CC_CAP_UARTCLK_INT	0x00000008
#define  BCMA_CC_CAP_UARTGPIO		0x00000020
#define  BCMA_CC_CAP_EXTBUS		0x000000C0
#define  BCMA_CC_CAP_FLASHT		0x00000700
#define   BCMA_CC_FLASHT_NONE		0x00000000
#define   BCMA_CC_FLASHT_STSER		0x00000100
#define   BCMA_CC_FLASHT_ATSER		0x00000200
#define	  BCMA_CC_FLASHT_PARA		0x00000700
#define  BCMA_CC_CAP_PLLT		0x00038000
#define   BCMA_PLLTYPE_NONE		0x00000000
#define   BCMA_PLLTYPE_1		0x00010000
#define   BCMA_PLLTYPE_2		0x00020000
#define   BCMA_PLLTYPE_3		0x00030000
#define   BCMA_PLLTYPE_4		0x00008000
#define   BCMA_PLLTYPE_5		0x00018000
#define   BCMA_PLLTYPE_6		0x00028000
#define   BCMA_PLLTYPE_7		0x00038000
#define  BCMA_CC_CAP_PCTL		0x00040000
#define  BCMA_CC_CAP_OTPS		0x00380000
#define  BCMA_CC_CAP_OTPS_SHIFT		19
#define  BCMA_CC_CAP_OTPS_BASE		5
#define  BCMA_CC_CAP_JTAGM		0x00400000
#define  BCMA_CC_CAP_BROM		0x00800000
#define  BCMA_CC_CAP_64BIT		0x08000000
#define  BCMA_CC_CAP_PMU		0x10000000
#define  BCMA_CC_CAP_ECI		0x20000000
#define  BCMA_CC_CAP_SPROM		0x40000000
#define BCMA_CC_CORECTL			0x0008
#define  BCMA_CC_CORECTL_UARTCLK0	0x00000001
#define	 BCMA_CC_CORECTL_SE		0x00000002
#define  BCMA_CC_CORECTL_UARTCLKEN	0x00000008
#define BCMA_CC_BIST			0x000C
#define BCMA_CC_OTPS			0x0010
#define	 BCMA_CC_OTPS_PROGFAIL		0x80000000
#define	 BCMA_CC_OTPS_PROTECT		0x00000007
#define	 BCMA_CC_OTPS_HW_PROTECT	0x00000001
#define	 BCMA_CC_OTPS_SW_PROTECT	0x00000002
#define	 BCMA_CC_OTPS_CID_PROTECT	0x00000004
#define BCMA_CC_OTPC			0x0014
#define	 BCMA_CC_OTPC_RECWAIT		0xFF000000
#define	 BCMA_CC_OTPC_PROGWAIT		0x00FFFF00
#define	 BCMA_CC_OTPC_PRW_SHIFT		8
#define	 BCMA_CC_OTPC_MAXFAIL		0x00000038
#define	 BCMA_CC_OTPC_VSEL		0x00000006
#define	 BCMA_CC_OTPC_SELVL		0x00000001
#define BCMA_CC_OTPP			0x0018
#define	 BCMA_CC_OTPP_COL		0x000000FF
#define	 BCMA_CC_OTPP_ROW		0x0000FF00
#define	 BCMA_CC_OTPP_ROW_SHIFT		8
#define	 BCMA_CC_OTPP_READERR		0x10000000
#define	 BCMA_CC_OTPP_VALUE		0x20000000
#define	 BCMA_CC_OTPP_READ		0x40000000
#define	 BCMA_CC_OTPP_START		0x80000000
#define	 BCMA_CC_OTPP_BUSY		0x80000000
#define BCMA_CC_IRQSTAT			0x0020
#define BCMA_CC_IRQMASK			0x0024
#define	 BCMA_CC_IRQ_GPIO		0x00000001
#define	 BCMA_CC_IRQ_EXT		0x00000002
#define	 BCMA_CC_IRQ_WDRESET		0x80000000
#define BCMA_CC_CHIPCTL			0x0028
#define BCMA_CC_CHIPSTAT		0x002C
#define BCMA_CC_JCMD			0x0030
#define  BCMA_CC_JCMD_START		0x80000000
#define  BCMA_CC_JCMD_BUSY		0x80000000
#define  BCMA_CC_JCMD_PAUSE		0x40000000
#define  BCMA_CC_JCMD0_ACC_MASK		0x0000F000
#define  BCMA_CC_JCMD0_ACC_IRDR		0x00000000
#define  BCMA_CC_JCMD0_ACC_DR		0x00001000
#define  BCMA_CC_JCMD0_ACC_IR		0x00002000
#define  BCMA_CC_JCMD0_ACC_RESET	0x00003000
#define  BCMA_CC_JCMD0_ACC_IRPDR	0x00004000
#define  BCMA_CC_JCMD0_ACC_PDR		0x00005000
#define  BCMA_CC_JCMD0_IRW_MASK		0x00000F00
#define  BCMA_CC_JCMD_ACC_MASK		0x000F0000
#define  BCMA_CC_JCMD_ACC_IRDR		0x00000000
#define  BCMA_CC_JCMD_ACC_DR		0x00010000
#define  BCMA_CC_JCMD_ACC_IR		0x00020000
#define  BCMA_CC_JCMD_ACC_RESET		0x00030000
#define  BCMA_CC_JCMD_ACC_IRPDR		0x00040000
#define  BCMA_CC_JCMD_ACC_PDR		0x00050000
#define  BCMA_CC_JCMD_IRW_MASK		0x00001F00
#define  BCMA_CC_JCMD_IRW_SHIFT		8
#define  BCMA_CC_JCMD_DRW_MASK		0x0000003F
#define BCMA_CC_JIR			0x0034
#define BCMA_CC_JDR			0x0038
#define BCMA_CC_JCTL			0x003C
#define  BCMA_CC_JCTL_FORCE_CLK		4
#define  BCMA_CC_JCTL_EXT_EN		2
#define  BCMA_CC_JCTL_EN		1
#define BCMA_CC_FLASHCTL		0x0040
#define  BCMA_CC_FLASHCTL_START		0x80000000
#define  BCMA_CC_FLASHCTL_BUSY		BCMA_CC_FLASHCTL_START
#define BCMA_CC_FLASHADDR		0x0044
#define BCMA_CC_FLASHDATA		0x0048
#define BCMA_CC_BCAST_ADDR		0x0050
#define BCMA_CC_BCAST_DATA		0x0054
#define BCMA_CC_GPIOPULLUP		0x0058
#define BCMA_CC_GPIOPULLDOWN		0x005C
#define BCMA_CC_GPIOIN			0x0060
#define BCMA_CC_GPIOOUT			0x0064
#define BCMA_CC_GPIOOUTEN		0x0068
#define BCMA_CC_GPIOCTL			0x006C
#define BCMA_CC_GPIOPOL			0x0070
#define BCMA_CC_GPIOIRQ			0x0074
#define BCMA_CC_WATCHDOG		0x0080
#define BCMA_CC_GPIOTIMER		0x0088
#define  BCMA_CC_GPIOTIMER_OFFTIME	0x0000FFFF
#define  BCMA_CC_GPIOTIMER_OFFTIME_SHIFT	0
#define  BCMA_CC_GPIOTIMER_ONTIME	0xFFFF0000
#define  BCMA_CC_GPIOTIMER_ONTIME_SHIFT	16
#define BCMA_CC_GPIOTOUTM		0x008C
#define BCMA_CC_CLOCK_N			0x0090
#define BCMA_CC_CLOCK_SB		0x0094
#define BCMA_CC_CLOCK_PCI		0x0098
#define BCMA_CC_CLOCK_M2		0x009C
#define BCMA_CC_CLOCK_MIPS		0x00A0
#define BCMA_CC_CLKDIV			0x00A4
#define	 BCMA_CC_CLKDIV_SFLASH		0x0F000000
#define	 BCMA_CC_CLKDIV_SFLASH_SHIFT	24
#define	 BCMA_CC_CLKDIV_OTP		0x000F0000
#define	 BCMA_CC_CLKDIV_OTP_SHIFT	16
#define	 BCMA_CC_CLKDIV_JTAG		0x00000F00
#define	 BCMA_CC_CLKDIV_JTAG_SHIFT	8
#define	 BCMA_CC_CLKDIV_UART		0x000000FF
#define BCMA_CC_CAP_EXT			0x00AC
#define BCMA_CC_PLLONDELAY		0x00B0
#define BCMA_CC_FREFSELDELAY		0x00B4
#define BCMA_CC_SLOWCLKCTL		0x00B8
#define  BCMA_CC_SLOWCLKCTL_SRC		0x00000007
#define	  BCMA_CC_SLOWCLKCTL_SRC_LPO	0x00000000
#define   BCMA_CC_SLOWCLKCTL_SRC_XTAL	0x00000001
#define	  BCMA_CC_SLOECLKCTL_SRC_PCI	0x00000002
#define  BCMA_CC_SLOWCLKCTL_LPOFREQ	0x00000200
#define  BCMA_CC_SLOWCLKCTL_LPOPD	0x00000400
#define  BCMA_CC_SLOWCLKCTL_FSLOW	0x00000800
#define  BCMA_CC_SLOWCLKCTL_IPLL	0x00001000
#define  BCMA_CC_SLOWCLKCTL_ENXTAL	0x00002000
#define  BCMA_CC_SLOWCLKCTL_XTALPU	0x00004000
#define  BCMA_CC_SLOWCLKCTL_CLKDIV	0xFFFF0000
#define  BCMA_CC_SLOWCLKCTL_CLKDIV_SHIFT	16
#define BCMA_CC_SYSCLKCTL		0x00C0
#define	 BCMA_CC_SYSCLKCTL_IDLPEN	0x00000001
#define	 BCMA_CC_SYSCLKCTL_ALPEN	0x00000002
#define	 BCMA_CC_SYSCLKCTL_PLLEN	0x00000004
#define	 BCMA_CC_SYSCLKCTL_FORCEALP	0x00000008
#define	 BCMA_CC_SYSCLKCTL_FORCEHT	0x00000010
#define  BCMA_CC_SYSCLKCTL_CLKDIV	0xFFFF0000
#define  BCMA_CC_SYSCLKCTL_CLKDIV_SHIFT	16
#define BCMA_CC_CLKSTSTR		0x00C4
#define BCMA_CC_EROM			0x00FC
#define BCMA_CC_PCMCIA_CFG		0x0100
#define BCMA_CC_PCMCIA_MEMWAIT		0x0104
#define BCMA_CC_PCMCIA_ATTRWAIT		0x0108
#define BCMA_CC_PCMCIA_IOWAIT		0x010C
#define BCMA_CC_IDE_CFG			0x0110
#define BCMA_CC_IDE_MEMWAIT		0x0114
#define BCMA_CC_IDE_ATTRWAIT		0x0118
#define BCMA_CC_IDE_IOWAIT		0x011C
#define BCMA_CC_PROG_CFG		0x0120
#define BCMA_CC_PROG_WAITCNT		0x0124
#define BCMA_CC_FLASH_CFG		0x0128
#define BCMA_CC_FLASH_WAITCNT		0x012C
#define BCMA_CC_CLKCTLST		0x01E0
#define  BCMA_CC_CLKCTLST_FORCEALP	0x00000001
#define  BCMA_CC_CLKCTLST_FORCEHT	0x00000002
#define  BCMA_CC_CLKCTLST_FORCEILP	0x00000004
#define  BCMA_CC_CLKCTLST_HAVEALPREQ	0x00000008
#define  BCMA_CC_CLKCTLST_HAVEHTREQ	0x00000010
#define  BCMA_CC_CLKCTLST_HWCROFF	0x00000020
#define  BCMA_CC_CLKCTLST_HAVEHT	0x00010000
#define  BCMA_CC_CLKCTLST_HAVEALP	0x00020000
#define BCMA_CC_HW_WORKAROUND		0x01E4
#define BCMA_CC_UART0_DATA		0x0300
#define BCMA_CC_UART0_IMR		0x0304
#define BCMA_CC_UART0_FCR		0x0308
#define BCMA_CC_UART0_LCR		0x030C
#define BCMA_CC_UART0_MCR		0x0310
#define BCMA_CC_UART0_LSR		0x0314
#define BCMA_CC_UART0_MSR		0x0318
#define BCMA_CC_UART0_SCRATCH		0x031C
#define BCMA_CC_UART1_DATA		0x0400
#define BCMA_CC_UART1_IMR		0x0404
#define BCMA_CC_UART1_FCR		0x0408
#define BCMA_CC_UART1_LCR		0x040C
#define BCMA_CC_UART1_MCR		0x0410
#define BCMA_CC_UART1_LSR		0x0414
#define BCMA_CC_UART1_MSR		0x0418
#define BCMA_CC_UART1_SCRATCH		0x041C
#define BCMA_CC_PMU_CTL			0x0600
#define  BCMA_CC_PMU_CTL_ILP_DIV	0xFFFF0000
#define  BCMA_CC_PMU_CTL_ILP_DIV_SHIFT	16
#define  BCMA_CC_PMU_CTL_NOILPONW	0x00000200
#define  BCMA_CC_PMU_CTL_HTREQEN	0x00000100
#define  BCMA_CC_PMU_CTL_ALPREQEN	0x00000080
#define  BCMA_CC_PMU_CTL_XTALFREQ	0x0000007C
#define  BCMA_CC_PMU_CTL_XTALFREQ_SHIFT	2
#define  BCMA_CC_PMU_CTL_ILPDIVEN	0x00000002
#define  BCMA_CC_PMU_CTL_LPOSEL		0x00000001
#define BCMA_CC_PMU_CAP			0x0604
#define  BCMA_CC_PMU_CAP_REVISION	0x000000FF
#define BCMA_CC_PMU_STAT		0x0608
#define  BCMA_CC_PMU_STAT_INTPEND	0x00000040
#define  BCMA_CC_PMU_STAT_SBCLKST	0x00000030
#define  BCMA_CC_PMU_STAT_HAVEALP	0x00000008
#define  BCMA_CC_PMU_STAT_HAVEHT	0x00000004
#define  BCMA_CC_PMU_STAT_RESINIT	0x00000003
#define BCMA_CC_PMU_RES_STAT		0x060C
#define BCMA_CC_PMU_RES_PEND		0x0610
#define BCMA_CC_PMU_TIMER		0x0614
#define BCMA_CC_PMU_MINRES_MSK		0x0618
#define BCMA_CC_PMU_MAXRES_MSK		0x061C
#define BCMA_CC_PMU_RES_TABSEL		0x0620
#define BCMA_CC_PMU_RES_DEPMSK		0x0624
#define BCMA_CC_PMU_RES_UPDNTM		0x0628
#define BCMA_CC_PMU_RES_TIMER		0x062C
#define BCMA_CC_PMU_CLKSTRETCH		0x0630
#define BCMA_CC_PMU_WATCHDOG		0x0634
#define BCMA_CC_PMU_RES_REQTS		0x0640
#define BCMA_CC_PMU_RES_REQT		0x0644
#define BCMA_CC_PMU_RES_REQM		0x0648
#define BCMA_CC_CHIPCTL_ADDR		0x0650
#define BCMA_CC_CHIPCTL_DATA		0x0654
#define BCMA_CC_REGCTL_ADDR		0x0658
#define BCMA_CC_REGCTL_DATA		0x065C
#define BCMA_CC_PLLCTL_ADDR		0x0660
#define BCMA_CC_PLLCTL_DATA		0x0664
struct bcma_chipcommon_pmu ;
struct bcma_drv_cc ;
#define bcma_cc_read32(cc, offset) \
bcma_read32((cc)->core, offset)
#define bcma_cc_write32(cc, offset, val) \
bcma_write32((cc)->core, offset, val)
#define bcma_cc_mask32(cc, offset, mask) \
bcma_cc_write32(cc, offset, bcma_cc_read32(cc, offset) & (mask))
#define bcma_cc_set32(cc, offset, set) \
bcma_cc_write32(cc, offset, bcma_cc_read32(cc, offset) | (set))
#define bcma_cc_maskset32(cc, offset, mask, set) \
bcma_cc_write32(cc, offset, (bcma_cc_read32(cc, offset) & (mask)) | (set))
extern void bcma_core_chipcommon_init(struct bcma_drv_cc *cc);
extern void bcma_chipco_suspend(struct bcma_drv_cc *cc);
extern void bcma_chipco_resume(struct bcma_drv_cc *cc);
extern void bcma_chipco_watchdog_timer_set(struct bcma_drv_cc *cc,
u32 ticks);
void bcma_chipco_irq_mask(struct bcma_drv_cc *cc, u32 mask, u32 value);
u32 bcma_chipco_irq_status(struct bcma_drv_cc *cc, u32 mask);
u32 bcma_chipco_gpio_in(struct bcma_drv_cc *cc, u32 mask);
u32 bcma_chipco_gpio_out(struct bcma_drv_cc *cc, u32 mask, u32 value);
u32 bcma_chipco_gpio_outen(struct bcma_drv_cc *cc, u32 mask, u32 value);
u32 bcma_chipco_gpio_control(struct bcma_drv_cc *cc, u32 mask, u32 value);
u32 bcma_chipco_gpio_intmask(struct bcma_drv_cc *cc, u32 mask, u32 value);
u32 bcma_chipco_gpio_polarity(struct bcma_drv_cc *cc, u32 mask, u32 value);
extern void bcma_pmu_init(struct bcma_drv_cc *cc);
