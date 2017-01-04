static int led_mode;
module_param(led_mode, int, S_IRUGO);
MODULE_PARM_DESC(led_mode, "0=system default, "
"1=On(RF On)/Off(RF Off), 2=blinking");
static const struct ieee80211_tpt_blink iwl_blink[] = ;
void iwlagn_led_enable(struct iwl_priv *priv)
static inline u8 iwl_blink_compensation(struct iwl_priv *priv,
u8 time, u16 compensation)
static int iwl_send_led_cmd(struct iwl_priv *priv, struct iwl_led_cmd *led_cmd)
static int iwl_led_cmd(struct iwl_priv *priv,
unsigned long on,
unsigned long off)
static void iwl_led_brightness_set(struct led_classdev *led_cdev,
enum led_brightness brightness)
static int iwl_led_blink_set(struct led_classdev *led_cdev,
unsigned long *delay_on,
unsigned long *delay_off)
void iwl_leds_init(struct iwl_priv *priv)
void iwl_leds_exit(struct iwl_priv *priv)
