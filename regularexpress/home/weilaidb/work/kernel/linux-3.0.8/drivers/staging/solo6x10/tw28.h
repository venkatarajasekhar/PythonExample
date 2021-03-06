#define __SOLO6X10_TW28_H
#define TW_NUM_CHIP				4
#define TW_BASE_ADDR				0x28
#define TW_CHIP_OFFSET_ADDR(n)			(TW_BASE_ADDR + (n))
#define TW_AV_STAT_ADDR				0x5a
#define TW_HUE_ADDR(n)				(0x07 | ((n) << 4))
#define TW_SATURATION_ADDR(n)			(0x08 | ((n) << 4))
#define TW_CONTRAST_ADDR(n)			(0x09 | ((n) << 4))
#define TW_BRIGHTNESS_ADDR(n)			(0x0a | ((n) << 4))
#define TW_AUDIO_OUTPUT_VOL_ADDR		0x70
#define TW_AUDIO_INPUT_GAIN_ADDR(n)		(0x60 + ((n > 1) ? 1 : 0))
#define TW286X_AV_STAT_ADDR			0xfd
#define TW286x_HUE_ADDR(n)			(0x06 | ((n) << 4))
#define TW286x_SATURATIONU_ADDR(n)		(0x04 | ((n) << 4))
#define TW286x_SATURATIONV_ADDR(n)		(0x05 | ((n) << 4))
#define TW286x_CONTRAST_ADDR(n)			(0x02 | ((n) << 4))
#define TW286x_BRIGHTNESS_ADDR(n)		(0x01 | ((n) << 4))
#define TW286x_SHARPNESS(n)			(0x03 | ((n) << 4))
#define TW286x_AUDIO_OUTPUT_VOL_ADDR		0xdf
#define TW286x_AUDIO_INPUT_GAIN_ADDR(n)		(0xD0 + ((n > 1) ? 1 : 0))
int solo_tw28_init(struct solo_dev *solo_dev);
int tw28_set_ctrl_val(struct solo_dev *solo_dev, u32 ctrl, u8 ch, s32 val);
int tw28_get_ctrl_val(struct solo_dev *solo_dev, u32 ctrl, u8 ch, s32 *val);
u8 tw28_get_audio_gain(struct solo_dev *solo_dev, u8 ch);
void tw28_set_audio_gain(struct solo_dev *solo_dev, u8 ch, u8 val);
int tw28_get_video_status(struct solo_dev *solo_dev, u8 ch);
