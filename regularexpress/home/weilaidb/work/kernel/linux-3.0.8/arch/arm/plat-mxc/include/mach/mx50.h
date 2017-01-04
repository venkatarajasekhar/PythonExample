#define __MACH_MX50_H__
#define MX50_IROM_BASE_ADDR		0x0
#define MX50_IROM_SIZE			SZ_64K
#define MX50_TZIC_BASE_ADDR		0x0fffc000
#define MX50_TZIC_SIZE			SZ_16K
#define MX50_IRAM_BASE_ADDR	0xf8000000
#define MX50_IRAM_PARTITIONS	16
#define MX50_IRAM_SIZE		(MX50_IRAM_PARTITIONS * SZ_8K)
#define MX50_DATABAHN_BASE_ADDR			0x14000000
#define MX50_GPU2D_BASE_ADDR		0x20000000
#define MX50_DEBUG_BASE_ADDR		0x40000000
#define MX50_DEBUG_SIZE			SZ_1M
#define MX50_ETB_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x00001000)
#define MX50_ETM_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x00002000)
#define MX50_TPIU_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x00003000)
#define MX50_CTI0_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x00004000)
#define MX50_CTI1_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x00005000)
#define MX50_CTI2_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x00006000)
#define MX50_CTI3_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x00007000)
#define MX50_CORTEX_DBG_BASE_ADDR	(MX50_DEBUG_BASE_ADDR + 0x00008000)
#define MX50_APBHDMA_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x01000000)
#define MX50_OCOTP_CTRL_BASE_ADDR	(MX50_DEBUG_BASE_ADDR + 0x01002000)
#define MX50_DIGCTL_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x01004000)
#define MX50_GPMI_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x01006000)
#define MX50_BCH_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x01008000)
#define MX50_ELCDIF_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x0100a000)
#define MX50_EPXP_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x0100c000)
#define MX50_DCP_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x0100e000)
#define MX50_EPDC_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x01010000)
#define MX50_QOSC_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x01012000)
#define MX50_PERFMON_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x01014000)
#define MX50_SSP_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x01016000)
#define MX50_ANATOP_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x01018000)
#define MX50_NIC_BASE_ADDR		(MX50_DEBUG_BASE_ADDR + 0x08000000)
#define MX50_SPBA0_BASE_ADDR		0x50000000
#define MX50_SPBA0_SIZE			SZ_1M
#define MX50_MMC_SDHC1_BASE_ADDR	(MX50_SPBA0_BASE_ADDR + 0x00004000)
#define MX50_MMC_SDHC2_BASE_ADDR	(MX50_SPBA0_BASE_ADDR + 0x00008000)
#define MX50_UART3_BASE_ADDR		(MX50_SPBA0_BASE_ADDR + 0x0000c000)
#define MX50_CSPI1_BASE_ADDR		(MX50_SPBA0_BASE_ADDR + 0x00010000)
#define MX50_SSI2_BASE_ADDR		(MX50_SPBA0_BASE_ADDR + 0x00014000)
#define MX50_MMC_SDHC3_BASE_ADDR	(MX50_SPBA0_BASE_ADDR + 0x00020000)
#define MX50_MMC_SDHC4_BASE_ADDR	(MX50_SPBA0_BASE_ADDR + 0x00024000)
#define MX50_AIPS1_BASE_ADDR	0x53f00000
#define MX50_AIPS1_SIZE		SZ_1M
#define MX50_OTG_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x00080000)
#define MX50_GPIO1_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x00084000)
#define MX50_GPIO2_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x00088000)
#define MX50_GPIO3_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x0008c000)
#define MX50_GPIO4_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x00090000)
#define MX50_KPP_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x00094000)
#define MX50_WDOG_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x00098000)
#define MX50_GPT1_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x000a0000)
#define MX50_SRTC_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x000a4000)
#define MX50_IOMUXC_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x000a8000)
#define MX50_EPIT1_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x000ac000)
#define MX50_PWM1_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x000b4000)
#define MX50_PWM2_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x000b8000)
#define MX50_UART1_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x000bc000)
#define MX50_UART2_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x000c0000)
#define MX50_SRC_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x000d0000)
#define MX50_CCM_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x000d4000)
#define MX50_GPC_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x000d8000)
#define MX50_GPIO5_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x000dc000)
#define MX50_GPIO6_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x000e0000)
#define MX50_I2C3_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x000ec000)
#define MX50_UART4_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x000f0000)
#define MX50_MSHC_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x000f4000)
#define MX50_RNGB_BASE_ADDR	(MX50_AIPS1_BASE_ADDR + 0x000f8000)
#define MX50_AIPS2_BASE_ADDR	0x63f00000
#define MX50_AIPS2_SIZE		SZ_1M
#define MX50_PLL1_BASE_ADDR	(MX50_AIPS2_BASE_ADDR + 0x00080000)
#define MX50_PLL2_BASE_ADDR	(MX50_AIPS2_BASE_ADDR + 0x00084000)
#define MX50_PLL3_BASE_ADDR	(MX50_AIPS2_BASE_ADDR + 0x00088000)
#define MX50_UART5_BASE_ADDR	(MX50_AIPS2_BASE_ADDR + 0x00090000)
#define MX50_AHBMAX_BASE_ADDR	(MX50_AIPS2_BASE_ADDR + 0x00094000)
#define MX50_ARM_BASE_ADDR	(MX50_AIPS2_BASE_ADDR + 0x000a0000)
#define MX50_OWIRE_BASE_ADDR	(MX50_AIPS2_BASE_ADDR + 0x000a4000)
#define MX50_CSPI2_BASE_ADDR	(MX50_AIPS2_BASE_ADDR + 0x000ac000)
#define MX50_SDMA_BASE_ADDR	(MX50_AIPS2_BASE_ADDR + 0x000b0000)
#define MX50_ROMCP_BASE_ADDR	(MX50_AIPS2_BASE_ADDR + 0x000b8000)
#define MX50_CSPI3_BASE_ADDR	(MX50_AIPS2_BASE_ADDR + 0x000c0000)
#define MX50_I2C2_BASE_ADDR	(MX50_AIPS2_BASE_ADDR + 0x000c4000)
#define MX50_I2C1_BASE_ADDR	(MX50_AIPS2_BASE_ADDR + 0x000c8000)
#define MX50_SSI1_BASE_ADDR	(MX50_AIPS2_BASE_ADDR + 0x000cc000)
#define MX50_AUDMUX_BASE_ADDR	(MX50_AIPS2_BASE_ADDR + 0x000d0000)
#define MX50_WEIM_BASE_ADDR	(MX50_AIPS2_BASE_ADDR + 0x000d8000)
#define MX50_FEC_BASE_ADDR	(MX50_AIPS2_BASE_ADDR + 0x000ec000)
#define MX50_CSD0_BASE_ADDR		0x70000000
#define MX50_CSD1_BASE_ADDR		0xb0000000
#define MX50_CS0_BASE_ADDR		0xf0000000
#define MX50_IO_P2V(x)			IMX_IO_P2V(x)
#define MX50_IO_ADDRESS(x)		IOMEM(MX50_IO_P2V(x))
#define MX50_SPBA_SDHC1		0x04
#define MX50_SPBA_SDHC2		0x08
#define MX50_SPBA_UART3		0x0c
#define MX50_SPBA_CSPI1		0x10
#define MX50_SPBA_SSI2		0x14
#define MX50_SPBA_SDHC3		0x20
#define MX50_SPBA_SDHC4		0x24
#define MX50_SPBA_SPDIF		0x28
#define MX50_SPBA_ATA		0x30
#define MX50_SPBA_SLIM		0x34
#define MX50_SPBA_HSI2C		0x38
#define MX50_SPBA_CTRL		0x3c
#define MX50_DMA_REQ_GPC		1
#define MX50_DMA_REQ_ATA_UART4_RX	2
#define MX50_DMA_REQ_ATA_UART4_TX	3
#define MX50_DMA_REQ_CSPI1_RX		6
#define MX50_DMA_REQ_CSPI1_TX		7
#define MX50_DMA_REQ_CSPI2_RX		8
#define MX50_DMA_REQ_CSPI2_TX		9
#define MX50_DMA_REQ_I2C3_SDHC3		10
#define MX50_DMA_REQ_SDHC4		11
#define MX50_DMA_REQ_UART2_FIRI_RX	12
#define MX50_DMA_REQ_UART2_FIRI_TX	13
#define MX50_DMA_REQ_EXT0		14
#define MX50_DMA_REQ_EXT1		15
#define MX50_DMA_REQ_UART5_RX		16
#define MX50_DMA_REQ_UART5_TX		17
#define MX50_DMA_REQ_UART1_RX		18
#define MX50_DMA_REQ_UART1_TX		19
#define MX50_DMA_REQ_I2C1_SDHC1		20
#define MX50_DMA_REQ_I2C2_SDHC2		21
#define MX50_DMA_REQ_SSI2_RX2		22
#define MX50_DMA_REQ_SSI2_TX2		23
#define MX50_DMA_REQ_SSI2_RX1		24
#define MX50_DMA_REQ_SSI2_TX1		25
#define MX50_DMA_REQ_SSI1_RX2		26
#define MX50_DMA_REQ_SSI1_TX2		27
#define MX50_DMA_REQ_SSI1_RX1		28
#define MX50_DMA_REQ_SSI1_TX1		29
#define MX50_DMA_REQ_CSPI_RX		38
#define MX50_DMA_REQ_CSPI_TX		39
#define MX50_DMA_REQ_UART3_RX		42
#define MX50_DMA_REQ_UART3_TX		43
#define MX50_INT_MMC_SDHC1	1
#define MX50_INT_MMC_SDHC2	2
#define MX50_INT_MMC_SDHC3	3
#define MX50_INT_MMC_SDHC4	4
#define MX50_INT_DAP		5
#define MX50_INT_SDMA		6
#define MX50_INT_IOMUX		7
#define MX50_INT_UART4		13
#define MX50_INT_USB_H1		14
#define MX50_INT_USB_OTG	18
#define MX50_INT_DATABAHN	19
#define MX50_INT_ELCDIF		20
#define MX50_INT_EPXP		21
#define MX50_INT_SRTC_NTZ	24
#define MX50_INT_SRTC_TZ	25
#define MX50_INT_EPDC		27
#define MX50_INT_NIC		28
#define MX50_INT_SSI1		29
#define MX50_INT_SSI2		30
#define MX50_INT_UART1		31
#define MX50_INT_UART2		32
#define MX50_INT_UART3		33
#define MX50_INT_RESV34		34
#define MX50_INT_RESV35		35
#define MX50_INT_CSPI1		36
#define MX50_INT_CSPI2		37
#define MX50_INT_CSPI		38
#define MX50_INT_GPT		39
#define MX50_INT_EPIT1		40
#define MX50_INT_GPIO1_INT7	42
#define MX50_INT_GPIO1_INT6	43
#define MX50_INT_GPIO1_INT5	44
#define MX50_INT_GPIO1_INT4	45
#define MX50_INT_GPIO1_INT3	46
#define MX50_INT_GPIO1_INT2	47
#define MX50_INT_GPIO1_INT1	48
#define MX50_INT_GPIO1_INT0	49
#define MX50_INT_GPIO1_LOW	50
#define MX50_INT_GPIO1_HIGH	51
#define MX50_INT_GPIO2_LOW	52
#define MX50_INT_GPIO2_HIGH	53
#define MX50_INT_GPIO3_LOW	54
#define MX50_INT_GPIO3_HIGH	55
#define MX50_INT_GPIO4_LOW	56
#define MX50_INT_GPIO4_HIGH	57
#define MX50_INT_WDOG1		58
#define MX50_INT_KPP		60
#define MX50_INT_PWM1		61
#define MX50_INT_I2C1		62
#define MX50_INT_I2C2		63
#define MX50_INT_I2C3		64
#define MX50_INT_RESV65		65
#define MX50_INT_DCDC		66
#define MX50_INT_THERMAL_ALARM	67
#define MX50_INT_ANA3		68
#define MX50_INT_ANA4		69
#define MX50_INT_CCM1		71
#define MX50_INT_CCM2		72
#define MX50_INT_GPC1		73
#define MX50_INT_GPC2		74
#define MX50_INT_SRC		75
#define MX50_INT_NM		76
#define MX50_INT_PMU		77
#define MX50_INT_CTI_IRQ	78
#define MX50_INT_CTI1_TG0	79
#define MX50_INT_CTI1_TG1	80
#define MX50_INT_GPU2_IRQ	84
#define MX50_INT_GPU2_BUSY	85
#define MX50_INT_UART5		86
#define MX50_INT_FEC		87
#define MX50_INT_OWIRE		88
#define MX50_INT_CTI1_TG2	89
#define MX50_INT_SJC		90
#define MX50_INT_DCP_CHAN1_3	91
#define MX50_INT_DCP_CHAN0	92
#define MX50_INT_PWM2		94
#define MX50_INT_RNGB		97
#define MX50_INT_CTI1_TG3	98
#define MX50_INT_RAWNAND_BCH	100
#define MX50_INT_RAWNAND_GPMI	102
#define MX50_INT_GPIO5_LOW	103
#define MX50_INT_GPIO5_HIGH	104
#define MX50_INT_GPIO6_LOW	105
#define MX50_INT_GPIO6_HIGH	106
#define MX50_INT_MSHC		109
#define MX50_INT_APBHDMA_CHAN0	110
#define MX50_INT_APBHDMA_CHAN1	111
#define MX50_INT_APBHDMA_CHAN2	112
#define MX50_INT_APBHDMA_CHAN3	113
#define MX50_INT_APBHDMA_CHAN4	114
#define MX50_INT_APBHDMA_CHAN5	115
#define MX50_INT_APBHDMA_CHAN6	116
#define MX50_INT_APBHDMA_CHAN7	117
#if !defined(__ASSEMBLY__) && !defined(__MXC_BOOT_UNCOMPRESS)
extern int mx50_revision(void);
