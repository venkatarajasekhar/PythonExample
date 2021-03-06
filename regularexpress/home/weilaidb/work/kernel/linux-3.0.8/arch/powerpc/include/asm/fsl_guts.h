#define __ASM_POWERPC_FSL_GUTS_H__
#if !defined(CONFIG_PPC_85xx) && !defined(CONFIG_PPC_86xx)
#error Only 85xx and 86xx SOCs are supported
struct ccsr_guts_85xx {
struct ccsr_guts_86xx  __attribute__ ((packed));
#define CCSR_GUTS_DMACR_DEV_SSI	0
#define CCSR_GUTS_DMACR_DEV_IR	1
static inline void guts_set_dmacr(struct ccsr_guts_86xx __iomem *guts,
unsigned int co, unsigned int ch, unsigned int device)
#define CCSR_GUTS_PMUXCR_LDPSEL		0x00010000
#define CCSR_GUTS_PMUXCR_SSI1_MASK	0x0000C000
#define CCSR_GUTS_PMUXCR_SSI1_LA	0x00000000
#define CCSR_GUTS_PMUXCR_SSI1_HI	0x00004000
#define CCSR_GUTS_PMUXCR_SSI1_SSI	0x00008000
#define CCSR_GUTS_PMUXCR_SSI2_MASK	0x00003000
#define CCSR_GUTS_PMUXCR_SSI2_LA	0x00000000
#define CCSR_GUTS_PMUXCR_SSI2_HI	0x00001000
#define CCSR_GUTS_PMUXCR_SSI2_SSI	0x00002000
#define CCSR_GUTS_PMUXCR_LA_22_25_LA	0x00000000
#define CCSR_GUTS_PMUXCR_LA_22_25_HI	0x00000400
#define CCSR_GUTS_PMUXCR_DBGDRV		0x00000200
#define CCSR_GUTS_PMUXCR_DMA2_0		0x00000008
#define CCSR_GUTS_PMUXCR_DMA2_3		0x00000004
#define CCSR_GUTS_PMUXCR_DMA1_0		0x00000002
#define CCSR_GUTS_PMUXCR_DMA1_3		0x00000001
static inline void guts_set_pmuxcr_dma(struct ccsr_guts_86xx __iomem *guts,
unsigned int co, unsigned int ch, unsigned int value)
#define CCSR_GUTS_CLKDVDR_PXCKEN	0x80000000
#define CCSR_GUTS_CLKDVDR_SSICKEN	0x20000000
#define CCSR_GUTS_CLKDVDR_PXCKINV	0x10000000
#define CCSR_GUTS_CLKDVDR_PXCKDLY_SHIFT 25
#define CCSR_GUTS_CLKDVDR_PXCKDLY_MASK	0x06000000
#define CCSR_GUTS_CLKDVDR_PXCKDLY(x) \
(((x) & 3) << CCSR_GUTS_CLKDVDR_PXCKDLY_SHIFT)
#define CCSR_GUTS_CLKDVDR_PXCLK_SHIFT	16
#define CCSR_GUTS_CLKDVDR_PXCLK_MASK	0x001F0000
#define CCSR_GUTS_CLKDVDR_PXCLK(x) (((x) & 31) << CCSR_GUTS_CLKDVDR_PXCLK_SHIFT)
#define CCSR_GUTS_CLKDVDR_SSICLK_MASK	0x000000FF
#define CCSR_GUTS_CLKDVDR_SSICLK(x) ((x) & CCSR_GUTS_CLKDVDR_SSICLK_MASK)
