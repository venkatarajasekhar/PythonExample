#define __CARL9170_SHARED_EEPROM_H
#define AR9170_EEPROM_START		0x1600
#define AR5416_MAX_CHAINS		2
#define AR5416_MODAL_SPURS		5
struct ar9170_eeprom_modal  __packed;
#define AR5416_NUM_PD_GAINS		4
#define AR5416_PD_GAIN_ICEPTS		5
struct ar9170_calibration_data_per_freq  __packed;
#define AR5416_NUM_5G_CAL_PIERS		8
#define AR5416_NUM_2G_CAL_PIERS		4
#define AR5416_NUM_5G_TARGET_PWRS	8
#define AR5416_NUM_2G_CCK_TARGET_PWRS	3
#define AR5416_NUM_2G_OFDM_TARGET_PWRS	4
#define AR5416_MAX_NUM_TGT_PWRS		8
struct ar9170_calibration_target_power_legacy  __packed;
struct ar9170_calibration_target_power_ht  __packed;
#define AR5416_NUM_CTLS			24
struct ar9170_calctl_edges  __packed;
#define AR5416_NUM_BAND_EDGES		8
struct ar9170_calctl_data  __packed;
struct ar9170_eeprom  __packed;
#define AR9170_LED_MODE_POWER_ON		0x0001
#define AR9170_LED_MODE_RESERVED		0x0002
#define AR9170_LED_MODE_DISABLE_STATE		0x0004
#define AR9170_LED_MODE_OFF_IN_PSM		0x0008
#define AR9170_LED_MODE_FREQUENCY_S		4
#define AR9170_LED_MODE_FREQUENCY		0x0030
#define AR9170_LED_MODE_FREQUENCY_1HZ		0x0000
#define AR9170_LED_MODE_FREQUENCY_0_5HZ		0x0010
#define AR9170_LED_MODE_FREQUENCY_0_25HZ	0x0020
#define AR9170_LED_MODE_FREQUENCY_0_125HZ	0x0030
#define AR9170_LED_MODE_CONN_STATE_S		4
#define AR9170_LED_MODE_CONN_STATE		0x0030
#define AR9170_LED_MODE_CONN_STATE_FORCE_OFF	0x0000
#define AR9170_LED_MODE_CONN_STATE_FORCE_ON	0x0010
#define AR9170_LED_MODE_CONN_STATE_IOFF_AON	0x0020
#define AR9170_LED_MODE_CONN_STATE_ION_AOFF	0x0010
#define AR9170_LED_MODE_MODE			0x0040
#define AR9170_LED_MODE_RESERVED2		0x0080
#define AR9170_LED_MODE_TON_SCAN_S		8
#define AR9170_LED_MODE_TON_SCAN		0x0f00
#define AR9170_LED_MODE_TOFF_SCAN_S		12
#define AR9170_LED_MODE_TOFF_SCAN		0xf000
struct ar9170_led_mode ;
