#define __ASM_POWERPC_FIRMWARE_H
#define FIRMWARE_MAX_FEATURES 63
#define FW_FEATURE_PFT		ASM_CONST(0x0000000000000001)
#define FW_FEATURE_TCE		ASM_CONST(0x0000000000000002)
#define FW_FEATURE_SPRG0	ASM_CONST(0x0000000000000004)
#define FW_FEATURE_DABR		ASM_CONST(0x0000000000000008)
#define FW_FEATURE_COPY		ASM_CONST(0x0000000000000010)
#define FW_FEATURE_ASR		ASM_CONST(0x0000000000000020)
#define FW_FEATURE_DEBUG	ASM_CONST(0x0000000000000040)
#define FW_FEATURE_TERM		ASM_CONST(0x0000000000000080)
#define FW_FEATURE_PERF		ASM_CONST(0x0000000000000100)
#define FW_FEATURE_DUMP		ASM_CONST(0x0000000000000200)
#define FW_FEATURE_INTERRUPT	ASM_CONST(0x0000000000000400)
#define FW_FEATURE_MIGRATE	ASM_CONST(0x0000000000000800)
#define FW_FEATURE_PERFMON	ASM_CONST(0x0000000000001000)
#define FW_FEATURE_CRQ		ASM_CONST(0x0000000000002000)
#define FW_FEATURE_VIO		ASM_CONST(0x0000000000004000)
#define FW_FEATURE_RDMA		ASM_CONST(0x0000000000008000)
#define FW_FEATURE_LLAN		ASM_CONST(0x0000000000010000)
#define FW_FEATURE_BULK_REMOVE	ASM_CONST(0x0000000000020000)
#define FW_FEATURE_XDABR	ASM_CONST(0x0000000000040000)
#define FW_FEATURE_MULTITCE	ASM_CONST(0x0000000000080000)
#define FW_FEATURE_SPLPAR	ASM_CONST(0x0000000000100000)
#define FW_FEATURE_ISERIES	ASM_CONST(0x0000000000200000)
#define FW_FEATURE_LPAR		ASM_CONST(0x0000000000400000)
#define FW_FEATURE_PS3_LV1	ASM_CONST(0x0000000000800000)
#define FW_FEATURE_BEAT		ASM_CONST(0x0000000001000000)
#define FW_FEATURE_CMO		ASM_CONST(0x0000000002000000)
#define FW_FEATURE_VPHN		ASM_CONST(0x0000000004000000)
#define FW_FEATURE_XCMO		ASM_CONST(0x0000000008000000)
enum ;
extern unsigned long	powerpc_firmware_features;
#define firmware_has_feature(feature)					\
((FW_FEATURE_ALWAYS & (feature)) ||				\
(FW_FEATURE_POSSIBLE & powerpc_firmware_features & (feature)))
extern void system_reset_fwnmi(void);
extern void machine_check_fwnmi(void);
extern int fwnmi_active;
extern unsigned int __start___fw_ftr_fixup, __stop___fw_ftr_fixup;