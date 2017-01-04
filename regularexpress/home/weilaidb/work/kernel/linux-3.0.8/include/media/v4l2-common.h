#define V4L2_COMMON_H_
#define v4l_printk(level, name, adapter, addr, fmt, arg...) \
printk(level "%s %d-%04x: " fmt, name, i2c_adapter_id(adapter), addr , ## arg)
#define v4l_client_printk(level, client, fmt, arg...)			    \
v4l_printk(level, (client)->driver->driver.name, (client)->adapter, \
(client)->addr, fmt , ## arg)
#define v4l_err(client, fmt, arg...) \
v4l_client_printk(KERN_ERR, client, fmt , ## arg)
#define v4l_warn(client, fmt, arg...) \
v4l_client_printk(KERN_WARNING, client, fmt , ## arg)
#define v4l_info(client, fmt, arg...) \
v4l_client_printk(KERN_INFO, client, fmt , ## arg)
#define v4l_dbg(level, debug, client, fmt, arg...)			     \
do  while (0)
#define v4l2_printk(level, dev, fmt, arg...) \
printk(level "%s: " fmt, (dev)->name , ## arg)
#define v4l2_err(dev, fmt, arg...) \
v4l2_printk(KERN_ERR, dev, fmt , ## arg)
#define v4l2_warn(dev, fmt, arg...) \
v4l2_printk(KERN_WARNING, dev, fmt , ## arg)
#define v4l2_info(dev, fmt, arg...) \
v4l2_printk(KERN_INFO, dev, fmt , ## arg)
#define v4l2_dbg(level, debug, dev, fmt, arg...)			\
do  while (0)
int v4l2_ctrl_check(struct v4l2_ext_control *ctrl, struct v4l2_queryctrl *qctrl,
const char * const *menu_items);
const char *v4l2_ctrl_get_name(u32 id);
const char * const *v4l2_ctrl_get_menu(u32 id);
int v4l2_ctrl_query_fill(struct v4l2_queryctrl *qctrl, s32 min, s32 max, s32 step, s32 def);
int v4l2_ctrl_query_menu(struct v4l2_querymenu *qmenu,
struct v4l2_queryctrl *qctrl, const char * const *menu_items);
#define V4L2_CTRL_MENU_IDS_END (0xffffffff)
int v4l2_ctrl_query_menu_valid_items(struct v4l2_querymenu *qmenu, const u32 *ids);
u32 v4l2_ctrl_next(const u32 * const *ctrl_classes, u32 id);
struct i2c_client;
int v4l2_chip_match_i2c_client(struct i2c_client *c, const struct v4l2_dbg_match *match);
int v4l2_chip_ident_i2c_client(struct i2c_client *c, struct v4l2_dbg_chip_ident *chip,
u32 ident, u32 revision);
int v4l2_chip_match_host(const struct v4l2_dbg_match *match);
struct i2c_driver;
struct i2c_adapter;
struct i2c_client;
struct i2c_device_id;
struct v4l2_device;
struct v4l2_subdev;
struct v4l2_subdev_ops;
struct v4l2_subdev *v4l2_i2c_new_subdev(struct v4l2_device *v4l2_dev,
struct i2c_adapter *adapter, const char *client_type,
u8 addr, const unsigned short *probe_addrs);
struct i2c_board_info;
struct v4l2_subdev *v4l2_i2c_new_subdev_board(struct v4l2_device *v4l2_dev,
struct i2c_adapter *adapter, struct i2c_board_info *info,
const unsigned short *probe_addrs);
void v4l2_i2c_subdev_init(struct v4l2_subdev *sd, struct i2c_client *client,
const struct v4l2_subdev_ops *ops);
unsigned short v4l2_i2c_subdev_addr(struct v4l2_subdev *sd);
enum v4l2_i2c_tuner_type ;
const unsigned short *v4l2_i2c_tuner_addrs(enum v4l2_i2c_tuner_type type);
#if defined(CONFIG_SPI)
struct spi_device;
struct v4l2_subdev *v4l2_spi_new_subdev(struct v4l2_device *v4l2_dev,
struct spi_master *master, struct spi_board_info *info);
void v4l2_spi_subdev_init(struct v4l2_subdev *sd, struct spi_device *spi,
const struct v4l2_subdev_ops *ops);
struct v4l2_priv_tun_config ;
#define TUNER_SET_CONFIG           _IOW('d', 92, struct v4l2_priv_tun_config)
#define VIDIOC_INT_RESET            	_IOW ('d', 102, u32)
struct v4l2_routing ;
void v4l_bound_align_image(unsigned int *w, unsigned int wmin,
unsigned int wmax, unsigned int walign,
unsigned int *h, unsigned int hmin,
unsigned int hmax, unsigned int halign,
unsigned int salign);
int v4l_fill_dv_preset_info(u32 preset, struct v4l2_dv_enum_preset *info);
struct v4l2_discrete_probe ;
const struct v4l2_frmsize_discrete *v4l2_find_nearest_format(
const struct v4l2_discrete_probe *probe,
s32 width, s32 height);
