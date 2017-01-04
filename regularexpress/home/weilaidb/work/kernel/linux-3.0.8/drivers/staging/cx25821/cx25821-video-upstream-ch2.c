#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_DESCRIPTION("v4l2 driver module for cx25821 based TV cards");
MODULE_AUTHOR("Hiep Huynh <hiep.huynh@conexant.com>");
MODULE_LICENSE("GPL");
static int _intr_msk =
FLD_VID_SRC_RISC1 | FLD_VID_SRC_UF | FLD_VID_SRC_SYNC | FLD_VID_SRC_OPC_ERR;
static __le32 *cx25821_update_riscprogram_ch2(struct cx25821_dev *dev,
__le32 *rp, unsigned int offset,
unsigned int bpl, u32 sync_line,
unsigned int lines,
int fifo_enable, int field_type)
static __le32 *cx25821_risc_field_upstream_ch2(struct cx25821_dev *dev,
__le32 *rp,
dma_addr_t databuf_phys_addr,
unsigned int offset,
u32 sync_line, unsigned int bpl,
unsigned int lines,
int fifo_enable, int field_type)
int cx25821_risc_buffer_upstream_ch2(struct cx25821_dev *dev,
struct pci_dev *pci,
unsigned int top_offset, unsigned int bpl,
unsigned int lines)
void cx25821_stop_upstream_video_ch2(struct cx25821_dev *dev)
void cx25821_free_mem_upstream_ch2(struct cx25821_dev *dev)
int cx25821_get_frame_ch2(struct cx25821_dev *dev, struct sram_channel *sram_ch)
static void cx25821_vidups_handler_ch2(struct work_struct *work)
int cx25821_openfile_ch2(struct cx25821_dev *dev, struct sram_channel *sram_ch)
static int cx25821_upstream_buffer_prepare_ch2(struct cx25821_dev *dev,
struct sram_channel *sram_ch,
int bpl)
int cx25821_video_upstream_irq_ch2(struct cx25821_dev *dev, int chan_num,
u32 status)
static irqreturn_t cx25821_upstream_irq_ch2(int irq, void *dev_id)
static void cx25821_set_pixelengine_ch2(struct cx25821_dev *dev,
struct sram_channel *ch, int pix_format)
int cx25821_start_video_dma_upstream_ch2(struct cx25821_dev *dev,
struct sram_channel *sram_ch)
int cx25821_vidupstream_init_ch2(struct cx25821_dev *dev, int channel_select,
int pixel_format)
