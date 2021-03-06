#define _DVB_USB_GP8PSK_H_
#define DVB_USB_LOG_PREFIX "gp8psk"
extern int dvb_usb_gp8psk_debug;
#define deb_info(args...) dprintk(dvb_usb_gp8psk_debug,0x01,args)
#define deb_xfer(args...) dprintk(dvb_usb_gp8psk_debug,0x02,args)
#define deb_rc(args...)   dprintk(dvb_usb_gp8psk_debug,0x04,args)
#define deb_fe(args...)   dprintk(dvb_usb_gp8psk_debug,0x08,args)
#define TH_COMMAND_IN                     0xC0
#define TH_COMMAND_OUT                    0xC1
#define GET_8PSK_CONFIG                 0x80
#define SET_8PSK_CONFIG                 0x81
#define I2C_WRITE			0x83
#define I2C_READ			0x84
#define ARM_TRANSFER                    0x85
#define TUNE_8PSK                       0x86
#define GET_SIGNAL_STRENGTH             0x87
#define LOAD_BCM4500                    0x88
#define BOOT_8PSK                       0x89
#define START_INTERSIL                  0x8A
#define SET_LNB_VOLTAGE                 0x8B
#define SET_22KHZ_TONE                  0x8C
#define SEND_DISEQC_COMMAND             0x8D
#define SET_DVB_MODE                    0x8E
#define SET_DN_SWITCH                   0x8F
#define GET_SIGNAL_LOCK                 0x90
#define GET_FW_VERS			0x92
#define GET_SERIAL_NUMBER               0x93
#define USE_EXTRA_VOLT                  0x94
#define GET_FPGA_VERS			0x95
#define CW3K_INIT			0x9d
#define bm8pskStarted                   0x01
#define bm8pskFW_Loaded                 0x02
#define bmIntersilOn                    0x04
#define bmDVBmode                       0x08
#define bm22kHz                         0x10
#define bmSEL18V                        0x20
#define bmDCtuned                       0x40
#define bmArmed                         0x80
#define ADV_MOD_DVB_QPSK 0
#define ADV_MOD_TURBO_QPSK 1
#define ADV_MOD_TURBO_8PSK 2
#define ADV_MOD_TURBO_16QAM 3
#define ADV_MOD_DCII_C_QPSK 4
#define ADV_MOD_DCII_I_QPSK 5
#define ADV_MOD_DCII_Q_QPSK 6
#define ADV_MOD_DCII_C_OQPSK 7
#define ADV_MOD_DSS_QPSK 8
#define ADV_MOD_DVB_BPSK 9
#define GET_USB_SPEED                     0x07
#define USB_SPEED_LOW                    0
#define USB_SPEED_FULL                   1
#define USB_SPEED_HIGH                   2
#define RESET_FX2                         0x13
#define FW_VERSION_READ                   0x0B
#define VENDOR_STRING_READ                0x0C
#define PRODUCT_STRING_READ               0x0D
#define FW_BCD_VERSION_READ               0x14
#define GP8PSK_FW_REV1			0x020604
#define GP8PSK_FW_REV2			0x020704
#define GP8PSK_FW_VERS(_fw_vers)	((_fw_vers)[2]<<0x10 | (_fw_vers)[1]<<0x08 | (_fw_vers)[0])
extern struct dvb_frontend * gp8psk_fe_attach(struct dvb_usb_device *d);
extern int gp8psk_usb_in_op(struct dvb_usb_device *d, u8 req, u16 value, u16 index, u8 *b, int blen);
extern int gp8psk_usb_out_op(struct dvb_usb_device *d, u8 req, u16 value,
u16 index, u8 *b, int blen);
extern int gp8psk_bcm4500_reload(struct dvb_usb_device *d);
