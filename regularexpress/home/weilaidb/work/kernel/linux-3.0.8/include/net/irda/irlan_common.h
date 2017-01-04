#define IRLAN_H
#define IRLAN_MTU        1518
#define IRLAN_TIMEOUT    10*HZ
#define CMD_GET_PROVIDER_INFO   0
#define CMD_GET_MEDIA_CHAR      1
#define CMD_OPEN_DATA_CHANNEL   2
#define CMD_CLOSE_DATA_CHAN     3
#define CMD_RECONNECT_DATA_CHAN 4
#define CMD_FILTER_OPERATION    5
#define RSP_SUCCESS                 0
#define RSP_INSUFFICIENT_RESOURCES  1
#define RSP_INVALID_COMMAND_FORMAT  2
#define RSP_COMMAND_NOT_SUPPORTED   3
#define RSP_PARAM_NOT_SUPPORTED     4
#define RSP_VALUE_NOT_SUPPORTED     5
#define RSP_NOT_OPEN                6
#define RSP_AUTHENTICATION_REQUIRED 7
#define RSP_INVALID_PASSWORD        8
#define RSP_PROTOCOL_ERROR          9
#define RSP_ASYNCHRONOUS_ERROR    255
#define MEDIA_802_3 1
#define MEDIA_802_5 2
#define DATA_CHAN   1
#define FILTER_TYPE 2
#define FILTER_MODE 3
#define IRLAN_DIRECTED   0x01
#define IRLAN_FUNCTIONAL 0x02
#define IRLAN_GROUP      0x04
#define IRLAN_MAC_FRAME  0x08
#define IRLAN_MULTICAST  0x10
#define IRLAN_BROADCAST  0x20
#define IRLAN_IPX_SOCKET 0x40
#define ALL     1
#define FILTER  2
#define NONE    3
#define GET     1
#define CLEAR   2
#define ADD     3
#define REMOVE  4
#define DYNAMIC 5
#define ACCESS_DIRECT  1
#define ACCESS_PEER    2
#define ACCESS_HOSTED  3
#define IRLAN_BYTE   0
#define IRLAN_SHORT  1
#define IRLAN_ARRAY  2
#define IRLAN_MAX_HEADER (TTP_HEADER+LMP_HEADER)
#define IRLAN_CMD_HEADER 2
#define IRLAN_STRING_PARAMETER_LEN(name, value) (1 + strlen((name)) + 2 \
+ strlen ((value)))
#define IRLAN_BYTE_PARAMETER_LEN(name)          (1 + strlen((name)) + 2 + 1)
#define IRLAN_SHORT_PARAMETER_LEN(name)         (1 + strlen((name)) + 2 + 2)
struct irlan_client_cb ;
struct irlan_provider_cb ;
struct irlan_cb ;
void irlan_close(struct irlan_cb *self);
void irlan_close_tsaps(struct irlan_cb *self);
int  irlan_register_netdev(struct irlan_cb *self);
void irlan_ias_register(struct irlan_cb *self, __u8 tsap_sel);
void irlan_start_watchdog_timer(struct irlan_cb *self, int timeout);
void irlan_open_data_tsap(struct irlan_cb *self);
int irlan_run_ctrl_tx_queue(struct irlan_cb *self);
struct irlan_cb *irlan_get_any(void);
void irlan_get_provider_info(struct irlan_cb *self);
void irlan_get_media_char(struct irlan_cb *self);
void irlan_open_data_channel(struct irlan_cb *self);
void irlan_close_data_channel(struct irlan_cb *self);
void irlan_set_multicast_filter(struct irlan_cb *self, int status);
void irlan_set_broadcast_filter(struct irlan_cb *self, int status);
int irlan_insert_byte_param(struct sk_buff *skb, char *param, __u8 value);
int irlan_insert_short_param(struct sk_buff *skb, char *param, __u16 value);
int irlan_insert_string_param(struct sk_buff *skb, char *param, char *value);
int irlan_insert_array_param(struct sk_buff *skb, char *name, __u8 *value,
__u16 value_len);
int irlan_extract_param(__u8 *buf, char *name, char *value, __u16 *len);
