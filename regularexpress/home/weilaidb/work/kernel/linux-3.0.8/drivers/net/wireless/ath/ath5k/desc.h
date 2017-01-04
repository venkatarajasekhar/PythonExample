struct ath5k_hw_rx_ctl  __packed __aligned(4);
#define AR5K_DESC_RX_CTL1_BUF_LEN		0x00000fff
#define AR5K_DESC_RX_CTL1_INTREQ		0x00002000
struct ath5k_hw_rx_status  __packed __aligned(4);
#define AR5K_5210_RX_DESC_STATUS0_DATA_LEN		0x00000fff
#define AR5K_5210_RX_DESC_STATUS0_MORE			0x00001000
#define AR5K_5210_RX_DESC_STATUS0_RECEIVE_ANT_5210	0x00004000
#define AR5K_5210_RX_DESC_STATUS0_RECEIVE_RATE		0x00078000
#define AR5K_5210_RX_DESC_STATUS0_RECEIVE_RATE_S	15
#define AR5K_5210_RX_DESC_STATUS0_RECEIVE_SIGNAL	0x07f80000
#define AR5K_5210_RX_DESC_STATUS0_RECEIVE_SIGNAL_S	19
#define AR5K_5210_RX_DESC_STATUS0_RECEIVE_ANT_5211	0x38000000
#define AR5K_5210_RX_DESC_STATUS0_RECEIVE_ANT_5211_S	27
#define AR5K_5210_RX_DESC_STATUS1_DONE			0x00000001
#define AR5K_5210_RX_DESC_STATUS1_FRAME_RECEIVE_OK	0x00000002
#define AR5K_5210_RX_DESC_STATUS1_CRC_ERROR		0x00000004
#define AR5K_5210_RX_DESC_STATUS1_FIFO_OVERRUN_5210	0x00000008
#define AR5K_5210_RX_DESC_STATUS1_DECRYPT_CRC_ERROR	0x00000010
#define AR5K_5210_RX_DESC_STATUS1_PHY_ERROR		0x000000e0
#define AR5K_5210_RX_DESC_STATUS1_PHY_ERROR_S		5
#define AR5K_5210_RX_DESC_STATUS1_KEY_INDEX_VALID	0x00000100
#define AR5K_5210_RX_DESC_STATUS1_KEY_INDEX		0x00007e00
#define AR5K_5210_RX_DESC_STATUS1_KEY_INDEX_S		9
#define AR5K_5210_RX_DESC_STATUS1_RECEIVE_TIMESTAMP	0x0fff8000
#define AR5K_5210_RX_DESC_STATUS1_RECEIVE_TIMESTAMP_S	15
#define AR5K_5210_RX_DESC_STATUS1_KEY_CACHE_MISS	0x10000000
#define AR5K_5212_RX_DESC_STATUS0_DATA_LEN		0x00000fff
#define AR5K_5212_RX_DESC_STATUS0_MORE			0x00001000
#define AR5K_5212_RX_DESC_STATUS0_DECOMP_CRC_ERROR	0x00002000
#define AR5K_5212_RX_DESC_STATUS0_RECEIVE_RATE		0x000f8000
#define AR5K_5212_RX_DESC_STATUS0_RECEIVE_RATE_S	15
#define AR5K_5212_RX_DESC_STATUS0_RECEIVE_SIGNAL	0x0ff00000
#define AR5K_5212_RX_DESC_STATUS0_RECEIVE_SIGNAL_S	20
#define AR5K_5212_RX_DESC_STATUS0_RECEIVE_ANTENNA	0xf0000000
#define AR5K_5212_RX_DESC_STATUS0_RECEIVE_ANTENNA_S	28
#define AR5K_5212_RX_DESC_STATUS1_DONE			0x00000001
#define AR5K_5212_RX_DESC_STATUS1_FRAME_RECEIVE_OK	0x00000002
#define AR5K_5212_RX_DESC_STATUS1_CRC_ERROR		0x00000004
#define AR5K_5212_RX_DESC_STATUS1_DECRYPT_CRC_ERROR	0x00000008
#define AR5K_5212_RX_DESC_STATUS1_PHY_ERROR		0x00000010
#define AR5K_5212_RX_DESC_STATUS1_MIC_ERROR		0x00000020
#define AR5K_5212_RX_DESC_STATUS1_KEY_INDEX_VALID	0x00000100
#define AR5K_5212_RX_DESC_STATUS1_KEY_INDEX		0x0000fe00
#define AR5K_5212_RX_DESC_STATUS1_KEY_INDEX_S		9
#define AR5K_5212_RX_DESC_STATUS1_RECEIVE_TIMESTAMP	0x7fff0000
#define AR5K_5212_RX_DESC_STATUS1_RECEIVE_TIMESTAMP_S	16
#define AR5K_5212_RX_DESC_STATUS1_KEY_CACHE_MISS	0x80000000
#define AR5K_5212_RX_DESC_STATUS1_PHY_ERROR_CODE	0x0000ff00
#define AR5K_5212_RX_DESC_STATUS1_PHY_ERROR_CODE_S	8
enum ath5k_phy_error_code ;
struct ath5k_hw_2w_tx_ctl  __packed __aligned(4);
#define AR5K_2W_TX_DESC_CTL0_FRAME_LEN		0x00000fff
#define AR5K_2W_TX_DESC_CTL0_HEADER_LEN_5210	0x0003f000
#define AR5K_2W_TX_DESC_CTL0_HEADER_LEN_5210_S	12
#define AR5K_2W_TX_DESC_CTL0_XMIT_RATE		0x003c0000
#define AR5K_2W_TX_DESC_CTL0_XMIT_RATE_S	18
#define AR5K_2W_TX_DESC_CTL0_RTSENA		0x00400000
#define AR5K_2W_TX_DESC_CTL0_LONG_PACKET_5210	0x00800000
#define AR5K_2W_TX_DESC_CTL0_VEOL_5211		0x00800000
#define AR5K_2W_TX_DESC_CTL0_CLRDMASK		0x01000000
#define AR5K_2W_TX_DESC_CTL0_ANT_MODE_XMIT_5210	0x02000000
#define AR5K_2W_TX_DESC_CTL0_ANT_MODE_XMIT_5211	0x1e000000
#define AR5K_2W_TX_DESC_CTL0_ANT_MODE_XMIT			\
(ah->ah_version == AR5K_AR5210 ?		\
AR5K_2W_TX_DESC_CTL0_ANT_MODE_XMIT_5210 :	\
AR5K_2W_TX_DESC_CTL0_ANT_MODE_XMIT_5211)
#define AR5K_2W_TX_DESC_CTL0_ANT_MODE_XMIT_S	25
#define AR5K_2W_TX_DESC_CTL0_FRAME_TYPE_5210	0x1c000000
#define AR5K_2W_TX_DESC_CTL0_FRAME_TYPE_5210_S	26
#define AR5K_2W_TX_DESC_CTL0_INTREQ		0x20000000
#define AR5K_2W_TX_DESC_CTL0_ENCRYPT_KEY_VALID	0x40000000
#define AR5K_2W_TX_DESC_CTL1_BUF_LEN		0x00000fff
#define AR5K_2W_TX_DESC_CTL1_MORE		0x00001000
#define AR5K_2W_TX_DESC_CTL1_ENC_KEY_IDX_5210	0x0007e000
#define AR5K_2W_TX_DESC_CTL1_ENC_KEY_IDX_5211	0x000fe000
#define AR5K_2W_TX_DESC_CTL1_ENC_KEY_IDX				\
(ah->ah_version == AR5K_AR5210 ?		\
AR5K_2W_TX_DESC_CTL1_ENC_KEY_IDX_5210 :		\
AR5K_2W_TX_DESC_CTL1_ENC_KEY_IDX_5211)
#define AR5K_2W_TX_DESC_CTL1_ENC_KEY_IDX_S	13
#define AR5K_2W_TX_DESC_CTL1_FRAME_TYPE_5211	0x00700000
#define AR5K_2W_TX_DESC_CTL1_FRAME_TYPE_5211_S	20
#define AR5K_2W_TX_DESC_CTL1_NOACK_5211		0x00800000
#define AR5K_2W_TX_DESC_CTL1_RTS_DURATION_5210	0xfff80000
#define AR5K_AR5210_TX_DESC_FRAME_TYPE_NORMAL	0
#define AR5K_AR5210_TX_DESC_FRAME_TYPE_ATIM	1
#define AR5K_AR5210_TX_DESC_FRAME_TYPE_PSPOLL	2
#define AR5K_AR5210_TX_DESC_FRAME_TYPE_NO_DELAY	3
#define AR5K_AR5211_TX_DESC_FRAME_TYPE_BEACON	3
#define AR5K_AR5210_TX_DESC_FRAME_TYPE_PIFS	4
#define AR5K_AR5211_TX_DESC_FRAME_TYPE_PRESP	4
struct ath5k_hw_4w_tx_ctl  __packed __aligned(4);
#define AR5K_4W_TX_DESC_CTL0_FRAME_LEN		0x00000fff
#define AR5K_4W_TX_DESC_CTL0_XMIT_POWER		0x003f0000
#define AR5K_4W_TX_DESC_CTL0_XMIT_POWER_S	16
#define AR5K_4W_TX_DESC_CTL0_RTSENA		0x00400000
#define AR5K_4W_TX_DESC_CTL0_VEOL		0x00800000
#define AR5K_4W_TX_DESC_CTL0_CLRDMASK		0x01000000
#define AR5K_4W_TX_DESC_CTL0_ANT_MODE_XMIT	0x1e000000
#define AR5K_4W_TX_DESC_CTL0_ANT_MODE_XMIT_S	25
#define AR5K_4W_TX_DESC_CTL0_INTREQ		0x20000000
#define AR5K_4W_TX_DESC_CTL0_ENCRYPT_KEY_VALID	0x40000000
#define AR5K_4W_TX_DESC_CTL0_CTSENA		0x80000000
#define AR5K_4W_TX_DESC_CTL1_BUF_LEN		0x00000fff
#define AR5K_4W_TX_DESC_CTL1_MORE		0x00001000
#define AR5K_4W_TX_DESC_CTL1_ENCRYPT_KEY_IDX	0x000fe000
#define AR5K_4W_TX_DESC_CTL1_ENCRYPT_KEY_IDX_S	13
#define AR5K_4W_TX_DESC_CTL1_FRAME_TYPE		0x00f00000
#define AR5K_4W_TX_DESC_CTL1_FRAME_TYPE_S	20
#define AR5K_4W_TX_DESC_CTL1_NOACK		0x01000000
#define AR5K_4W_TX_DESC_CTL1_COMP_PROC		0x06000000
#define AR5K_4W_TX_DESC_CTL1_COMP_PROC_S	25
#define AR5K_4W_TX_DESC_CTL1_COMP_IV_LEN	0x18000000
#define AR5K_4W_TX_DESC_CTL1_COMP_IV_LEN_S	27
#define AR5K_4W_TX_DESC_CTL1_COMP_ICV_LEN	0x60000000
#define AR5K_4W_TX_DESC_CTL1_COMP_ICV_LEN_S	29
#define AR5K_4W_TX_DESC_CTL2_RTS_DURATION	0x00007fff
#define AR5K_4W_TX_DESC_CTL2_DURATION_UPD_EN	0x00008000
#define AR5K_4W_TX_DESC_CTL2_XMIT_TRIES0	0x000f0000
#define AR5K_4W_TX_DESC_CTL2_XMIT_TRIES0_S	16
#define AR5K_4W_TX_DESC_CTL2_XMIT_TRIES1	0x00f00000
#define AR5K_4W_TX_DESC_CTL2_XMIT_TRIES1_S	20
#define AR5K_4W_TX_DESC_CTL2_XMIT_TRIES2	0x0f000000
#define AR5K_4W_TX_DESC_CTL2_XMIT_TRIES2_S	24
#define AR5K_4W_TX_DESC_CTL2_XMIT_TRIES3	0xf0000000
#define AR5K_4W_TX_DESC_CTL2_XMIT_TRIES3_S	28
#define AR5K_4W_TX_DESC_CTL3_XMIT_RATE0		0x0000001f
#define AR5K_4W_TX_DESC_CTL3_XMIT_RATE1		0x000003e0
#define AR5K_4W_TX_DESC_CTL3_XMIT_RATE1_S	5
#define AR5K_4W_TX_DESC_CTL3_XMIT_RATE2		0x00007c00
#define AR5K_4W_TX_DESC_CTL3_XMIT_RATE2_S	10
#define AR5K_4W_TX_DESC_CTL3_XMIT_RATE3		0x000f8000
#define AR5K_4W_TX_DESC_CTL3_XMIT_RATE3_S	15
#define AR5K_4W_TX_DESC_CTL3_RTS_CTS_RATE	0x01f00000
#define AR5K_4W_TX_DESC_CTL3_RTS_CTS_RATE_S	20
struct ath5k_hw_tx_status  __packed __aligned(4);
#define AR5K_DESC_TX_STATUS0_FRAME_XMIT_OK	0x00000001
#define AR5K_DESC_TX_STATUS0_EXCESSIVE_RETRIES	0x00000002
#define AR5K_DESC_TX_STATUS0_FIFO_UNDERRUN	0x00000004
#define AR5K_DESC_TX_STATUS0_FILTERED		0x00000008
#define AR5K_DESC_TX_STATUS0_SHORT_RETRY_COUNT	0x000000f0
#define AR5K_DESC_TX_STATUS0_SHORT_RETRY_COUNT_S	4
#define AR5K_DESC_TX_STATUS0_LONG_RETRY_COUNT	0x00000f00
#define AR5K_DESC_TX_STATUS0_LONG_RETRY_COUNT_S	8
#define AR5K_DESC_TX_STATUS0_VIRTCOLL_CT_5211	0x0000f000
#define AR5K_DESC_TX_STATUS0_VIRTCOLL_CT_5212_S	12
#define AR5K_DESC_TX_STATUS0_SEND_TIMESTAMP	0xffff0000
#define AR5K_DESC_TX_STATUS0_SEND_TIMESTAMP_S	16
#define AR5K_DESC_TX_STATUS1_DONE		0x00000001
#define AR5K_DESC_TX_STATUS1_SEQ_NUM		0x00001ffe
#define AR5K_DESC_TX_STATUS1_SEQ_NUM_S		1
#define AR5K_DESC_TX_STATUS1_ACK_SIG_STRENGTH	0x001fe000
#define AR5K_DESC_TX_STATUS1_ACK_SIG_STRENGTH_S	13
#define AR5K_DESC_TX_STATUS1_FINAL_TS_IX_5212	0x00600000
#define AR5K_DESC_TX_STATUS1_FINAL_TS_IX_5212_S	21
#define AR5K_DESC_TX_STATUS1_COMP_SUCCESS_5212	0x00800000
#define AR5K_DESC_TX_STATUS1_XMIT_ANTENNA_5212	0x01000000
struct ath5k_hw_5210_tx_desc  __packed __aligned(4);
struct ath5k_hw_5212_tx_desc  __packed __aligned(4);
struct ath5k_hw_all_rx_desc  __packed __aligned(4);
struct ath5k_desc  __packed __aligned(4);
#define AR5K_RXDESC_INTREQ	0x0020
#define AR5K_TXDESC_CLRDMASK	0x0001
#define AR5K_TXDESC_NOACK	0x0002
#define AR5K_TXDESC_RTSENA	0x0004
#define AR5K_TXDESC_CTSENA	0x0008
#define AR5K_TXDESC_INTREQ	0x0010
#define AR5K_TXDESC_VEOL	0x0020
