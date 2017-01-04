#define LLC_S_EV_H
#define LLC_SAP_EV_TYPE_SIMPLE		1
#define LLC_SAP_EV_TYPE_CONDITION	2
#define LLC_SAP_EV_TYPE_PRIM		3
#define LLC_SAP_EV_TYPE_PDU		4
#define LLC_SAP_EV_TYPE_ACK_TMR		5
#define LLC_SAP_EV_TYPE_RPT_STATUS	6
#define LLC_SAP_EV_ACTIVATION_REQ	 1
#define LLC_SAP_EV_RX_UI		 2
#define LLC_SAP_EV_UNITDATA_REQ		 3
#define LLC_SAP_EV_XID_REQ		 4
#define LLC_SAP_EV_RX_XID_C		 5
#define LLC_SAP_EV_RX_XID_R		 6
#define LLC_SAP_EV_TEST_REQ		 7
#define LLC_SAP_EV_RX_TEST_C		 8
#define LLC_SAP_EV_RX_TEST_R		 9
#define LLC_SAP_EV_DEACTIVATION_REQ	10
struct llc_sap_state_ev ;
static __inline__ struct llc_sap_state_ev *llc_sap_ev(struct sk_buff *skb)
struct llc_sap;
typedef int (*llc_sap_ev_t)(struct llc_sap *sap, struct sk_buff *skb);
extern int llc_sap_ev_activation_req(struct llc_sap *sap, struct sk_buff *skb);
extern int llc_sap_ev_rx_ui(struct llc_sap *sap, struct sk_buff *skb);
extern int llc_sap_ev_unitdata_req(struct llc_sap *sap, struct sk_buff *skb);
extern int llc_sap_ev_xid_req(struct llc_sap *sap, struct sk_buff *skb);
extern int llc_sap_ev_rx_xid_c(struct llc_sap *sap, struct sk_buff *skb);
extern int llc_sap_ev_rx_xid_r(struct llc_sap *sap, struct sk_buff *skb);
extern int llc_sap_ev_test_req(struct llc_sap *sap, struct sk_buff *skb);
extern int llc_sap_ev_rx_test_c(struct llc_sap *sap, struct sk_buff *skb);
extern int llc_sap_ev_rx_test_r(struct llc_sap *sap, struct sk_buff *skb);
extern int llc_sap_ev_deactivation_req(struct llc_sap *sap,
struct sk_buff *skb);