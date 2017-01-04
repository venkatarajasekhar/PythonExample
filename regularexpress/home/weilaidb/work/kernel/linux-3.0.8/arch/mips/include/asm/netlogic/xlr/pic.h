#define _ASM_NLM_XLR_PIC_H
#define PIC_CLKS_PER_SEC		66666666ULL
#define PIC_IRT_WD_INDEX		0
#define PIC_IRT_TIMER_0_INDEX		1
#define PIC_IRT_TIMER_1_INDEX		2
#define PIC_IRT_TIMER_2_INDEX		3
#define PIC_IRT_TIMER_3_INDEX		4
#define PIC_IRT_TIMER_4_INDEX		5
#define PIC_IRT_TIMER_5_INDEX		6
#define PIC_IRT_TIMER_6_INDEX		7
#define PIC_IRT_TIMER_7_INDEX		8
#define PIC_IRT_CLOCK_INDEX		PIC_IRT_TIMER_7_INDEX
#define PIC_IRT_UART_0_INDEX		9
#define PIC_IRT_UART_1_INDEX		10
#define PIC_IRT_I2C_0_INDEX		11
#define PIC_IRT_I2C_1_INDEX		12
#define PIC_IRT_PCMCIA_INDEX		13
#define PIC_IRT_GPIO_INDEX		14
#define PIC_IRT_HYPER_INDEX		15
#define PIC_IRT_PCIX_INDEX		16
#define PIC_IRT_CDE_INDEX		15
#define PIC_IRT_BRIDGE_TB_XLS_INDEX	16
#define PIC_IRT_GMAC0_INDEX		17
#define PIC_IRT_GMAC1_INDEX		18
#define PIC_IRT_GMAC2_INDEX		19
#define PIC_IRT_GMAC3_INDEX		20
#define PIC_IRT_XGS0_INDEX		21
#define PIC_IRT_XGS1_INDEX		22
#define PIC_IRT_HYPER_FATAL_INDEX	23
#define PIC_IRT_PCIX_FATAL_INDEX	24
#define PIC_IRT_BRIDGE_AERR_INDEX	25
#define PIC_IRT_BRIDGE_BERR_INDEX	26
#define PIC_IRT_BRIDGE_TB_XLR_INDEX	27
#define PIC_IRT_BRIDGE_AERR_NMI_INDEX	28
#define PIC_IRT_GMAC4_INDEX		21
#define PIC_IRT_GMAC5_INDEX		22
#define PIC_IRT_GMAC6_INDEX		23
#define PIC_IRT_GMAC7_INDEX		24
#define PIC_IRT_BRIDGE_ERR_INDEX	25
#define PIC_IRT_PCIE_LINK0_INDEX	26
#define PIC_IRT_PCIE_LINK1_INDEX	27
#define PIC_IRT_PCIE_LINK2_INDEX	23
#define PIC_IRT_PCIE_LINK3_INDEX	24
#define PIC_IRT_PCIE_XLSB0_LINK2_INDEX	28
#define PIC_IRT_PCIE_XLSB0_LINK3_INDEX	29
#define PIC_IRT_SRIO_LINK0_INDEX	26
#define PIC_IRT_SRIO_LINK1_INDEX	27
#define PIC_IRT_SRIO_LINK2_INDEX	28
#define PIC_IRT_SRIO_LINK3_INDEX	29
#define PIC_IRT_PCIE_INT_INDEX		28
#define PIC_IRT_PCIE_FATAL_INDEX	29
#define PIC_IRT_GPIO_B_INDEX		30
#define PIC_IRT_USB_INDEX		31
#define PIC_NUM_IRTS			32
#define PIC_CLOCK_TIMER			7
#define PIC_CTRL			0x00
#define PIC_IPI				0x04
#define PIC_INT_ACK			0x06
#define WD_MAX_VAL_0			0x08
#define WD_MAX_VAL_1			0x09
#define WD_MASK_0			0x0a
#define WD_MASK_1			0x0b
#define WD_HEARBEAT_0			0x0c
#define WD_HEARBEAT_1			0x0d
#define PIC_IRT_0_BASE			0x40
#define PIC_IRT_1_BASE			0x80
#define PIC_TIMER_MAXVAL_0_BASE		0x100
#define PIC_TIMER_MAXVAL_1_BASE		0x110
#define PIC_TIMER_COUNT_0_BASE		0x120
#define PIC_TIMER_COUNT_1_BASE		0x130
#define PIC_IRT_0(picintr)      (PIC_IRT_0_BASE + (picintr))
#define PIC_IRT_1(picintr)	(PIC_IRT_1_BASE + (picintr))
#define PIC_TIMER_MAXVAL_0(i)	(PIC_TIMER_MAXVAL_0_BASE + (i))
#define PIC_TIMER_MAXVAL_1(i)	(PIC_TIMER_MAXVAL_1_BASE + (i))
#define PIC_TIMER_COUNT_0(i)	(PIC_TIMER_COUNT_0_BASE + (i))
#define PIC_TIMER_COUNT_1(i)	(PIC_TIMER_COUNT_0_BASE + (i))
#define PIC_IRQ_BASE            8
#define PIC_INTR_TO_IRQ(i)      (PIC_IRQ_BASE + (i))
#define PIC_IRQ_TO_INTR(i)      ((i) - PIC_IRQ_BASE)
#define PIC_IRT_FIRST_IRQ	PIC_IRQ_BASE
#define PIC_WD_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_WD_INDEX)
#define PIC_TIMER_0_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_TIMER_0_INDEX)
#define PIC_TIMER_1_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_TIMER_1_INDEX)
#define PIC_TIMER_2_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_TIMER_2_INDEX)
#define PIC_TIMER_3_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_TIMER_3_INDEX)
#define PIC_TIMER_4_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_TIMER_4_INDEX)
#define PIC_TIMER_5_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_TIMER_5_INDEX)
#define PIC_TIMER_6_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_TIMER_6_INDEX)
#define PIC_TIMER_7_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_TIMER_7_INDEX)
#define PIC_CLOCK_IRQ		(PIC_TIMER_7_IRQ)
#define PIC_UART_0_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_UART_0_INDEX)
#define PIC_UART_1_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_UART_1_INDEX)
#define PIC_I2C_0_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_I2C_0_INDEX)
#define PIC_I2C_1_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_I2C_1_INDEX)
#define PIC_PCMCIA_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_PCMCIA_INDEX)
#define PIC_GPIO_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_GPIO_INDEX)
#define PIC_HYPER_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_HYPER_INDEX)
#define PIC_PCIX_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_PCIX_INDEX)
#define PIC_CDE_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_CDE_INDEX)
#define PIC_BRIDGE_TB_XLS_IRQ	PIC_INTR_TO_IRQ(PIC_IRT_BRIDGE_TB_XLS_INDEX)
#define PIC_GMAC_0_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_GMAC0_INDEX)
#define PIC_GMAC_1_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_GMAC1_INDEX)
#define PIC_GMAC_2_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_GMAC2_INDEX)
#define PIC_GMAC_3_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_GMAC3_INDEX)
#define PIC_XGS_0_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_XGS0_INDEX)
#define PIC_XGS_1_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_XGS1_INDEX)
#define PIC_HYPER_FATAL_IRQ	PIC_INTR_TO_IRQ(PIC_IRT_HYPER_FATAL_INDEX)
#define PIC_PCIX_FATAL_IRQ	PIC_INTR_TO_IRQ(PIC_IRT_PCIX_FATAL_INDEX)
#define PIC_BRIDGE_AERR_IRQ	PIC_INTR_TO_IRQ(PIC_IRT_BRIDGE_AERR_INDEX)
#define PIC_BRIDGE_BERR_IRQ	PIC_INTR_TO_IRQ(PIC_IRT_BRIDGE_BERR_INDEX)
#define PIC_BRIDGE_TB_XLR_IRQ	PIC_INTR_TO_IRQ(PIC_IRT_BRIDGE_TB_XLR_INDEX)
#define PIC_BRIDGE_AERR_NMI_IRQ	PIC_INTR_TO_IRQ(PIC_IRT_BRIDGE_AERR_NMI_INDEX)
#define PIC_GMAC_4_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_GMAC4_INDEX)
#define PIC_GMAC_5_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_GMAC5_INDEX)
#define PIC_GMAC_6_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_GMAC6_INDEX)
#define PIC_GMAC_7_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_GMAC7_INDEX)
#define PIC_BRIDGE_ERR_IRQ	PIC_INTR_TO_IRQ(PIC_IRT_BRIDGE_ERR_INDEX)
#define PIC_PCIE_LINK0_IRQ	PIC_INTR_TO_IRQ(PIC_IRT_PCIE_LINK0_INDEX)
#define PIC_PCIE_LINK1_IRQ	PIC_INTR_TO_IRQ(PIC_IRT_PCIE_LINK1_INDEX)
#define PIC_PCIE_LINK2_IRQ	PIC_INTR_TO_IRQ(PIC_IRT_PCIE_LINK2_INDEX)
#define PIC_PCIE_LINK3_IRQ	PIC_INTR_TO_IRQ(PIC_IRT_PCIE_LINK3_INDEX)
#define PIC_PCIE_XLSB0_LINK2_IRQ PIC_INTR_TO_IRQ(PIC_IRT_PCIE_XLSB0_LINK2_INDEX)
#define PIC_PCIE_XLSB0_LINK3_IRQ PIC_INTR_TO_IRQ(PIC_IRT_PCIE_XLSB0_LINK3_INDEX)
#define PIC_SRIO_LINK0_IRQ	PIC_INTR_TO_IRQ(PIC_IRT_SRIO_LINK0_INDEX)
#define PIC_SRIO_LINK1_IRQ	PIC_INTR_TO_IRQ(PIC_IRT_SRIO_LINK1_INDEX)
#define PIC_SRIO_LINK2_IRQ	PIC_INTR_TO_IRQ(PIC_IRT_SRIO_LINK2_INDEX)
#define PIC_SRIO_LINK3_IRQ	PIC_INTR_TO_IRQ(PIC_IRT_SRIO_LINK3_INDEX)
#define PIC_PCIE_INT_IRQ	PIC_INTR_TO_IRQ(PIC_IRT_PCIE_INT__INDEX)
#define PIC_PCIE_FATAL_IRQ	PIC_INTR_TO_IRQ(PIC_IRT_PCIE_FATAL_INDEX)
#define PIC_GPIO_B_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_GPIO_B_INDEX)
#define PIC_USB_IRQ		PIC_INTR_TO_IRQ(PIC_IRT_USB_INDEX)
#define PIC_IRT_LAST_IRQ	PIC_USB_IRQ
static inline void pic_send_ipi(u32 ipi)
static inline u32 pic_read_control(void)
static inline void pic_write_control(u32 control)
static inline void pic_update_control(u32 control)
#define PIC_IRQ_IS_EDGE_TRIGGERED(irq)	(((irq) >= PIC_TIMER_0_IRQ) && \
((irq) <= PIC_TIMER_7_IRQ))
#define PIC_IRQ_IS_IRT(irq)		(((irq) >= PIC_IRT_FIRST_IRQ) && \
((irq) <= PIC_IRT_LAST_IRQ))
