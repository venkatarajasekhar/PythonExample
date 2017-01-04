#define _IPATH_COMMON_H
#define IPATH_SRC_OUI_1 0x00
#define IPATH_SRC_OUI_2 0x11
#define IPATH_SRC_OUI_3 0x75
#define IPS_PROTO_VERSION 2
#define IPATH_KD_QP 0x656b79
#define IPATH_IB_LINKDOWN		0
#define IPATH_IB_LINKARM		1
#define IPATH_IB_LINKACTIVE		2
#define IPATH_IB_LINKDOWN_ONLY		3
#define IPATH_IB_LINKDOWN_SLEEP		4
#define IPATH_IB_LINKDOWN_DISABLE	5
#define IPATH_IB_LINK_LOOPBACK	6
#define IPATH_IB_LINK_EXTERNAL	7
#define IPATH_IB_LINK_NO_HRTBT	8
#define IPATH_IB_LINK_HRTBT	9
#define IPATH_IB_SDR 1
#define IPATH_IB_DDR 2
struct infinipath_stats ;
#define IPATH_STATUS_INITTED       0x1
#define IPATH_STATUS_DISABLED      0x2
#define IPATH_STATUS_ADMIN_DISABLED    0x4
#define IPATH_STATUS_CHIP_PRESENT 0x20
#define IPATH_STATUS_IB_READY     0x40
#define IPATH_STATUS_IB_CONF      0x80
#define IPATH_STATUS_IB_NOCABLE  0x100
#define IPATH_STATUS_HWERROR     0x200
typedef enum _ipath_ureg  ipath_ureg;
#define IPATH_RUNTIME_HT	0x1
#define IPATH_RUNTIME_PCIE	0x2
#define IPATH_RUNTIME_FORCE_WC_ORDER	0x4
#define IPATH_RUNTIME_RCVHDR_COPY	0x8
#define IPATH_RUNTIME_MASTER	0x10
#define IPATH_RUNTIME_NODMA_RTAIL 0x80
#define IPATH_RUNTIME_SDMA	      0x200
#define IPATH_RUNTIME_FORCE_PIOAVAIL 0x400
#define IPATH_RUNTIME_PIO_REGSWAPPED 0x800
struct ipath_base_info  __attribute__ ((aligned(8)));
#define IPATH_USER_SWMAJOR 1
#define IPATH_USER_SWMINOR 6
#define IPATH_USER_SWVERSION ((IPATH_USER_SWMAJOR<<16) | IPATH_USER_SWMINOR)
#define IPATH_KERN_TYPE 0
#define IPATH_KERN_SWVERSION ((IPATH_KERN_TYPE<<31) | IPATH_USER_SWVERSION)
struct ipath_user_info  __attribute__ ((aligned(8)));
#define IPATH_CMD_MIN		16
#define __IPATH_CMD_USER_INIT	16
#define IPATH_CMD_PORT_INFO	17
#define IPATH_CMD_RECV_CTRL	18
#define IPATH_CMD_TID_UPDATE	19
#define IPATH_CMD_TID_FREE	20
#define IPATH_CMD_SET_PART_KEY	21
#define __IPATH_CMD_SLAVE_INFO	22
#define IPATH_CMD_ASSIGN_PORT	23
#define IPATH_CMD_USER_INIT 	24
#define IPATH_CMD_UNUSED_1	25
#define IPATH_CMD_UNUSED_2	26
#define IPATH_CMD_PIOAVAILUPD	27
#define IPATH_CMD_POLL_TYPE	28
#define IPATH_CMD_ARMLAUNCH_CTRL	29
#define IPATH_CMD_SDMA_INFLIGHT 31
#define IPATH_CMD_SDMA_COMPLETE 32
#define IPATH_POLL_TYPE_URGENT	 0x01
#define IPATH_POLL_TYPE_OVERFLOW 0x02
struct ipath_port_info ;
struct ipath_tid_info ;
struct ipath_cmd ;
struct ipath_iovec ;
struct __ipath_sendpkt ;
struct ipath_diag_pkt ;
struct ipath_diag_xpkt ;
#define IPATH_FLASH_VERSION 2
struct ipath_flash ;
struct infinipath_counters ;
#define INFINIPATH_RHF_LENGTH_MASK 0x7FF
#define INFINIPATH_RHF_LENGTH_SHIFT 0
#define INFINIPATH_RHF_RCVTYPE_MASK 0x7
#define INFINIPATH_RHF_RCVTYPE_SHIFT 11
#define INFINIPATH_RHF_EGRINDEX_MASK 0xFFF
#define INFINIPATH_RHF_EGRINDEX_SHIFT 16
#define INFINIPATH_RHF_SEQ_MASK 0xF
#define INFINIPATH_RHF_SEQ_SHIFT 0
#define INFINIPATH_RHF_HDRQ_OFFSET_MASK 0x7FF
#define INFINIPATH_RHF_HDRQ_OFFSET_SHIFT 4
#define INFINIPATH_RHF_H_ICRCERR   0x80000000
#define INFINIPATH_RHF_H_VCRCERR   0x40000000
#define INFINIPATH_RHF_H_PARITYERR 0x20000000
#define INFINIPATH_RHF_H_LENERR    0x10000000
#define INFINIPATH_RHF_H_MTUERR    0x08000000
#define INFINIPATH_RHF_H_IHDRERR   0x04000000
#define INFINIPATH_RHF_H_TIDERR    0x02000000
#define INFINIPATH_RHF_H_MKERR     0x01000000
#define INFINIPATH_RHF_H_IBERR     0x00800000
#define INFINIPATH_RHF_H_ERR_MASK  0xFF800000
#define INFINIPATH_RHF_L_USE_EGR   0x80000000
#define INFINIPATH_RHF_L_SWA       0x00008000
#define INFINIPATH_RHF_L_SWB       0x00004000
#define INFINIPATH_I_VERS_MASK 0xF
#define INFINIPATH_I_VERS_SHIFT 28
#define INFINIPATH_I_PORT_MASK 0xF
#define INFINIPATH_I_PORT_SHIFT 24
#define INFINIPATH_I_TID_MASK 0x7FF
#define INFINIPATH_I_TID_SHIFT 13
#define INFINIPATH_I_OFFSET_MASK 0x1FFF
#define INFINIPATH_I_OFFSET_SHIFT 0
#define INFINIPATH_KPF_INTR 0x1
#define INFINIPATH_KPF_SUBPORT_MASK 0x3
#define INFINIPATH_KPF_SUBPORT_SHIFT 1
#define INFINIPATH_MAX_SUBPORT	4
#define INFINIPATH_SP_TEST    0x40
#define INFINIPATH_SP_TESTEBP 0x20
#define INFINIPATH_SP_TRIGGER_SHIFT  15
#define INFINIPATH_SENDPIOAVAIL_BUSY_SHIFT 1
#define INFINIPATH_SENDPIOAVAIL_CHECK_SHIFT 0
struct ipath_header ;
struct ipath_message_header ;
struct ether_header ;
#define IPATH_LRH_GRH 0x0003
#define IPATH_LRH_BTH 0x0002
#define SIZE_OF_CRC 1
#define IPATH_DEFAULT_P_KEY 0xFFFF
#define IPATH_PERMISSIVE_LID 0xFFFF
#define IPATH_AETH_CREDIT_SHIFT 24
#define IPATH_AETH_CREDIT_MASK 0x1F
#define IPATH_AETH_CREDIT_INVAL 0x1F
#define IPATH_PSN_MASK 0xFFFFFF
#define IPATH_MSN_MASK 0xFFFFFF
#define IPATH_QPN_MASK 0xFFFFFF
#define IPATH_MULTICAST_LID_BASE 0xC000
#define IPATH_EAGER_TID_ID INFINIPATH_I_TID_MASK
#define IPATH_MULTICAST_QPN 0xFFFFFF
#define RCVHQ_RCV_TYPE_EXPECTED  0
#define RCVHQ_RCV_TYPE_EAGER     1
#define RCVHQ_RCV_TYPE_NON_KD    2
#define RCVHQ_RCV_TYPE_ERROR     3
#define IPATH_ITH4X_OPCODE_ENCAP 0x81
#define IPATH_ITH4X_OPCODE_LID_ARP 0x82
#define IPATH_HEADER_QUEUE_WORDS 9
static inline __u32 ipath_hdrget_err_flags(const __le32 * rbuf)
static inline __u32 ipath_hdrget_rcv_type(const __le32 * rbuf)
static inline __u32 ipath_hdrget_length_in_bytes(const __le32 * rbuf)
static inline __u32 ipath_hdrget_index(const __le32 * rbuf)
static inline __u32 ipath_hdrget_seq(const __le32 *rbuf)
static inline __u32 ipath_hdrget_offset(const __le32 *rbuf)
static inline __u32 ipath_hdrget_use_egr_buf(const __le32 *rbuf)
static inline __u32 ipath_hdrget_ipath_ver(__le32 hdrword)
