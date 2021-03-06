#define __TEGRA_DAS_H__
#define TEGRA_DAS_DAP_CTRL_SEL				0x00
#define TEGRA_DAS_DAP_CTRL_SEL_COUNT			5
#define TEGRA_DAS_DAP_CTRL_SEL_STRIDE			4
#define TEGRA_DAS_DAP_CTRL_SEL_DAP_MS_SEL_P		31
#define TEGRA_DAS_DAP_CTRL_SEL_DAP_MS_SEL_S		1
#define TEGRA_DAS_DAP_CTRL_SEL_DAP_SDATA1_TX_RX_P	30
#define TEGRA_DAS_DAP_CTRL_SEL_DAP_SDATA1_TX_RX_S	1
#define TEGRA_DAS_DAP_CTRL_SEL_DAP_SDATA2_TX_RX_P	29
#define TEGRA_DAS_DAP_CTRL_SEL_DAP_SDATA2_TX_RX_S	1
#define TEGRA_DAS_DAP_CTRL_SEL_DAP_CTRL_SEL_P		0
#define TEGRA_DAS_DAP_CTRL_SEL_DAP_CTRL_SEL_S		5
#define TEGRA_DAS_DAP_SEL_DAC1	0
#define TEGRA_DAS_DAP_SEL_DAC2	1
#define TEGRA_DAS_DAP_SEL_DAC3	2
#define TEGRA_DAS_DAP_SEL_DAP1	16
#define TEGRA_DAS_DAP_SEL_DAP2	17
#define TEGRA_DAS_DAP_SEL_DAP3	18
#define TEGRA_DAS_DAP_SEL_DAP4	19
#define TEGRA_DAS_DAP_SEL_DAP5	20
#define TEGRA_DAS_DAC_INPUT_DATA_CLK_SEL			0x40
#define TEGRA_DAS_DAC_INPUT_DATA_CLK_SEL_COUNT			3
#define TEGRA_DAS_DAC_INPUT_DATA_CLK_SEL_STRIDE			4
#define TEGRA_DAS_DAC_INPUT_DATA_CLK_SEL_DAC_SDATA2_SEL_P	28
#define TEGRA_DAS_DAC_INPUT_DATA_CLK_SEL_DAC_SDATA2_SEL_S	4
#define TEGRA_DAS_DAC_INPUT_DATA_CLK_SEL_DAC_SDATA1_SEL_P	24
#define TEGRA_DAS_DAC_INPUT_DATA_CLK_SEL_DAC_SDATA1_SEL_S	4
#define TEGRA_DAS_DAC_INPUT_DATA_CLK_SEL_DAC_CLK_SEL_P		0
#define TEGRA_DAS_DAC_INPUT_DATA_CLK_SEL_DAC_CLK_SEL_S		4
#define TEGRA_DAS_DAC_SEL_DAP1	0
#define TEGRA_DAS_DAC_SEL_DAP2	1
#define TEGRA_DAS_DAC_SEL_DAP3	2
#define TEGRA_DAS_DAC_SEL_DAP4	3
#define TEGRA_DAS_DAC_SEL_DAP5	4
#define TEGRA_DAS_DAP_ID_1 0
#define TEGRA_DAS_DAP_ID_2 1
#define TEGRA_DAS_DAP_ID_3 2
#define TEGRA_DAS_DAP_ID_4 3
#define TEGRA_DAS_DAP_ID_5 4
#define TEGRA_DAS_DAC_ID_1 0
#define TEGRA_DAS_DAC_ID_2 1
#define TEGRA_DAS_DAC_ID_3 2
struct tegra_das ;
extern int tegra_das_connect_dap_to_dac(int dap_id, int dac_sel);
extern int tegra_das_connect_dap_to_dap(int dap_id, int other_dap_sel,
int master, int sdata1rx,
int sdata2rx);
extern int tegra_das_connect_dac_to_dap(int dac_id, int dap_sel);
