static unsigned int vbibufs = 5;
module_param(vbibufs, int, 0644);
MODULE_PARM_DESC(vbibufs, "number of vbi buffers, range 2-32");
static unsigned int vbi_debug;
module_param(vbi_debug, int, 0644);
MODULE_PARM_DESC(vbi_debug, "enable debug messages [vbi]");
#define dprintk(level, fmt, arg...)	if (vbi_debug >= level) \
printk(KERN_DEBUG "%s: " fmt, dev->core->name , ## arg)
static void
free_buffer(struct videobuf_queue *vq, struct em28xx_buffer *buf)
static int
vbi_setup(struct videobuf_queue *q, unsigned int *count, unsigned int *size)
static int
vbi_prepare(struct videobuf_queue *q, struct videobuf_buffer *vb,
enum v4l2_field field)
static void
vbi_queue(struct videobuf_queue *vq, struct videobuf_buffer *vb)
static void vbi_release(struct videobuf_queue *q, struct videobuf_buffer *vb)
struct videobuf_queue_ops em28xx_vbi_qops = ;
