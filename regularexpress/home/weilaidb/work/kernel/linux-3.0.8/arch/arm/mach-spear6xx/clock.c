static struct clk osc_32k_clk = ;
static struct clk osc_30m_clk = ;
static struct clk rtc_clk = ;
static struct pll_clk_masks pll1_masks = ;
static struct pll_clk_config pll1_config = ;
struct pll_rate_tbl pll_rtbl[] = ;
static struct clk pll1_clk = ;
static struct clk pll3_48m_clk = ;
static struct clk wdt_clk = ;
static struct clk cpu_clk = ;
static struct bus_clk_masks ahb_masks = ;
static struct bus_clk_config ahb_config = ;
struct bus_rate_tbl bus_rtbl[] = ;
static struct clk ahb_clk = ;
static struct aux_clk_masks aux_masks = ;
static struct aux_clk_config uart_synth_config = ;
struct aux_rate_tbl aux_rtbl[] = ;
static struct clk uart_synth_clk = ;
static struct pclk_info uart_pclk_info[] = ;
static struct pclk_sel uart_pclk_sel = ;
static struct clk uart0_clk = ;
static struct clk uart1_clk = ;
static struct aux_clk_config firda_synth_config = ;
static struct clk firda_synth_clk = ;
static struct pclk_info firda_pclk_info[] = ;
static struct pclk_sel firda_pclk_sel = ;
static struct clk firda_clk = ;
static struct aux_clk_config clcd_synth_config = ;
static struct clk clcd_synth_clk = ;
static struct pclk_info clcd_pclk_info[] = ;
static struct pclk_sel clcd_pclk_sel = ;
static struct clk clcd_clk = ;
static struct gpt_clk_masks gpt_masks = ;
struct gpt_rate_tbl gpt_rtbl[] = ;
static struct gpt_clk_config gpt0_synth_config = ;
static struct clk gpt0_synth_clk = ;
static struct pclk_info gpt0_pclk_info[] = ;
static struct pclk_sel gpt0_pclk_sel = ;
static struct clk gpt0_clk = ;
static struct pclk_sel gpt1_pclk_sel = ;
static struct clk gpt1_clk = ;
static struct gpt_clk_config gpt2_synth_config = ;
static struct clk gpt2_synth_clk = ;
static struct pclk_info gpt2_pclk_info[] = ;
static struct pclk_sel gpt2_pclk_sel = ;
static struct clk gpt2_clk = ;
static struct gpt_clk_config gpt3_synth_config = ;
static struct clk gpt3_synth_clk = ;
static struct pclk_info gpt3_pclk_info[] = ;
static struct pclk_sel gpt3_pclk_sel = ;
static struct clk gpt3_clk = ;
static struct clk usbh0_clk = ;
static struct clk usbh1_clk = ;
static struct clk usbd_clk = ;
static struct bus_clk_masks apb_masks = ;
static struct bus_clk_config apb_config = ;
static struct clk apb_clk = ;
static struct clk i2c_clk = ;
static struct clk dma_clk = ;
static struct clk jpeg_clk = ;
static struct clk gmac_clk = ;
static struct clk smi_clk = ;
static struct clk fsmc_clk = ;
static struct clk adc_clk = ;
static struct clk ssp0_clk = ;
static struct clk ssp1_clk = ;
static struct clk ssp2_clk = ;
static struct clk gpio0_clk = ;
static struct clk gpio1_clk = ;
static struct clk gpio2_clk = ;
static struct clk dummy_apb_pclk;
static struct clk_lookup spear_clk_lookups[] = ;
void __init spear6xx_clk_init(void)
