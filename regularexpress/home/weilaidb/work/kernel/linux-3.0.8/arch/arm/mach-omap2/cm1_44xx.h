#define __ARCH_ARM_MACH_OMAP2_CM1_44XX_H
#define OMAP4430_CM1_BASE		0x4a004000
#define OMAP44XX_CM1_REGADDR(inst, reg)				\
OMAP2_L4_IO_ADDRESS(OMAP4430_CM1_BASE + (inst) + (reg))
#define OMAP4430_CM1_OCP_SOCKET_INST	0x0000
#define OMAP4430_CM1_CKGEN_INST		0x0100
#define OMAP4430_CM1_MPU_INST		0x0300
#define OMAP4430_CM1_TESLA_INST		0x0400
#define OMAP4430_CM1_ABE_INST		0x0500
#define OMAP4430_CM1_RESTORE_INST	0x0e00
#define OMAP4430_CM1_INSTR_INST		0x0f00
#define OMAP4430_CM1_ABE_ABE_CDOFFS		0x0000
#define OMAP4430_CM1_MPU_MPU_CDOFFS		0x0000
#define OMAP4430_CM1_TESLA_TESLA_CDOFFS		0x0000
#define OMAP4_REVISION_CM1_OFFSET			0x0000
#define OMAP4430_REVISION_CM1				OMAP44XX_CM1_REGADDR(OMAP4430_CM1_OCP_SOCKET_INST, 0x0000)
#define OMAP4_CM_CM1_PROFILING_CLKCTRL_OFFSET		0x0040
#define OMAP4430_CM_CM1_PROFILING_CLKCTRL		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_OCP_SOCKET_INST, 0x0040)
#define OMAP4_CM_CLKSEL_CORE_OFFSET			0x0000
#define OMAP4430_CM_CLKSEL_CORE				OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0000)
#define OMAP4_CM_CLKSEL_ABE_OFFSET			0x0008
#define OMAP4430_CM_CLKSEL_ABE				OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0008)
#define OMAP4_CM_DLL_CTRL_OFFSET			0x0010
#define OMAP4430_CM_DLL_CTRL				OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0010)
#define OMAP4_CM_CLKMODE_DPLL_CORE_OFFSET		0x0020
#define OMAP4430_CM_CLKMODE_DPLL_CORE			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0020)
#define OMAP4_CM_IDLEST_DPLL_CORE_OFFSET		0x0024
#define OMAP4430_CM_IDLEST_DPLL_CORE			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0024)
#define OMAP4_CM_AUTOIDLE_DPLL_CORE_OFFSET		0x0028
#define OMAP4430_CM_AUTOIDLE_DPLL_CORE			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0028)
#define OMAP4_CM_CLKSEL_DPLL_CORE_OFFSET		0x002c
#define OMAP4430_CM_CLKSEL_DPLL_CORE			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x002c)
#define OMAP4_CM_DIV_M2_DPLL_CORE_OFFSET		0x0030
#define OMAP4430_CM_DIV_M2_DPLL_CORE			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0030)
#define OMAP4_CM_DIV_M3_DPLL_CORE_OFFSET		0x0034
#define OMAP4430_CM_DIV_M3_DPLL_CORE			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0034)
#define OMAP4_CM_DIV_M4_DPLL_CORE_OFFSET		0x0038
#define OMAP4430_CM_DIV_M4_DPLL_CORE			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0038)
#define OMAP4_CM_DIV_M5_DPLL_CORE_OFFSET		0x003c
#define OMAP4430_CM_DIV_M5_DPLL_CORE			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x003c)
#define OMAP4_CM_DIV_M6_DPLL_CORE_OFFSET		0x0040
#define OMAP4430_CM_DIV_M6_DPLL_CORE			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0040)
#define OMAP4_CM_DIV_M7_DPLL_CORE_OFFSET		0x0044
#define OMAP4430_CM_DIV_M7_DPLL_CORE			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0044)
#define OMAP4_CM_SSC_DELTAMSTEP_DPLL_CORE_OFFSET	0x0048
#define OMAP4430_CM_SSC_DELTAMSTEP_DPLL_CORE		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0048)
#define OMAP4_CM_SSC_INSTFREQDIV_DPLL_CORE_OFFSET	0x004c
#define OMAP4430_CM_SSC_INSTFREQDIV_DPLL_CORE		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x004c)
#define OMAP4_CM_EMU_OVERRIDE_DPLL_CORE_OFFSET		0x0050
#define OMAP4430_CM_EMU_OVERRIDE_DPLL_CORE		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0050)
#define OMAP4_CM_CLKMODE_DPLL_MPU_OFFSET		0x0060
#define OMAP4430_CM_CLKMODE_DPLL_MPU			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0060)
#define OMAP4_CM_IDLEST_DPLL_MPU_OFFSET			0x0064
#define OMAP4430_CM_IDLEST_DPLL_MPU			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0064)
#define OMAP4_CM_AUTOIDLE_DPLL_MPU_OFFSET		0x0068
#define OMAP4430_CM_AUTOIDLE_DPLL_MPU			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0068)
#define OMAP4_CM_CLKSEL_DPLL_MPU_OFFSET			0x006c
#define OMAP4430_CM_CLKSEL_DPLL_MPU			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x006c)
#define OMAP4_CM_DIV_M2_DPLL_MPU_OFFSET			0x0070
#define OMAP4430_CM_DIV_M2_DPLL_MPU			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0070)
#define OMAP4_CM_SSC_DELTAMSTEP_DPLL_MPU_OFFSET		0x0088
#define OMAP4430_CM_SSC_DELTAMSTEP_DPLL_MPU		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0088)
#define OMAP4_CM_SSC_INSTFREQDIV_DPLL_MPU_OFFSET		0x008c
#define OMAP4430_CM_SSC_INSTFREQDIV_DPLL_MPU		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x008c)
#define OMAP4_CM_BYPCLK_DPLL_MPU_OFFSET			0x009c
#define OMAP4430_CM_BYPCLK_DPLL_MPU			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x009c)
#define OMAP4_CM_CLKMODE_DPLL_IVA_OFFSET		0x00a0
#define OMAP4430_CM_CLKMODE_DPLL_IVA			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x00a0)
#define OMAP4_CM_IDLEST_DPLL_IVA_OFFSET			0x00a4
#define OMAP4430_CM_IDLEST_DPLL_IVA			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x00a4)
#define OMAP4_CM_AUTOIDLE_DPLL_IVA_OFFSET		0x00a8
#define OMAP4430_CM_AUTOIDLE_DPLL_IVA			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x00a8)
#define OMAP4_CM_CLKSEL_DPLL_IVA_OFFSET			0x00ac
#define OMAP4430_CM_CLKSEL_DPLL_IVA			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x00ac)
#define OMAP4_CM_DIV_M4_DPLL_IVA_OFFSET			0x00b8
#define OMAP4430_CM_DIV_M4_DPLL_IVA			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x00b8)
#define OMAP4_CM_DIV_M5_DPLL_IVA_OFFSET			0x00bc
#define OMAP4430_CM_DIV_M5_DPLL_IVA			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x00bc)
#define OMAP4_CM_SSC_DELTAMSTEP_DPLL_IVA_OFFSET		0x00c8
#define OMAP4430_CM_SSC_DELTAMSTEP_DPLL_IVA		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x00c8)
#define OMAP4_CM_SSC_INSTFREQDIV_DPLL_IVA_OFFSET		0x00cc
#define OMAP4430_CM_SSC_INSTFREQDIV_DPLL_IVA		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x00cc)
#define OMAP4_CM_BYPCLK_DPLL_IVA_OFFSET			0x00dc
#define OMAP4430_CM_BYPCLK_DPLL_IVA			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x00dc)
#define OMAP4_CM_CLKMODE_DPLL_ABE_OFFSET		0x00e0
#define OMAP4430_CM_CLKMODE_DPLL_ABE			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x00e0)
#define OMAP4_CM_IDLEST_DPLL_ABE_OFFSET			0x00e4
#define OMAP4430_CM_IDLEST_DPLL_ABE			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x00e4)
#define OMAP4_CM_AUTOIDLE_DPLL_ABE_OFFSET		0x00e8
#define OMAP4430_CM_AUTOIDLE_DPLL_ABE			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x00e8)
#define OMAP4_CM_CLKSEL_DPLL_ABE_OFFSET			0x00ec
#define OMAP4430_CM_CLKSEL_DPLL_ABE			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x00ec)
#define OMAP4_CM_DIV_M2_DPLL_ABE_OFFSET			0x00f0
#define OMAP4430_CM_DIV_M2_DPLL_ABE			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x00f0)
#define OMAP4_CM_DIV_M3_DPLL_ABE_OFFSET			0x00f4
#define OMAP4430_CM_DIV_M3_DPLL_ABE			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x00f4)
#define OMAP4_CM_SSC_DELTAMSTEP_DPLL_ABE_OFFSET		0x0108
#define OMAP4430_CM_SSC_DELTAMSTEP_DPLL_ABE		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0108)
#define OMAP4_CM_SSC_INSTFREQDIV_DPLL_ABE_OFFSET		0x010c
#define OMAP4430_CM_SSC_INSTFREQDIV_DPLL_ABE		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x010c)
#define OMAP4_CM_CLKMODE_DPLL_DDRPHY_OFFSET		0x0120
#define OMAP4430_CM_CLKMODE_DPLL_DDRPHY			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0120)
#define OMAP4_CM_IDLEST_DPLL_DDRPHY_OFFSET		0x0124
#define OMAP4430_CM_IDLEST_DPLL_DDRPHY			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0124)
#define OMAP4_CM_AUTOIDLE_DPLL_DDRPHY_OFFSET		0x0128
#define OMAP4430_CM_AUTOIDLE_DPLL_DDRPHY		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0128)
#define OMAP4_CM_CLKSEL_DPLL_DDRPHY_OFFSET		0x012c
#define OMAP4430_CM_CLKSEL_DPLL_DDRPHY			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x012c)
#define OMAP4_CM_DIV_M2_DPLL_DDRPHY_OFFSET		0x0130
#define OMAP4430_CM_DIV_M2_DPLL_DDRPHY			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0130)
#define OMAP4_CM_DIV_M4_DPLL_DDRPHY_OFFSET		0x0138
#define OMAP4430_CM_DIV_M4_DPLL_DDRPHY			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0138)
#define OMAP4_CM_DIV_M5_DPLL_DDRPHY_OFFSET		0x013c
#define OMAP4430_CM_DIV_M5_DPLL_DDRPHY			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x013c)
#define OMAP4_CM_DIV_M6_DPLL_DDRPHY_OFFSET		0x0140
#define OMAP4430_CM_DIV_M6_DPLL_DDRPHY			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0140)
#define OMAP4_CM_SSC_DELTAMSTEP_DPLL_DDRPHY_OFFSET	0x0148
#define OMAP4430_CM_SSC_DELTAMSTEP_DPLL_DDRPHY		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0148)
#define OMAP4_CM_SSC_INSTFREQDIV_DPLL_DDRPHY_OFFSET	0x014c
#define OMAP4430_CM_SSC_INSTFREQDIV_DPLL_DDRPHY		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x014c)
#define OMAP4_CM_SHADOW_FREQ_CONFIG1_OFFSET		0x0160
#define OMAP4430_CM_SHADOW_FREQ_CONFIG1			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0160)
#define OMAP4_CM_SHADOW_FREQ_CONFIG2_OFFSET		0x0164
#define OMAP4430_CM_SHADOW_FREQ_CONFIG2			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0164)
#define OMAP4_CM_DYN_DEP_PRESCAL_OFFSET			0x0170
#define OMAP4430_CM_DYN_DEP_PRESCAL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0170)
#define OMAP4_CM_RESTORE_ST_OFFSET			0x0180
#define OMAP4430_CM_RESTORE_ST				OMAP44XX_CM1_REGADDR(OMAP4430_CM1_CKGEN_INST, 0x0180)
#define OMAP4_CM_MPU_CLKSTCTRL_OFFSET			0x0000
#define OMAP4430_CM_MPU_CLKSTCTRL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_MPU_INST, 0x0000)
#define OMAP4_CM_MPU_STATICDEP_OFFSET			0x0004
#define OMAP4430_CM_MPU_STATICDEP			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_MPU_INST, 0x0004)
#define OMAP4_CM_MPU_DYNAMICDEP_OFFSET			0x0008
#define OMAP4430_CM_MPU_DYNAMICDEP			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_MPU_INST, 0x0008)
#define OMAP4_CM_MPU_MPU_CLKCTRL_OFFSET			0x0020
#define OMAP4430_CM_MPU_MPU_CLKCTRL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_MPU_INST, 0x0020)
#define OMAP4_CM_TESLA_CLKSTCTRL_OFFSET			0x0000
#define OMAP4430_CM_TESLA_CLKSTCTRL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_TESLA_INST, 0x0000)
#define OMAP4_CM_TESLA_STATICDEP_OFFSET			0x0004
#define OMAP4430_CM_TESLA_STATICDEP			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_TESLA_INST, 0x0004)
#define OMAP4_CM_TESLA_DYNAMICDEP_OFFSET		0x0008
#define OMAP4430_CM_TESLA_DYNAMICDEP			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_TESLA_INST, 0x0008)
#define OMAP4_CM_TESLA_TESLA_CLKCTRL_OFFSET		0x0020
#define OMAP4430_CM_TESLA_TESLA_CLKCTRL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_TESLA_INST, 0x0020)
#define OMAP4_CM1_ABE_CLKSTCTRL_OFFSET			0x0000
#define OMAP4430_CM1_ABE_CLKSTCTRL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_ABE_INST, 0x0000)
#define OMAP4_CM1_ABE_L4ABE_CLKCTRL_OFFSET		0x0020
#define OMAP4430_CM1_ABE_L4ABE_CLKCTRL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_ABE_INST, 0x0020)
#define OMAP4_CM1_ABE_AESS_CLKCTRL_OFFSET		0x0028
#define OMAP4430_CM1_ABE_AESS_CLKCTRL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_ABE_INST, 0x0028)
#define OMAP4_CM1_ABE_PDM_CLKCTRL_OFFSET		0x0030
#define OMAP4430_CM1_ABE_PDM_CLKCTRL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_ABE_INST, 0x0030)
#define OMAP4_CM1_ABE_DMIC_CLKCTRL_OFFSET		0x0038
#define OMAP4430_CM1_ABE_DMIC_CLKCTRL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_ABE_INST, 0x0038)
#define OMAP4_CM1_ABE_MCASP_CLKCTRL_OFFSET		0x0040
#define OMAP4430_CM1_ABE_MCASP_CLKCTRL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_ABE_INST, 0x0040)
#define OMAP4_CM1_ABE_MCBSP1_CLKCTRL_OFFSET		0x0048
#define OMAP4430_CM1_ABE_MCBSP1_CLKCTRL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_ABE_INST, 0x0048)
#define OMAP4_CM1_ABE_MCBSP2_CLKCTRL_OFFSET		0x0050
#define OMAP4430_CM1_ABE_MCBSP2_CLKCTRL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_ABE_INST, 0x0050)
#define OMAP4_CM1_ABE_MCBSP3_CLKCTRL_OFFSET		0x0058
#define OMAP4430_CM1_ABE_MCBSP3_CLKCTRL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_ABE_INST, 0x0058)
#define OMAP4_CM1_ABE_SLIMBUS_CLKCTRL_OFFSET		0x0060
#define OMAP4430_CM1_ABE_SLIMBUS_CLKCTRL		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_ABE_INST, 0x0060)
#define OMAP4_CM1_ABE_TIMER5_CLKCTRL_OFFSET		0x0068
#define OMAP4430_CM1_ABE_TIMER5_CLKCTRL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_ABE_INST, 0x0068)
#define OMAP4_CM1_ABE_TIMER6_CLKCTRL_OFFSET		0x0070
#define OMAP4430_CM1_ABE_TIMER6_CLKCTRL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_ABE_INST, 0x0070)
#define OMAP4_CM1_ABE_TIMER7_CLKCTRL_OFFSET		0x0078
#define OMAP4430_CM1_ABE_TIMER7_CLKCTRL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_ABE_INST, 0x0078)
#define OMAP4_CM1_ABE_TIMER8_CLKCTRL_OFFSET		0x0080
#define OMAP4430_CM1_ABE_TIMER8_CLKCTRL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_ABE_INST, 0x0080)
#define OMAP4_CM1_ABE_WDT3_CLKCTRL_OFFSET		0x0088
#define OMAP4430_CM1_ABE_WDT3_CLKCTRL			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_ABE_INST, 0x0088)
#define OMAP4_CM_CLKSEL_CORE_RESTORE_OFFSET		0x0000
#define OMAP4430_CM_CLKSEL_CORE_RESTORE			OMAP44XX_CM1_REGADDR(OMAP4430_CM1_RESTORE_INST, 0x0000)
#define OMAP4_CM_DIV_M2_DPLL_CORE_RESTORE_OFFSET	0x0004
#define OMAP4430_CM_DIV_M2_DPLL_CORE_RESTORE		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_RESTORE_INST, 0x0004)
#define OMAP4_CM_DIV_M3_DPLL_CORE_RESTORE_OFFSET	0x0008
#define OMAP4430_CM_DIV_M3_DPLL_CORE_RESTORE		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_RESTORE_INST, 0x0008)
#define OMAP4_CM_DIV_M4_DPLL_CORE_RESTORE_OFFSET	0x000c
#define OMAP4430_CM_DIV_M4_DPLL_CORE_RESTORE		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_RESTORE_INST, 0x000c)
#define OMAP4_CM_DIV_M5_DPLL_CORE_RESTORE_OFFSET	0x0010
#define OMAP4430_CM_DIV_M5_DPLL_CORE_RESTORE		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_RESTORE_INST, 0x0010)
#define OMAP4_CM_DIV_M6_DPLL_CORE_RESTORE_OFFSET	0x0014
#define OMAP4430_CM_DIV_M6_DPLL_CORE_RESTORE		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_RESTORE_INST, 0x0014)
#define OMAP4_CM_DIV_M7_DPLL_CORE_RESTORE_OFFSET	0x0018
#define OMAP4430_CM_DIV_M7_DPLL_CORE_RESTORE		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_RESTORE_INST, 0x0018)
#define OMAP4_CM_CLKSEL_DPLL_CORE_RESTORE_OFFSET	0x001c
#define OMAP4430_CM_CLKSEL_DPLL_CORE_RESTORE		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_RESTORE_INST, 0x001c)
#define OMAP4_CM_SSC_DELTAMSTEP_DPLL_CORE_RESTORE_OFFSET	0x0020
#define OMAP4430_CM_SSC_DELTAMSTEP_DPLL_CORE_RESTORE	OMAP44XX_CM1_REGADDR(OMAP4430_CM1_RESTORE_INST, 0x0020)
#define OMAP4_CM_SSC_INSTFREQDIV_DPLL_CORE_RESTORE_OFFSET	0x0024
#define OMAP4430_CM_SSC_INSTFREQDIV_DPLL_CORE_RESTORE	OMAP44XX_CM1_REGADDR(OMAP4430_CM1_RESTORE_INST, 0x0024)
#define OMAP4_CM_CLKMODE_DPLL_CORE_RESTORE_OFFSET	0x0028
#define OMAP4430_CM_CLKMODE_DPLL_CORE_RESTORE		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_RESTORE_INST, 0x0028)
#define OMAP4_CM_SHADOW_FREQ_CONFIG2_RESTORE_OFFSET	0x002c
#define OMAP4430_CM_SHADOW_FREQ_CONFIG2_RESTORE		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_RESTORE_INST, 0x002c)
#define OMAP4_CM_SHADOW_FREQ_CONFIG1_RESTORE_OFFSET	0x0030
#define OMAP4430_CM_SHADOW_FREQ_CONFIG1_RESTORE		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_RESTORE_INST, 0x0030)
#define OMAP4_CM_AUTOIDLE_DPLL_CORE_RESTORE_OFFSET	0x0034
#define OMAP4430_CM_AUTOIDLE_DPLL_CORE_RESTORE		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_RESTORE_INST, 0x0034)
#define OMAP4_CM_MPU_CLKSTCTRL_RESTORE_OFFSET		0x0038
#define OMAP4430_CM_MPU_CLKSTCTRL_RESTORE		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_RESTORE_INST, 0x0038)
#define OMAP4_CM_CM1_PROFILING_CLKCTRL_RESTORE_OFFSET	0x003c
#define OMAP4430_CM_CM1_PROFILING_CLKCTRL_RESTORE	OMAP44XX_CM1_REGADDR(OMAP4430_CM1_RESTORE_INST, 0x003c)
#define OMAP4_CM_DYN_DEP_PRESCAL_RESTORE_OFFSET		0x0040
#define OMAP4430_CM_DYN_DEP_PRESCAL_RESTORE		OMAP44XX_CM1_REGADDR(OMAP4430_CM1_RESTORE_INST, 0x0040)
extern u32 omap4_cm1_read_inst_reg(s16 inst, u16 idx);
extern void omap4_cm1_write_inst_reg(u32 val, s16 inst, u16 idx);
extern u32 omap4_cm1_rmw_inst_reg_bits(u32 mask, u32 bits, s16 inst, s16 idx);
