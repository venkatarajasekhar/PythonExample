static int cx25840_set_audclk_freq(struct i2c_client *client, u32 freq)
static inline int cx25836_set_audclk_freq(struct i2c_client *client, u32 freq)
static int cx23885_set_audclk_freq(struct i2c_client *client, u32 freq)
static int cx231xx_set_audclk_freq(struct i2c_client *client, u32 freq)
static int set_audclk_freq(struct i2c_client *client, u32 freq)
void cx25840_audio_set_path(struct i2c_client *client)
static void set_volume(struct i2c_client *client, int volume)
static void set_balance(struct i2c_client *client, int balance)
int cx25840_s_clock_freq(struct v4l2_subdev *sd, u32 freq)
static int cx25840_audio_s_ctrl(struct v4l2_ctrl *ctrl)
const struct v4l2_ctrl_ops cx25840_audio_ctrl_ops = ;
