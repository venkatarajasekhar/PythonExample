#define CFE_API_INT_H
#define CFE_CMD_FW_GETINFO	0
#define CFE_CMD_FW_RESTART	1
#define CFE_CMD_FW_BOOT		2
#define CFE_CMD_FW_CPUCTL	3
#define CFE_CMD_FW_GETTIME      4
#define CFE_CMD_FW_MEMENUM	5
#define CFE_CMD_FW_FLUSHCACHE	6
#define CFE_CMD_DEV_GETHANDLE	9
#define CFE_CMD_DEV_ENUM	10
#define CFE_CMD_DEV_OPEN	11
#define CFE_CMD_DEV_INPSTAT	12
#define CFE_CMD_DEV_READ	13
#define CFE_CMD_DEV_WRITE	14
#define CFE_CMD_DEV_IOCTL	15
#define CFE_CMD_DEV_CLOSE	16
#define CFE_CMD_DEV_GETINFO	17
#define CFE_CMD_ENV_ENUM	20
#define CFE_CMD_ENV_GET		22
#define CFE_CMD_ENV_SET		23
#define CFE_CMD_ENV_DEL		24
#define CFE_CMD_MAX		32
#define CFE_CMD_VENDOR_USE	0x8000
typedef s64 cfe_xptr_t;
struct xiocb_buffer ;
struct xiocb_inpstat ;
struct xiocb_envbuf ;
struct xiocb_cpuctl ;
struct xiocb_time ;
struct xiocb_exitstat;
struct xiocb_meminfo ;
struct xiocb_fwinfo ;
struct cfe_xiocb ;
