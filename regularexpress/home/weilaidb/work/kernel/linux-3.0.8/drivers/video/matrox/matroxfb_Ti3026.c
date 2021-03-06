#define outTi3026 matroxfb_DAC_out
#define inTi3026 matroxfb_DAC_in
#define TVP3026_INDEX		0x00
#define TVP3026_PALWRADD	0x00
#define TVP3026_PALDATA		0x01
#define TVP3026_PIXRDMSK	0x02
#define TVP3026_PALRDADD	0x03
#define TVP3026_CURCOLWRADD	0x04
#define     TVP3026_CLOVERSCAN		0x00
#define     TVP3026_CLCOLOR0		0x01
#define     TVP3026_CLCOLOR1		0x02
#define     TVP3026_CLCOLOR2		0x03
#define TVP3026_CURCOLDATA	0x05
#define TVP3026_CURCOLRDADD	0x07
#define TVP3026_CURCTRL		0x09
#define TVP3026_X_DATAREG	0x0A
#define TVP3026_CURRAMDATA	0x0B
#define TVP3026_CURPOSXL	0x0C
#define TVP3026_CURPOSXH	0x0D
#define TVP3026_CURPOSYL	0x0E
#define TVP3026_CURPOSYH	0x0F
#define TVP3026_XSILICONREV	0x01
#define TVP3026_XCURCTRL	0x06
#define     TVP3026_XCURCTRL_DIS	0x00
#define     TVP3026_XCURCTRL_3COLOR	0x01
#define     TVP3026_XCURCTRL_XGA	0x02
#define     TVP3026_XCURCTRL_XWIN	0x03
#define     TVP3026_XCURCTRL_BLANK2048	0x00
#define     TVP3026_XCURCTRL_BLANK4096	0x10
#define     TVP3026_XCURCTRL_INTERLACED	0x20
#define     TVP3026_XCURCTRL_ODD	0x00
#define     TVP3026_XCURCTRL_EVEN	0x40
#define     TVP3026_XCURCTRL_INDIRECT	0x00
#define     TVP3026_XCURCTRL_DIRECT	0x80
#define TVP3026_XLATCHCTRL	0x0F
#define     TVP3026_XLATCHCTRL_1_1	0x06
#define     TVP3026_XLATCHCTRL_2_1	0x07
#define     TVP3026_XLATCHCTRL_4_1	0x06
#define     TVP3026_XLATCHCTRL_8_1	0x06
#define     TVP3026_XLATCHCTRL_16_1	0x06
#define     TVP3026A_XLATCHCTRL_4_3	0x06
#define     TVP3026A_XLATCHCTRL_8_3	0x07
#define     TVP3026B_XLATCHCTRL_4_3	0x08
#define     TVP3026B_XLATCHCTRL_8_3	0x06
#define TVP3026_XTRUECOLORCTRL	0x18
#define     TVP3026_XTRUECOLORCTRL_VRAM_SHIFT_ACCEL	0x00
#define     TVP3026_XTRUECOLORCTRL_VRAM_SHIFT_TVP	0x20
#define     TVP3026_XTRUECOLORCTRL_PSEUDOCOLOR		0x80
#define     TVP3026_XTRUECOLORCTRL_TRUECOLOR		0x40
#define     TVP3026_XTRUECOLORCTRL_DIRECTCOLOR		0x00
#define     TVP3026_XTRUECOLORCTRL_24_ALTERNATE		0x08
#define     TVP3026_XTRUECOLORCTRL_RGB_888		0x16
#define	    TVP3026_XTRUECOLORCTRL_BGR_888		0x17
#define     TVP3026_XTRUECOLORCTRL_ORGB_8888		0x06
#define     TVP3026_XTRUECOLORCTRL_BGRO_8888		0x07
#define     TVP3026_XTRUECOLORCTRL_RGB_565		0x05
#define     TVP3026_XTRUECOLORCTRL_ORGB_1555		0x04
#define     TVP3026_XTRUECOLORCTRL_RGB_664		0x03
#define     TVP3026_XTRUECOLORCTRL_RGBO_4444		0x01
#define TVP3026_XMUXCTRL	0x19
#define     TVP3026_XMUXCTRL_MEMORY_8BIT			0x01
#define     TVP3026_XMUXCTRL_MEMORY_16BIT			0x02
#define     TVP3026_XMUXCTRL_MEMORY_32BIT			0x03
#define     TVP3026_XMUXCTRL_MEMORY_64BIT			0x04
#define     TVP3026_XMUXCTRL_PIXEL_4BIT				0x40
#define     TVP3026_XMUXCTRL_PIXEL_4BIT_SWAPPED			0x60
#define     TVP3026_XMUXCTRL_PIXEL_8BIT				0x48
#define     TVP3026_XMUXCTRL_PIXEL_16BIT			0x50
#define     TVP3026_XMUXCTRL_PIXEL_32BIT			0x58
#define     TVP3026_XMUXCTRL_VGA				0x98
#define TVP3026_XCLKCTRL	0x1A
#define     TVP3026_XCLKCTRL_DIV1	0x00
#define     TVP3026_XCLKCTRL_DIV2	0x10
#define     TVP3026_XCLKCTRL_DIV4	0x20
#define     TVP3026_XCLKCTRL_DIV8	0x30
#define     TVP3026_XCLKCTRL_DIV16	0x40
#define     TVP3026_XCLKCTRL_DIV32	0x50
#define     TVP3026_XCLKCTRL_DIV64	0x60
#define     TVP3026_XCLKCTRL_CLKSTOPPED	0x70
#define     TVP3026_XCLKCTRL_SRC_CLK0	0x00
#define     TVP3026_XCLKCTRL_SRC_CLK1   0x01
#define     TVP3026_XCLKCTRL_SRC_CLK2	0x02
#define     TVP3026_XCLKCTRL_SRC_NCLK2	0x03
#define     TVP3026_XCLKCTRL_SRC_ECLK2	0x04
#define     TVP3026_XCLKCTRL_SRC_PLL	0x05
#define     TVP3026_XCLKCTRL_SRC_DIS	0x06
#define     TVP3026_XCLKCTRL_SRC_CLK0VGA 0x07
#define TVP3026_XPALETTEPAGE	0x1C
#define TVP3026_XGENCTRL	0x1D
#define     TVP3026_XGENCTRL_HSYNC_POS	0x00
#define     TVP3026_XGENCTRL_HSYNC_NEG	0x01
#define     TVP3026_XGENCTRL_VSYNC_POS	0x00
#define     TVP3026_XGENCTRL_VSYNC_NEG	0x02
#define     TVP3026_XGENCTRL_LITTLE_ENDIAN 0x00
#define     TVP3026_XGENCTRL_BIG_ENDIAN    0x08
#define     TVP3026_XGENCTRL_BLACK_0IRE		0x00
#define     TVP3026_XGENCTRL_BLACK_75IRE	0x10
#define     TVP3026_XGENCTRL_NO_SYNC_ON_GREEN	0x00
#define     TVP3026_XGENCTRL_SYNC_ON_GREEN	0x20
#define     TVP3026_XGENCTRL_OVERSCAN_DIS	0x00
#define     TVP3026_XGENCTRL_OVERSCAN_EN	0x40
#define TVP3026_XMISCCTRL	0x1E
#define     TVP3026_XMISCCTRL_DAC_PUP	0x00
#define     TVP3026_XMISCCTRL_DAC_PDOWN	0x01
#define     TVP3026_XMISCCTRL_DAC_EXT	0x00
#define     TVP3026_XMISCCTRL_DAC_6BIT	0x04
#define     TVP3026_XMISCCTRL_DAC_8BIT	0x0C
#define     TVP3026_XMISCCTRL_PSEL_DIS	0x00
#define     TVP3026_XMISCCTRL_PSEL_EN	0x10
#define     TVP3026_XMISCCTRL_PSEL_LOW	0x00
#define     TVP3026_XMISCCTRL_PSEL_HIGH 0x20
#define TVP3026_XGENIOCTRL	0x2A
#define TVP3026_XGENIODATA	0x2B
#define TVP3026_XPLLADDR	0x2C
#define     TVP3026_XPLLADDR_X(LOOP,MCLK,PIX) (((LOOP)<<4) | ((MCLK)<<2) | (PIX))
#define     TVP3026_XPLLDATA_N		0x00
#define     TVP3026_XPLLDATA_M		0x01
#define     TVP3026_XPLLDATA_P		0x02
#define     TVP3026_XPLLDATA_STAT	0x03
#define TVP3026_XPIXPLLDATA	0x2D
#define TVP3026_XMEMPLLDATA	0x2E
#define TVP3026_XLOOPPLLDATA	0x2F
#define TVP3026_XCOLKEYOVRMIN	0x30
#define TVP3026_XCOLKEYOVRMAX	0x31
#define TVP3026_XCOLKEYREDMIN	0x32
#define TVP3026_XCOLKEYREDMAX	0x33
#define TVP3026_XCOLKEYGREENMIN	0x34
#define TVP3026_XCOLKEYGREENMAX	0x35
#define TVP3026_XCOLKEYBLUEMIN	0x36
#define TVP3026_XCOLKEYBLUEMAX	0x37
#define TVP3026_XCOLKEYCTRL	0x38
#define     TVP3026_XCOLKEYCTRL_OVR_EN	0x01
#define     TVP3026_XCOLKEYCTRL_RED_EN	0x02
#define     TVP3026_XCOLKEYCTRL_GREEN_EN 0x04
#define     TVP3026_XCOLKEYCTRL_BLUE_EN	0x08
#define     TVP3026_XCOLKEYCTRL_NEGATE	0x10
#define     TVP3026_XCOLKEYCTRL_ZOOM1	0x00
#define     TVP3026_XCOLKEYCTRL_ZOOM2	0x20
#define     TVP3026_XCOLKEYCTRL_ZOOM4	0x40
#define     TVP3026_XCOLKEYCTRL_ZOOM8	0x60
#define     TVP3026_XCOLKEYCTRL_ZOOM16	0x80
#define     TVP3026_XCOLKEYCTRL_ZOOM32	0xA0
#define TVP3026_XMEMPLLCTRL	0x39
#define     TVP3026_XMEMPLLCTRL_DIV(X)	(((X)-1)>>1)
#define     TVP3026_XMEMPLLCTRL_STROBEMKC4	0x08
#define     TVP3026_XMEMPLLCTRL_MCLK_DOTCLOCK	0x00
#define     TVP3026_XMEMPLLCTRL_MCLK_MCLKPLL	0x10
#define     TVP3026_XMEMPLLCTRL_RCLK_PIXPLL	0x00
#define     TVP3026_XMEMPLLCTRL_RCLK_LOOPPLL	0x20
#define     TVP3026_XMEMPLLCTRL_RCLK_DOTDIVN	0x40
#define TVP3026_XSENSETEST	0x3A
#define TVP3026_XTESTMODEDATA	0x3B
#define TVP3026_XCRCREML	0x3C
#define TVP3026_XCRCREMH	0x3D
#define TVP3026_XCRCBITSEL	0x3E
#define TVP3026_XID		0x3F
static const unsigned char DACseq[] =
;
#define POS3026_XLATCHCTRL	0
#define POS3026_XTRUECOLORCTRL	1
#define POS3026_XMUXCTRL	2
#define POS3026_XCLKCTRL	3
#define POS3026_XGENCTRL	5
#define POS3026_XMISCCTRL	6
#define POS3026_XMEMPLLCTRL	18
#define POS3026_XCURCTRL	20
static const unsigned char MGADACbpp32[] =
;
static int Ti3026_calcclock(const struct matrox_fb_info *minfo,
unsigned int freq, unsigned int fmax, int *in,
int *feed, int *post)
static int Ti3026_setpclk(struct matrox_fb_info *minfo, int clk)
static int Ti3026_init(struct matrox_fb_info *minfo, struct my_timming *m)
static void ti3026_setMCLK(struct matrox_fb_info *minfo, int fout)
static void ti3026_ramdac_init(struct matrox_fb_info *minfo)
static void Ti3026_restore(struct matrox_fb_info *minfo)
static void Ti3026_reset(struct matrox_fb_info *minfo)
static struct matrox_altout ti3026_output = ;
static int Ti3026_preinit(struct matrox_fb_info *minfo)
struct matrox_switch matrox_millennium = ;
EXPORT_SYMBOL(matrox_millennium);
MODULE_LICENSE("GPL");
