static int hv7131r_init(struct sn9c102_device* cam)
static int hv7131r_get_ctrl(struct sn9c102_device* cam,
struct v4l2_control* ctrl)
static int hv7131r_set_ctrl(struct sn9c102_device* cam,
const struct v4l2_control* ctrl)
static int hv7131r_set_crop(struct sn9c102_device* cam,
const struct v4l2_rect* rect)
static int hv7131r_set_pix_format(struct sn9c102_device* cam,
const struct v4l2_pix_format* pix)
static const struct sn9c102_sensor hv7131r = ;
int sn9c102_probe_hv7131r(struct sn9c102_device* cam)
