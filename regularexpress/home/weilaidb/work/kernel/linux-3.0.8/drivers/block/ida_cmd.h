#define ARRAYCMD_H
#define S42XX_REQUEST_PORT_OFFSET	0x40
#define S42XX_REPLY_INTR_MASK_OFFSET	0x34
#define S42XX_REPLY_PORT_OFFSET		0x44
#define S42XX_INTR_STATUS		0x30
#define S42XX_INTR_OFF		0x08
#define S42XX_INTR_PENDING	0x08
#define COMMAND_FIFO		0x04
#define COMMAND_COMPLETE_FIFO	0x08
#define INTR_MASK		0x0C
#define INTR_STATUS		0x10
#define INTR_PENDING		0x14
#define FIFO_NOT_EMPTY		0x01
#define FIFO_NOT_FULL		0x02
#define BIG_PROBLEM		0x40
#define LOG_NOT_CONF		2
typedef struct  sg_t;
#define RCODE_NONFATAL	0x02
#define RCODE_FATAL	0x04
#define RCODE_INVREQ	0x10
typedef struct  rhdr_t;
#define SG_MAX			32
typedef struct  rblk_t;
typedef struct  chdr_t;
#define CMD_RWREQ	0x00
#define CMD_IOCTL_PEND	0x01
#define CMD_IOCTL_DONE	0x02
typedef struct cmdlist  cmdlist_t;
#define ID_CTLR		0x11
typedef struct  id_ctlr_t;
typedef struct  drv_param_t;
#define ID_LOG_DRV	0x10
typedef struct  id_log_drv_t;
#define ID_LOG_DRV_EXT	0x18
typedef struct  id_log_drv_ext_t;
#define SENSE_LOG_DRV_STAT	0x12
typedef struct  sense_log_drv_stat_t;
#define START_RECOVER		0x13
#define ID_PHYS_DRV		0x15
typedef struct  id_phys_drv_t;
#define BLINK_DRV_LEDS		0x16
typedef struct  blink_drv_leds_t;
#define SENSE_BLINK_LEDS	0x17
typedef struct  sense_blink_leds_t;
#define IDA_READ		0x20
#define IDA_WRITE		0x30
#define IDA_WRITE_MEDIA		0x31
#define RESET_TO_DIAG		0x40
#define DIAG_PASS_THRU		0x41
#define SENSE_CONFIG		0x50
#define SET_CONFIG		0x51
typedef struct  config_t;
#define BYPASS_VOL_STATE	0x52
#define SS_CREATE_VOL		0x53
#define CHANGE_CONFIG		0x54
#define SENSE_ORIG_CONF		0x55
#define REORDER_LOG_DRV		0x56
typedef struct  reorder_log_drv_t;
#define LABEL_LOG_DRV		0x57
typedef struct  label_log_drv_t;
#define SS_TO_VOL		0x58
#define SET_SURF_DELAY		0x60
typedef struct  surf_delay_t;
#define SET_OVERHEAT_DELAY	0x61
typedef struct  overhead_delay_t;
#define SET_MP_DELAY
typedef struct  mp_delay_t;
#define PASSTHRU_A	0x91
typedef struct  scsi_param_t;
#define RESUME_BACKGROUND_ACTIVITY	0x99
#define SENSE_CONTROLLER_PERFORMANCE	0xa8
#define FLUSH_CACHE			0xc2
#define COLLECT_BUFFER			0xd2
#define READ_FLASH_ROM			0xf6
#define WRITE_FLASH_ROM			0xf7
