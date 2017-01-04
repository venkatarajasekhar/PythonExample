#define HIDDEV_MINOR_BASE	0
#define HIDDEV_MINORS		256
#define HIDDEV_MINOR_BASE	96
#define HIDDEV_MINORS		16
#define HIDDEV_BUFFER_SIZE	2048
struct hiddev ;
struct hiddev_list ;
static struct hid_report *
hiddev_lookup_report(struct hid_device *hid, struct hiddev_report_info *rinfo)
static struct hid_field *
hiddev_lookup_usage(struct hid_device *hid, struct hiddev_usage_ref *uref)
static void hiddev_send_event(struct hid_device *hid,
struct hiddev_usage_ref *uref)
void hiddev_hid_event(struct hid_device *hid, struct hid_field *field,
struct hid_usage *usage, __s32 value)
EXPORT_SYMBOL_GPL(hiddev_hid_event);
void hiddev_report_event(struct hid_device *hid, struct hid_report *report)
static int hiddev_fasync(int fd, struct file *file, int on)
static int hiddev_release(struct inode * inode, struct file * file)
static int hiddev_open(struct inode *inode, struct file *file)
static ssize_t hiddev_write(struct file * file, const char __user * buffer, size_t count, loff_t *ppos)
static ssize_t hiddev_read(struct file * file, char __user * buffer, size_t count, loff_t *ppos)
static unsigned int hiddev_poll(struct file *file, poll_table *wait)
static noinline int hiddev_ioctl_usage(struct hiddev *hiddev, unsigned int cmd, void __user *user_arg)
static noinline int hiddev_ioctl_string(struct hiddev *hiddev, unsigned int cmd, void __user *user_arg)
static long hiddev_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static long hiddev_compat_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations hiddev_fops = ;
static char *hiddev_devnode(struct device *dev, mode_t *mode)
static struct usb_class_driver hiddev_class = ;
int hiddev_connect(struct hid_device *hid, unsigned int force)
static struct usb_class_driver hiddev_class;
void hiddev_disconnect(struct hid_device *hid)
