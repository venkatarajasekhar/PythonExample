#define _LINUX_O2MICRO_H
#define O2_MUX_CONTROL		0x90
#define  O2_MUX_RING_OUT	0x0000000f
#define  O2_MUX_SKTB_ACTV	0x000000f0
#define  O2_MUX_SCTA_ACTV_ENA	0x00000100
#define  O2_MUX_SCTB_ACTV_ENA	0x00000200
#define  O2_MUX_SER_IRQ_ROUTE	0x0000e000
#define  O2_MUX_SER_PCI		0x00010000
#define  O2_MUX_SKTA_TURBO	0x000c0000
#define  O2_MUX_SKTB_TURBO	0x00300000
#define  O2_MUX_AUX_VCC_3V	0x00400000
#define  O2_MUX_PCI_VCC_5V	0x00800000
#define  O2_MUX_PME_MUX		0x0f000000
#define O2_MODE_A		0x38
#define O2_MODE_A_2		0x26
#define  O2_MODE_A_CD_PULSE	0x04
#define  O2_MODE_A_SUSP_EDGE	0x08
#define  O2_MODE_A_HOST_SUSP	0x10
#define  O2_MODE_A_PWR_MASK	0x60
#define  O2_MODE_A_QUIET	0x80
#define O2_MODE_B		0x39
#define O2_MODE_B_2		0x2e
#define  O2_MODE_B_IDENT	0x03
#define  O2_MODE_B_ID_BSTEP	0x00
#define  O2_MODE_B_ID_CSTEP	0x01
#define  O2_MODE_B_ID_O2	0x02
#define  O2_MODE_B_VS1		0x04
#define  O2_MODE_B_VS2		0x08
#define  O2_MODE_B_IRQ15_RI	0x80
#define O2_MODE_C		0x3a
#define  O2_MODE_C_DREQ_MASK	0x03
#define  O2_MODE_C_DREQ_INPACK	0x01
#define  O2_MODE_C_DREQ_WP	0x02
#define  O2_MODE_C_DREQ_BVD2	0x03
#define  O2_MODE_C_ZVIDEO	0x08
#define  O2_MODE_C_IREQ_SEL	0x30
#define  O2_MODE_C_MGMT_SEL	0xc0
#define O2_MODE_D		0x3b
#define  O2_MODE_D_IRQ_MODE	0x03
#define  O2_MODE_D_PCI_CLKRUN	0x04
#define  O2_MODE_D_CB_CLKRUN	0x08
#define  O2_MODE_D_SKT_ACTV	0x20
#define  O2_MODE_D_PCI_FIFO	0x40
#define  O2_MODE_D_W97_IRQ	0x40
#define  O2_MODE_D_ISA_IRQ	0x80
#define O2_MHPG_DMA		0x3c
#define  O2_MHPG_CHANNEL	0x07
#define  O2_MHPG_CINT_ENA	0x08
#define  O2_MHPG_CSC_ENA	0x10
#define O2_FIFO_ENA		0x3d
#define  O2_FIFO_ZVIDEO_3	0x08
#define  O2_FIFO_PCI_FIFO	0x10
#define  O2_FIFO_POSTWR		0x40
#define  O2_FIFO_BUFFER		0x80
#define O2_MODE_E		0x3e
#define  O2_MODE_E_MHPG_DMA	0x01
#define  O2_MODE_E_SPKR_OUT	0x02
#define  O2_MODE_E_LED_OUT	0x08
#define  O2_MODE_E_SKTA_ACTV	0x10
#define O2_RESERVED1		0x94
#define O2_RESERVED2		0xD4
#define O2_RES_READ_PREFETCH	0x02
#define O2_RES_WRITE_BURST	0x08
static int o2micro_override(struct yenta_socket *socket)
static void o2micro_restore_state(struct yenta_socket *socket)
