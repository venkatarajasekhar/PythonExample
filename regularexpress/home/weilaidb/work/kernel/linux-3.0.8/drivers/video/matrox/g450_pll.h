#define __G450_PLL_H__
int matroxfb_g450_setclk(struct matrox_fb_info *minfo, unsigned int fout,
unsigned int pll);
unsigned int g450_mnp2f(const struct matrox_fb_info *minfo, unsigned int mnp);
void matroxfb_g450_setpll_cond(struct matrox_fb_info *minfo, unsigned int mnp,
unsigned int pll);
