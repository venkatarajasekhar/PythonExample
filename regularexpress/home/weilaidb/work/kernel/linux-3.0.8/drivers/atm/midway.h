#define DRIVERS_ATM_MIDWAY_H
#define NR_VCI		1024
#define NR_VCI_LD	10
#define NR_DMA_RX	512
#define NR_DMA_TX	512
#define NR_SERVICE	NR_VCI
#define NR_CHAN		8
#define TS_CLOCK	25000000
#define MAP_MAX_SIZE	0x00400000
#define EPROM_SIZE	0x00010000
#define	MEM_VALID	0xffc00000
#define PHY_BASE	0x00020000
#define REG_BASE	0x00040000
#define RAM_BASE	0x00200000
#define RAM_INCREMENT	0x00020000
#define MID_VCI_BASE	RAM_BASE
#define MID_DMA_RX_BASE	(MID_VCI_BASE+NR_VCI*16)
#define MID_DMA_TX_BASE	(MID_DMA_RX_BASE+NR_DMA_RX*8)
#define MID_SERVICE_BASE (MID_DMA_TX_BASE+NR_DMA_TX*8)
#define MID_FREE_BASE	(MID_SERVICE_BASE+NR_SERVICE*4)
#define MAC_LEN 6
#define MID_MIN_BUF_SIZE (1024)
#define MID_MAX_BUF_SIZE (128*1024)
#define RX_DESCR_SIZE	1
#define TX_DESCR_SIZE	2
#define AAL5_TRAILER	(ATM_AAL5_TRAILER/4)
#define TX_GAP		8
#define MID_RES_ID_MCON	0x00
#define MID_ID		0xf0000000
#define MID_SHIFT	24
#define MID_MOTHER_ID	0x00000700
#define MID_MOTHER_SHIFT 8
#define MID_CON_TI	0x00000080
#define MID_CON_SUNI	0x00000040
#define MID_CON_V6	0x00000020
#define DAUGTHER_ID	0x0000001f
#define MID_ISA		0x01
#define MID_IS		0x02
#define MID_IE		0x03
#define MID_TX_COMPLETE_7 0x00010000
#define MID_TX_COMPLETE_6 0x00008000
#define MID_TX_COMPLETE_5 0x00004000
#define MID_TX_COMPLETE_4 0x00002000
#define MID_TX_COMPLETE_3 0x00001000
#define MID_TX_COMPLETE_2 0x00000800
#define MID_TX_COMPLETE_1 0x00000400
#define MID_TX_COMPLETE_0 0x00000200
#define MID_TX_COMPLETE	0x0001fe00
#define MID_TX_DMA_OVFL	0x00000100
#define MID_TX_IDENT_MISM 0x00000080
#define MID_DMA_LERR_ACK 0x00000040
#define MID_DMA_ERR_ACK	0x00000020
#define	MID_RX_DMA_COMPLETE 0x00000010
#define MID_TX_DMA_COMPLETE 0x00000008
#define MID_SERVICE	0x00000004
#define MID_SUNI_INT	0x00000002
#define MID_STAT_OVFL	0x00000001
#define MID_MC_S	0x04
#define MID_INT_SELECT	0x000001C0
#define MID_INT_SEL_SHIFT 6
#define	MID_TX_LOCK_MODE 0x00000020
#define MID_DMA_ENABLE	0x00000010
#define MID_TX_ENABLE	0x00000008
#define MID_RX_ENABLE	0x00000004
#define MID_WAIT_1MS	0x00000002
#define MID_WAIT_500US	0x00000001
#define MID_STAT		0x05
#define MID_VCI_TRASH	0xFFFF0000
#define MID_VCI_TRASH_SHIFT 16
#define MID_OVFL_TRASH	0x0000FFFF
#define MID_SERV_WRITE	0x06
#define MID_DMA_ADDR	0x07
#define MID_DMA_WR_RX	0x08
#define MID_DMA_RD_RX	0x09
#define MID_DMA_WR_TX	0x0A
#define MID_DMA_RD_TX	0x0B
#define MID_TX_PLACE(c)	(0x10+4*(c))
#define MID_SIZE	0x00003800
#define MID_SIZE_SHIFT	11
#define MID_LOCATION	0x000007FF
#define MID_LOC_SKIP	8
#define MID_TX_RDPTR(c)	(0x11+4*(c))
#define MID_READ_PTR	0x00007FFF
#define MID_TX_DESCRSTART(c) (0x12+4*(c))
#define MID_DESCR_START	0x00007FFF
#define ENI155_MAGIC	0xa54b872d
struct midway_eprom ;
#define MID_VCI_IN_SERVICE	0x00000001
#define MID_VCI_SIZE		0x00038000
#define MID_VCI_SIZE_SHIFT	15
#define MID_VCI_LOCATION	0x1ffc0000
#define MID_VCI_LOCATION_SHIFT	18
#define MID_VCI_PTI_MODE	0x20000000
#define MID_VCI_MODE		0xc0000000
#define MID_VCI_MODE_SHIFT	30
#define MID_VCI_READ		0x00007fff
#define MID_VCI_READ_SHIFT	0
#define MID_VCI_DESCR		0x7fff0000
#define MID_VCI_DESCR_SHIFT	16
#define MID_VCI_COUNT		0x000007ff
#define MID_VCI_COUNT_SHIFT	0
#define MID_VCI_STATE		0x0000c000
#define MID_VCI_STATE_SHIFT	14
#define MID_VCI_WRITE		0x7fff0000
#define MID_VCI_WRITE_SHIFT	16
#define MID_MODE_TRASH	0
#define MID_MODE_RAW	1
#define MID_MODE_AAL5	2
#define MID_RED_COUNT		0x000007ff
#define MID_RED_CRC_ERR		0x00000800
#define MID_RED_T		0x00001000
#define MID_RED_CE		0x00010000
#define MID_RED_CLP		0x01000000
#define MID_RED_IDEN		0xfe000000
#define MID_RED_SHIFT		25
#define MID_RED_RX_ID		0x1b
#define MID_SEG_COUNT		MID_RED_COUNT
#define MID_SEG_RATE		0x01f80000
#define MID_SEG_RATE_SHIFT	19
#define MID_SEG_PR		0x06000000
#define MID_SEG_PR_SHIFT	25
#define MID_SEG_AAL5		0x08000000
#define MID_SEG_ID		0xf0000000
#define MID_SEG_ID_SHIFT	28
#define MID_SEG_MAX_RATE	63
#define MID_SEG_CLP		0x00000001
#define MID_SEG_PTI		0x0000000e
#define MID_SEG_PTI_SHIFT	1
#define MID_SEG_VCI		0x00003ff0
#define MID_SEG_VCI_SHIFT	4
#define MID_SEG_TX_ID		0xb
#define MID_DMA_COUNT		0xffff0000
#define MID_DMA_COUNT_SHIFT	16
#define MID_DMA_END		0x00000020
#define MID_DMA_TYPE		0x0000000f
#define MID_DT_JK	0x3
#define MID_DT_WORD	0x0
#define MID_DT_2W	0x7
#define MID_DT_4W	0x4
#define MID_DT_8W	0x5
#define MID_DT_16W	0x6
#define MID_DT_2WM	0xf
#define MID_DT_4WM	0xc
#define MID_DT_8WM	0xd
#define MID_DT_16WM	0xe
#define MID_DMA_VCI		0x0000ffc0
#define	MID_DMA_VCI_SHIFT	6
#define MID_DMA_CHAN		0x000001c0
#define MID_DMA_CHAN_SHIFT	6
#define MID_DT_BYTE	0x1
#define MID_DT_HWORD	0x2
