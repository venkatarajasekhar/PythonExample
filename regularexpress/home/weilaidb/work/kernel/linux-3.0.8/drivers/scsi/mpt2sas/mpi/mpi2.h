#define MPI2_H
#define MPI2_VERSION_MAJOR                  (0x02)
#define MPI2_VERSION_MINOR                  (0x00)
#define MPI2_VERSION_MAJOR_MASK             (0xFF00)
#define MPI2_VERSION_MAJOR_SHIFT            (8)
#define MPI2_VERSION_MINOR_MASK             (0x00FF)
#define MPI2_VERSION_MINOR_SHIFT            (0)
#define MPI2_VERSION ((MPI2_VERSION_MAJOR << MPI2_VERSION_MAJOR_SHIFT) |   \
MPI2_VERSION_MINOR)
#define MPI2_VERSION_02_00                  (0x0200)
#define MPI2_HEADER_VERSION_UNIT            (0x11)
#define MPI2_HEADER_VERSION_DEV             (0x00)
#define MPI2_HEADER_VERSION_UNIT_MASK       (0xFF00)
#define MPI2_HEADER_VERSION_UNIT_SHIFT      (8)
#define MPI2_HEADER_VERSION_DEV_MASK        (0x00FF)
#define MPI2_HEADER_VERSION_DEV_SHIFT       (0)
#define MPI2_HEADER_VERSION ((MPI2_HEADER_VERSION_UNIT << 8) | MPI2_HEADER_VERSION_DEV)
#define MPI2_IOC_STATE_RESET               (0x00000000)
#define MPI2_IOC_STATE_READY               (0x10000000)
#define MPI2_IOC_STATE_OPERATIONAL         (0x20000000)
#define MPI2_IOC_STATE_FAULT               (0x40000000)
#define MPI2_IOC_STATE_MASK                (0xF0000000)
#define MPI2_IOC_STATE_SHIFT               (28)
#define MPI2_FAULT_PRODUCT_SPECIFIC_MIN                 (0x0000)
#define MPI2_FAULT_PRODUCT_SPECIFIC_MAX                 (0xEFFF)
typedef volatile struct _MPI2_SYSTEM_INTERFACE_REGS
MPI2_SYSTEM_INTERFACE_REGS, MPI2_POINTER PTR_MPI2_SYSTEM_INTERFACE_REGS,
Mpi2SystemInterfaceRegs_t, MPI2_POINTER pMpi2SystemInterfaceRegs_t;
#define MPI2_DOORBELL_OFFSET                    (0x00000000)
#define MPI2_DOORBELL_USED                      (0x08000000)
#define MPI2_DOORBELL_WHO_INIT_MASK             (0x07000000)
#define MPI2_DOORBELL_WHO_INIT_SHIFT            (24)
#define MPI2_DOORBELL_FAULT_CODE_MASK           (0x0000FFFF)
#define MPI2_DOORBELL_DATA_MASK                 (0x0000FFFF)
#define MPI2_DOORBELL_FUNCTION_MASK             (0xFF000000)
#define MPI2_DOORBELL_FUNCTION_SHIFT            (24)
#define MPI2_DOORBELL_ADD_DWORDS_MASK           (0x00FF0000)
#define MPI2_DOORBELL_ADD_DWORDS_SHIFT          (16)
#define MPI2_WRITE_SEQUENCE_OFFSET              (0x00000004)
#define MPI2_WRSEQ_KEY_VALUE_MASK               (0x0000000F)
#define MPI2_WRSEQ_FLUSH_KEY_VALUE              (0x0)
#define MPI2_WRSEQ_1ST_KEY_VALUE                (0xF)
#define MPI2_WRSEQ_2ND_KEY_VALUE                (0x4)
#define MPI2_WRSEQ_3RD_KEY_VALUE                (0xB)
#define MPI2_WRSEQ_4TH_KEY_VALUE                (0x2)
#define MPI2_WRSEQ_5TH_KEY_VALUE                (0x7)
#define MPI2_WRSEQ_6TH_KEY_VALUE                (0xD)
#define MPI2_HOST_DIAGNOSTIC_OFFSET             (0x00000008)
#define MPI2_DIAG_BOOT_DEVICE_SELECT_MASK       (0x00001800)
#define MPI2_DIAG_BOOT_DEVICE_SELECT_DEFAULT    (0x00000000)
#define MPI2_DIAG_BOOT_DEVICE_SELECT_HCDW       (0x00000800)
#define MPI2_DIAG_CLEAR_FLASH_BAD_SIG           (0x00000400)
#define MPI2_DIAG_FORCE_HCB_ON_RESET            (0x00000200)
#define MPI2_DIAG_HCB_MODE                      (0x00000100)
#define MPI2_DIAG_DIAG_WRITE_ENABLE             (0x00000080)
#define MPI2_DIAG_FLASH_BAD_SIG                 (0x00000040)
#define MPI2_DIAG_RESET_HISTORY                 (0x00000020)
#define MPI2_DIAG_DIAG_RW_ENABLE                (0x00000010)
#define MPI2_DIAG_RESET_ADAPTER                 (0x00000004)
#define MPI2_DIAG_HOLD_IOC_RESET                (0x00000002)
#define MPI2_DIAG_RW_DATA_OFFSET                (0x00000010)
#define MPI2_DIAG_RW_ADDRESS_LOW_OFFSET         (0x00000014)
#define MPI2_DIAG_RW_ADDRESS_HIGH_OFFSET        (0x00000018)
#define MPI2_HOST_INTERRUPT_STATUS_OFFSET       (0x00000030)
#define MPI2_HIS_SYS2IOC_DB_STATUS              (0x80000000)
#define MPI2_HIS_IOP_DOORBELL_STATUS            MPI2_HIS_SYS2IOC_DB_STATUS
#define MPI2_HIS_RESET_IRQ_STATUS               (0x40000000)
#define MPI2_HIS_REPLY_DESCRIPTOR_INTERRUPT     (0x00000008)
#define MPI2_HIS_IOC2SYS_DB_STATUS              (0x00000001)
#define MPI2_HIS_DOORBELL_INTERRUPT             MPI2_HIS_IOC2SYS_DB_STATUS
#define MPI2_HOST_INTERRUPT_MASK_OFFSET         (0x00000034)
#define MPI2_HIM_RESET_IRQ_MASK                 (0x40000000)
#define MPI2_HIM_REPLY_INT_MASK                 (0x00000008)
#define MPI2_HIM_RIM                            MPI2_HIM_REPLY_INT_MASK
#define MPI2_HIM_IOC2SYS_DB_MASK                (0x00000001)
#define MPI2_HIM_DIM                            MPI2_HIM_IOC2SYS_DB_MASK
#define MPI2_DCR_DATA_OFFSET                    (0x00000038)
#define MPI2_DCR_ADDRESS_OFFSET                 (0x0000003C)
#define MPI2_REPLY_FREE_HOST_INDEX_OFFSET       (0x00000048)
#define MPI2_REPLY_POST_HOST_INDEX_OFFSET       (0x0000006C)
#define MPI2_REPLY_POST_HOST_INDEX_MASK         (0x00FFFFFF)
#define MPI2_RPHI_MSIX_INDEX_MASK               (0xFF000000)
#define MPI2_RPHI_MSIX_INDEX_SHIFT              (24)
#define MPI2_HCB_SIZE_OFFSET                    (0x00000074)
#define MPI2_HCB_SIZE_SIZE_MASK                 (0xFFFFF000)
#define MPI2_HCB_SIZE_HCB_ENABLE                (0x00000001)
#define MPI2_HCB_ADDRESS_LOW_OFFSET             (0x00000078)
#define MPI2_HCB_ADDRESS_HIGH_OFFSET            (0x0000007C)
#define MPI2_REQUEST_DESCRIPTOR_POST_LOW_OFFSET     (0x000000C0)
#define MPI2_REQUEST_DESCRIPTOR_POST_HIGH_OFFSET    (0x000000C4)
typedef struct _MPI2_DEFAULT_REQUEST_DESCRIPTOR
MPI2_DEFAULT_REQUEST_DESCRIPTOR,
MPI2_POINTER PTR_MPI2_DEFAULT_REQUEST_DESCRIPTOR,
Mpi2DefaultRequestDescriptor_t, MPI2_POINTER pMpi2DefaultRequestDescriptor_t;
#define MPI2_REQ_DESCRIPT_FLAGS_TYPE_MASK               (0x0E)
#define MPI2_REQ_DESCRIPT_FLAGS_SCSI_IO                 (0x00)
#define MPI2_REQ_DESCRIPT_FLAGS_SCSI_TARGET             (0x02)
#define MPI2_REQ_DESCRIPT_FLAGS_HIGH_PRIORITY           (0x06)
#define MPI2_REQ_DESCRIPT_FLAGS_DEFAULT_TYPE            (0x08)
#define MPI2_REQ_DESCRIPT_FLAGS_RAID_ACCELERATOR        (0x0A)
#define MPI2_REQ_DESCRIPT_FLAGS_IOC_FIFO_MARKER (0x01)
typedef struct _MPI2_HIGH_PRIORITY_REQUEST_DESCRIPTOR
MPI2_HIGH_PRIORITY_REQUEST_DESCRIPTOR,
MPI2_POINTER PTR_MPI2_HIGH_PRIORITY_REQUEST_DESCRIPTOR,
Mpi2HighPriorityRequestDescriptor_t,
MPI2_POINTER pMpi2HighPriorityRequestDescriptor_t;
typedef struct _MPI2_SCSI_IO_REQUEST_DESCRIPTOR
MPI2_SCSI_IO_REQUEST_DESCRIPTOR,
MPI2_POINTER PTR_MPI2_SCSI_IO_REQUEST_DESCRIPTOR,
Mpi2SCSIIORequestDescriptor_t, MPI2_POINTER pMpi2SCSIIORequestDescriptor_t;
typedef struct _MPI2_SCSI_TARGET_REQUEST_DESCRIPTOR
MPI2_SCSI_TARGET_REQUEST_DESCRIPTOR,
MPI2_POINTER PTR_MPI2_SCSI_TARGET_REQUEST_DESCRIPTOR,
Mpi2SCSITargetRequestDescriptor_t,
MPI2_POINTER pMpi2SCSITargetRequestDescriptor_t;
typedef struct _MPI2_RAID_ACCEL_REQUEST_DESCRIPTOR  MPI2_RAID_ACCEL_REQUEST_DESCRIPTOR,
MPI2_POINTER PTR_MPI2_RAID_ACCEL_REQUEST_DESCRIPTOR,
Mpi2RAIDAcceleratorRequestDescriptor_t,
MPI2_POINTER pMpi2RAIDAcceleratorRequestDescriptor_t;
typedef union _MPI2_REQUEST_DESCRIPTOR_UNION
MPI2_REQUEST_DESCRIPTOR_UNION, MPI2_POINTER PTR_MPI2_REQUEST_DESCRIPTOR_UNION,
Mpi2RequestDescriptorUnion_t, MPI2_POINTER pMpi2RequestDescriptorUnion_t;
typedef struct _MPI2_DEFAULT_REPLY_DESCRIPTOR
MPI2_DEFAULT_REPLY_DESCRIPTOR, MPI2_POINTER PTR_MPI2_DEFAULT_REPLY_DESCRIPTOR,
Mpi2DefaultReplyDescriptor_t, MPI2_POINTER pMpi2DefaultReplyDescriptor_t;
#define MPI2_RPY_DESCRIPT_FLAGS_TYPE_MASK                   (0x0F)
#define MPI2_RPY_DESCRIPT_FLAGS_SCSI_IO_SUCCESS             (0x00)
#define MPI2_RPY_DESCRIPT_FLAGS_ADDRESS_REPLY               (0x01)
#define MPI2_RPY_DESCRIPT_FLAGS_TARGETASSIST_SUCCESS        (0x02)
#define MPI2_RPY_DESCRIPT_FLAGS_TARGET_COMMAND_BUFFER       (0x03)
#define MPI2_RPY_DESCRIPT_FLAGS_RAID_ACCELERATOR_SUCCESS    (0x05)
#define MPI2_RPY_DESCRIPT_FLAGS_UNUSED                      (0x0F)
#define MPI2_RPY_DESCRIPT_UNUSED_WORD0_MARK             (0xFFFFFFFF)
#define MPI2_RPY_DESCRIPT_UNUSED_WORD1_MARK             (0xFFFFFFFF)
typedef struct _MPI2_ADDRESS_REPLY_DESCRIPTOR
MPI2_ADDRESS_REPLY_DESCRIPTOR, MPI2_POINTER PTR_MPI2_ADDRESS_REPLY_DESCRIPTOR,
Mpi2AddressReplyDescriptor_t, MPI2_POINTER pMpi2AddressReplyDescriptor_t;
#define MPI2_ADDRESS_REPLY_SMID_INVALID                 (0x00)
typedef struct _MPI2_SCSI_IO_SUCCESS_REPLY_DESCRIPTOR
MPI2_SCSI_IO_SUCCESS_REPLY_DESCRIPTOR,
MPI2_POINTER PTR_MPI2_SCSI_IO_SUCCESS_REPLY_DESCRIPTOR,
Mpi2SCSIIOSuccessReplyDescriptor_t,
MPI2_POINTER pMpi2SCSIIOSuccessReplyDescriptor_t;
typedef struct _MPI2_TARGETASSIST_SUCCESS_REPLY_DESCRIPTOR
MPI2_TARGETASSIST_SUCCESS_REPLY_DESCRIPTOR,
MPI2_POINTER PTR_MPI2_TARGETASSIST_SUCCESS_REPLY_DESCRIPTOR,
Mpi2TargetAssistSuccessReplyDescriptor_t,
MPI2_POINTER pMpi2TargetAssistSuccessReplyDescriptor_t;
typedef struct _MPI2_TARGET_COMMAND_BUFFER_REPLY_DESCRIPTOR
MPI2_TARGET_COMMAND_BUFFER_REPLY_DESCRIPTOR,
MPI2_POINTER PTR_MPI2_TARGET_COMMAND_BUFFER_REPLY_DESCRIPTOR,
Mpi2TargetCommandBufferReplyDescriptor_t,
MPI2_POINTER pMpi2TargetCommandBufferReplyDescriptor_t;
#define MPI2_RPY_DESCRIPT_TCB_FLAGS_PHYNUM_MASK     (0x3F)
typedef struct _MPI2_RAID_ACCELERATOR_SUCCESS_REPLY_DESCRIPTOR  MPI2_RAID_ACCELERATOR_SUCCESS_REPLY_DESCRIPTOR,
MPI2_POINTER PTR_MPI2_RAID_ACCELERATOR_SUCCESS_REPLY_DESCRIPTOR,
Mpi2RAIDAcceleratorSuccessReplyDescriptor_t,
MPI2_POINTER pMpi2RAIDAcceleratorSuccessReplyDescriptor_t;
typedef union _MPI2_REPLY_DESCRIPTORS_UNION
MPI2_REPLY_DESCRIPTORS_UNION, MPI2_POINTER PTR_MPI2_REPLY_DESCRIPTORS_UNION,
Mpi2ReplyDescriptorsUnion_t, MPI2_POINTER pMpi2ReplyDescriptorsUnion_t;
#define MPI2_FUNCTION_SCSI_IO_REQUEST               (0x00)
#define MPI2_FUNCTION_SCSI_TASK_MGMT                (0x01)
#define MPI2_FUNCTION_IOC_INIT                      (0x02)
#define MPI2_FUNCTION_IOC_FACTS                     (0x03)
#define MPI2_FUNCTION_CONFIG                        (0x04)
#define MPI2_FUNCTION_PORT_FACTS                    (0x05)
#define MPI2_FUNCTION_PORT_ENABLE                   (0x06)
#define MPI2_FUNCTION_EVENT_NOTIFICATION            (0x07)
#define MPI2_FUNCTION_EVENT_ACK                     (0x08)
#define MPI2_FUNCTION_FW_DOWNLOAD                   (0x09)
#define MPI2_FUNCTION_TARGET_ASSIST                 (0x0B)
#define MPI2_FUNCTION_TARGET_STATUS_SEND            (0x0C)
#define MPI2_FUNCTION_TARGET_MODE_ABORT             (0x0D)
#define MPI2_FUNCTION_FW_UPLOAD                     (0x12)
#define MPI2_FUNCTION_RAID_ACTION                   (0x15)
#define MPI2_FUNCTION_RAID_SCSI_IO_PASSTHROUGH      (0x16)
#define MPI2_FUNCTION_TOOLBOX                       (0x17)
#define MPI2_FUNCTION_SCSI_ENCLOSURE_PROCESSOR      (0x18)
#define MPI2_FUNCTION_SMP_PASSTHROUGH               (0x1A)
#define MPI2_FUNCTION_SAS_IO_UNIT_CONTROL           (0x1B)
#define MPI2_FUNCTION_SATA_PASSTHROUGH              (0x1C)
#define MPI2_FUNCTION_DIAG_BUFFER_POST              (0x1D)
#define MPI2_FUNCTION_DIAG_RELEASE                  (0x1E)
#define MPI2_FUNCTION_TARGET_CMD_BUF_BASE_POST      (0x24)
#define MPI2_FUNCTION_TARGET_CMD_BUF_LIST_POST      (0x25)
#define MPI2_FUNCTION_RAID_ACCELERATOR              (0x2C)
#define MPI2_FUNCTION_HOST_BASED_DISCOVERY_ACTION   (0x2F)
#define MPI2_FUNCTION_PWR_MGMT_CONTROL              (0x30)
#define MPI2_FUNCTION_MIN_PRODUCT_SPECIFIC          (0xF0)
#define MPI2_FUNCTION_MAX_PRODUCT_SPECIFIC          (0xFF)
#define MPI2_FUNCTION_IOC_MESSAGE_UNIT_RESET        (0x40)
#define MPI2_FUNCTION_HANDSHAKE                     (0x42)
#define MPI2_IOCSTATUS_MASK                     (0x7FFF)
#define MPI2_IOCSTATUS_SUCCESS                      (0x0000)
#define MPI2_IOCSTATUS_INVALID_FUNCTION             (0x0001)
#define MPI2_IOCSTATUS_BUSY                         (0x0002)
#define MPI2_IOCSTATUS_INVALID_SGL                  (0x0003)
#define MPI2_IOCSTATUS_INTERNAL_ERROR               (0x0004)
#define MPI2_IOCSTATUS_INVALID_VPID                 (0x0005)
#define MPI2_IOCSTATUS_INSUFFICIENT_RESOURCES       (0x0006)
#define MPI2_IOCSTATUS_INVALID_FIELD                (0x0007)
#define MPI2_IOCSTATUS_INVALID_STATE                (0x0008)
#define MPI2_IOCSTATUS_OP_STATE_NOT_SUPPORTED       (0x0009)
#define MPI2_IOCSTATUS_CONFIG_INVALID_ACTION        (0x0020)
#define MPI2_IOCSTATUS_CONFIG_INVALID_TYPE          (0x0021)
#define MPI2_IOCSTATUS_CONFIG_INVALID_PAGE          (0x0022)
#define MPI2_IOCSTATUS_CONFIG_INVALID_DATA          (0x0023)
#define MPI2_IOCSTATUS_CONFIG_NO_DEFAULTS           (0x0024)
#define MPI2_IOCSTATUS_CONFIG_CANT_COMMIT           (0x0025)
#define MPI2_IOCSTATUS_SCSI_RECOVERED_ERROR         (0x0040)
#define MPI2_IOCSTATUS_SCSI_INVALID_DEVHANDLE       (0x0042)
#define MPI2_IOCSTATUS_SCSI_DEVICE_NOT_THERE        (0x0043)
#define MPI2_IOCSTATUS_SCSI_DATA_OVERRUN            (0x0044)
#define MPI2_IOCSTATUS_SCSI_DATA_UNDERRUN           (0x0045)
#define MPI2_IOCSTATUS_SCSI_IO_DATA_ERROR           (0x0046)
#define MPI2_IOCSTATUS_SCSI_PROTOCOL_ERROR          (0x0047)
#define MPI2_IOCSTATUS_SCSI_TASK_TERMINATED         (0x0048)
#define MPI2_IOCSTATUS_SCSI_RESIDUAL_MISMATCH       (0x0049)
#define MPI2_IOCSTATUS_SCSI_TASK_MGMT_FAILED        (0x004A)
#define MPI2_IOCSTATUS_SCSI_IOC_TERMINATED          (0x004B)
#define MPI2_IOCSTATUS_SCSI_EXT_TERMINATED          (0x004C)
#define MPI2_IOCSTATUS_EEDP_GUARD_ERROR             (0x004D)
#define MPI2_IOCSTATUS_EEDP_REF_TAG_ERROR           (0x004E)
#define MPI2_IOCSTATUS_EEDP_APP_TAG_ERROR           (0x004F)
#define MPI2_IOCSTATUS_TARGET_INVALID_IO_INDEX      (0x0062)
#define MPI2_IOCSTATUS_TARGET_ABORTED               (0x0063)
#define MPI2_IOCSTATUS_TARGET_NO_CONN_RETRYABLE     (0x0064)
#define MPI2_IOCSTATUS_TARGET_NO_CONNECTION         (0x0065)
#define MPI2_IOCSTATUS_TARGET_XFER_COUNT_MISMATCH   (0x006A)
#define MPI2_IOCSTATUS_TARGET_DATA_OFFSET_ERROR     (0x006D)
#define MPI2_IOCSTATUS_TARGET_TOO_MUCH_WRITE_DATA   (0x006E)
#define MPI2_IOCSTATUS_TARGET_IU_TOO_SHORT          (0x006F)
#define MPI2_IOCSTATUS_TARGET_ACK_NAK_TIMEOUT       (0x0070)
#define MPI2_IOCSTATUS_TARGET_NAK_RECEIVED          (0x0071)
#define MPI2_IOCSTATUS_SAS_SMP_REQUEST_FAILED       (0x0090)
#define MPI2_IOCSTATUS_SAS_SMP_DATA_OVERRUN         (0x0091)
#define MPI2_IOCSTATUS_DIAGNOSTIC_RELEASED          (0x00A0)
#define MPI2_IOCSTATUS_RAID_ACCEL_ERROR             (0x00B0)
#define MPI2_IOCSTATUS_FLAG_LOG_INFO_AVAILABLE      (0x8000)
#define MPI2_IOCLOGINFO_TYPE_MASK               (0xF0000000)
#define MPI2_IOCLOGINFO_TYPE_SHIFT              (28)
#define MPI2_IOCLOGINFO_TYPE_NONE               (0x0)
#define MPI2_IOCLOGINFO_TYPE_SCSI               (0x1)
#define MPI2_IOCLOGINFO_TYPE_FC                 (0x2)
#define MPI2_IOCLOGINFO_TYPE_SAS                (0x3)
#define MPI2_IOCLOGINFO_TYPE_ISCSI              (0x4)
#define MPI2_IOCLOGINFO_LOG_DATA_MASK           (0x0FFFFFFF)
typedef struct _MPI2_REQUEST_HEADER
MPI2_REQUEST_HEADER, MPI2_POINTER PTR_MPI2_REQUEST_HEADER,
MPI2RequestHeader_t, MPI2_POINTER pMPI2RequestHeader_t;
typedef struct _MPI2_DEFAULT_REPLY
MPI2_DEFAULT_REPLY, MPI2_POINTER PTR_MPI2_DEFAULT_REPLY,
MPI2DefaultReply_t, MPI2_POINTER pMPI2DefaultReply_t;
typedef struct _MPI2_VERSION_STRUCT
MPI2_VERSION_STRUCT;
typedef union _MPI2_VERSION_UNION
MPI2_VERSION_UNION;
#define MPI2_LUN_FIRST_LEVEL_ADDRESSING             (0x0000FFFF)
#define MPI2_LUN_SECOND_LEVEL_ADDRESSING            (0xFFFF0000)
#define MPI2_LUN_THIRD_LEVEL_ADDRESSING             (0x0000FFFF)
#define MPI2_LUN_FOURTH_LEVEL_ADDRESSING            (0xFFFF0000)
#define MPI2_LUN_LEVEL_1_WORD                       (0xFF00)
#define MPI2_LUN_LEVEL_1_DWORD                      (0x0000FF00)
typedef struct _MPI2_SGE_SIMPLE32
MPI2_SGE_SIMPLE32, MPI2_POINTER PTR_MPI2_SGE_SIMPLE32,
Mpi2SGESimple32_t, MPI2_POINTER pMpi2SGESimple32_t;
typedef struct _MPI2_SGE_SIMPLE64
MPI2_SGE_SIMPLE64, MPI2_POINTER PTR_MPI2_SGE_SIMPLE64,
Mpi2SGESimple64_t, MPI2_POINTER pMpi2SGESimple64_t;
typedef struct _MPI2_SGE_SIMPLE_UNION
MPI2_SGE_SIMPLE_UNION, MPI2_POINTER PTR_MPI2_SGE_SIMPLE_UNION,
Mpi2SGESimpleUnion_t, MPI2_POINTER pMpi2SGESimpleUnion_t;
typedef struct _MPI2_SGE_CHAIN32
MPI2_SGE_CHAIN32, MPI2_POINTER PTR_MPI2_SGE_CHAIN32,
Mpi2SGEChain32_t, MPI2_POINTER pMpi2SGEChain32_t;
typedef struct _MPI2_SGE_CHAIN64
MPI2_SGE_CHAIN64, MPI2_POINTER PTR_MPI2_SGE_CHAIN64,
Mpi2SGEChain64_t, MPI2_POINTER pMpi2SGEChain64_t;
typedef struct _MPI2_SGE_CHAIN_UNION
MPI2_SGE_CHAIN_UNION, MPI2_POINTER PTR_MPI2_SGE_CHAIN_UNION,
Mpi2SGEChainUnion_t, MPI2_POINTER pMpi2SGEChainUnion_t;
typedef struct _MPI2_SGE_TRANSACTION32
MPI2_SGE_TRANSACTION32, MPI2_POINTER PTR_MPI2_SGE_TRANSACTION32,
Mpi2SGETransaction32_t, MPI2_POINTER pMpi2SGETransaction32_t;
typedef struct _MPI2_SGE_TRANSACTION64
MPI2_SGE_TRANSACTION64, MPI2_POINTER PTR_MPI2_SGE_TRANSACTION64,
Mpi2SGETransaction64_t, MPI2_POINTER pMpi2SGETransaction64_t;
typedef struct _MPI2_SGE_TRANSACTION96
MPI2_SGE_TRANSACTION96, MPI2_POINTER PTR_MPI2_SGE_TRANSACTION96,
Mpi2SGETransaction96_t, MPI2_POINTER pMpi2SGETransaction96_t;
typedef struct _MPI2_SGE_TRANSACTION128
MPI2_SGE_TRANSACTION128, MPI2_POINTER PTR_MPI2_SGE_TRANSACTION128,
Mpi2SGETransaction_t128, MPI2_POINTER pMpi2SGETransaction_t128;
typedef struct _MPI2_SGE_TRANSACTION_UNION
MPI2_SGE_TRANSACTION_UNION, MPI2_POINTER PTR_MPI2_SGE_TRANSACTION_UNION,
Mpi2SGETransactionUnion_t, MPI2_POINTER pMpi2SGETransactionUnion_t;
typedef struct _MPI2_MPI_SGE_IO_UNION
MPI2_MPI_SGE_IO_UNION, MPI2_POINTER PTR_MPI2_MPI_SGE_IO_UNION,
Mpi2MpiSGEIOUnion_t, MPI2_POINTER pMpi2MpiSGEIOUnion_t;
typedef struct _MPI2_SGE_TRANS_SIMPLE_UNION
MPI2_SGE_TRANS_SIMPLE_UNION, MPI2_POINTER PTR_MPI2_SGE_TRANS_SIMPLE_UNION,
Mpi2SGETransSimpleUnion_t, MPI2_POINTER pMpi2SGETransSimpleUnion_t;
typedef struct _MPI2_MPI_SGE_UNION
MPI2_MPI_SGE_UNION, MPI2_POINTER PTR_MPI2_MPI_SGE_UNION,
Mpi2MpiSgeUnion_t, MPI2_POINTER pMpi2MpiSgeUnion_t;
#define MPI2_SGE_FLAGS_LAST_ELEMENT             (0x80)
#define MPI2_SGE_FLAGS_END_OF_BUFFER            (0x40)
#define MPI2_SGE_FLAGS_ELEMENT_TYPE_MASK        (0x30)
#define MPI2_SGE_FLAGS_LOCAL_ADDRESS            (0x08)
#define MPI2_SGE_FLAGS_DIRECTION                (0x04)
#define MPI2_SGE_FLAGS_ADDRESS_SIZE             (0x02)
#define MPI2_SGE_FLAGS_END_OF_LIST              (0x01)
#define MPI2_SGE_FLAGS_SHIFT                    (24)
#define MPI2_SGE_LENGTH_MASK                    (0x00FFFFFF)
#define MPI2_SGE_CHAIN_LENGTH_MASK              (0x0000FFFF)
#define MPI2_SGE_FLAGS_TRANSACTION_ELEMENT      (0x00)
#define MPI2_SGE_FLAGS_SIMPLE_ELEMENT           (0x10)
#define MPI2_SGE_FLAGS_CHAIN_ELEMENT            (0x30)
#define MPI2_SGE_FLAGS_ELEMENT_MASK             (0x30)
#define MPI2_SGE_FLAGS_SYSTEM_ADDRESS           (0x00)
#define MPI2_SGE_FLAGS_IOC_TO_HOST              (0x00)
#define MPI2_SGE_FLAGS_HOST_TO_IOC              (0x04)
#define MPI2_SGE_FLAGS_DEST                     (MPI2_SGE_FLAGS_IOC_TO_HOST)
#define MPI2_SGE_FLAGS_SOURCE                   (MPI2_SGE_FLAGS_HOST_TO_IOC)
#define MPI2_SGE_FLAGS_32_BIT_ADDRESSING        (0x00)
#define MPI2_SGE_FLAGS_64_BIT_ADDRESSING        (0x02)
#define MPI2_SGE_FLAGS_32_BIT_CONTEXT           (0x00)
#define MPI2_SGE_FLAGS_64_BIT_CONTEXT           (0x02)
#define MPI2_SGE_FLAGS_96_BIT_CONTEXT           (0x04)
#define MPI2_SGE_FLAGS_128_BIT_CONTEXT          (0x06)
#define MPI2_SGE_CHAIN_OFFSET_MASK              (0x00FF0000)
#define MPI2_SGE_CHAIN_OFFSET_SHIFT             (16)
#define MPI2_SGE_SET_FLAGS(f)          ((U32)(f) << MPI2_SGE_FLAGS_SHIFT)
#define MPI2_SGE_GET_FLAGS(f)          (((f) & ~MPI2_SGE_LENGTH_MASK) >> MPI2_SGE_FLAGS_SHIFT)
#define MPI2_SGE_LENGTH(f)             ((f) & MPI2_SGE_LENGTH_MASK)
#define MPI2_SGE_CHAIN_LENGTH(f)       ((f) & MPI2_SGE_CHAIN_LENGTH_MASK)
#define MPI2_SGE_SET_FLAGS_LENGTH(f,l) (MPI2_SGE_SET_FLAGS(f) | MPI2_SGE_LENGTH(l))
#define MPI2_pSGE_GET_FLAGS(psg)            MPI2_SGE_GET_FLAGS((psg)->FlagsLength)
#define MPI2_pSGE_GET_LENGTH(psg)           MPI2_SGE_LENGTH((psg)->FlagsLength)
#define MPI2_pSGE_SET_FLAGS_LENGTH(psg,f,l) (psg)->FlagsLength = MPI2_SGE_SET_FLAGS_LENGTH(f,l)
#define MPI2_pSGE_SET_FLAGS(psg,f)      (psg)->FlagsLength |= MPI2_SGE_SET_FLAGS(f)
#define MPI2_pSGE_SET_LENGTH(psg,l)     (psg)->FlagsLength |= MPI2_SGE_LENGTH(l)
#define MPI2_GET_CHAIN_OFFSET(x)    ((x & MPI2_SGE_CHAIN_OFFSET_MASK) >> MPI2_SGE_CHAIN_OFFSET_SHIFT)
typedef struct _MPI2_IEEE_SGE_SIMPLE32
MPI2_IEEE_SGE_SIMPLE32, MPI2_POINTER PTR_MPI2_IEEE_SGE_SIMPLE32,
Mpi2IeeeSgeSimple32_t, MPI2_POINTER pMpi2IeeeSgeSimple32_t;
typedef struct _MPI2_IEEE_SGE_SIMPLE64
MPI2_IEEE_SGE_SIMPLE64, MPI2_POINTER PTR_MPI2_IEEE_SGE_SIMPLE64,
Mpi2IeeeSgeSimple64_t, MPI2_POINTER pMpi2IeeeSgeSimple64_t;
typedef union _MPI2_IEEE_SGE_SIMPLE_UNION
MPI2_IEEE_SGE_SIMPLE_UNION, MPI2_POINTER PTR_MPI2_IEEE_SGE_SIMPLE_UNION,
Mpi2IeeeSgeSimpleUnion_t, MPI2_POINTER pMpi2IeeeSgeSimpleUnion_t;
typedef MPI2_IEEE_SGE_SIMPLE32  MPI2_IEEE_SGE_CHAIN32;
typedef MPI2_IEEE_SGE_SIMPLE64  MPI2_IEEE_SGE_CHAIN64;
typedef union _MPI2_IEEE_SGE_CHAIN_UNION
MPI2_IEEE_SGE_CHAIN_UNION, MPI2_POINTER PTR_MPI2_IEEE_SGE_CHAIN_UNION,
Mpi2IeeeSgeChainUnion_t, MPI2_POINTER pMpi2IeeeSgeChainUnion_t;
typedef struct _MPI2_IEEE_SGE_UNION
MPI2_IEEE_SGE_UNION, MPI2_POINTER PTR_MPI2_IEEE_SGE_UNION,
Mpi2IeeeSgeUnion_t, MPI2_POINTER pMpi2IeeeSgeUnion_t;
#define MPI2_IEEE_SGE_FLAGS_ELEMENT_TYPE_MASK   (0x80)
#define MPI2_IEEE32_SGE_FLAGS_SHIFT             (24)
#define MPI2_IEEE32_SGE_LENGTH_MASK             (0x00FFFFFF)
#define MPI2_IEEE_SGE_FLAGS_SIMPLE_ELEMENT      (0x00)
#define MPI2_IEEE_SGE_FLAGS_CHAIN_ELEMENT       (0x80)
#define MPI2_IEEE_SGE_FLAGS_ADDR_MASK           (0x03)
#define MPI2_IEEE_SGE_FLAGS_SYSTEM_ADDR         (0x00)
#define MPI2_IEEE_SGE_FLAGS_IOCDDR_ADDR         (0x01)
#define MPI2_IEEE_SGE_FLAGS_IOCPLB_ADDR         (0x02)
#define MPI2_IEEE_SGE_FLAGS_IOCPLBNTA_ADDR      (0x03)
#define MPI2_IEEE32_SGE_SET_FLAGS(f)     ((U32)(f) << MPI2_IEEE32_SGE_FLAGS_SHIFT)
#define MPI2_IEEE32_SGE_GET_FLAGS(f)     (((f) & ~MPI2_IEEE32_SGE_LENGTH_MASK) >> MPI2_IEEE32_SGE_FLAGS_SHIFT)
#define MPI2_IEEE32_SGE_LENGTH(f)        ((f) & MPI2_IEEE32_SGE_LENGTH_MASK)
#define MPI2_IEEE32_SGE_SET_FLAGS_LENGTH(f, l)      (MPI2_IEEE32_SGE_SET_FLAGS(f) | MPI2_IEEE32_SGE_LENGTH(l))
#define MPI2_IEEE32_pSGE_GET_FLAGS(psg)             MPI2_IEEE32_SGE_GET_FLAGS((psg)->FlagsLength)
#define MPI2_IEEE32_pSGE_GET_LENGTH(psg)            MPI2_IEEE32_SGE_LENGTH((psg)->FlagsLength)
#define MPI2_IEEE32_pSGE_SET_FLAGS_LENGTH(psg,f,l)  (psg)->FlagsLength = MPI2_IEEE32_SGE_SET_FLAGS_LENGTH(f,l)
#define MPI2_IEEE32_pSGE_SET_FLAGS(psg,f)    (psg)->FlagsLength |= MPI2_IEEE32_SGE_SET_FLAGS(f)
#define MPI2_IEEE32_pSGE_SET_LENGTH(psg,l)   (psg)->FlagsLength |= MPI2_IEEE32_SGE_LENGTH(l)
typedef union _MPI2_SIMPLE_SGE_UNION
MPI2_SIMPLE_SGE_UNION, MPI2_POINTER PTR_MPI2_SIMPLE_SGE_UNION,
Mpi2SimpleSgeUntion_t, MPI2_POINTER pMpi2SimpleSgeUntion_t;
typedef union _MPI2_SGE_IO_UNION
MPI2_SGE_IO_UNION, MPI2_POINTER PTR_MPI2_SGE_IO_UNION,
Mpi2SGEIOUnion_t, MPI2_POINTER pMpi2SGEIOUnion_t;
#define MPI2_SGLFLAGS_ADDRESS_SPACE_MASK            (0x0C)
#define MPI2_SGLFLAGS_SYSTEM_ADDRESS_SPACE          (0x00)
#define MPI2_SGLFLAGS_IOCDDR_ADDRESS_SPACE          (0x04)
#define MPI2_SGLFLAGS_IOCPLB_ADDRESS_SPACE          (0x08)
#define MPI2_SGLFLAGS_IOCPLBNTA_ADDRESS_SPACE       (0x0C)
#define MPI2_SGLFLAGS_SGL_TYPE_MASK                 (0x03)
#define MPI2_SGLFLAGS_SGL_TYPE_MPI                  (0x00)
#define MPI2_SGLFLAGS_SGL_TYPE_IEEE32               (0x01)
#define MPI2_SGLFLAGS_SGL_TYPE_IEEE64               (0x02)
