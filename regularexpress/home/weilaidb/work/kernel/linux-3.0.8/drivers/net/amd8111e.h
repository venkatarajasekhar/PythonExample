#define _AMD811E_H
#define  ASF_STAT		0x00
#define CHIPID			0x04
#define	MIB_DATA		0x10
#define MIB_ADDR		0x14
#define STAT0			0x30
#define INT0			0x38
#define INTEN0			0x40
#define CMD0			0x48
#define CMD2			0x50
#define CMD3			0x54
#define CMD7			0x64
#define CTRL1 			0x6C
#define CTRL2 			0x70
#define XMT_RING_LIMIT		0x7C
#define AUTOPOLL0		0x88
#define AUTOPOLL1		0x8A
#define AUTOPOLL2		0x8C
#define AUTOPOLL3		0x8E
#define AUTOPOLL4		0x90
#define	AUTOPOLL5		0x92
#define AP_VALUE		0x98
#define DLY_INT_A		0xA8
#define DLY_INT_B		0xAC
#define FLOW_CONTROL		0xC8
#define PHY_ACCESS		0xD0
#define STVAL			0xD8
#define XMT_RING_BASE_ADDR0	0x100
#define XMT_RING_BASE_ADDR1	0x108
#define XMT_RING_BASE_ADDR2	0x110
#define XMT_RING_BASE_ADDR3	0x118
#define RCV_RING_BASE_ADDR0	0x120
#define PMAT0			0x190
#define PMAT1			0x194
#define XMT_RING_LEN0		0x140
#define XMT_RING_LEN1		0x144
#define XMT_RING_LEN2		0x148
#define XMT_RING_LEN3		0x14C
#define RCV_RING_LEN0		0x150
#define SRAM_SIZE		0x178
#define SRAM_BOUNDARY		0x17A
#define PADR			0x160
#define IFS1			0x18C
#define IFS			0x18D
#define IPG			0x18E
#define LADRF			0x168
typedef enum STAT_ASF_BITS;
typedef enum MIB_ADDR_BITS;
typedef enum STAT0_BITS;
#define PHY_SPEED_10		0x2
#define PHY_SPEED_100		0x3
typedef enum INT0_BITS;
typedef enum VAL_BITS;
typedef enum INTEN0_BITS;
typedef enum CMD0_BITS;
typedef enum CMD2_BITS;
typedef enum CMD3_BITS;
typedef enum CMD7_BITS;
typedef enum CTRL1_BITS;
typedef enum CTRL2_BITS;
typedef enum XMT_RING_LIMIT_BITS;
typedef enum AUTOPOLL0_BITS;
typedef enum AUTOPOLL1_BITS;
typedef enum AUTOPOLL2_BITS;
typedef enum AUTOPOLL3_BITS;
typedef enum AUTOPOLL4_BITS;
typedef enum AUTOPOLL5_BITS;
typedef enum AP_VALUE_BITS;
typedef enum DLY_INT_A_BITS;
typedef enum DLY_INT_B_BITS;
typedef enum FLOW_CONTROL_BITS;
typedef enum PHY_ACCESS_BITS;
typedef enum PMAT0_BITS;
typedef enum PMAT1_BITS;
#define rcv_miss_pkts				0x00
#define rcv_octets				0x01
#define rcv_broadcast_pkts			0x02
#define rcv_multicast_pkts			0x03
#define rcv_undersize_pkts			0x04
#define rcv_oversize_pkts			0x05
#define rcv_fragments				0x06
#define rcv_jabbers				0x07
#define rcv_unicast_pkts			0x08
#define rcv_alignment_errors			0x09
#define rcv_fcs_errors				0x0A
#define rcv_good_octets				0x0B
#define rcv_mac_ctrl				0x0C
#define rcv_flow_ctrl				0x0D
#define rcv_pkts_64_octets			0x0E
#define rcv_pkts_65to127_octets			0x0F
#define rcv_pkts_128to255_octets		0x10
#define rcv_pkts_256to511_octets		0x11
#define rcv_pkts_512to1023_octets		0x12
#define rcv_pkts_1024to1518_octets		0x13
#define rcv_unsupported_opcode			0x14
#define rcv_symbol_errors			0x15
#define rcv_drop_pkts_ring1			0x16
#define rcv_drop_pkts_ring2			0x17
#define rcv_drop_pkts_ring3			0x18
#define rcv_drop_pkts_ring4			0x19
#define rcv_jumbo_pkts				0x1A
#define xmt_underrun_pkts			0x20
#define xmt_octets				0x21
#define xmt_packets				0x22
#define xmt_broadcast_pkts			0x23
#define xmt_multicast_pkts			0x24
#define xmt_collisions				0x25
#define xmt_unicast_pkts			0x26
#define xmt_one_collision			0x27
#define xmt_multiple_collision			0x28
#define xmt_deferred_transmit			0x29
#define xmt_late_collision			0x2A
#define xmt_excessive_defer			0x2B
#define xmt_loss_carrier			0x2C
#define xmt_excessive_collision			0x2D
#define xmt_back_pressure			0x2E
#define xmt_flow_ctrl				0x2F
#define xmt_pkts_64_octets			0x30
#define xmt_pkts_65to127_octets			0x31
#define xmt_pkts_128to255_octets		0x32
#define xmt_pkts_256to511_octets		0x33
#define xmt_pkts_512to1023_octets		0x34
#define xmt_pkts_1024to1518_octet		0x35
#define xmt_oversize_pkts			0x36
#define xmt_jumbo_pkts				0x37
#define	 PCI_VENDOR_ID_AMD		0x1022
#define  PCI_DEVICE_ID_AMD8111E_7462	0x7462
#define MAX_UNITS			8
#define NUM_TX_BUFFERS			32
#define NUM_RX_BUFFERS			32
#define TX_BUFF_MOD_MASK         	31
#define RX_BUFF_MOD_MASK         	31
#define NUM_TX_RING_DR			32
#define NUM_RX_RING_DR			32
#define TX_RING_DR_MOD_MASK         	31
#define RX_RING_DR_MOD_MASK         	31
#define MAX_FILTER_SIZE			64
#define AMD8111E_MIN_MTU	 	60
#define AMD8111E_MAX_MTU		9000
#define PKT_BUFF_SZ			1536
#define MIN_PKT_LEN			60
#define ETH_ADDR_LEN			6
#define  AMD8111E_TX_TIMEOUT		(3 * HZ)
#define SOFT_TIMER_FREQ 		0xBEBC
#define DELAY_TIMER_CONV		50
#define OPTION_VLAN_ENABLE		0x0001
#define OPTION_JUMBO_ENABLE		0x0002
#define OPTION_MULTICAST_ENABLE		0x0004
#define OPTION_WOL_ENABLE		0x0008
#define OPTION_WAKE_MAGIC_ENABLE	0x0010
#define OPTION_WAKE_PHY_ENABLE		0x0020
#define OPTION_INTR_COAL_ENABLE		0x0040
#define OPTION_DYN_IPG_ENABLE	        0x0080
#define PHY_REG_ADDR_MASK		0x1f
#define DEFAULT_IPG			0x60
#define IFS1_DELTA			36
#define	IPG_CONVERGE_JIFFIES (HZ/2)
#define	IPG_STABLE_TIME	5
#define	MIN_IPG	96
#define	MAX_IPG	255
#define IPG_STEP	16
#define CSTATE  1
#define SSTATE  2
#define  REPEAT_CNT			10
typedef enum TX_FLAG_BITS;
typedef enum RX_FLAG_BITS;
#define RESET_RX_FLAGS		0x0000
#define TT_MASK			0x000c
#define TCC_MASK		0x0003
#define AMD8111E_REG_DUMP_LEN	 13*sizeof(u32)
struct amd8111e_tx_dr;
struct amd8111e_rx_dr;
struct amd8111e_link_config;
enum coal_type;
enum coal_mode;
#define MAX_TIMEOUT	40
#define MAX_EVENT_COUNT 31
struct amd8111e_coalesce_conf;
struct ipg_info;
struct amd8111e_priv;
#define  amd8111e_writeq(_UlData,_memMap)   \
writel(*(u32*)(&_UlData), _memMap);	\
writel(*(u32*)((u8*)(&_UlData)+4), _memMap+4)
typedef enum EXT_PHY_OPTION;
static int card_idx;
static int speed_duplex[MAX_UNITS] = ;
static int coalesce[MAX_UNITS] = ;
static int dynamic_ipg[MAX_UNITS] = ;
static unsigned int chip_version;
