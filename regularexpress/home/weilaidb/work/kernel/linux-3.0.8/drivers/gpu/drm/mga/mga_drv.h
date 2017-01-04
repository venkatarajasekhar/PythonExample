#define __MGA_DRV_H__
#define DRIVER_AUTHOR		"Gareth Hughes, VA Linux Systems Inc."
#define DRIVER_NAME		"mga"
#define DRIVER_DESC		"Matrox G200/G400"
#define DRIVER_DATE		"20051102"
#define DRIVER_MAJOR		3
#define DRIVER_MINOR		2
#define DRIVER_PATCHLEVEL	1
typedef struct drm_mga_primary_buffer  drm_mga_primary_buffer_t;
typedef struct drm_mga_freelist  drm_mga_freelist_t;
typedef struct  drm_mga_buf_priv_t;
typedef struct drm_mga_private  drm_mga_private_t;
extern struct drm_ioctl_desc mga_ioctls[];
extern int mga_max_ioctl;
extern int mga_dma_bootstrap(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int mga_dma_init(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int mga_dma_flush(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int mga_dma_reset(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int mga_dma_buffers(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int mga_driver_load(struct drm_device *dev, unsigned long flags);
extern int mga_driver_unload(struct drm_device *dev);
extern void mga_driver_lastclose(struct drm_device *dev);
extern int mga_driver_dma_quiescent(struct drm_device *dev);
extern int mga_do_wait_for_idle(drm_mga_private_t *dev_priv);
extern void mga_do_dma_flush(drm_mga_private_t *dev_priv);
extern void mga_do_dma_wrap_start(drm_mga_private_t *dev_priv);
extern void mga_do_dma_wrap_end(drm_mga_private_t *dev_priv);
extern int mga_freelist_put(struct drm_device *dev, struct drm_buf *buf);
extern int mga_warp_install_microcode(drm_mga_private_t *dev_priv);
extern int mga_warp_init(drm_mga_private_t *dev_priv);
extern int mga_enable_vblank(struct drm_device *dev, int crtc);
extern void mga_disable_vblank(struct drm_device *dev, int crtc);
extern u32 mga_get_vblank_counter(struct drm_device *dev, int crtc);
extern int mga_driver_fence_wait(struct drm_device *dev, unsigned int *sequence);
extern int mga_driver_vblank_wait(struct drm_device *dev, unsigned int *sequence);
extern irqreturn_t mga_driver_irq_handler(DRM_IRQ_ARGS);
extern void mga_driver_irq_preinstall(struct drm_device *dev);
extern int mga_driver_irq_postinstall(struct drm_device *dev);
extern void mga_driver_irq_uninstall(struct drm_device *dev);
extern long mga_compat_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg);
#define mga_flush_write_combine()	DRM_WRITEMEMORYBARRIER()
#define MGA_READ8(reg)		DRM_READ8(dev_priv->mmio, (reg))
#define MGA_READ(reg)		DRM_READ32(dev_priv->mmio, (reg))
#define MGA_WRITE8(reg, val)	DRM_WRITE8(dev_priv->mmio, (reg), (val))
#define MGA_WRITE(reg, val)	DRM_WRITE32(dev_priv->mmio, (reg), (val))
#define DWGREG0		0x1c00
#define DWGREG0_END	0x1dff
#define DWGREG1		0x2c00
#define DWGREG1_END	0x2dff
#define ISREG0(r)	(r >= DWGREG0 && r <= DWGREG0_END)
#define DMAREG0(r)	(u8)((r - DWGREG0) >> 2)
#define DMAREG1(r)	(u8)(((r - DWGREG1) >> 2) | 0x80)
#define DMAREG(r)	(ISREG0(r) ? DMAREG0(r) : DMAREG1(r))
#define MGA_EMIT_STATE(dev_priv, dirty)					\
do  while (0)
#define WRAP_TEST_WITH_RETURN(dev_priv)					\
do  while (0)
#define WRAP_WAIT_WITH_RETURN(dev_priv)					\
do  while (0)
#define MGA_VERBOSE	0
#define DMA_LOCALS	unsigned int write; volatile u8 *prim;
#define DMA_BLOCK_SIZE	(5 * sizeof(u32))
#define BEGIN_DMA(n)							\
do  while (0)
#define BEGIN_DMA_WRAP()						\
do  while (0)
#define ADVANCE_DMA()							\
do  while (0)
#define FLUSH_DMA()							\
do  while (0)
#define DMA_WRITE(offset, val)						\
do  while (0)
#define DMA_BLOCK(reg0, val0, reg1, val1, reg2, val2, reg3, val3)	\
do  while (0)
#define SET_AGE(age, h, w)						\
do  while (0)
#define TEST_AGE(age, h, w)		((age)->wrap < w ||		\
((age)->wrap == w &&		\
(age)->head < h))
#define AGE_BUFFER(buf_priv)						\
do  while (0)
#define MGA_ENGINE_IDLE_MASK		(MGA_SOFTRAPEN |		\
MGA_DWGENGSTS |		\
MGA_ENDPRDMASTS)
#define MGA_DMA_IDLE_MASK		(MGA_SOFTRAPEN |		\
MGA_ENDPRDMASTS)
#define MGA_DMA_DEBUG			0
#define MGA_CRTC_INDEX			0x1fd4
#define MGA_CRTC_DATA			0x1fd5
#define MGA_VINTCLR			(1 << 4)
#define MGA_VINTEN			(1 << 5)
#define MGA_ALPHACTRL			0x2c7c
#define MGA_AR0				0x1c60
#define MGA_AR1				0x1c64
#define MGA_AR2				0x1c68
#define MGA_AR3				0x1c6c
#define MGA_AR4				0x1c70
#define MGA_AR5				0x1c74
#define MGA_AR6				0x1c78
#define MGA_CXBNDRY			0x1c80
#define MGA_CXLEFT			0x1ca0
#define MGA_CXRIGHT			0x1ca4
#define MGA_DMAPAD			0x1c54
#define MGA_DSTORG			0x2cb8
#define MGA_DWGCTL			0x1c00
#	define MGA_OPCOD_MASK			(15 << 0)
#	define MGA_OPCOD_TRAP			(4 << 0)
#	define MGA_OPCOD_TEXTURE_TRAP		(6 << 0)
#	define MGA_OPCOD_BITBLT			(8 << 0)
#	define MGA_OPCOD_ILOAD			(9 << 0)
#	define MGA_ATYPE_MASK			(7 << 4)
#	define MGA_ATYPE_RPL			(0 << 4)
#	define MGA_ATYPE_RSTR			(1 << 4)
#	define MGA_ATYPE_ZI			(3 << 4)
#	define MGA_ATYPE_BLK			(4 << 4)
#	define MGA_ATYPE_I			(7 << 4)
#	define MGA_LINEAR			(1 << 7)
#	define MGA_ZMODE_MASK			(7 << 8)
#	define MGA_ZMODE_NOZCMP			(0 << 8)
#	define MGA_ZMODE_ZE			(2 << 8)
#	define MGA_ZMODE_ZNE			(3 << 8)
#	define MGA_ZMODE_ZLT			(4 << 8)
#	define MGA_ZMODE_ZLTE			(5 << 8)
#	define MGA_ZMODE_ZGT			(6 << 8)
#	define MGA_ZMODE_ZGTE			(7 << 8)
#	define MGA_SOLID			(1 << 11)
#	define MGA_ARZERO			(1 << 12)
#	define MGA_SGNZERO			(1 << 13)
#	define MGA_SHIFTZERO			(1 << 14)
#	define MGA_BOP_MASK			(15 << 16)
#	define MGA_BOP_ZERO			(0 << 16)
#	define MGA_BOP_DST			(10 << 16)
#	define MGA_BOP_SRC			(12 << 16)
#	define MGA_BOP_ONE			(15 << 16)
#	define MGA_TRANS_SHIFT			20
#	define MGA_TRANS_MASK			(15 << 20)
#	define MGA_BLTMOD_MASK			(15 << 25)
#	define MGA_BLTMOD_BMONOLEF		(0 << 25)
#	define MGA_BLTMOD_BMONOWF		(4 << 25)
#	define MGA_BLTMOD_PLAN			(1 << 25)
#	define MGA_BLTMOD_BFCOL			(2 << 25)
#	define MGA_BLTMOD_BU32BGR		(3 << 25)
#	define MGA_BLTMOD_BU32RGB		(7 << 25)
#	define MGA_BLTMOD_BU24BGR		(11 << 25)
#	define MGA_BLTMOD_BU24RGB		(15 << 25)
#	define MGA_PATTERN			(1 << 29)
#	define MGA_TRANSC			(1 << 30)
#	define MGA_CLIPDIS			(1 << 31)
#define MGA_DWGSYNC			0x2c4c
#define MGA_FCOL			0x1c24
#define MGA_FIFOSTATUS			0x1e10
#define MGA_FOGCOL			0x1cf4
#define MGA_FXBNDRY			0x1c84
#define MGA_FXLEFT			0x1ca8
#define MGA_FXRIGHT			0x1cac
#define MGA_ICLEAR			0x1e18
#	define MGA_SOFTRAPICLR			(1 << 0)
#	define MGA_VLINEICLR			(1 << 5)
#define MGA_IEN				0x1e1c
#	define MGA_SOFTRAPIEN			(1 << 0)
#	define MGA_VLINEIEN			(1 << 5)
#define MGA_LEN				0x1c5c
#define MGA_MACCESS			0x1c04
#define MGA_PITCH			0x1c8c
#define MGA_PLNWT			0x1c1c
#define MGA_PRIMADDRESS			0x1e58
#	define MGA_DMA_GENERAL			(0 << 0)
#	define MGA_DMA_BLIT			(1 << 0)
#	define MGA_DMA_VECTOR			(2 << 0)
#	define MGA_DMA_VERTEX			(3 << 0)
#define MGA_PRIMEND			0x1e5c
#	define MGA_PRIMNOSTART			(1 << 0)
#	define MGA_PAGPXFER			(1 << 1)
#define MGA_PRIMPTR			0x1e50
#	define MGA_PRIMPTREN0			(1 << 0)
#	define MGA_PRIMPTREN1			(1 << 1)
#define MGA_RST				0x1e40
#	define MGA_SOFTRESET			(1 << 0)
#	define MGA_SOFTEXTRST			(1 << 1)
#define MGA_SECADDRESS			0x2c40
#define MGA_SECEND			0x2c44
#define MGA_SETUPADDRESS		0x2cd0
#define MGA_SETUPEND			0x2cd4
#define MGA_SGN				0x1c58
#define MGA_SOFTRAP			0x2c48
#define MGA_SRCORG			0x2cb4
#	define MGA_SRMMAP_MASK			(1 << 0)
#	define MGA_SRCMAP_FB			(0 << 0)
#	define MGA_SRCMAP_SYSMEM		(1 << 0)
#	define MGA_SRCACC_MASK			(1 << 1)
#	define MGA_SRCACC_PCI			(0 << 1)
#	define MGA_SRCACC_AGP			(1 << 1)
#define MGA_STATUS			0x1e14
#	define MGA_SOFTRAPEN			(1 << 0)
#	define MGA_VSYNCPEN			(1 << 4)
#	define MGA_VLINEPEN			(1 << 5)
#	define MGA_DWGENGSTS			(1 << 16)
#	define MGA_ENDPRDMASTS			(1 << 17)
#define MGA_STENCIL			0x2cc8
#define MGA_STENCILCTL			0x2ccc
#define MGA_TDUALSTAGE0			0x2cf8
#define MGA_TDUALSTAGE1			0x2cfc
#define MGA_TEXBORDERCOL		0x2c5c
#define MGA_TEXCTL			0x2c30
#define MGA_TEXCTL2			0x2c3c
#	define MGA_DUALTEX			(1 << 7)
#	define MGA_G400_TC2_MAGIC		(1 << 15)
#	define MGA_MAP1_ENABLE			(1 << 31)
#define MGA_TEXFILTER			0x2c58
#define MGA_TEXHEIGHT			0x2c2c
#define MGA_TEXORG			0x2c24
#	define MGA_TEXORGMAP_MASK		(1 << 0)
#	define MGA_TEXORGMAP_FB			(0 << 0)
#	define MGA_TEXORGMAP_SYSMEM		(1 << 0)
#	define MGA_TEXORGACC_MASK		(1 << 1)
#	define MGA_TEXORGACC_PCI		(0 << 1)
#	define MGA_TEXORGACC_AGP		(1 << 1)
#define MGA_TEXORG1			0x2ca4
#define MGA_TEXORG2			0x2ca8
#define MGA_TEXORG3			0x2cac
#define MGA_TEXORG4			0x2cb0
#define MGA_TEXTRANS			0x2c34
#define MGA_TEXTRANSHIGH		0x2c38
#define MGA_TEXWIDTH			0x2c28
#define MGA_WACCEPTSEQ			0x1dd4
#define MGA_WCODEADDR			0x1e6c
#define MGA_WFLAG			0x1dc4
#define MGA_WFLAG1			0x1de0
#define MGA_WFLAGNB			0x1e64
#define MGA_WFLAGNB1			0x1e08
#define MGA_WGETMSB			0x1dc8
#define MGA_WIADDR			0x1dc0
#define MGA_WIADDR2			0x1dd8
#	define MGA_WMODE_SUSPEND		(0 << 0)
#	define MGA_WMODE_RESUME			(1 << 0)
#	define MGA_WMODE_JUMP			(2 << 0)
#	define MGA_WMODE_START			(3 << 0)
#	define MGA_WAGP_ENABLE			(1 << 2)
#define MGA_WMISC			0x1e70
#	define MGA_WUCODECACHE_ENABLE		(1 << 0)
#	define MGA_WMASTER_ENABLE		(1 << 1)
#	define MGA_WCACHEFLUSH_ENABLE		(1 << 3)
#define MGA_WVRTXSZ			0x1dcc
#define MGA_YBOT			0x1c9c
#define MGA_YDST			0x1c90
#define MGA_YDSTLEN			0x1c88
#define MGA_YDSTORG			0x1c94
#define MGA_YTOP			0x1c98
#define MGA_ZORG			0x1c0c
#define MGA_EXEC			0x0100
#define MGA_AGP_PLL			0x1e4c
#	define MGA_AGP2XPLL_DISABLE		(0 << 0)
#	define MGA_AGP2XPLL_ENABLE		(1 << 0)
#define MGA_WR0				0x2d00
#define MGA_WR1				0x2d04
#define MGA_WR2				0x2d08
#define MGA_WR3				0x2d0c
#define MGA_WR4				0x2d10
#define MGA_WR5				0x2d14
#define MGA_WR6				0x2d18
#define MGA_WR7				0x2d1c
#define MGA_WR8				0x2d20
#define MGA_WR9				0x2d24
#define MGA_WR10			0x2d28
#define MGA_WR11			0x2d2c
#define MGA_WR12			0x2d30
#define MGA_WR13			0x2d34
#define MGA_WR14			0x2d38
#define MGA_WR15			0x2d3c
#define MGA_WR16			0x2d40
#define MGA_WR17			0x2d44
#define MGA_WR18			0x2d48
#define MGA_WR19			0x2d4c
#define MGA_WR20			0x2d50
#define MGA_WR21			0x2d54
#define MGA_WR22			0x2d58
#define MGA_WR23			0x2d5c
#define MGA_WR24			0x2d60
#define MGA_WR25			0x2d64
#define MGA_WR26			0x2d68
#define MGA_WR27			0x2d6c
#define MGA_WR28			0x2d70
#define MGA_WR29			0x2d74
#define MGA_WR30			0x2d78
#define MGA_WR31			0x2d7c
#define MGA_WR32			0x2d80
#define MGA_WR33			0x2d84
#define MGA_WR34			0x2d88
#define MGA_WR35			0x2d8c
#define MGA_WR36			0x2d90
#define MGA_WR37			0x2d94
#define MGA_WR38			0x2d98
#define MGA_WR39			0x2d9c
#define MGA_WR40			0x2da0
#define MGA_WR41			0x2da4
#define MGA_WR42			0x2da8
#define MGA_WR43			0x2dac
#define MGA_WR44			0x2db0
#define MGA_WR45			0x2db4
#define MGA_WR46			0x2db8
#define MGA_WR47			0x2dbc
#define MGA_WR48			0x2dc0
#define MGA_WR49			0x2dc4
#define MGA_WR50			0x2dc8
#define MGA_WR51			0x2dcc
#define MGA_WR52			0x2dd0
#define MGA_WR53			0x2dd4
#define MGA_WR54			0x2dd8
#define MGA_WR55			0x2ddc
#define MGA_WR56			0x2de0
#define MGA_WR57			0x2de4
#define MGA_WR58			0x2de8
#define MGA_WR59			0x2dec
#define MGA_WR60			0x2df0
#define MGA_WR61			0x2df4
#define MGA_WR62			0x2df8
#define MGA_WR63			0x2dfc
#	define MGA_G400_WR_MAGIC		(1 << 6)
#	define MGA_G400_WR56_MAGIC		0x46480000
#define MGA_ILOAD_ALIGN		64
#define MGA_ILOAD_MASK		(MGA_ILOAD_ALIGN - 1)
#define MGA_DWGCTL_FLUSH	(MGA_OPCOD_TEXTURE_TRAP |		\
MGA_ATYPE_I |				\
MGA_ZMODE_NOZCMP |			\
MGA_ARZERO |				\
MGA_SGNZERO |				\
MGA_BOP_SRC |				\
(15 << MGA_TRANS_SHIFT))
#define MGA_DWGCTL_CLEAR	(MGA_OPCOD_TRAP |			\
MGA_ZMODE_NOZCMP |			\
MGA_SOLID |				\
MGA_ARZERO |				\
MGA_SGNZERO |				\
MGA_SHIFTZERO |			\
MGA_BOP_SRC |				\
(0 << MGA_TRANS_SHIFT) |		\
MGA_BLTMOD_BMONOLEF |			\
MGA_TRANSC |				\
MGA_CLIPDIS)
#define MGA_DWGCTL_COPY		(MGA_OPCOD_BITBLT |			\
MGA_ATYPE_RPL |			\
MGA_SGNZERO |				\
MGA_SHIFTZERO |			\
MGA_BOP_SRC |				\
(0 << MGA_TRANS_SHIFT) |		\
MGA_BLTMOD_BFCOL |			\
MGA_CLIPDIS)
static __inline__ int mga_is_idle(drm_mga_private_t *dev_priv)
