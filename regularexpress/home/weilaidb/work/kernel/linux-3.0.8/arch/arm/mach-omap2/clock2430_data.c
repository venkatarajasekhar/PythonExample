#define OMAP_CM_REGADDR			OMAP2430_CM_REGADDR
static struct clk func_32k_ck = ;
static struct clk secure_32k_ck = ;
static struct clk osc_ck = ;
static struct clk sys_ck = ;
static struct clk alt_ck = ;
static struct clk mcbsp_clks = ;
static struct dpll_data dpll_dd = ;
static struct clk dpll_ck = ;
static struct clk apll96_ck = ;
static struct clk apll54_ck = ;
static const struct clksel_rate func_54m_apll54_rates[] = ;
static const struct clksel_rate func_54m_alt_rates[] = ;
static const struct clksel func_54m_clksel[] = ;
static struct clk func_54m_ck = ;
static struct clk core_ck = ;
static const struct clksel_rate func_96m_apll96_rates[] = ;
static const struct clksel_rate func_96m_alt_rates[] = ;
static const struct clksel func_96m_clksel[] = ;
static struct clk func_96m_ck = ;
static const struct clksel_rate func_48m_apll96_rates[] = ;
static const struct clksel_rate func_48m_alt_rates[] = ;
static const struct clksel func_48m_clksel[] = ;
static struct clk func_48m_ck = ;
static struct clk func_12m_ck = ;
static struct clk wdt1_osc_ck = ;
static const struct clksel_rate common_clkout_src_core_rates[] = ;
static const struct clksel_rate common_clkout_src_sys_rates[] = ;
static const struct clksel_rate common_clkout_src_96m_rates[] = ;
static const struct clksel_rate common_clkout_src_54m_rates[] = ;
static const struct clksel common_clkout_src_clksel[] = ;
static struct clk sys_clkout_src = ;
static const struct clksel_rate common_clkout_rates[] = ;
static const struct clksel sys_clkout_clksel[] = ;
static struct clk sys_clkout = ;
static struct clk emul_ck = ;
static const struct clksel_rate mpu_core_rates[] = ;
static const struct clksel mpu_clksel[] = ;
static struct clk mpu_ck = ;
static const struct clksel_rate dsp_fck_core_rates[] = ;
static const struct clksel dsp_fck_clksel[] = ;
static struct clk dsp_fck = ;
static const struct clksel dsp_ick_clksel[] = ;
static struct clk iva2_1_ick = ;
static const struct clksel_rate core_l3_core_rates[] = ;
static const struct clksel core_l3_clksel[] = ;
static struct clk core_l3_ck = ;
static const struct clksel_rate usb_l4_ick_core_l3_rates[] = ;
static const struct clksel usb_l4_ick_clksel[] = ;
static struct clk usb_l4_ick = ;
static const struct clksel_rate l4_core_l3_rates[] = ;
static const struct clksel l4_clksel[] = ;
static struct clk l4_ck = ;
static const struct clksel_rate ssi_ssr_sst_fck_core_rates[] = ;
static const struct clksel ssi_ssr_sst_fck_clksel[] = ;
static struct clk ssi_ssr_sst_fck = ;
static struct clk ssi_l4_ick = ;
static const struct clksel gfx_fck_clksel[] = ;
static struct clk gfx_3d_fck = ;
static struct clk gfx_2d_fck = ;
static struct clk gfx_ick = ;
static const struct clksel_rate mdm_ick_core_rates[] = ;
static const struct clksel mdm_ick_clksel[] = ;
static struct clk mdm_ick = ;
static struct clk mdm_osc_ck = ;
static const struct clksel_rate dss1_fck_sys_rates[] = ;
static const struct clksel_rate dss1_fck_core_rates[] = ;
static const struct clksel dss1_fck_clksel[] = ;
static struct clk dss_ick = ;
static struct clk dss1_fck = ;
static const struct clksel_rate dss2_fck_sys_rates[] = ;
static const struct clksel_rate dss2_fck_48m_rates[] = ;
static const struct clksel dss2_fck_clksel[] = ;
static struct clk dss2_fck = ;
static struct clk dss_54m_fck = ;
static struct clk wu_l4_ick = ;
static const struct clksel_rate gpt_alt_rates[] = ;
static const struct clksel omap24xx_gpt_clksel[] = ;
static struct clk gpt1_ick = ;
static struct clk gpt1_fck = ;
static struct clk gpt2_ick = ;
static struct clk gpt2_fck = ;
static struct clk gpt3_ick = ;
static struct clk gpt3_fck = ;
static struct clk gpt4_ick = ;
static struct clk gpt4_fck = ;
static struct clk gpt5_ick = ;
static struct clk gpt5_fck = ;
static struct clk gpt6_ick = ;
static struct clk gpt6_fck = ;
static struct clk gpt7_ick = ;
static struct clk gpt7_fck = ;
static struct clk gpt8_ick = ;
static struct clk gpt8_fck = ;
static struct clk gpt9_ick = ;
static struct clk gpt9_fck = ;
static struct clk gpt10_ick = ;
static struct clk gpt10_fck = ;
static struct clk gpt11_ick = ;
static struct clk gpt11_fck = ;
static struct clk gpt12_ick = ;
static struct clk gpt12_fck = ;
static struct clk mcbsp1_ick = ;
static const struct clksel_rate common_mcbsp_96m_rates[] = ;
static const struct clksel_rate common_mcbsp_mcbsp_rates[] = ;
static const struct clksel mcbsp_fck_clksel[] = ;
static struct clk mcbsp1_fck = ;
static struct clk mcbsp2_ick = ;
static struct clk mcbsp2_fck = ;
static struct clk mcbsp3_ick = ;
static struct clk mcbsp3_fck = ;
static struct clk mcbsp4_ick = ;
static struct clk mcbsp4_fck = ;
static struct clk mcbsp5_ick = ;
static struct clk mcbsp5_fck = ;
static struct clk mcspi1_ick = ;
static struct clk mcspi1_fck = ;
static struct clk mcspi2_ick = ;
static struct clk mcspi2_fck = ;
static struct clk mcspi3_ick = ;
static struct clk mcspi3_fck = ;
static struct clk uart1_ick = ;
static struct clk uart1_fck = ;
static struct clk uart2_ick = ;
static struct clk uart2_fck = ;
static struct clk uart3_ick = ;
static struct clk uart3_fck = ;
static struct clk gpios_ick = ;
static struct clk gpios_fck = ;
static struct clk mpu_wdt_ick = ;
static struct clk mpu_wdt_fck = ;
static struct clk sync_32k_ick = ;
static struct clk wdt1_ick = ;
static struct clk omapctrl_ick = ;
static struct clk icr_ick = ;
static struct clk cam_ick = ;
static struct clk cam_fck = ;
static struct clk mailboxes_ick = ;
static struct clk wdt4_ick = ;
static struct clk wdt4_fck = ;
static struct clk mspro_ick = ;
static struct clk mspro_fck = ;
static struct clk fac_ick = ;
static struct clk fac_fck = ;
static struct clk hdq_ick = ;
static struct clk hdq_fck = ;
static struct clk i2c2_ick = ;
static struct clk i2chs2_fck = ;
static struct clk i2c1_ick = ;
static struct clk i2chs1_fck = ;
static struct clk gpmc_fck = ;
static struct clk sdma_fck = ;
static struct clk sdma_ick = ;
static struct clk sdrc_ick = ;
static struct clk des_ick = ;
static struct clk sha_ick = ;
static struct clk rng_ick = ;
static struct clk aes_ick = ;
static struct clk pka_ick = ;
static struct clk usb_fck = ;
static struct clk usbhs_ick = ;
static struct clk mmchs1_ick = ;
static struct clk mmchs1_fck = ;
static struct clk mmchs2_ick = ;
static struct clk mmchs2_fck = ;
static struct clk gpio5_ick = ;
static struct clk gpio5_fck = ;
static struct clk mdm_intc_ick = ;
static struct clk mmchsdb1_fck = ;
static struct clk mmchsdb2_fck = ;
static struct clk virt_prcm_set = ;
static struct omap_clk omap2430_clks[] = ;
int __init omap2430_clk_init(void)
