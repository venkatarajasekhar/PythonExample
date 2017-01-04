#define DEVICE_NAME "sii9022"
#define SII9022_DEVICE_ID   0xB0
struct sii9022_i2c_addr_data;
static u8 video_mode_data[] = ;
static u8 avi_io_format[] = ;
static struct sii9022_i2c_addr_data regset0[] = ;
static u8 video_infoframe[] = ;
static struct sii9022_i2c_addr_data regset1[] = ;
static u8 misc_infoframe[] = ;
static struct sii9022_i2c_addr_data regset2[] = ;
static int send_i2c_data(struct i2c_client *client,
struct sii9022_i2c_addr_data *regset,
int size)
static int hdmi_sii_enable(struct i2c_client *client)
static const struct i2c_device_id hmdi_sii_id[] = ;
static int hdmi_sii_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static struct i2c_driver hdmi_sii_i2c_driver = ;
static int __init hdmi_sii_init(void)
static void __exit hdmi_sii_exit(void)
module_init(hdmi_sii_init);
module_exit(hdmi_sii_exit);
MODULE_LICENSE("GPL v2");
MODULE_VERSION("0.1");
MODULE_AUTHOR("Qualcomm Innovation Center, Inc.");
MODULE_DESCRIPTION("SiI9022 HDMI driver");
MODULE_ALIAS("platform:hdmi-sii9022");
