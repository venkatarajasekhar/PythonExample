static int uvc_input_init(struct uvc_device *dev)
static void uvc_input_cleanup(struct uvc_device *dev)
static void uvc_input_report_key(struct uvc_device *dev, unsigned int code,
int value)
#define uvc_input_init(dev)
#define uvc_input_cleanup(dev)
#define uvc_input_report_key(dev, code, value)
static void uvc_event_streaming(struct uvc_device *dev, __u8 *data, int len)
static void uvc_event_control(struct uvc_device *dev, __u8 *data, int len)
static void uvc_status_complete(struct urb *urb)
int uvc_status_init(struct uvc_device *dev)
void uvc_status_cleanup(struct uvc_device *dev)
int uvc_status_start(struct uvc_device *dev)
void uvc_status_stop(struct uvc_device *dev)
int uvc_status_suspend(struct uvc_device *dev)
int uvc_status_resume(struct uvc_device *dev)
