#define MGMT_INDEX_NONE			0xFFFF
struct mgmt_hdr  __packed;
#define MGMT_OP_READ_VERSION		0x0001
struct mgmt_rp_read_version  __packed;
#define MGMT_OP_READ_INDEX_LIST		0x0003
struct mgmt_rp_read_index_list  __packed;
#define MGMT_MAX_NAME_LENGTH		(HCI_MAX_NAME_LENGTH + 1)
#define MGMT_OP_READ_INFO		0x0004
struct mgmt_rp_read_info  __packed;
struct mgmt_mode  __packed;
#define MGMT_OP_SET_POWERED		0x0005
#define MGMT_OP_SET_DISCOVERABLE	0x0006
#define MGMT_OP_SET_CONNECTABLE		0x0007
#define MGMT_OP_SET_PAIRABLE		0x0008
#define MGMT_OP_ADD_UUID		0x0009
struct mgmt_cp_add_uuid  __packed;
#define MGMT_OP_REMOVE_UUID		0x000A
struct mgmt_cp_remove_uuid  __packed;
#define MGMT_OP_SET_DEV_CLASS		0x000B
struct mgmt_cp_set_dev_class  __packed;
#define MGMT_OP_SET_SERVICE_CACHE	0x000C
struct mgmt_cp_set_service_cache  __packed;
struct mgmt_key_info  __packed;
#define MGMT_OP_LOAD_KEYS		0x000D
struct mgmt_cp_load_keys  __packed;
#define MGMT_OP_REMOVE_KEY		0x000E
struct mgmt_cp_remove_key  __packed;
#define MGMT_OP_DISCONNECT		0x000F
struct mgmt_cp_disconnect  __packed;
struct mgmt_rp_disconnect  __packed;
#define MGMT_OP_GET_CONNECTIONS		0x0010
struct mgmt_rp_get_connections  __packed;
#define MGMT_OP_PIN_CODE_REPLY		0x0011
struct mgmt_cp_pin_code_reply  __packed;
struct mgmt_rp_pin_code_reply  __packed;
#define MGMT_OP_PIN_CODE_NEG_REPLY	0x0012
struct mgmt_cp_pin_code_neg_reply  __packed;
#define MGMT_OP_SET_IO_CAPABILITY	0x0013
struct mgmt_cp_set_io_capability  __packed;
#define MGMT_OP_PAIR_DEVICE		0x0014
struct mgmt_cp_pair_device  __packed;
struct mgmt_rp_pair_device  __packed;
#define MGMT_OP_USER_CONFIRM_REPLY	0x0015
struct mgmt_cp_user_confirm_reply  __packed;
struct mgmt_rp_user_confirm_reply  __packed;
#define MGMT_OP_USER_CONFIRM_NEG_REPLY	0x0016
#define MGMT_OP_SET_LOCAL_NAME		0x0017
struct mgmt_cp_set_local_name  __packed;
#define MGMT_OP_READ_LOCAL_OOB_DATA	0x0018
struct mgmt_rp_read_local_oob_data  __packed;
#define MGMT_OP_ADD_REMOTE_OOB_DATA	0x0019
struct mgmt_cp_add_remote_oob_data  __packed;
#define MGMT_OP_REMOVE_REMOTE_OOB_DATA	0x001A
struct mgmt_cp_remove_remote_oob_data  __packed;
#define MGMT_OP_START_DISCOVERY		0x001B
#define MGMT_OP_STOP_DISCOVERY		0x001C
#define MGMT_EV_CMD_COMPLETE		0x0001
struct mgmt_ev_cmd_complete  __packed;
#define MGMT_EV_CMD_STATUS		0x0002
struct mgmt_ev_cmd_status  __packed;
#define MGMT_EV_CONTROLLER_ERROR	0x0003
struct mgmt_ev_controller_error  __packed;
#define MGMT_EV_INDEX_ADDED		0x0004
#define MGMT_EV_INDEX_REMOVED		0x0005
#define MGMT_EV_POWERED			0x0006
#define MGMT_EV_DISCOVERABLE		0x0007
#define MGMT_EV_CONNECTABLE		0x0008
#define MGMT_EV_PAIRABLE		0x0009
#define MGMT_EV_NEW_KEY			0x000A
struct mgmt_ev_new_key  __packed;
#define MGMT_EV_CONNECTED		0x000B
struct mgmt_ev_connected  __packed;
#define MGMT_EV_DISCONNECTED		0x000C
struct mgmt_ev_disconnected  __packed;
#define MGMT_EV_CONNECT_FAILED		0x000D
struct mgmt_ev_connect_failed  __packed;
#define MGMT_EV_PIN_CODE_REQUEST	0x000E
struct mgmt_ev_pin_code_request  __packed;
#define MGMT_EV_USER_CONFIRM_REQUEST	0x000F
struct mgmt_ev_user_confirm_request  __packed;
#define MGMT_EV_AUTH_FAILED		0x0010
struct mgmt_ev_auth_failed  __packed;
#define MGMT_EV_LOCAL_NAME_CHANGED	0x0011
struct mgmt_ev_local_name_changed  __packed;
#define MGMT_EV_DEVICE_FOUND		0x0012
struct mgmt_ev_device_found  __packed;
#define MGMT_EV_REMOTE_NAME		0x0013
struct mgmt_ev_remote_name  __packed;
#define MGMT_EV_DISCOVERING		0x0014
