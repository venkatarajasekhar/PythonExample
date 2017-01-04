#define __iwl_prph_h__
#define PRPH_BASE	(0x00000)
#define PRPH_END	(0xFFFFF)
#define APMG_BASE			(PRPH_BASE + 0x3000)
#define APMG_CLK_CTRL_REG		(APMG_BASE + 0x0000)
#define APMG_CLK_EN_REG			(APMG_BASE + 0x0004)
#define APMG_CLK_DIS_REG		(APMG_BASE + 0x0008)
#define APMG_PS_CTRL_REG		(APMG_BASE + 0x000c)
#define APMG_PCIDEV_STT_REG		(APMG_BASE + 0x0010)
#define APMG_RFKILL_REG			(APMG_BASE + 0x0014)
#define APMG_RTC_INT_STT_REG		(APMG_BASE + 0x001c)
#define APMG_RTC_INT_MSK_REG		(APMG_BASE + 0x0020)
#define APMG_DIGITAL_SVR_REG		(APMG_BASE + 0x0058)
#define APMG_ANALOG_SVR_REG		(APMG_BASE + 0x006C)
#define APMS_CLK_VAL_MRB_FUNC_MODE	(0x00000001)
#define APMG_CLK_VAL_DMA_CLK_RQT	(0x00000200)
#define APMG_CLK_VAL_BSM_CLK_RQT	(0x00000800)
#define APMG_PS_CTRL_EARLY_PWR_OFF_RESET_DIS	(0x00400000)
#define APMG_PS_CTRL_VAL_RESET_REQ		(0x04000000)
#define APMG_PS_CTRL_MSK_PWR_SRC		(0x03000000)
#define APMG_PS_CTRL_VAL_PWR_SRC_VMAIN		(0x00000000)
#define APMG_PS_CTRL_VAL_PWR_SRC_VAUX		(0x02000000)
#define APMG_SVR_VOLTAGE_CONFIG_BIT_MSK	(0x000001E0)
#define APMG_SVR_DIGITAL_VOLTAGE_1_32		(0x00000060)
#define APMG_PCIDEV_STT_VAL_L1_ACT_DIS		(0x00000800)
#define SCD_WIN_SIZE				64
#define SCD_FRAME_LIMIT				64
#define IWL_SCD_TXFIFO_POS_TID			(0)
#define IWL_SCD_TXFIFO_POS_RA			(4)
#define IWL_SCD_QUEUE_RA_TID_MAP_RATID_MSK	(0x01FF)
#define IWLAGN_SCD_QUEUE_STTS_REG_POS_TXF	(0)
#define IWLAGN_SCD_QUEUE_STTS_REG_POS_ACTIVE	(3)
#define IWLAGN_SCD_QUEUE_STTS_REG_POS_WSL	(4)
#define IWLAGN_SCD_QUEUE_STTS_REG_POS_SCD_ACT_EN (19)
#define IWLAGN_SCD_QUEUE_STTS_REG_MSK		(0x00FF0000)
#define IWLAGN_SCD_QUEUE_CTX_REG1_CREDIT_POS		(8)
#define IWLAGN_SCD_QUEUE_CTX_REG1_CREDIT_MSK		(0x00FFFF00)
#define IWLAGN_SCD_QUEUE_CTX_REG1_SUPER_CREDIT_POS	(24)
#define IWLAGN_SCD_QUEUE_CTX_REG1_SUPER_CREDIT_MSK	(0xFF000000)
#define IWLAGN_SCD_QUEUE_CTX_REG2_WIN_SIZE_POS		(0)
#define IWLAGN_SCD_QUEUE_CTX_REG2_WIN_SIZE_MSK		(0x0000007F)
#define IWLAGN_SCD_QUEUE_CTX_REG2_FRAME_LIMIT_POS	(16)
#define IWLAGN_SCD_QUEUE_CTX_REG2_FRAME_LIMIT_MSK	(0x007F0000)
#define IWLAGN_SCD_CONTEXT_DATA_OFFSET		(0x600)
#define IWLAGN_SCD_TX_STTS_BITMAP_OFFSET		(0x7B1)
#define IWLAGN_SCD_TRANSLATE_TBL_OFFSET		(0x7E0)
#define IWLAGN_SCD_CONTEXT_QUEUE_OFFSET(x)\
(IWLAGN_SCD_CONTEXT_DATA_OFFSET + ((x) * 8))
#define IWLAGN_SCD_TRANSLATE_TBL_OFFSET_QUEUE(x) \
((IWLAGN_SCD_TRANSLATE_TBL_OFFSET + ((x) * 2)) & 0xfffc)
#define IWLAGN_SCD_QUEUECHAIN_SEL_ALL(priv)	\
(((1<<(priv)->hw_params.max_txq_num) - 1) &\
(~(1<<(priv)->cmd_queue)))
#define IWLAGN_SCD_BASE			(PRPH_BASE + 0xa02c00)
#define IWLAGN_SCD_SRAM_BASE_ADDR	(IWLAGN_SCD_BASE + 0x0)
#define IWLAGN_SCD_DRAM_BASE_ADDR	(IWLAGN_SCD_BASE + 0x8)
#define IWLAGN_SCD_AIT			(IWLAGN_SCD_BASE + 0x0c)
#define IWLAGN_SCD_TXFACT		(IWLAGN_SCD_BASE + 0x10)
#define IWLAGN_SCD_ACTIVE		(IWLAGN_SCD_BASE + 0x14)
#define IWLAGN_SCD_QUEUE_WRPTR(x)	(IWLAGN_SCD_BASE + 0x18 + (x) * 4)
#define IWLAGN_SCD_QUEUE_RDPTR(x)	(IWLAGN_SCD_BASE + 0x68 + (x) * 4)
#define IWLAGN_SCD_QUEUECHAIN_SEL	(IWLAGN_SCD_BASE + 0xe8)
#define IWLAGN_SCD_AGGR_SEL		(IWLAGN_SCD_BASE + 0x248)
#define IWLAGN_SCD_INTERRUPT_MASK	(IWLAGN_SCD_BASE + 0x108)
#define IWLAGN_SCD_QUEUE_STATUS_BITS(x)	(IWLAGN_SCD_BASE + 0x10c + (x) * 4)
