#define __MACH_IOMUX_V3_H__
typedef u64 iomux_v3_cfg_t;
#define MUX_CTRL_OFS_SHIFT	0
#define MUX_CTRL_OFS_MASK	((iomux_v3_cfg_t)0xfff << MUX_CTRL_OFS_SHIFT)
#define MUX_PAD_CTRL_OFS_SHIFT	12
#define MUX_PAD_CTRL_OFS_MASK	((iomux_v3_cfg_t)0xfff << MUX_PAD_CTRL_OFS_SHIFT)
#define MUX_SEL_INPUT_OFS_SHIFT	24
#define MUX_SEL_INPUT_OFS_MASK	((iomux_v3_cfg_t)0xfff << MUX_SEL_INPUT_OFS_SHIFT)
#define MUX_MODE_SHIFT		36
#define MUX_MODE_MASK		((iomux_v3_cfg_t)0x1f << MUX_MODE_SHIFT)
#define MUX_PAD_CTRL_SHIFT	41
#define MUX_PAD_CTRL_MASK	((iomux_v3_cfg_t)0x1ffff << MUX_PAD_CTRL_SHIFT)
#define MUX_SEL_INPUT_SHIFT	58
#define MUX_SEL_INPUT_MASK	((iomux_v3_cfg_t)0xf << MUX_SEL_INPUT_SHIFT)
#define MUX_PAD_CTRL(x)		((iomux_v3_cfg_t)(x) << MUX_PAD_CTRL_SHIFT)
#define IOMUX_PAD(_pad_ctrl_ofs, _mux_ctrl_ofs, _mux_mode, _sel_input_ofs, \
_sel_input, _pad_ctrl)					\
(((iomux_v3_cfg_t)(_mux_ctrl_ofs) << MUX_CTRL_OFS_SHIFT) |	\
((iomux_v3_cfg_t)(_mux_mode) << MUX_MODE_SHIFT) |	\
((iomux_v3_cfg_t)(_pad_ctrl_ofs) << MUX_PAD_CTRL_OFS_SHIFT) | \
((iomux_v3_cfg_t)(_pad_ctrl) << MUX_PAD_CTRL_SHIFT) |	\
((iomux_v3_cfg_t)(_sel_input_ofs) << MUX_SEL_INPUT_OFS_SHIFT) | \
((iomux_v3_cfg_t)(_sel_input) << MUX_SEL_INPUT_SHIFT))
#define NO_PAD_CTRL			(1 << 16)
#define PAD_CTL_DVS			(1 << 13)
#define PAD_CTL_HYS			(1 << 8)
#define PAD_CTL_PKE			(1 << 7)
#define PAD_CTL_PUE			(1 << 6)
#define PAD_CTL_PUS_100K_DOWN		(0 << 4)
#define PAD_CTL_PUS_47K_UP		(1 << 4)
#define PAD_CTL_PUS_100K_UP		(2 << 4)
#define PAD_CTL_PUS_22K_UP		(3 << 4)
#define PAD_CTL_ODE			(1 << 3)
#define PAD_CTL_DSE_LOW			(0 << 1)
#define PAD_CTL_DSE_MED			(1 << 1)
#define PAD_CTL_DSE_HIGH		(2 << 1)
#define PAD_CTL_DSE_MAX			(3 << 1)
#define PAD_CTL_SRE_FAST		(1 << 0)
#define PAD_CTL_SRE_SLOW		(0 << 0)
#define IOMUX_CONFIG_SION		(0x1 << 4)
#define MX51_NUM_GPIO_PORT	4
#define GPIO_PIN_MASK 0x1f
#define GPIO_PORT_SHIFT 5
#define GPIO_PORT_MASK (0x7 << GPIO_PORT_SHIFT)
#define GPIO_PORTA	(0 << GPIO_PORT_SHIFT)
#define GPIO_PORTB	(1 << GPIO_PORT_SHIFT)
#define GPIO_PORTC	(2 << GPIO_PORT_SHIFT)
#define GPIO_PORTD	(3 << GPIO_PORT_SHIFT)
#define GPIO_PORTE	(4 << GPIO_PORT_SHIFT)
#define GPIO_PORTF	(5 << GPIO_PORT_SHIFT)
int mxc_iomux_v3_setup_pad(iomux_v3_cfg_t pad);
int mxc_iomux_v3_setup_multiple_pads(iomux_v3_cfg_t *pad_list, unsigned count);
void mxc_iomux_v3_init(void __iomem *iomux_v3_base);
