#define MPI_TOOL_H
#define MPI_TOOLBOX_CLEAN_TOOL                      (0x00)
#define MPI_TOOLBOX_MEMORY_MOVE_TOOL                (0x01)
#define MPI_TOOLBOX_DIAG_DATA_UPLOAD_TOOL           (0x02)
#define MPI_TOOLBOX_ISTWI_READ_WRITE_TOOL           (0x03)
#define MPI_TOOLBOX_FC_MANAGEMENT_TOOL              (0x04)
#define MPI_TOOLBOX_BEACON_TOOL                     (0x05)
typedef struct _MSG_TOOLBOX_REPLY
MSG_TOOLBOX_REPLY, MPI_POINTER PTR_MSG_TOOLBOX_REPLY,
ToolboxReply_t, MPI_POINTER pToolboxReply_t;
typedef struct _MSG_TOOLBOX_CLEAN_REQUEST
MSG_TOOLBOX_CLEAN_REQUEST, MPI_POINTER PTR_MSG_TOOLBOX_CLEAN_REQUEST,
ToolboxCleanRequest_t, MPI_POINTER pToolboxCleanRequest_t;
#define MPI_TOOLBOX_CLEAN_NVSRAM                    (0x00000001)
#define MPI_TOOLBOX_CLEAN_SEEPROM                   (0x00000002)
#define MPI_TOOLBOX_CLEAN_FLASH                     (0x00000004)
#define MPI_TOOLBOX_CLEAN_BOOTLOADER                (0x04000000)
#define MPI_TOOLBOX_CLEAN_FW_BACKUP                 (0x08000000)
#define MPI_TOOLBOX_CLEAN_FW_CURRENT                (0x10000000)
#define MPI_TOOLBOX_CLEAN_OTHER_PERSIST_PAGES       (0x20000000)
#define MPI_TOOLBOX_CLEAN_PERSIST_MANUFACT_PAGES    (0x40000000)
#define MPI_TOOLBOX_CLEAN_BOOT_SERVICES             (0x80000000)
typedef struct _MSG_TOOLBOX_MEM_MOVE_REQUEST
MSG_TOOLBOX_MEM_MOVE_REQUEST, MPI_POINTER PTR_MSG_TOOLBOX_MEM_MOVE_REQUEST,
ToolboxMemMoveRequest_t, MPI_POINTER pToolboxMemMoveRequest_t;
typedef struct _MSG_TOOLBOX_DIAG_DATA_UPLOAD_REQUEST
MSG_TOOLBOX_DIAG_DATA_UPLOAD_REQUEST, MPI_POINTER PTR_MSG_TOOLBOX_DIAG_DATA_UPLOAD_REQUEST,
ToolboxDiagDataUploadRequest_t, MPI_POINTER pToolboxDiagDataUploadRequest_t;
typedef struct _DIAG_DATA_UPLOAD_HEADER
DIAG_DATA_UPLOAD_HEADER, MPI_POINTER PTR_DIAG_DATA_UPLOAD_HEADER,
DiagDataUploadHeader_t, MPI_POINTER pDiagDataUploadHeader_t;
#define MPI_TB_DIAG_FORMAT_SCSI_PRINTF_1            (0x01)
#define MPI_TB_DIAG_FORMAT_SCSI_2                   (0x02)
#define MPI_TB_DIAG_FORMAT_SCSI_3                   (0x03)
#define MPI_TB_DIAG_FORMAT_FC_TRACE_1               (0x04)
typedef struct _MSG_TOOLBOX_ISTWI_READ_WRITE_REQUEST
MSG_TOOLBOX_ISTWI_READ_WRITE_REQUEST, MPI_POINTER PTR_MSG_TOOLBOX_ISTWI_READ_WRITE_REQUEST,
ToolboxIstwiReadWriteRequest_t, MPI_POINTER pToolboxIstwiReadWriteRequest_t;
#define MPI_TB_ISTWI_FLAGS_WRITE                    (0x00)
#define MPI_TB_ISTWI_FLAGS_READ                     (0x01)
typedef struct _MPI_TB_FC_MANAGE_BUS_TID_AI
MPI_TB_FC_MANAGE_BUS_TID_AI, MPI_POINTER PTR_MPI_TB_FC_MANAGE_BUS_TID_AI,
MpiTbFcManageBusTidAi_t, MPI_POINTER pMpiTbFcManageBusTidAi_t;
typedef struct _MPI_TB_FC_MANAGE_PID_AI
MPI_TB_FC_MANAGE_PID_AI, MPI_POINTER PTR_MPI_TB_FC_MANAGE_PID_AI,
MpiTbFcManagePidAi_t, MPI_POINTER pMpiTbFcManagePidAi_t;
typedef struct _MPI_TB_FC_MANAGE_FRAME_SIZE_AI
MPI_TB_FC_MANAGE_FRAME_SIZE_AI, MPI_POINTER PTR_MPI_TB_FC_MANAGE_FRAME_SIZE_AI,
MpiTbFcManageFrameSizeAi_t, MPI_POINTER pMpiTbFcManageFrameSizeAi_t;
typedef union _MPI_TB_FC_MANAGE_AI_UNION
MPI_TB_FC_MANAGE_AI_UNION, MPI_POINTER PTR_MPI_TB_FC_MANAGE_AI_UNION,
MpiTbFcManageAiUnion_t, MPI_POINTER pMpiTbFcManageAiUnion_t;
typedef struct _MSG_TOOLBOX_FC_MANAGE_REQUEST
MSG_TOOLBOX_FC_MANAGE_REQUEST, MPI_POINTER PTR_MSG_TOOLBOX_FC_MANAGE_REQUEST,
ToolboxFcManageRequest_t, MPI_POINTER pToolboxFcManageRequest_t;
#define MPI_TB_FC_MANAGE_ACTION_DISC_ALL            (0x00)
#define MPI_TB_FC_MANAGE_ACTION_DISC_PID            (0x01)
#define MPI_TB_FC_MANAGE_ACTION_DISC_BUS_TID        (0x02)
#define MPI_TB_FC_MANAGE_ACTION_SET_MAX_FRAME_SIZE  (0x03)
typedef struct _MSG_TOOLBOX_BEACON_REQUEST
MSG_TOOLBOX_BEACON_REQUEST, MPI_POINTER PTR_MSG_TOOLBOX_BEACON_REQUEST,
ToolboxBeaconRequest_t, MPI_POINTER pToolboxBeaconRequest_t;
#define MPI_TOOLBOX_FLAGS_BEACON_MODE_OFF       (0x00)
#define MPI_TOOLBOX_FLAGS_BEACON_MODE_ON        (0x01)
typedef struct _MSG_DIAG_BUFFER_POST_REQUEST
MSG_DIAG_BUFFER_POST_REQUEST, MPI_POINTER PTR_MSG_DIAG_BUFFER_POST_REQUEST,
DiagBufferPostRequest_t, MPI_POINTER pDiagBufferPostRequest_t;
#define MPI_DIAG_BUF_TYPE_TRACE                     (0x00)
#define MPI_DIAG_BUF_TYPE_SNAPSHOT                  (0x01)
#define MPI_DIAG_BUF_TYPE_EXTENDED                  (0x02)
#define MPI_DIAG_BUF_TYPE_COUNT                     (0x03)
#define MPI_DIAG_EXTENDED_QTAG                      (0x00000001)
typedef struct _MSG_DIAG_BUFFER_POST_REPLY
MSG_DIAG_BUFFER_POST_REPLY, MPI_POINTER PTR_MSG_DIAG_BUFFER_POST_REPLY,
DiagBufferPostReply_t, MPI_POINTER pDiagBufferPostReply_t;
typedef struct _MSG_DIAG_RELEASE_REQUEST
MSG_DIAG_RELEASE_REQUEST, MPI_POINTER PTR_MSG_DIAG_RELEASE_REQUEST,
DiagReleaseRequest_t, MPI_POINTER pDiagReleaseRequest_t;
typedef struct _MSG_DIAG_RELEASE_REPLY
MSG_DIAG_RELEASE_REPLY, MPI_POINTER PTR_MSG_DIAG_RELEASE_REPLY,
DiagReleaseReply_t, MPI_POINTER pDiagReleaseReply_t;
