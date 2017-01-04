#define __VX222_H
struct snd_vx222 ;
#define VX2_AKM_LEVEL_MAX	0x93
extern struct snd_vx_ops vx222_ops;
extern struct snd_vx_ops vx222_old_ops;
#define VX_RESET_DMA_REGISTER_OFFSET    0x00000008
#define VX_INTCSR_VALUE                 0x00000001
#define VX_PCI_INTERRUPT_MASK           0x00000040
#define VX_CDSP_TEST1_MASK              0x00000080
#define VX_CDSP_TOR1_MASK               0x00000040
#define VX_CDSP_TOR2_MASK               0x00000020
#define VX_CDSP_RESERVED0_0_MASK        0x00000010
#define VX_CDSP_CODEC_RESET_MASK        0x00000008
#define VX_CDSP_VALID_IRQ_MASK          0x00000004
#define VX_CDSP_TEST0_MASK              0x00000002
#define VX_CDSP_DSP_RESET_MASK          0x00000001
#define VX_CDSP_GPIO_OUT_MASK           0x00000060
#define VX_GPIO_OUT_BIT_OFFSET          5
#define VX_CFG_SYNCDSP_MASK             0x00000080
#define VX_CFG_RESERVED0_0_MASK         0x00000040
#define VX_CFG_RESERVED1_0_MASK         0x00000020
#define VX_CFG_RESERVED2_0_MASK         0x00000010
#define VX_CFG_DATAIN_SEL_MASK          0x00000008
#define VX_CFG_RESERVED3_0_MASK         0x00000004
#define VX_CFG_RESERVED4_0_MASK         0x00000002
#define VX_CFG_CLOCKIN_SEL_MASK         0x00000001
#define VX_STATUS_DATA_XICOR_MASK       0x00000080
#define VX_STATUS_VAL_TEST1_MASK        0x00000040
#define VX_STATUS_VAL_TEST0_MASK        0x00000020
#define VX_STATUS_RESERVED0_MASK        0x00000010
#define VX_STATUS_VAL_TOR1_MASK         0x00000008
#define VX_STATUS_VAL_TOR0_MASK         0x00000004
#define VX_STATUS_LEVEL_IN_MASK         0x00000002
#define VX_STATUS_MEMIRQ_MASK           0x00000001
#define VX_STATUS_GPIO_IN_MASK          0x0000000C
#define VX_GPIO_IN_BIT_OFFSET           0
#define MICRO_SELECT_INPUT_NORM        0x00
#define MICRO_SELECT_INPUT_MUTE        0x01
#define MICRO_SELECT_INPUT_LIMIT       0x02
#define MICRO_SELECT_INPUT_MASK        0x03
#define MICRO_SELECT_PREAMPLI_G_0      0x00
#define MICRO_SELECT_PREAMPLI_G_1      0x04
#define MICRO_SELECT_PREAMPLI_G_2      0x08
#define MICRO_SELECT_PREAMPLI_G_3      0x0C
#define MICRO_SELECT_PREAMPLI_MASK     0x0C
#define MICRO_SELECT_PREAMPLI_OFFSET   2
#define MICRO_SELECT_RAISE_COMPR       0x10
#define MICRO_SELECT_NOISE_T_52DB      0x00
#define MICRO_SELECT_NOISE_T_42DB      0x20
#define MICRO_SELECT_NOISE_T_32DB      0x40
#define MICRO_SELECT_NOISE_T_MASK      0x60
#define MICRO_SELECT_PHANTOM_ALIM      0x80
