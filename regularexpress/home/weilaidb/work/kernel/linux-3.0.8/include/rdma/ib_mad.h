#if !defined(IB_MAD_H)
#define IB_MAD_H
#define IB_MGMT_BASE_VERSION			1
#define IB_MGMT_CLASS_SUBN_LID_ROUTED		0x01
#define IB_MGMT_CLASS_SUBN_DIRECTED_ROUTE	0x81
#define IB_MGMT_CLASS_SUBN_ADM			0x03
#define IB_MGMT_CLASS_PERF_MGMT			0x04
#define IB_MGMT_CLASS_BM			0x05
#define IB_MGMT_CLASS_DEVICE_MGMT		0x06
#define IB_MGMT_CLASS_CM			0x07
#define IB_MGMT_CLASS_SNMP			0x08
#define IB_MGMT_CLASS_DEVICE_ADM		0x10
#define IB_MGMT_CLASS_BOOT_MGMT			0x11
#define IB_MGMT_CLASS_BIS			0x12
#define IB_MGMT_CLASS_CONG_MGMT			0x21
#define IB_MGMT_CLASS_VENDOR_RANGE2_START	0x30
#define IB_MGMT_CLASS_VENDOR_RANGE2_END		0x4F
#define	IB_OPENIB_OUI				(0x001405)
#define IB_MGMT_METHOD_GET			0x01
#define IB_MGMT_METHOD_SET			0x02
#define IB_MGMT_METHOD_GET_RESP			0x81
#define IB_MGMT_METHOD_SEND			0x03
#define IB_MGMT_METHOD_TRAP			0x05
#define IB_MGMT_METHOD_REPORT			0x06
#define IB_MGMT_METHOD_REPORT_RESP		0x86
#define IB_MGMT_METHOD_TRAP_REPRESS		0x07
#define IB_MGMT_METHOD_RESP			0x80
#define IB_BM_ATTR_MOD_RESP			cpu_to_be32(1)
#define IB_MGMT_MAX_METHODS			128
#define IB_MGMT_RMPP_VERSION			1
#define IB_MGMT_RMPP_TYPE_DATA			1
#define IB_MGMT_RMPP_TYPE_ACK			2
#define IB_MGMT_RMPP_TYPE_STOP			3
#define IB_MGMT_RMPP_TYPE_ABORT			4
#define IB_MGMT_RMPP_FLAG_ACTIVE		1
#define IB_MGMT_RMPP_FLAG_FIRST			(1<<1)
#define IB_MGMT_RMPP_FLAG_LAST			(1<<2)
#define IB_MGMT_RMPP_NO_RESPTIME		0x1F
#define	IB_MGMT_RMPP_STATUS_SUCCESS		0
#define	IB_MGMT_RMPP_STATUS_RESX		1
#define	IB_MGMT_RMPP_STATUS_ABORT_MIN		118
#define	IB_MGMT_RMPP_STATUS_T2L			118
#define	IB_MGMT_RMPP_STATUS_BAD_LEN		119
#define	IB_MGMT_RMPP_STATUS_BAD_SEG		120
#define	IB_MGMT_RMPP_STATUS_BADT		121
#define	IB_MGMT_RMPP_STATUS_W2S			122
#define	IB_MGMT_RMPP_STATUS_S2B			123
#define	IB_MGMT_RMPP_STATUS_BAD_STATUS		124
#define	IB_MGMT_RMPP_STATUS_UNV			125
#define	IB_MGMT_RMPP_STATUS_TMR			126
#define	IB_MGMT_RMPP_STATUS_UNSPEC		127
#define	IB_MGMT_RMPP_STATUS_ABORT_MAX		127
#define IB_QP0		0
#define IB_QP1		cpu_to_be32(1)
#define IB_QP1_QKEY	0x80010000
#define IB_QP_SET_QKEY	0x80000000
#define IB_DEFAULT_PKEY_PARTIAL 0x7FFF
#define IB_DEFAULT_PKEY_FULL	0xFFFF
enum ;
struct ib_mad_hdr ;
struct ib_rmpp_hdr ;
typedef u64 __bitwise ib_sa_comp_mask;
#define IB_SA_COMP_MASK(n) ((__force ib_sa_comp_mask) cpu_to_be64(1ull << n))
struct ib_sa_hdr  __attribute__ ((packed));
struct ib_mad ;
struct ib_rmpp_mad ;
struct ib_sa_mad  __attribute__ ((packed));
struct ib_vendor_mad ;
struct ib_class_port_info ;
struct ib_mad_send_buf ;
int ib_response_mad(struct ib_mad *mad);
static inline u8 ib_get_rmpp_resptime(struct ib_rmpp_hdr *rmpp_hdr)
static inline u8 ib_get_rmpp_flags(struct ib_rmpp_hdr *rmpp_hdr)
static inline void ib_set_rmpp_resptime(struct ib_rmpp_hdr *rmpp_hdr, u8 rtime)
static inline void ib_set_rmpp_flags(struct ib_rmpp_hdr *rmpp_hdr, u8 flags)
struct ib_mad_agent;
struct ib_mad_send_wc;
struct ib_mad_recv_wc;
typedef void (*ib_mad_send_handler)(struct ib_mad_agent *mad_agent,
struct ib_mad_send_wc *mad_send_wc);
typedef void (*ib_mad_snoop_handler)(struct ib_mad_agent *mad_agent,
struct ib_mad_send_buf *send_buf,
struct ib_mad_send_wc *mad_send_wc);
typedef void (*ib_mad_recv_handler)(struct ib_mad_agent *mad_agent,
struct ib_mad_recv_wc *mad_recv_wc);
struct ib_mad_agent ;
struct ib_mad_send_wc ;
struct ib_mad_recv_buf ;
struct ib_mad_recv_wc ;
struct ib_mad_reg_req ;
struct ib_mad_agent *ib_register_mad_agent(struct ib_device *device,
u8 port_num,
enum ib_qp_type qp_type,
struct ib_mad_reg_req *mad_reg_req,
u8 rmpp_version,
ib_mad_send_handler send_handler,
ib_mad_recv_handler recv_handler,
void *context);
enum ib_mad_snoop_flags ;
struct ib_mad_agent *ib_register_mad_snoop(struct ib_device *device,
u8 port_num,
enum ib_qp_type qp_type,
int mad_snoop_flags,
ib_mad_snoop_handler snoop_handler,
ib_mad_recv_handler recv_handler,
void *context);
int ib_unregister_mad_agent(struct ib_mad_agent *mad_agent);
int ib_post_send_mad(struct ib_mad_send_buf *send_buf,
struct ib_mad_send_buf **bad_send_buf);
void ib_free_recv_mad(struct ib_mad_recv_wc *mad_recv_wc);
void ib_cancel_mad(struct ib_mad_agent *mad_agent,
struct ib_mad_send_buf *send_buf);
int ib_modify_mad(struct ib_mad_agent *mad_agent,
struct ib_mad_send_buf *send_buf, u32 timeout_ms);
struct ib_mad_agent *ib_redirect_mad_qp(struct ib_qp *qp,
u8 rmpp_version,
ib_mad_send_handler send_handler,
ib_mad_recv_handler recv_handler,
void *context);
int ib_process_mad_wc(struct ib_mad_agent *mad_agent,
struct ib_wc *wc);
struct ib_mad_send_buf *ib_create_send_mad(struct ib_mad_agent *mad_agent,
u32 remote_qpn, u16 pkey_index,
int rmpp_active,
int hdr_len, int data_len,
gfp_t gfp_mask);
int ib_is_mad_class_rmpp(u8 mgmt_class);
int ib_get_mad_data_offset(u8 mgmt_class);
void *ib_get_rmpp_segment(struct ib_mad_send_buf *send_buf, int seg_num);
void ib_free_send_mad(struct ib_mad_send_buf *send_buf);
