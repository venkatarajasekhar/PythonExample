#define	__ASM_RC32434_ETH_H
#define ETH0_BASE_ADDR		0x18060000
struct eth_regs ;
#define ETH_INT_FC_EN		(1 << 0)
#define ETH_INT_FC_ITS		(1 << 1)
#define ETH_INT_FC_RIP		(1 << 2)
#define ETH_INT_FC_JAM		(1 << 3)
#define ETH_INT_FC_OVR		(1 << 4)
#define ETH_INT_FC_UND		(1 << 5)
#define ETH_INT_FC_IOC		0x000000c0
#define ETH_FIFI_TT_TTH_BIT	0
#define ETH_FIFO_TT_TTH		0x0000007f
#define ETH_ARC_PRO		(1 << 0)
#define ETH_ARC_AM		(1 << 1)
#define ETH_ARC_AFM		(1 << 2)
#define ETH_ARC_AB		(1 << 3)
#define ETH_SAL_BYTE_5		0x000000ff
#define ETH_SAL_BYTE_4		0x0000ff00
#define ETH_SAL_BYTE_3		0x00ff0000
#define ETH_SAL_BYTE_2		0xff000000
#define ETH_SAH_BYTE1		0x000000ff
#define ETH_SAH_BYTE0		0x0000ff00
#define ETH_GPF_PTV		0x0000ffff
#define ETH_PFS_PFD		(1 << 0)
#define ETH_CFSA0_CFSA4		0x000000ff
#define ETH_CFSA0_CFSA5		0x0000ff00
#define ETH_CFSA1_CFSA2		0x000000ff
#define ETH_CFSA1_CFSA3		0x0000ff00
#define ETH_CFSA1_CFSA0		0x000000ff
#define ETH_CFSA1_CFSA1		0x0000ff00
#define ETH_MAC1_RE		(1 << 0)
#define ETH_MAC1_PAF		(1 << 1)
#define ETH_MAC1_RFC		(1 << 2)
#define ETH_MAC1_TFC		(1 << 3)
#define ETH_MAC1_LB		(1 << 4)
#define ETH_MAC1_MR		(1 << 31)
#define ETH_MAC2_FD		(1 << 0)
#define ETH_MAC2_FLC		(1 << 1)
#define ETH_MAC2_HFE		(1 << 2)
#define ETH_MAC2_DC		(1 << 3)
#define ETH_MAC2_CEN		(1 << 4)
#define ETH_MAC2_PE		(1 << 5)
#define ETH_MAC2_VPE		(1 << 6)
#define ETH_MAC2_APE		(1 << 7)
#define ETH_MAC2_PPE		(1 << 8)
#define ETH_MAC2_LPE		(1 << 9)
#define ETH_MAC2_NB		(1 << 12)
#define ETH_MAC2_BP		(1 << 13)
#define ETH_MAC2_ED		(1 << 14)
#define ETH_IPGT		0x0000007f
#define ETH_IPGR_IPGR2		0x0000007f
#define ETH_IPGR_IPGR1		0x00007f00
#define ETH_CLRT_MAX_RET	0x0000000f
#define ETH_CLRT_COL_WIN	0x00003f00
#define ETH_MAXF		0x0000ffff
#define ETH_TEST_REG		(1 << 2)
#define ETH_MCP_DIV		0x000000ff
#define ETH_MII_CFG_RSVD	0x0000000c
#define ETH_MII_CMD_RD		(1 << 0)
#define ETH_MII_CMD_SCN		(1 << 1)
#define ETH_MII_REG_ADDR	0x0000001f
#define ETH_MII_PHY_ADDR	0x00001f00
#define ETH_MII_WTD_DATA	0x0000ffff
#define ETH_MII_RDD_DATA	0x0000ffff
#define ETH_MII_IND_BSY		(1 << 0)
#define ETH_MII_IND_SCN		(1 << 1)
#define ETH_MII_IND_NV		(1 << 2)
#define ETH_RX_FD		(1 << 0)
#define ETH_RX_LD		(1 << 1)
#define ETH_RX_ROK		(1 << 2)
#define ETH_RX_FM		(1 << 3)
#define ETH_RX_MP		(1 << 4)
#define ETH_RX_BP		(1 << 5)
#define ETH_RX_VLT		(1 << 6)
#define ETH_RX_CF		(1 << 7)
#define ETH_RX_OVR		(1 << 8)
#define ETH_RX_CRC		(1 << 9)
#define ETH_RX_CV		(1 << 10)
#define ETH_RX_DB		(1 << 11)
#define ETH_RX_LE		(1 << 12)
#define ETH_RX_LOR		(1 << 13)
#define ETH_RX_CES		(1 << 14)
#define ETH_RX_LEN_BIT		16
#define ETH_RX_LEN		0xffff0000
#define ETH_TX_FD		(1 << 0)
#define ETH_TX_LD		(1 << 1)
#define ETH_TX_OEN		(1 << 2)
#define ETH_TX_PEN		(1 << 3)
#define ETH_TX_CEN		(1 << 4)
#define ETH_TX_HEN		(1 << 5)
#define ETH_TX_TOK		(1 << 6)
#define ETH_TX_MP		(1 << 7)
#define ETH_TX_BP		(1 << 8)
#define ETH_TX_UND		(1 << 9)
#define ETH_TX_OF		(1 << 10)
#define ETH_TX_ED		(1 << 11)
#define ETH_TX_EC		(1 << 12)
#define ETH_TX_LC		(1 << 13)
#define ETH_TX_TD		(1 << 14)
#define ETH_TX_CRC		(1 << 15)
#define ETH_TX_LE		(1 << 16)
#define ETH_TX_CC		0x001E0000
