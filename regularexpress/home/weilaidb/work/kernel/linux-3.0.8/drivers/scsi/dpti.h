#define _DPT_H
#define MAX_TO_IOP_MESSAGES   (255)
#define MAX_FROM_IOP_MESSAGES (255)
static int adpt_detect(struct scsi_host_template * sht);
static int adpt_queue(struct Scsi_Host *h, struct scsi_cmnd * cmd);
static int adpt_abort(struct scsi_cmnd * cmd);
static int adpt_reset(struct scsi_cmnd* cmd);
static int adpt_release(struct Scsi_Host *host);
static int adpt_slave_configure(struct scsi_device *);
static const char *adpt_info(struct Scsi_Host *pSHost);
static int adpt_bios_param(struct scsi_device * sdev, struct block_device *dev,
sector_t, int geom[]);
static int adpt_bus_reset(struct scsi_cmnd* cmd);
static int adpt_device_reset(struct scsi_cmnd* cmd);
#define DPT_DRIVER_NAME	"Adaptec I2O RAID"
#define DPT_I2O_VERSION "2.4 Build 5go"
#define DPT_VERSION     2
#define DPT_REVISION    '4'
#define DPT_SUBREVISION '5'
#define DPT_BETA	""
#define DPT_MONTH      8
#define DPT_DAY        7
#define DPT_YEAR        (2001-1980)
#define DPT_DRIVER	"dpt_i2o"
#define DPTI_I2O_MAJOR	(151)
#define DPT_ORGANIZATION_ID (0x1B)
#define DPTI_MAX_HBA	(16)
#define MAX_CHANNEL     (5)
#define MAX_ID        	(128)
#define REPLY_FRAME_SIZE  (17)
#define MAX_MESSAGE_SIZE  (128)
#define SG_LIST_ELEMENTS  (56)
#define EMPTY_QUEUE           0xffffffff
#define I2O_INTERRUPT_PENDING_B   (0x08)
#define PCI_DPT_VENDOR_ID         (0x1044)
#define PCI_DPT_DEVICE_ID         (0xA501)
#define PCI_DPT_RAPTOR_DEVICE_ID  (0xA511)
#undef PDEBUG
#  define PDEBUG(fmt, args...)  printk(KERN_DEBUG "dpti: " fmt, ##args)
#  define PDEBUGV(fmt, args...) printk(KERN_DEBUG "dpti: " fmt, ##args)
# define PDEBUG(fmt, args...)
# define PDEBUGV(fmt, args...)
#define PERROR(fmt, args...) printk(KERN_ERR fmt, ##args)
#define PWARN(fmt, args...) printk(KERN_WARNING fmt, ##args)
#define PINFO(fmt, args...) printk(KERN_INFO fmt, ##args)
#define PCRIT(fmt, args...) printk(KERN_CRIT fmt, ##args)
#define SHUTDOWN_SIGS	(sigmask(SIGKILL)|sigmask(SIGINT)|sigmask(SIGTERM))
#define FOREVER			(0)
#define TMOUT_INQUIRY 		(20)
#define TMOUT_FLUSH		(360/45)
#define TMOUT_ABORT		(30)
#define TMOUT_SCSI		(300)
#define TMOUT_IOPRESET		(360)
#define TMOUT_GETSTATUS		(15)
#define TMOUT_INITOUTBOUND	(15)
#define TMOUT_LCT		(360)
#define I2O_SCSI_DEVICE_DSC_MASK                0x00FF
#define I2O_DETAIL_STATUS_UNSUPPORTED_FUNCTION  0x000A
#define I2O_SCSI_DSC_MASK                   0xFF00
#define I2O_SCSI_DSC_SUCCESS                0x0000
#define I2O_SCSI_DSC_REQUEST_ABORTED        0x0200
#define I2O_SCSI_DSC_UNABLE_TO_ABORT        0x0300
#define I2O_SCSI_DSC_COMPLETE_WITH_ERROR    0x0400
#define I2O_SCSI_DSC_ADAPTER_BUSY           0x0500
#define I2O_SCSI_DSC_REQUEST_INVALID        0x0600
#define I2O_SCSI_DSC_PATH_INVALID           0x0700
#define I2O_SCSI_DSC_DEVICE_NOT_PRESENT     0x0800
#define I2O_SCSI_DSC_UNABLE_TO_TERMINATE    0x0900
#define I2O_SCSI_DSC_SELECTION_TIMEOUT      0x0A00
#define I2O_SCSI_DSC_COMMAND_TIMEOUT        0x0B00
#define I2O_SCSI_DSC_MR_MESSAGE_RECEIVED    0x0D00
#define I2O_SCSI_DSC_SCSI_BUS_RESET         0x0E00
#define I2O_SCSI_DSC_PARITY_ERROR_FAILURE   0x0F00
#define I2O_SCSI_DSC_AUTOSENSE_FAILED       0x1000
#define I2O_SCSI_DSC_NO_ADAPTER             0x1100
#define I2O_SCSI_DSC_DATA_OVERRUN           0x1200
#define I2O_SCSI_DSC_UNEXPECTED_BUS_FREE    0x1300
#define I2O_SCSI_DSC_SEQUENCE_FAILURE       0x1400
#define I2O_SCSI_DSC_REQUEST_LENGTH_ERROR   0x1500
#define I2O_SCSI_DSC_PROVIDE_FAILURE        0x1600
#define I2O_SCSI_DSC_BDR_MESSAGE_SENT       0x1700
#define I2O_SCSI_DSC_REQUEST_TERMINATED     0x1800
#define I2O_SCSI_DSC_IDE_MESSAGE_SENT       0x3300
#define I2O_SCSI_DSC_RESOURCE_UNAVAILABLE   0x3400
#define I2O_SCSI_DSC_UNACKNOWLEDGED_EVENT   0x3500
#define I2O_SCSI_DSC_MESSAGE_RECEIVED       0x3600
#define I2O_SCSI_DSC_INVALID_CDB            0x3700
#define I2O_SCSI_DSC_LUN_INVALID            0x3800
#define I2O_SCSI_DSC_SCSI_TID_INVALID       0x3900
#define I2O_SCSI_DSC_FUNCTION_UNAVAILABLE   0x3A00
#define I2O_SCSI_DSC_NO_NEXUS               0x3B00
#define I2O_SCSI_DSC_SCSI_IID_INVALID       0x3C00
#define I2O_SCSI_DSC_CDB_RECEIVED           0x3D00
#define I2O_SCSI_DSC_LUN_ALREADY_ENABLED    0x3E00
#define I2O_SCSI_DSC_BUS_BUSY               0x3F00
#define I2O_SCSI_DSC_QUEUE_FROZEN           0x4000
#define TRUE                  1
#define FALSE                 0
#define HBA_FLAGS_INSTALLED_B       0x00000001
#define HBA_FLAGS_BLINKLED_B        0x00000002
#define HBA_FLAGS_IN_RESET	0x00000040
#define HBA_HOSTRESET_FAILED	0x00000080
#define DPTI_DEV_ONLINE    0x00
#define DPTI_DEV_UNSCANNED 0x01
#define DPTI_DEV_RESET	   0x02
#define DPTI_DEV_OFFLINE   0x04
struct adpt_device ;
struct adpt_channel ;
#define DPTI_STATE_RESET	(0x01)
#define DPTI_STATE_IOCTL	(0x02)
typedef struct _adpt_hba  adpt_hba;
struct sg_simple_element ;
static void adpt_i2o_sys_shutdown(void);
static int adpt_init(void);
static int adpt_i2o_build_sys_table(void);
static irqreturn_t adpt_isr(int irq, void *dev_id);
static void adpt_i2o_report_hba_unit(adpt_hba* pHba, struct i2o_device *d);
static int adpt_i2o_query_scalar(adpt_hba* pHba, int tid,
int group, int field, void *buf, int buflen);
static const char *adpt_i2o_get_class_name(int class);
static int adpt_i2o_issue_params(int cmd, adpt_hba* pHba, int tid,
void *opblk, dma_addr_t opblk_pa, int oplen,
void *resblk, dma_addr_t resblk_pa, int reslen);
static int adpt_i2o_post_wait(adpt_hba* pHba, u32* msg, int len, int timeout);
static int adpt_i2o_lct_get(adpt_hba* pHba);
static int adpt_i2o_parse_lct(adpt_hba* pHba);
static int adpt_i2o_activate_hba(adpt_hba* pHba);
static int adpt_i2o_enable_hba(adpt_hba* pHba);
static int adpt_i2o_install_device(adpt_hba* pHba, struct i2o_device *d);
static s32 adpt_i2o_post_this(adpt_hba* pHba, u32* data, int len);
static s32 adpt_i2o_quiesce_hba(adpt_hba* pHba);
static s32 adpt_i2o_status_get(adpt_hba* pHba);
static s32 adpt_i2o_init_outbound_q(adpt_hba* pHba);
static s32 adpt_i2o_hrt_get(adpt_hba* pHba);
static s32 adpt_scsi_to_i2o(adpt_hba* pHba, struct scsi_cmnd* cmd, struct adpt_device* dptdevice);
static s32 adpt_i2o_to_scsi(void __iomem *reply, struct scsi_cmnd* cmd);
static s32 adpt_scsi_host_alloc(adpt_hba* pHba,struct scsi_host_template * sht);
static s32 adpt_hba_reset(adpt_hba* pHba);
static s32 adpt_i2o_reset_hba(adpt_hba* pHba);
static s32 adpt_rescan(adpt_hba* pHba);
static s32 adpt_i2o_reparse_lct(adpt_hba* pHba);
static s32 adpt_send_nop(adpt_hba*pHba,u32 m);
static void adpt_i2o_delete_hba(adpt_hba* pHba);
static void adpt_inquiry(adpt_hba* pHba);
static void adpt_fail_posted_scbs(adpt_hba* pHba);
static struct adpt_device* adpt_find_device(adpt_hba* pHba, u32 chan, u32 id, u32 lun);
static int adpt_install_hba(struct scsi_host_template* sht, struct pci_dev* pDev) ;
static int adpt_i2o_online_hba(adpt_hba* pHba);
static void adpt_i2o_post_wait_complete(u32, int);
static int adpt_i2o_systab_send(adpt_hba* pHba);
static int adpt_ioctl(struct inode *inode, struct file *file, uint cmd, ulong arg);
static int adpt_open(struct inode *inode, struct file *file);
static int adpt_close(struct inode *inode, struct file *file);
static void adpt_delay(int millisec);
#define PRINT_BUFFER_SIZE     512
#define HBA_FLAGS_DBG_FLAGS_MASK         0xffff0000
#define HBA_FLAGS_DBG_KERNEL_PRINT_B     0x00010000
#define HBA_FLAGS_DBG_FW_PRINT_B         0x00020000
#define HBA_FLAGS_DBG_FUNCTION_ENTRY_B   0x00040000
#define HBA_FLAGS_DBG_FUNCTION_EXIT_B    0x00080000
#define HBA_FLAGS_DBG_ERROR_B            0x00100000
#define HBA_FLAGS_DBG_INIT_B             0x00200000
#define HBA_FLAGS_DBG_OS_COMMANDS_B      0x00400000
#define HBA_FLAGS_DBG_SCAN_B             0x00800000
#define FW_DEBUG_STR_LENGTH_OFFSET 0
#define FW_DEBUG_FLAGS_OFFSET      4
#define FW_DEBUG_BLED_OFFSET       8
#define FW_DEBUG_FLAGS_NO_HEADERS_B    0x01
