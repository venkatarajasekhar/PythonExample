#define __DEVICE_CONFIG_H
typedef
struct _version  version_t, *pversion_t;
#define VID_TABLE_SIZE      64
#define MCAST_TABLE_SIZE    64
#define MCAM_SIZE           32
#define VCAM_SIZE           32
#define TX_QUEUE_NO         8
#define DEVICE_NAME         "vt6655"
#define DEVICE_FULL_DRV_NAM "VIA Networking Solomon-A/B/G Wireless LAN Adapter Driver"
#define MAJOR_VERSION       1
#define MINOR_VERSION       17
#define DEVICE_VERSION       "1.19.12"
#define CONFIG_PATH            "/etc/vntconfiguration.dat"
#define PKT_BUF_SZ          2390
#define MAX_UINTS           8
#define OPTION_DEFAULT
typedef enum  _chip_type CHIP_TYPE, *PCHIP_TYPE;
#define ASSERT(x)
#define DBG_PORT80(value)                   outb(value, 0x80)
#define ASSERT(x)
#define DBG_PORT80(value)
