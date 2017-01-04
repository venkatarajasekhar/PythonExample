#define _LBS_IF_USB_H
struct lbs_private;
#define CMD_TYPE_REQUEST		0xF00DFACE
#define CMD_TYPE_DATA			0xBEADC0DE
#define CMD_TYPE_INDICATION		0xBEEFFACE
#define IPFIELD_ALIGN_OFFSET		2
#define BOOT_CMD_FW_BY_USB		0x01
#define BOOT_CMD_FW_IN_EEPROM		0x02
#define BOOT_CMD_UPDATE_BOOT2		0x03
#define BOOT_CMD_UPDATE_FW		0x04
#define BOOT_CMD_MAGIC_NUMBER		0x4C56524D
struct bootcmd
;
#define BOOT_CMD_RESP_OK		0x0001
#define BOOT_CMD_RESP_FAIL		0x0000
#define BOOT_CMD_RESP_NOT_SUPPORTED	0x0002
struct bootcmdresp
;
struct if_usb_card ;
struct fwheader ;
#define FW_MAX_DATA_BLK_SIZE	600
struct fwdata ;
struct fwsyncheader ;
#define FW_HAS_DATA_TO_RECV		0x00000001
#define FW_HAS_LAST_BLOCK		0x00000004
