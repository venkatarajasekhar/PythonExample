#define __BNA_TYPES_H__
struct bna_txq;
struct bna_tx;
struct bna_rxq;
struct bna_cq;
struct bna_rx;
struct bna_rxf;
struct bna_port;
struct bna;
struct bnad;
enum bna_status ;
enum bna_cleanup_type ;
enum bna_cb_status ;
enum bna_res_type ;
enum bna_mem_type ;
enum bna_intr_type ;
enum bna_res_req_type ;
enum bna_tx_res_req_type ;
enum bna_rx_mem_type ;
enum bna_mbox_state ;
enum bna_tx_type ;
enum bna_tx_flags ;
enum bna_tx_mod_flags ;
enum bna_rx_type ;
enum bna_rxp_type ;
enum bna_rxmode ;
enum bna_rx_event ;
enum bna_rx_state ;
enum bna_rx_flags ;
enum bna_rx_mod_flags ;
enum bna_rxf_oper_state ;
enum bna_rxf_flags ;
enum bna_rxf_event ;
enum bna_rxf_state ;
enum bna_port_type ;
enum bna_link_status ;
enum bna_llport_flags ;
enum bna_port_flags ;
enum bna_pkt_rates ;
enum bna_dim_load_types ;
enum bna_dim_bias_types ;
struct bna_mac ;
struct bna_mem_descr ;
struct bna_mem_info ;
struct bna_intr_descr ;
struct bna_intr_info ;
union bna_res_u ;
struct bna_res_info ;
struct bna_qpt ;
struct bna_device ;
struct bna_mbox_qe ;
struct bna_mbox_mod ;
struct bna_pause_config ;
struct bna_llport ;
struct bna_port ;
struct bna_ibidx_seg ;
struct bna_intr ;
struct bna_ib_dbell ;
struct bna_ib_config ;
struct bna_ib ;
struct bna_ib_mod ;
#define BNA_Q_NAME_SIZE		16
struct bna_tcb ;
struct bna_txq ;
struct bna_txf ;
struct bna_tx ;
struct bna_tx_config ;
struct bna_tx_event_cbfn ;
struct bna_tx_mod ;
struct bna_rit_entry ;
struct bna_rit_segment ;
struct bna_rit_mod ;
struct bna_rcb ;
struct bna_rxq ;
union bna_rxq_u ;
struct bna_pkt_rate ;
struct bna_ccb ;
struct bna_cq ;
struct bna_rss_config ;
struct bna_hds_config ;
struct bna_rx_config ;
struct bna_rxp ;
struct bna_rxf_hds ;
struct bna_rxf_rss ;
struct bna_rxf ;
struct bna_rx ;
struct bna_rx_event_cbfn ;
struct bna_rx_mod ;
struct bna_ucam_mod ;
struct bna_mcam_mod ;
struct bna_tx_stats ;
struct bna_rx_stats ;
struct bna_sw_stats ;
struct bna_stats ;
struct bna ;
