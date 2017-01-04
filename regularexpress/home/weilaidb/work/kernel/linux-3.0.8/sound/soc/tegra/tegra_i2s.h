#define __TEGRA_I2S_H__
#define TEGRA_I2S_CTRL					0x00
#define TEGRA_I2S_STATUS				0x04
#define TEGRA_I2S_TIMING				0x08
#define TEGRA_I2S_FIFO_SCR				0x0c
#define TEGRA_I2S_PCM_CTRL				0x10
#define TEGRA_I2S_NW_CTRL				0x14
#define TEGRA_I2S_TDM_CTRL				0x20
#define TEGRA_I2S_TDM_TX_RX_CTRL			0x24
#define TEGRA_I2S_FIFO1					0x40
#define TEGRA_I2S_FIFO2					0x80
#define TEGRA_I2S_CTRL_FIFO2_TX_ENABLE			(1 << 30)
#define TEGRA_I2S_CTRL_FIFO1_ENABLE			(1 << 29)
#define TEGRA_I2S_CTRL_FIFO2_ENABLE			(1 << 28)
#define TEGRA_I2S_CTRL_FIFO1_RX_ENABLE			(1 << 27)
#define TEGRA_I2S_CTRL_FIFO_LPBK_ENABLE			(1 << 26)
#define TEGRA_I2S_CTRL_MASTER_ENABLE			(1 << 25)
#define TEGRA_I2S_LRCK_LEFT_LOW				0
#define TEGRA_I2S_LRCK_RIGHT_LOW			1
#define TEGRA_I2S_CTRL_LRCK_SHIFT			24
#define TEGRA_I2S_CTRL_LRCK_MASK			(1                        << TEGRA_I2S_CTRL_LRCK_SHIFT)
#define TEGRA_I2S_CTRL_LRCK_L_LOW			(TEGRA_I2S_LRCK_LEFT_LOW  << TEGRA_I2S_CTRL_LRCK_SHIFT)
#define TEGRA_I2S_CTRL_LRCK_R_LOW			(TEGRA_I2S_LRCK_RIGHT_LOW << TEGRA_I2S_CTRL_LRCK_SHIFT)
#define TEGRA_I2S_BIT_FORMAT_I2S			0
#define TEGRA_I2S_BIT_FORMAT_RJM			1
#define TEGRA_I2S_BIT_FORMAT_LJM			2
#define TEGRA_I2S_BIT_FORMAT_DSP			3
#define TEGRA_I2S_CTRL_BIT_FORMAT_SHIFT			10
#define TEGRA_I2S_CTRL_BIT_FORMAT_MASK			(3                        << TEGRA_I2S_CTRL_BIT_FORMAT_SHIFT)
#define TEGRA_I2S_CTRL_BIT_FORMAT_I2S			(TEGRA_I2S_BIT_FORMAT_I2S << TEGRA_I2S_CTRL_BIT_FORMAT_SHIFT)
#define TEGRA_I2S_CTRL_BIT_FORMAT_RJM			(TEGRA_I2S_BIT_FORMAT_RJM << TEGRA_I2S_CTRL_BIT_FORMAT_SHIFT)
#define TEGRA_I2S_CTRL_BIT_FORMAT_LJM			(TEGRA_I2S_BIT_FORMAT_LJM << TEGRA_I2S_CTRL_BIT_FORMAT_SHIFT)
#define TEGRA_I2S_CTRL_BIT_FORMAT_DSP			(TEGRA_I2S_BIT_FORMAT_DSP << TEGRA_I2S_CTRL_BIT_FORMAT_SHIFT)
#define TEGRA_I2S_BIT_SIZE_16				0
#define TEGRA_I2S_BIT_SIZE_20				1
#define TEGRA_I2S_BIT_SIZE_24				2
#define TEGRA_I2S_BIT_SIZE_32				3
#define TEGRA_I2S_CTRL_BIT_SIZE_SHIFT			8
#define TEGRA_I2S_CTRL_BIT_SIZE_MASK			(3                     << TEGRA_I2S_CTRL_BIT_SIZE_SHIFT)
#define TEGRA_I2S_CTRL_BIT_SIZE_16			(TEGRA_I2S_BIT_SIZE_16 << TEGRA_I2S_CTRL_BIT_SIZE_SHIFT)
#define TEGRA_I2S_CTRL_BIT_SIZE_20			(TEGRA_I2S_BIT_SIZE_20 << TEGRA_I2S_CTRL_BIT_SIZE_SHIFT)
#define TEGRA_I2S_CTRL_BIT_SIZE_24			(TEGRA_I2S_BIT_SIZE_24 << TEGRA_I2S_CTRL_BIT_SIZE_SHIFT)
#define TEGRA_I2S_CTRL_BIT_SIZE_32			(TEGRA_I2S_BIT_SIZE_32 << TEGRA_I2S_CTRL_BIT_SIZE_SHIFT)
#define TEGRA_I2S_FIFO_16_LSB				0
#define TEGRA_I2S_FIFO_20_LSB				1
#define TEGRA_I2S_FIFO_24_LSB				2
#define TEGRA_I2S_FIFO_32				3
#define TEGRA_I2S_FIFO_PACKED				7
#define TEGRA_I2S_CTRL_FIFO_FORMAT_SHIFT		4
#define TEGRA_I2S_CTRL_FIFO_FORMAT_MASK			(7                     << TEGRA_I2S_CTRL_FIFO_FORMAT_SHIFT)
#define TEGRA_I2S_CTRL_FIFO_FORMAT_16_LSB		(TEGRA_I2S_FIFO_16_LSB << TEGRA_I2S_CTRL_FIFO_FORMAT_SHIFT)
#define TEGRA_I2S_CTRL_FIFO_FORMAT_20_LSB		(TEGRA_I2S_FIFO_20_LSB << TEGRA_I2S_CTRL_FIFO_FORMAT_SHIFT)
#define TEGRA_I2S_CTRL_FIFO_FORMAT_24_LSB		(TEGRA_I2S_FIFO_24_LSB << TEGRA_I2S_CTRL_FIFO_FORMAT_SHIFT)
#define TEGRA_I2S_CTRL_FIFO_FORMAT_32			(TEGRA_I2S_FIFO_32     << TEGRA_I2S_CTRL_FIFO_FORMAT_SHIFT)
#define TEGRA_I2S_CTRL_FIFO_FORMAT_PACKED		(TEGRA_I2S_FIFO_PACKED << TEGRA_I2S_CTRL_FIFO_FORMAT_SHIFT)
#define TEGRA_I2S_CTRL_IE_FIFO1_ERR			(1 << 3)
#define TEGRA_I2S_CTRL_IE_FIFO2_ERR			(1 << 2)
#define TEGRA_I2S_CTRL_QE_FIFO1				(1 << 1)
#define TEGRA_I2S_CTRL_QE_FIFO2				(1 << 0)
#define TEGRA_I2S_STATUS_FIFO1_RDY			(1 << 31)
#define TEGRA_I2S_STATUS_FIFO2_RDY			(1 << 30)
#define TEGRA_I2S_STATUS_FIFO1_BSY			(1 << 29)
#define TEGRA_I2S_STATUS_FIFO2_BSY			(1 << 28)
#define TEGRA_I2S_STATUS_FIFO1_ERR			(1 << 3)
#define TEGRA_I2S_STATUS_FIFO2_ERR			(1 << 2)
#define TEGRA_I2S_STATUS_QS_FIFO1			(1 << 1)
#define TEGRA_I2S_STATUS_QS_FIFO2			(1 << 0)
#define TEGRA_I2S_TIMING_NON_SYM_ENABLE			(1 << 12)
#define TEGRA_I2S_TIMING_CHANNEL_BIT_COUNT_SHIFT	0
#define TEGRA_I2S_TIMING_CHANNEL_BIT_COUNT_MASK_US	0x7fff
#define TEGRA_I2S_TIMING_CHANNEL_BIT_COUNT_MASK		(TEGRA_I2S_TIMING_CHANNEL_BIT_COUNT_MASK_US << TEGRA_I2S_TIMING_CHANNEL_BIT_COUNT_SHIFT)
#define TEGRA_I2S_FIFO_SCR_FIFO2_FULL_EMPTY_COUNT_SHIFT	24
#define TEGRA_I2S_FIFO_SCR_FIFO1_FULL_EMPTY_COUNT_SHIFT	16
#define TEGRA_I2S_FIFO_SCR_FIFO_FULL_EMPTY_COUNT_MASK	0x3f
#define TEGRA_I2S_FIFO_SCR_FIFO2_CLR			(1 << 12)
#define TEGRA_I2S_FIFO_SCR_FIFO1_CLR			(1 << 8)
#define TEGRA_I2S_FIFO_ATN_LVL_ONE_SLOT			0
#define TEGRA_I2S_FIFO_ATN_LVL_FOUR_SLOTS		1
#define TEGRA_I2S_FIFO_ATN_LVL_EIGHT_SLOTS		2
#define TEGRA_I2S_FIFO_ATN_LVL_TWELVE_SLOTS		3
#define TEGRA_I2S_FIFO_SCR_FIFO2_ATN_LVL_SHIFT		4
#define TEGRA_I2S_FIFO_SCR_FIFO2_ATN_LVL_MASK		(3 << TEGRA_I2S_FIFO_SCR_FIFO2_ATN_LVL_SHIFT)
#define TEGRA_I2S_FIFO_SCR_FIFO2_ATN_LVL_ONE_SLOT	(TEGRA_I2S_FIFO_ATN_LVL_ONE_SLOT     << TEGRA_I2S_FIFO_SCR_FIFO2_ATN_LVL_SHIFT)
#define TEGRA_I2S_FIFO_SCR_FIFO2_ATN_LVL_FOUR_SLOTS	(TEGRA_I2S_FIFO_ATN_LVL_FOUR_SLOTS   << TEGRA_I2S_FIFO_SCR_FIFO2_ATN_LVL_SHIFT)
#define TEGRA_I2S_FIFO_SCR_FIFO2_ATN_LVL_EIGHT_SLOTS	(TEGRA_I2S_FIFO_ATN_LVL_EIGHT_SLOTS  << TEGRA_I2S_FIFO_SCR_FIFO2_ATN_LVL_SHIFT)
#define TEGRA_I2S_FIFO_SCR_FIFO2_ATN_LVL_TWELVE_SLOTS	(TEGRA_I2S_FIFO_ATN_LVL_TWELVE_SLOTS << TEGRA_I2S_FIFO_SCR_FIFO2_ATN_LVL_SHIFT)
#define TEGRA_I2S_FIFO_SCR_FIFO1_ATN_LVL_SHIFT		0
#define TEGRA_I2S_FIFO_SCR_FIFO1_ATN_LVL_MASK		(3 << TEGRA_I2S_FIFO_SCR_FIFO1_ATN_LVL_SHIFT)
#define TEGRA_I2S_FIFO_SCR_FIFO1_ATN_LVL_ONE_SLOT	(TEGRA_I2S_FIFO_ATN_LVL_ONE_SLOT     << TEGRA_I2S_FIFO_SCR_FIFO1_ATN_LVL_SHIFT)
#define TEGRA_I2S_FIFO_SCR_FIFO1_ATN_LVL_FOUR_SLOTS	(TEGRA_I2S_FIFO_ATN_LVL_FOUR_SLOTS   << TEGRA_I2S_FIFO_SCR_FIFO1_ATN_LVL_SHIFT)
#define TEGRA_I2S_FIFO_SCR_FIFO1_ATN_LVL_EIGHT_SLOTS	(TEGRA_I2S_FIFO_ATN_LVL_EIGHT_SLOTS  << TEGRA_I2S_FIFO_SCR_FIFO1_ATN_LVL_SHIFT)
#define TEGRA_I2S_FIFO_SCR_FIFO1_ATN_LVL_TWELVE_SLOTS	(TEGRA_I2S_FIFO_ATN_LVL_TWELVE_SLOTS << TEGRA_I2S_FIFO_SCR_FIFO1_ATN_LVL_SHIFT)
struct tegra_i2s ;
