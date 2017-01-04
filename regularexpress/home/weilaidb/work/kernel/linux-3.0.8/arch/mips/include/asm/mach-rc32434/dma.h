#define __ASM_RC32434_DMA_H
#define DMA0_BASE_ADDR			0x18040000
struct dma_desc ;
#define DMA_DESC_SIZ			sizeof(struct dma_desc)
#define DMA_DESC_COUNT_BIT		0
#define DMA_DESC_COUNT_MSK		0x0003ffff
#define DMA_DESC_DS_BIT			20
#define DMA_DESC_DS_MSK			0x00300000
#define DMA_DESC_DEV_CMD_BIT		22
#define DMA_DESC_DEV_CMD_MSK		0x01c00000
#define DMA_DESC_DEV_CMD_BYTE		0
#define DMA_DESC_DEV_CMD_HLF_WD		1
#define DMA_DESC_DEV_CMD_WORD		2
#define DMA_DESC_DEV_CMD_2WORDS		3
#define DMA_DESC_DEV_CMD_4WORDS		4
#define DMA_DESC_DEV_CMD_6WORDS		5
#define DMA_DESC_DEV_CMD_8WORDS		6
#define DMA_DESC_DEV_CMD_16WORDS	7
#define DMA_DESC_COF			(1 << 25)
#define DMA_DESC_COD			(1 << 26)
#define DMA_DESC_IOF			(1 << 27)
#define DMA_DESC_IOD			(1 << 28)
#define DMA_DESC_TERM			(1 << 29)
#define DMA_DESC_DONE			(1 << 30)
#define DMA_DESC_FINI			(1 << 31)
struct dma_reg ;
#define DMA_CHAN_RUN_BIT		(1 << 0)
#define DMA_CHAN_DONE_BIT		(1 << 1)
#define DMA_CHAN_MODE_BIT		(1 << 2)
#define DMA_CHAN_MODE_MSK		0x0000000c
#define  DMA_CHAN_MODE_AUTO		0
#define  DMA_CHAN_MODE_BURST		1
#define  DMA_CHAN_MODE_XFRT		2
#define  DMA_CHAN_MODE_RSVD		3
#define DMA_CHAN_ACT_BIT		(1 << 4)
#define DMA_STAT_FINI			(1 << 0)
#define DMA_STAT_DONE			(1 << 1)
#define DMA_STAT_CHAIN			(1 << 2)
#define DMA_STAT_ERR			(1 << 3)
#define DMA_STAT_HALT			(1 << 4)
#define DMA_CHAN_ETH_RCV		0
#define DMA_CHAN_ETH_XMT		1
#define DMA_CHAN_MEM_TO_FIFO		2
#define DMA_CHAN_FIFO_TO_MEM		3
#define DMA_CHAN_PCI_TO_MEM		4
#define DMA_CHAN_MEM_TO_PCI		5
#define DMA_CHAN_COUNT			6
struct dma_channel ;
