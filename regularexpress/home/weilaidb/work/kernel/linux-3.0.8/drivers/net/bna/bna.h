#define __BNA_H__
extern const u32 bna_napi_dim_vector[][BNA_BIAS_T_MAX];
#define BNA_IOC_TIMER_FREQ		200
#define BNA_MESSAGE_SIZE		256
#define bna_mbox_qe_fill(_qe, _cmd, _cmd_len, _cbfn, _cbarg)		\
do  while (0)
#define bna_is_small_rxq(rcb) ((rcb)->id == 1)
#define BNA_MAC_IS_EQUAL(_mac1, _mac2)					\
(!memcmp((_mac1), (_mac2), sizeof(mac_t)))
#define BNA_POWER_OF_2(x) (((x) & ((x) - 1)) == 0)
#define BNA_TO_POWER_OF_2(x)						\
do  while (0)
#define BNA_TO_POWER_OF_2_HIGH(x)					\
do  while (0)
#define BNA_SET_DMA_ADDR(_addr, _bna_dma_addr)				\
do  while (0)
#define BNA_GET_DMA_ADDR(_bna_dma_addr, _addr)			\
do  while (0)
#define	containing_rec(addr, type, field)				\
((type *)((unsigned char *)(addr) - 				\
(unsigned char *)(&((type *)0)->field)))
#define BNA_TXQ_WI_NEEDED(_vectors)	(((_vectors) + 3) >> 2)
#define BNA_TXQ_PAGE_INDEX_MAX		(PAGE_SIZE >> 6)
#define BNA_TXQ_PAGE_INDEX_MAX_SHIFT	(PAGE_SHIFT - 6)
#define BNA_TXQ_QPGE_PTR_GET(_qe_idx, _qpt_ptr, _qe_ptr, _qe_ptr_range) \
#define BNA_RXQ_PAGE_INDEX_MAX		(PAGE_SIZE >> 3)
#define BNA_RXQ_PAGE_INDEX_MAX_SHIFT	(PAGE_SHIFT - 3)
#define BNA_RXQ_QPGE_PTR_GET(_qe_idx, _qpt_ptr, _qe_ptr, _qe_ptr_range) \
#define BNA_CQ_PAGE_INDEX_MAX		(PAGE_SIZE >> 4)
#define BNA_CQ_PAGE_INDEX_MAX_SHIFT	(PAGE_SHIFT - 4)
#define BNA_CQ_QPGE_PTR_GET(_qe_idx, _qpt_ptr, _qe_ptr, _qe_ptr_range)	\
#define BNA_QE_INDX_2_PTR(_cast, _qe_idx, _q_base)			\
(&((_cast *)(_q_base))[(_qe_idx)])
#define BNA_QE_INDX_RANGE(_qe_idx, _q_depth) ((_q_depth) - (_qe_idx))
#define BNA_QE_INDX_ADD(_qe_idx, _qe_num, _q_depth)			\
((_qe_idx) = ((_qe_idx) + (_qe_num)) & ((_q_depth) - 1))
#define BNA_Q_INDEX_CHANGE(_old_idx, _updated_idx, _q_depth)		\
(((_updated_idx) - (_old_idx)) & ((_q_depth) - 1))
#define BNA_QE_FREE_CNT(_q_ptr, _q_depth)				\
(((_q_ptr)->consumer_index - (_q_ptr)->producer_index - 1) &	\
((_q_depth) - 1))
#define BNA_QE_IN_USE_CNT(_q_ptr, _q_depth)				\
((((_q_ptr)->producer_index - (_q_ptr)->consumer_index)) &	\
(_q_depth - 1))
#define BNA_Q_GET_CI(_q_ptr)		((_q_ptr)->q.consumer_index)
#define BNA_Q_GET_PI(_q_ptr)		((_q_ptr)->q.producer_index)
#define BNA_Q_PI_ADD(_q_ptr, _num)					\
(_q_ptr)->q.producer_index =					\
(((_q_ptr)->q.producer_index + (_num)) &		\
((_q_ptr)->q.q_depth - 1))
#define BNA_Q_CI_ADD(_q_ptr, _num) 					\
(_q_ptr)->q.consumer_index =					\
(((_q_ptr)->q.consumer_index + (_num))  		\
& ((_q_ptr)->q.q_depth - 1))
#define BNA_Q_FREE_COUNT(_q_ptr)					\
(BNA_QE_FREE_CNT(&((_q_ptr)->q), (_q_ptr)->q.q_depth))
#define BNA_Q_IN_USE_COUNT(_q_ptr)  					\
(BNA_QE_IN_USE_CNT(&(_q_ptr)->q, (_q_ptr)->q.q_depth))
#define BNA_DOORBELL_Q_PRD_IDX(_pi) 	(0x80000000 | (_pi))
#define BNA_DOORBELL_Q_STOP		(0x40000000)
#define BNA_DOORBELL_IB_INT_ACK(_timeout, _events) \
(0x80000000 | ((_timeout) << 16) | (_events))
#define BNA_DOORBELL_IB_INT_DISABLE 	(0x40000000)
#define bna_ib_coalescing_timer_set(_i_dbell, _cls_timer)		\
((_i_dbell)->doorbell_ack = BNA_DOORBELL_IB_INT_ACK((_cls_timer), 0));
#define bna_ib_ack(_i_dbell, _events)					\
(writel(((_i_dbell)->doorbell_ack | (_events)), \
(_i_dbell)->doorbell_addr));
#define bna_txq_prod_indx_doorbell(_tcb)				\
(writel(BNA_DOORBELL_Q_PRD_IDX((_tcb)->producer_index), \
(_tcb)->q_dbell));
#define bna_rxq_prod_indx_doorbell(_rcb)				\
(writel(BNA_DOORBELL_Q_PRD_IDX((_rcb)->producer_index), \
(_rcb)->q_dbell));
#define BNA_LARGE_PKT_SIZE		1000
#define BNA_UPDATE_PKT_CNT(_pkt, _len)					\
do  while (0)
#define	call_rxf_stop_cbfn(rxf, status)					\
if ((rxf)->stop_cbfn)
#define	call_rxf_start_cbfn(rxf, status)				\
if ((rxf)->start_cbfn)
#define	call_rxf_cam_fltr_cbfn(rxf, status)				\
if ((rxf)->cam_fltr_cbfn)
#define	call_rxf_pause_cbfn(rxf, status)				\
if ((rxf)->oper_state_cbfn)
#define	call_rxf_resume_cbfn(rxf, status) call_rxf_pause_cbfn(rxf, status)
#define is_xxx_enable(mode, bitmask, xxx) ((bitmask & xxx) && (mode & xxx))
#define is_xxx_disable(mode, bitmask, xxx) ((bitmask & xxx) && !(mode & xxx))
#define xxx_enable(mode, bitmask, xxx)					\
do  while (0)
#define xxx_disable(mode, bitmask, xxx)					\
do  while (0)
#define xxx_inactive(mode, bitmask, xxx)				\
do  while (0)
#define is_promisc_enable(mode, bitmask)				\
is_xxx_enable(mode, bitmask, BNA_RXMODE_PROMISC)
#define is_promisc_disable(mode, bitmask)				\
is_xxx_disable(mode, bitmask, BNA_RXMODE_PROMISC)
#define promisc_enable(mode, bitmask)					\
xxx_enable(mode, bitmask, BNA_RXMODE_PROMISC)
#define promisc_disable(mode, bitmask)					\
xxx_disable(mode, bitmask, BNA_RXMODE_PROMISC)
#define promisc_inactive(mode, bitmask)					\
xxx_inactive(mode, bitmask, BNA_RXMODE_PROMISC)
#define is_default_enable(mode, bitmask)				\
is_xxx_enable(mode, bitmask, BNA_RXMODE_DEFAULT)
#define is_default_disable(mode, bitmask)				\
is_xxx_disable(mode, bitmask, BNA_RXMODE_DEFAULT)
#define default_enable(mode, bitmask)					\
xxx_enable(mode, bitmask, BNA_RXMODE_DEFAULT)
#define default_disable(mode, bitmask)					\
xxx_disable(mode, bitmask, BNA_RXMODE_DEFAULT)
#define default_inactive(mode, bitmask)					\
xxx_inactive(mode, bitmask, BNA_RXMODE_DEFAULT)
#define is_allmulti_enable(mode, bitmask)				\
is_xxx_enable(mode, bitmask, BNA_RXMODE_ALLMULTI)
#define is_allmulti_disable(mode, bitmask)				\
is_xxx_disable(mode, bitmask, BNA_RXMODE_ALLMULTI)
#define allmulti_enable(mode, bitmask)					\
xxx_enable(mode, bitmask, BNA_RXMODE_ALLMULTI)
#define allmulti_disable(mode, bitmask)					\
xxx_disable(mode, bitmask, BNA_RXMODE_ALLMULTI)
#define allmulti_inactive(mode, bitmask)				\
xxx_inactive(mode, bitmask, BNA_RXMODE_ALLMULTI)
#define	GET_RXQS(rxp, q0, q1)	do  while (0)
void bna_res_req(struct bna_res_info *res_info);
void bna_init(struct bna *bna, struct bnad *bnad,
struct bfa_pcidev *pcidev,
struct bna_res_info *res_info);
void bna_uninit(struct bna *bna);
void bna_stats_get(struct bna *bna);
void bna_get_perm_mac(struct bna *bna, u8 *mac);
int bna_rit_mod_can_satisfy(struct bna_rit_mod *rit_mod, int seg_size);
struct bna_mac *bna_ucam_mod_mac_get(struct bna_ucam_mod *ucam_mod);
void bna_ucam_mod_mac_put(struct bna_ucam_mod *ucam_mod,
struct bna_mac *mac);
struct bna_mac *bna_mcam_mod_mac_get(struct bna_mcam_mod *mcam_mod);
void bna_mcam_mod_mac_put(struct bna_mcam_mod *mcam_mod,
struct bna_mac *mac);
struct bna_rit_segment *
bna_rit_mod_seg_get(struct bna_rit_mod *rit_mod, int seg_size);
void bna_rit_mod_seg_put(struct bna_rit_mod *rit_mod,
struct bna_rit_segment *seg);
void bna_device_enable(struct bna_device *device);
void bna_device_disable(struct bna_device *device,
enum bna_cleanup_type type);
void bna_mbox_handler(struct bna *bna, u32 intr_status);
void bna_mbox_send(struct bna *bna, struct bna_mbox_qe *mbox_qe);
int bna_port_mtu_get(struct bna_port *port);
void bna_llport_rx_started(struct bna_llport *llport);
void bna_llport_rx_stopped(struct bna_llport *llport);
void bna_port_enable(struct bna_port *port);
void bna_port_disable(struct bna_port *port, enum bna_cleanup_type type,
void (*cbfn)(void *, enum bna_cb_status));
void bna_port_pause_config(struct bna_port *port,
struct bna_pause_config *pause_config,
void (*cbfn)(struct bnad *, enum bna_cb_status));
void bna_port_mtu_set(struct bna_port *port, int mtu,
void (*cbfn)(struct bnad *, enum bna_cb_status));
void bna_port_mac_get(struct bna_port *port, mac_t *mac);
void bna_port_cb_tx_stopped(struct bna_port *port,
enum bna_cb_status status);
void bna_port_cb_rx_stopped(struct bna_port *port,
enum bna_cb_status status);
void bna_ib_mod_init(struct bna_ib_mod *ib_mod, struct bna *bna,
struct bna_res_info *res_info);
void bna_ib_mod_uninit(struct bna_ib_mod *ib_mod);
void bna_tx_mod_init(struct bna_tx_mod *tx_mod, struct bna *bna,
struct bna_res_info *res_info);
void bna_tx_mod_uninit(struct bna_tx_mod *tx_mod);
int bna_tx_state_get(struct bna_tx *tx);
void bna_tx_mod_start(struct bna_tx_mod *tx_mod, enum bna_tx_type type);
void bna_tx_mod_stop(struct bna_tx_mod *tx_mod, enum bna_tx_type type);
void bna_tx_mod_fail(struct bna_tx_mod *tx_mod);
void bna_tx_mod_prio_changed(struct bna_tx_mod *tx_mod, int prio);
void bna_tx_mod_cee_link_status(struct bna_tx_mod *tx_mod, int cee_link);
void bna_tx_res_req(int num_txq, int txq_depth,
struct bna_res_info *res_info);
struct bna_tx *bna_tx_create(struct bna *bna, struct bnad *bnad,
struct bna_tx_config *tx_cfg,
struct bna_tx_event_cbfn *tx_cbfn,
struct bna_res_info *res_info, void *priv);
void bna_tx_destroy(struct bna_tx *tx);
void bna_tx_enable(struct bna_tx *tx);
void bna_tx_disable(struct bna_tx *tx, enum bna_cleanup_type type,
void (*cbfn)(void *, struct bna_tx *,
enum bna_cb_status));
void bna_tx_coalescing_timeo_set(struct bna_tx *tx, int coalescing_timeo);
void rxf_cb_cam_fltr_mbox_cmd(void *arg, int status);
void rxf_cam_mbox_cmd(struct bna_rxf *rxf, u8 cmd,
const struct bna_mac *mac_addr);
void __rxf_vlan_filter_set(struct bna_rxf *rxf, enum bna_status status);
void bna_rxf_adv_init(struct bna_rxf *rxf,
struct bna_rx *rx,
struct bna_rx_config *q_config);
int rxf_process_packet_filter_ucast(struct bna_rxf *rxf);
int rxf_process_packet_filter_promisc(struct bna_rxf *rxf);
int rxf_process_packet_filter_default(struct bna_rxf *rxf);
int rxf_process_packet_filter_allmulti(struct bna_rxf *rxf);
int rxf_clear_packet_filter_ucast(struct bna_rxf *rxf);
int rxf_clear_packet_filter_promisc(struct bna_rxf *rxf);
int rxf_clear_packet_filter_default(struct bna_rxf *rxf);
int rxf_clear_packet_filter_allmulti(struct bna_rxf *rxf);
void rxf_reset_packet_filter_ucast(struct bna_rxf *rxf);
void rxf_reset_packet_filter_promisc(struct bna_rxf *rxf);
void rxf_reset_packet_filter_default(struct bna_rxf *rxf);
void rxf_reset_packet_filter_allmulti(struct bna_rxf *rxf);
void bna_rx_mod_init(struct bna_rx_mod *rx_mod, struct bna *bna,
struct bna_res_info *res_info);
void bna_rx_mod_uninit(struct bna_rx_mod *rx_mod);
int bna_rx_state_get(struct bna_rx *rx);
int bna_rxf_state_get(struct bna_rxf *rxf);
void bna_rx_mod_start(struct bna_rx_mod *rx_mod, enum bna_rx_type type);
void bna_rx_mod_stop(struct bna_rx_mod *rx_mod, enum bna_rx_type type);
void bna_rx_mod_fail(struct bna_rx_mod *rx_mod);
void bna_rx_res_req(struct bna_rx_config *rx_config,
struct bna_res_info *res_info);
struct bna_rx *bna_rx_create(struct bna *bna, struct bnad *bnad,
struct bna_rx_config *rx_cfg,
struct bna_rx_event_cbfn *rx_cbfn,
struct bna_res_info *res_info, void *priv);
void bna_rx_destroy(struct bna_rx *rx);
void bna_rx_enable(struct bna_rx *rx);
void bna_rx_disable(struct bna_rx *rx, enum bna_cleanup_type type,
void (*cbfn)(void *, struct bna_rx *,
enum bna_cb_status));
void bna_rx_coalescing_timeo_set(struct bna_rx *rx, int coalescing_timeo);
void bna_rx_dim_reconfig(struct bna *bna, const u32 vector[][BNA_BIAS_T_MAX]);
void bna_rx_dim_update(struct bna_ccb *ccb);
enum bna_cb_status
bna_rx_ucast_set(struct bna_rx *rx, u8 *ucmac,
void (*cbfn)(struct bnad *, struct bna_rx *,
enum bna_cb_status));
enum bna_cb_status
bna_rx_mcast_add(struct bna_rx *rx, u8 *mcmac,
void (*cbfn)(struct bnad *, struct bna_rx *,
enum bna_cb_status));
enum bna_cb_status
bna_rx_mcast_listset(struct bna_rx *rx, int count, u8 *mcmac,
void (*cbfn)(struct bnad *, struct bna_rx *,
enum bna_cb_status));
enum bna_cb_status
bna_rx_mode_set(struct bna_rx *rx, enum bna_rxmode rxmode,
enum bna_rxmode bitmask,
void (*cbfn)(struct bnad *, struct bna_rx *,
enum bna_cb_status));
void bna_rx_vlan_add(struct bna_rx *rx, int vlan_id);
void bna_rx_vlan_del(struct bna_rx *rx, int vlan_id);
void bna_rx_vlanfilter_enable(struct bna_rx *rx);
void bna_rx_hds_enable(struct bna_rx *rx, struct bna_rxf_hds *hds_config,
void (*cbfn)(struct bnad *, struct bna_rx *,
enum bna_cb_status));
void bna_rx_hds_disable(struct bna_rx *rx,
void (*cbfn)(struct bnad *, struct bna_rx *,
enum bna_cb_status));
void bnad_cb_stats_get(struct bnad *bnad, enum bna_cb_status status,
struct bna_stats *stats);
void bnad_cb_device_enabled(struct bnad *bnad, enum bna_cb_status status);
void bnad_cb_device_disabled(struct bnad *bnad, enum bna_cb_status status);
void bnad_cb_device_enable_mbox_intr(struct bnad *bnad);
void bnad_cb_device_disable_mbox_intr(struct bnad *bnad);
void bnad_cb_port_link_status(struct bnad *bnad,
enum bna_link_status status);
