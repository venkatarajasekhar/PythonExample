#define _DCDBAS_H_
#define MAX_SMI_DATA_BUF_SIZE			(256 * 1024)
#define HC_ACTION_NONE				(0)
#define HC_ACTION_HOST_CONTROL_POWEROFF		BIT(1)
#define HC_ACTION_HOST_CONTROL_POWERCYCLE	BIT(2)
#define HC_SMITYPE_NONE				(0)
#define HC_SMITYPE_TYPE1			(1)
#define HC_SMITYPE_TYPE2			(2)
#define HC_SMITYPE_TYPE3			(3)
#define ESM_APM_CMD				(0x0A0)
#define ESM_APM_POWER_CYCLE			(0x10)
#define ESM_STATUS_CMD_UNSUCCESSFUL		(-1)
#define CMOS_BASE_PORT				(0x070)
#define CMOS_PAGE1_INDEX_PORT			(0)
#define CMOS_PAGE1_DATA_PORT			(1)
#define CMOS_PAGE2_INDEX_PORT_PIIX4		(2)
#define CMOS_PAGE2_DATA_PORT_PIIX4		(3)
#define PE1400_APM_CONTROL_PORT			(0x0B0)
#define PCAT_APM_CONTROL_PORT			(0x0B2)
#define PCAT_APM_STATUS_PORT			(0x0B3)
#define PE1300_CMOS_CMD_STRUCT_PTR		(0x38)
#define PE1400_CMOS_CMD_STRUCT_PTR		(0x70)
#define MAX_SYSMGMT_SHORTCMD_PARMBUF_LEN	(14)
#define MAX_SYSMGMT_LONGCMD_SGENTRY_NUM		(16)
#define TIMEOUT_USEC_SHORT_SEMA_BLOCKING	(10000)
#define EXPIRED_TIMER				(0)
#define SMI_CMD_MAGIC				(0x534D4931)
#define DCDBAS_DEV_ATTR_RW(_name) \
DEVICE_ATTR(_name,0600,_name##_show,_name##_store);
#define DCDBAS_DEV_ATTR_RO(_name) \
DEVICE_ATTR(_name,0400,_name##_show,NULL);
#define DCDBAS_DEV_ATTR_WO(_name) \
DEVICE_ATTR(_name,0200,NULL,_name##_store);
#define DCDBAS_BIN_ATTR_RW(_name) \
struct bin_attribute bin_attr_##_name =
struct smi_cmd  __attribute__ ((packed));
struct apm_cmd  __attribute__ ((packed));
int dcdbas_smi_request(struct smi_cmd *smi_cmd);
