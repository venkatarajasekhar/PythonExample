MODULE_AUTHOR("C.van Schaik");
MODULE_DESCRIPTION("A driver for the Zoltrix Radio Plus.");
MODULE_LICENSE("GPL");
#define CONFIG_RADIO_ZOLTRIX_PORT -1
static int io = CONFIG_RADIO_ZOLTRIX_PORT;
static int radio_nr = -1;
module_param(io, int, 0);
MODULE_PARM_DESC(io, "I/O address of the Zoltrix Radio Plus (0x20c or 0x30c)");
module_param(radio_nr, int, 0);
#define RADIO_VERSION KERNEL_VERSION(0, 0, 2)
struct zoltrix ;
static struct zoltrix zoltrix_card;
static int zol_setvol(struct zoltrix *zol, int vol)
static void zol_mute(struct zoltrix *zol)
static void zol_unmute(struct zoltrix *zol)
static int zol_setfreq(struct zoltrix *zol, unsigned long freq)
static int zol_getsigstr(struct zoltrix *zol)
static int zol_is_stereo(struct zoltrix *zol)
static int vidioc_querycap(struct file *file, void  *priv,
struct v4l2_capability *v)
static int vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *v)
static int vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *v)
static int vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_g_input(struct file *filp, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *filp, void *priv, unsigned int i)
static int vidioc_g_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int vidioc_s_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static const struct v4l2_file_operations zoltrix_fops =
;
static const struct v4l2_ioctl_ops zoltrix_ioctl_ops = ;
static int __init zoltrix_init(void)
static void __exit zoltrix_exit(void)
module_init(zoltrix_init);
module_exit(zoltrix_exit);
