#define IB_USER_CM_H
#define IB_USER_CM_ABI_VERSION 5
enum ;
struct ib_ucm_cmd_hdr ;
struct ib_ucm_create_id ;
struct ib_ucm_create_id_resp ;
struct ib_ucm_destroy_id ;
struct ib_ucm_destroy_id_resp ;
struct ib_ucm_attr_id ;
struct ib_ucm_attr_id_resp ;
struct ib_ucm_init_qp_attr ;
struct ib_ucm_listen ;
struct ib_ucm_notify ;
struct ib_ucm_private_data ;
struct ib_ucm_req ;
struct ib_ucm_rep ;
struct ib_ucm_info ;
struct ib_ucm_mra ;
struct ib_ucm_lap ;
struct ib_ucm_sidr_req ;
struct ib_ucm_sidr_rep ;
struct ib_ucm_event_get ;
struct ib_ucm_req_event_resp ;
struct ib_ucm_rep_event_resp ;
struct ib_ucm_rej_event_resp ;
struct ib_ucm_mra_event_resp ;
struct ib_ucm_lap_event_resp ;
struct ib_ucm_apr_event_resp ;
struct ib_ucm_sidr_req_event_resp ;
struct ib_ucm_sidr_rep_event_resp ;
#define IB_UCM_PRES_DATA      0x01
#define IB_UCM_PRES_INFO      0x02
#define IB_UCM_PRES_PRIMARY   0x04
#define IB_UCM_PRES_ALTERNATE 0x08
struct ib_ucm_event_resp ;