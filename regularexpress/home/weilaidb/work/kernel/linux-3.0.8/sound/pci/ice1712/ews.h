#define __SOUND_EWS_H
#define EWS_DEVICE_DESC \
","\
","\
","\
","\
"," \
","
#define ICE1712_SUBDEVICE_EWX2496	0x3b153011
#define ICE1712_SUBDEVICE_EWS88MT	0x3b151511
#define ICE1712_SUBDEVICE_EWS88MT_NEW	0x3b152511
#define ICE1712_SUBDEVICE_EWS88D	0x3b152b11
#define ICE1712_SUBDEVICE_DMX6FIRE	0x3b153811
#define ICE1712_SUBDEVICE_PHASE88	0x3b155111
#define ICE1712_SUBDEVICE_TS88   	0x3b157c11
extern struct snd_ice1712_card_info snd_ice1712_ews_cards[];
#define ICE1712_EWX2496_AK4524_CS	0x01
#define ICE1712_EWX2496_AIN_SEL		0x02
#define ICE1712_EWX2496_AOUT_SEL	0x04
#define ICE1712_EWX2496_RW		0x08
#define ICE1712_EWX2496_SERIAL_DATA	0x10
#define ICE1712_EWX2496_SERIAL_CLOCK	0x20
#define ICE1712_EWX2496_TX2		0x40
#define ICE1712_EWX2496_RX2		0x80
#define ICE1712_EWS88_CS8414_RATE	0x07
#define ICE1712_EWS88_RW		0x08
#define ICE1712_EWS88_SERIAL_DATA	0x10
#define ICE1712_EWS88_SERIAL_CLOCK	0x20
#define ICE1712_EWS88_TX2		0x40
#define ICE1712_EWS88_RX2		0x80
#define ICE1712_EWS88MT_CS8404_ADDR	(0x40>>1)
#define ICE1712_EWS88MT_INPUT_ADDR	(0x46>>1)
#define ICE1712_EWS88MT_OUTPUT_ADDR	(0x48>>1)
#define ICE1712_EWS88MT_OUTPUT_SENSE	0x40
#define ICE1712_EWS88D_PCF_ADDR		(0x40>>1)
#define ICE1712_6FIRE_AK4524_CS_MASK	0x07
#define ICE1712_6FIRE_RW		0x08
#define ICE1712_6FIRE_SERIAL_DATA	0x10
#define ICE1712_6FIRE_SERIAL_CLOCK	0x20
#define ICE1712_6FIRE_TX2		0x40
#define ICE1712_6FIRE_RX2		0x80
#define ICE1712_6FIRE_PCF9554_ADDR	(0x40>>1)
#define ICE1712_6FIRE_CS8427_ADDR	(0x22)
