#define LX_DEFS_H
#define	XES_FREQ_COUNT8_MASK    0x00001FFF
#define	XES_FREQ_COUNT8_44_MIN  0x00001288
#define	XES_FREQ_COUNT8_44_MAX	0x000010F0
#define	XES_FREQ_COUNT8_48_MAX	0x00000F08
#define IOCR_OUTPUTS_OFFSET 0
#define IOCR_INPUTS_OFFSET  8
#define FREQ_RATIO_OFFSET  19
#define	FREQ_RATIO_SINGLE_MODE 0x01
#define CONFES_READ_PART_MASK	0x00070000
#define CONFES_WRITE_PART_MASK	0x00F80000
#define MASK_SYS_STATUS_ERROR	(1L << 31)
#define MASK_SYS_STATUS_URUN	(1L << 30)
#define MASK_SYS_STATUS_ORUN	(1L << 29)
#define MASK_SYS_STATUS_EOBO	(1L << 28)
#define MASK_SYS_STATUS_EOBI	(1L << 27)
#define MASK_SYS_STATUS_FREQ	(1L << 26)
#define MASK_SYS_STATUS_ESA	(1L << 25)
#define MASK_SYS_STATUS_TIMER	(1L << 24)
#define MASK_SYS_ASYNC_EVENTS	(MASK_SYS_STATUS_ERROR |		\
MASK_SYS_STATUS_URUN  |		\
MASK_SYS_STATUS_ORUN  |		\
MASK_SYS_STATUS_EOBO  |		\
MASK_SYS_STATUS_EOBI  |		\
MASK_SYS_STATUS_FREQ  |		\
MASK_SYS_STATUS_ESA)
#define MASK_SYS_PCI_EVENTS		(MASK_SYS_ASYNC_EVENTS |	\
MASK_SYS_STATUS_TIMER)
#define MASK_SYS_TIMER_COUNT	0x0000FFFF
#define MASK_SYS_STATUS_EOT_PLX		(1L << 22)
#define MASK_SYS_STATUS_XES		(1L << 21)
#define MASK_SYS_STATUS_CMD_DONE	(1L << 20)
#define MAX_STREAM_BUFFER 5
#define MICROBLAZE_IBL_MIN		 32
#define MICROBLAZE_IBL_DEFAULT	        128
#define MICROBLAZE_IBL_MAX		512
#define ID_IS_CAPTURE (1L << 10)
#define ID_OFFSET	13
#define ID_CH_MASK    0x3F
#define OPCODE_OFFSET	24
enum cmd_mb_opcodes ;
enum pipe_state_t ;
enum stream_state_t ;
enum buffer_flags ;
enum stream_flags ;
#define MASK_SPL_COUNT_HI 0x00FFFFFF
#define PSTATE_OFFSET             28
#define MASK_STREAM_HAS_MAPPING	(1L << 12)
#define MASK_STREAM_IS_ASIO	(1L <<  9)
#define STREAM_FMT_OFFSET	10
#define STREAM_FMT_16b          0x02
#define STREAM_FMT_intel        0x01
#define FREQ_FIELD_OFFSET	15
#define BUFF_FLAGS_OFFSET	  24
#define MASK_DATA_SIZE	  0x00FFFFFF
#define MASK_BUFFER_ID	        0xFF
#define ERROR_MASK              0x8000
#define SOURCE_MASK             0x7800
#define E_SOURCE_BOARD          0x4000
#define E_SOURCE_DRV            0x2000
#define E_SOURCE_API            0x1000
#define E_SOURCE_TOOLS          0x0800
#define E_SOURCE_AUDIO          0x1800
#define E_SOURCE_VPCX           0x2800
#define E_SOURCE_DISPATCHER     0x3000
#define E_SOURCE_COBRANET       0x3800
#define E_SOURCE_USER           0x7800
#define CLASS_MASK              0x0700
#define CODE_MASK               0x00FF
#define ERROR_VALUE             0x8000
#define WARNING_VALUE           0x0000
#define E_CLASS_GENERAL                  0x0000
#define E_CLASS_INVALID_CMD              0x0100
#define E_CLASS_INVALID_STD_OBJECT       0x0200
#define E_CLASS_RSRC_IMPOSSIBLE          0x0300
#define E_CLASS_WRONG_CONTEXT            0x0400
#define E_CLASS_BAD_SPECIFIC_PARAMETER   0x0500
#define E_CLASS_REAL_TIME_ERROR          0x0600
#define E_CLASS_DIRECTSHOW               0x0700
#define E_CLASS_FREE                     0x0700
#define ED_GN           (ERROR_VALUE | E_SOURCE_DRV | E_CLASS_GENERAL)
#define ED_CONCURRENCY                  (ED_GN | 0x01)
#define ED_DSP_CRASHED                  (ED_GN | 0x02)
#define ED_UNKNOWN_BOARD                (ED_GN | 0x03)
#define ED_NOT_INSTALLED                (ED_GN | 0x04)
#define ED_CANNOT_OPEN_SVC_MANAGER      (ED_GN | 0x05)
#define ED_CANNOT_READ_REGISTRY         (ED_GN | 0x06)
#define ED_DSP_VERSION_MISMATCH         (ED_GN | 0x07)
#define ED_UNAVAILABLE_FEATURE          (ED_GN | 0x08)
#define ED_CANCELLED                    (ED_GN | 0x09)
#define ED_NO_RESPONSE_AT_IRQA          (ED_GN | 0x10)
#define ED_INVALID_ADDRESS              (ED_GN | 0x11)
#define ED_DSP_CORRUPTED                (ED_GN | 0x12)
#define ED_PENDING_OPERATION            (ED_GN | 0x13)
#define ED_NET_ALLOCATE_MEMORY_IMPOSSIBLE   (ED_GN | 0x14)
#define ED_NET_REGISTER_ERROR               (ED_GN | 0x15)
#define ED_NET_THREAD_ERROR                 (ED_GN | 0x16)
#define ED_NET_OPEN_ERROR                   (ED_GN | 0x17)
#define ED_NET_CLOSE_ERROR                  (ED_GN | 0x18)
#define ED_NET_NO_MORE_PACKET               (ED_GN | 0x19)
#define ED_NET_NO_MORE_BUFFER               (ED_GN | 0x1A)
#define ED_NET_SEND_ERROR                   (ED_GN | 0x1B)
#define ED_NET_RECEIVE_ERROR                (ED_GN | 0x1C)
#define ED_NET_WRONG_MSG_SIZE               (ED_GN | 0x1D)
#define ED_NET_WAIT_ERROR                   (ED_GN | 0x1E)
#define ED_NET_EEPROM_ERROR                 (ED_GN | 0x1F)
#define ED_INVALID_RS232_COM_NUMBER         (ED_GN | 0x20)
#define ED_INVALID_RS232_INIT               (ED_GN | 0x21)
#define ED_FILE_ERROR                       (ED_GN | 0x22)
#define ED_INVALID_GPIO_CMD                 (ED_GN | 0x23)
#define ED_RS232_ALREADY_OPENED             (ED_GN | 0x24)
#define ED_RS232_NOT_OPENED                 (ED_GN | 0x25)
#define ED_GPIO_ALREADY_OPENED              (ED_GN | 0x26)
#define ED_GPIO_NOT_OPENED                  (ED_GN | 0x27)
#define ED_REGISTRY_ERROR                   (ED_GN | 0x28)
#define ED_INVALID_SERVICE                  (ED_GN | 0x29)
#define ED_READ_FILE_ALREADY_OPENED	    (ED_GN | 0x2a)
#define ED_READ_FILE_INVALID_COMMAND	    (ED_GN | 0x2b)
#define ED_READ_FILE_INVALID_PARAMETER	    (ED_GN | 0x2c)
#define ED_READ_FILE_ALREADY_CLOSED	    (ED_GN | 0x2d)
#define ED_READ_FILE_NO_INFORMATION	    (ED_GN | 0x2e)
#define ED_READ_FILE_INVALID_HANDLE	    (ED_GN | 0x2f)
#define ED_READ_FILE_END_OF_FILE	    (ED_GN | 0x30)
#define ED_READ_FILE_ERROR	            (ED_GN | 0x31)
#define ED_DSP_CRASHED_EXC_DSPSTACK_OVERFLOW (ED_GN | 0x32)
#define ED_DSP_CRASHED_EXC_SYSSTACK_OVERFLOW (ED_GN | 0x33)
#define ED_DSP_CRASHED_EXC_ILLEGAL           (ED_GN | 0x34)
#define ED_DSP_CRASHED_EXC_TIMER_REENTRY     (ED_GN | 0x35)
#define ED_DSP_CRASHED_EXC_FATAL_ERROR       (ED_GN | 0x36)
#define ED_FLASH_PCCARD_NOT_PRESENT          (ED_GN | 0x37)
#define ED_NO_CURRENT_CLOCK                  (ED_GN | 0x38)
#define ED_RT           (ERROR_VALUE | E_SOURCE_DRV | E_CLASS_REAL_TIME_ERROR)
#define ED_DSP_TIMED_OUT                (ED_RT | 0x01)
#define ED_DSP_CHK_TIMED_OUT            (ED_RT | 0x02)
#define ED_STREAM_OVERRUN               (ED_RT | 0x03)
#define ED_DSP_BUSY                     (ED_RT | 0x04)
#define ED_DSP_SEMAPHORE_TIME_OUT       (ED_RT | 0x05)
#define ED_BOARD_TIME_OUT               (ED_RT | 0x06)
#define ED_XILINX_ERROR                 (ED_RT | 0x07)
#define ED_COBRANET_ITF_NOT_RESPONDING  (ED_RT | 0x08)
#define EB_ISO          (ERROR_VALUE | E_SOURCE_BOARD | \
E_CLASS_INVALID_STD_OBJECT)
#define EB_INVALID_EFFECT               (EB_ISO | 0x00)
#define EB_INVALID_PIPE                 (EB_ISO | 0x40)
#define EB_INVALID_STREAM               (EB_ISO | 0x80)
#define EB_INVALID_AUDIO                (EB_ISO | 0xC0)
#define EB_RI           (ERROR_VALUE | E_SOURCE_BOARD | E_CLASS_RSRC_IMPOSSIBLE)
#define EB_ALLOCATE_ALL_STREAM_TRANSFERT_BUFFERS_IMPOSSIBLE (EB_RI | 0x01)
#define EB_ALLOCATE_PIPE_SAMPLE_BUFFER_IMPOSSIBLE           (EB_RI | 0x02)
#define EB_ALLOCATE_MEM_STREAM_IMPOSSIBLE		\
EB_ALLOCATE_ALL_STREAM_TRANSFERT_BUFFERS_IMPOSSIBLE
#define EB_ALLOCATE_MEM_PIPE_IMPOSSIBLE			\
EB_ALLOCATE_PIPE_SAMPLE_BUFFER_IMPOSSIBLE
#define EB_ALLOCATE_DIFFERED_CMD_IMPOSSIBLE     (EB_RI | 0x03)
#define EB_TOO_MANY_DIFFERED_CMD                (EB_RI | 0x04)
#define EB_RBUFFERS_TABLE_OVERFLOW              (EB_RI | 0x05)
#define EB_ALLOCATE_EFFECTS_IMPOSSIBLE          (EB_RI | 0x08)
#define EB_ALLOCATE_EFFECT_POS_IMPOSSIBLE       (EB_RI | 0x09)
#define EB_RBUFFER_NOT_AVAILABLE                (EB_RI | 0x0A)
#define EB_ALLOCATE_CONTEXT_LIII_IMPOSSIBLE     (EB_RI | 0x0B)
#define EB_STATUS_DIALOG_IMPOSSIBLE             (EB_RI | 0x1D)
#define EB_CONTROL_CMD_IMPOSSIBLE               (EB_RI | 0x1E)
#define EB_STATUS_SEND_IMPOSSIBLE               (EB_RI | 0x1F)
#define EB_ALLOCATE_PIPE_IMPOSSIBLE             (EB_RI | 0x40)
#define EB_ALLOCATE_STREAM_IMPOSSIBLE           (EB_RI | 0x80)
#define EB_ALLOCATE_AUDIO_IMPOSSIBLE            (EB_RI | 0xC0)
#define EB_WCC          (ERROR_VALUE | E_SOURCE_BOARD | E_CLASS_WRONG_CONTEXT)
#define EB_CMD_REFUSED                  (EB_WCC | 0x00)
#define EB_START_STREAM_REFUSED         (EB_WCC | 0xFC)
#define EB_SPC_REFUSED                  (EB_WCC | 0xFD)
#define EB_CSN_REFUSED                  (EB_WCC | 0xFE)
#define EB_CSE_REFUSED                  (EB_WCC | 0xFF)
