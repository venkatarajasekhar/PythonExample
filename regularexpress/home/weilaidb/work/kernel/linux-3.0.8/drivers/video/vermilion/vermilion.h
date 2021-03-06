#define _VERMILION_H_
#define VML_DEVICE_GPU 0x5002
#define VML_DEVICE_VDC 0x5009
#define VML_VRAM_AREAS 3
#define VML_MAX_XRES 1024
#define VML_MAX_YRES 768
#define VML_MAX_XRES_VIRTUAL 1040
#define VML_R_MASK                   0x3FF00000
#define VML_R_SHIFT                  20
#define VML_G_MASK                   0x000FFC00
#define VML_G_SHIFT                  10
#define VML_B_MASK                   0x000003FF
#define VML_B_SHIFT                  0
#define VML_DSPCCNTR                 0x00072180
#define VML_GFX_ENABLE               0x80000000
#define VML_GFX_GAMMABYPASS          0x40000000
#define VML_GFX_ARGB1555             0x0C000000
#define VML_GFX_RGB0888              0x18000000
#define VML_GFX_ARGB8888             0x1C000000
#define VML_GFX_ALPHACONST           0x02000000
#define VML_GFX_ALPHAMULT            0x01000000
#define VML_GFX_CONST_ALPHA          0x000000FF
#define VML_DSPCADDR                 0x00072184
#define VML_DSPCSTRIDE               0x00072188
#define VML_DSPCPOS                  0x0007218C
#define VML_POS_YMASK                0x0FFF0000
#define VML_POS_YSHIFT               16
#define VML_POS_XMASK                0x00000FFF
#define VML_POS_XSHIFT               0
#define VML_DSPCSIZE                 0x00072190
#define VML_SIZE_HMASK               0x0FFF0000
#define VML_SIZE_HSHIFT              16
#define VML_SISE_WMASK               0x00000FFF
#define VML_SIZE_WSHIFT              0
#define VML_DSPCGAMLUT               0x00072200
#define VML_PVOCONFIG                0x00061140
#define VML_CONFIG_BASE              0x80000000
#define VML_CONFIG_PIXEL_SWAP        0x04000000
#define VML_CONFIG_DE_INV            0x01000000
#define VML_CONFIG_HREF_INV          0x00400000
#define VML_CONFIG_VREF_INV          0x00100000
#define VML_CONFIG_CLK_INV           0x00040000
#define VML_CONFIG_CLK_DIV2          0x00010000
#define VML_CONFIG_ESTRB_INV         0x00008000
#define VML_HTOTAL_A                 0x00060000
#define VML_HTOTAL_MASK              0x1FFF0000
#define VML_HTOTAL_SHIFT             16
#define VML_HTOTAL_VAL               8192
#define VML_HACTIVE_MASK             0x000007FF
#define VML_HACTIVE_SHIFT            0
#define VML_HACTIVE_VAL              4096
#define VML_HBLANK_A                 0x00060004
#define VML_HBLANK_END_MASK          0x1FFF0000
#define VML_HBLANK_END_SHIFT         16
#define VML_HBLANK_END_VAL           8192
#define VML_HBLANK_START_MASK        0x00001FFF
#define VML_HBLANK_START_SHIFT       0
#define VML_HBLANK_START_VAL         8192
#define VML_HSYNC_A                  0x00060008
#define VML_HSYNC_END_MASK           0x1FFF0000
#define VML_HSYNC_END_SHIFT          16
#define VML_HSYNC_END_VAL            8192
#define VML_HSYNC_START_MASK         0x00001FFF
#define VML_HSYNC_START_SHIFT        0
#define VML_HSYNC_START_VAL          8192
#define VML_VTOTAL_A                 0x0006000C
#define VML_VTOTAL_MASK              0x1FFF0000
#define VML_VTOTAL_SHIFT             16
#define VML_VTOTAL_VAL               8192
#define VML_VACTIVE_MASK             0x000007FF
#define VML_VACTIVE_SHIFT            0
#define VML_VACTIVE_VAL              4096
#define VML_VBLANK_A                 0x00060010
#define VML_VBLANK_END_MASK          0x1FFF0000
#define VML_VBLANK_END_SHIFT         16
#define VML_VBLANK_END_VAL           8192
#define VML_VBLANK_START_MASK        0x00001FFF
#define VML_VBLANK_START_SHIFT       0
#define VML_VBLANK_START_VAL         8192
#define VML_VSYNC_A                  0x00060014
#define VML_VSYNC_END_MASK           0x1FFF0000
#define VML_VSYNC_END_SHIFT          16
#define VML_VSYNC_END_VAL            8192
#define VML_VSYNC_START_MASK         0x00001FFF
#define VML_VSYNC_START_SHIFT        0
#define VML_VSYNC_START_VAL          8192
#define VML_PIPEASRC                 0x0006001C
#define VML_PIPEASRC_HMASK           0x0FFF0000
#define VML_PIPEASRC_HSHIFT          16
#define VML_PIPEASRC_VMASK           0x00000FFF
#define VML_PIPEASRC_VSHIFT          0
#define VML_BCLRPAT_A                0x00060020
#define VML_CANVSCLR_A               0x00060024
#define VML_PIPEACONF                0x00070008
#define VML_PIPE_BASE                0x00000000
#define VML_PIPE_ENABLE              0x80000000
#define VML_PIPE_FORCE_BORDER        0x02000000
#define VML_PIPE_PLANES_OFF          0x00080000
#define VML_PIPE_ARGB_OUTPUT_MODE    0x00040000
#define VML_DSPARB                   0x00070030
#define VML_FIFO_DEFAULT             0x00001D9C
#define VML_RCOMPSTAT                0x00070048
#define VML_MDVO_VDC_I_RCOMP         0x80000000
#define VML_MDVO_POWERSAVE_OFF       0x00000008
#define VML_MDVO_PAD_ENABLE          0x00000004
#define VML_MDVO_PULLDOWN_ENABLE     0x00000001
struct vml_par ;
struct vram_area ;
struct vml_info ;
struct vml_sys ;
extern int vmlfb_register_subsys(struct vml_sys *sys);
extern void vmlfb_unregister_subsys(struct vml_sys *sys);
#define VML_READ32(_par, _offset) \
(ioread32((_par)->vdc_mem + (_offset)))
#define VML_WRITE32(_par, _offset, _value)				\
iowrite32(_value, (_par)->vdc_mem + (_offset))
