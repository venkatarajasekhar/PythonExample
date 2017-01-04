#define _IP_VS_H
#define IP_VS_VERSION_CODE	0x010201
#define NVERSION(version)			\
(version >> 16) & 0xFF,			\
(version >> 8) & 0xFF,			\
version & 0xFF
#define IP_VS_SVC_F_PERSISTENT	0x0001
#define IP_VS_SVC_F_HASHED	0x0002
#define IP_VS_SVC_F_ONEPACKET	0x0004
#define IP_VS_DEST_F_AVAILABLE	0x0001
#define IP_VS_DEST_F_OVERLOAD	0x0002
#define IP_VS_STATE_NONE	0x0000
#define IP_VS_STATE_MASTER	0x0001
#define IP_VS_STATE_BACKUP	0x0002
#define IP_VS_BASE_CTL		(64+1024+64)
#define IP_VS_SO_SET_NONE	IP_VS_BASE_CTL
#define IP_VS_SO_SET_INSERT	(IP_VS_BASE_CTL+1)
#define IP_VS_SO_SET_ADD	(IP_VS_BASE_CTL+2)
#define IP_VS_SO_SET_EDIT	(IP_VS_BASE_CTL+3)
#define IP_VS_SO_SET_DEL	(IP_VS_BASE_CTL+4)
#define IP_VS_SO_SET_FLUSH	(IP_VS_BASE_CTL+5)
#define IP_VS_SO_SET_LIST	(IP_VS_BASE_CTL+6)
#define IP_VS_SO_SET_ADDDEST	(IP_VS_BASE_CTL+7)
#define IP_VS_SO_SET_DELDEST	(IP_VS_BASE_CTL+8)
#define IP_VS_SO_SET_EDITDEST	(IP_VS_BASE_CTL+9)
#define IP_VS_SO_SET_TIMEOUT	(IP_VS_BASE_CTL+10)
#define IP_VS_SO_SET_STARTDAEMON (IP_VS_BASE_CTL+11)
#define IP_VS_SO_SET_STOPDAEMON (IP_VS_BASE_CTL+12)
#define IP_VS_SO_SET_RESTORE    (IP_VS_BASE_CTL+13)
#define IP_VS_SO_SET_SAVE       (IP_VS_BASE_CTL+14)
#define IP_VS_SO_SET_ZERO	(IP_VS_BASE_CTL+15)
#define IP_VS_SO_SET_MAX	IP_VS_SO_SET_ZERO
#define IP_VS_SO_GET_VERSION	IP_VS_BASE_CTL
#define IP_VS_SO_GET_INFO	(IP_VS_BASE_CTL+1)
#define IP_VS_SO_GET_SERVICES	(IP_VS_BASE_CTL+2)
#define IP_VS_SO_GET_SERVICE	(IP_VS_BASE_CTL+3)
#define IP_VS_SO_GET_DESTS	(IP_VS_BASE_CTL+4)
#define IP_VS_SO_GET_DEST	(IP_VS_BASE_CTL+5)
#define IP_VS_SO_GET_TIMEOUT	(IP_VS_BASE_CTL+6)
#define IP_VS_SO_GET_DAEMON	(IP_VS_BASE_CTL+7)
#define IP_VS_SO_GET_MAX	IP_VS_SO_GET_DAEMON
#define IP_VS_CONN_F_FWD_MASK	0x0007
#define IP_VS_CONN_F_MASQ	0x0000
#define IP_VS_CONN_F_LOCALNODE	0x0001
#define IP_VS_CONN_F_TUNNEL	0x0002
#define IP_VS_CONN_F_DROUTE	0x0003
#define IP_VS_CONN_F_BYPASS	0x0004
#define IP_VS_CONN_F_SYNC	0x0020
#define IP_VS_CONN_F_HASHED	0x0040
#define IP_VS_CONN_F_NOOUTPUT	0x0080
#define IP_VS_CONN_F_INACTIVE	0x0100
#define IP_VS_CONN_F_OUT_SEQ	0x0200
#define IP_VS_CONN_F_IN_SEQ	0x0400
#define IP_VS_CONN_F_SEQ_MASK	0x0600
#define IP_VS_CONN_F_NO_CPORT	0x0800
#define IP_VS_CONN_F_TEMPLATE	0x1000
#define IP_VS_CONN_F_ONE_PACKET	0x2000
#define IP_VS_CONN_F_BACKUP_MASK (IP_VS_CONN_F_FWD_MASK | \
IP_VS_CONN_F_NOOUTPUT | \
IP_VS_CONN_F_INACTIVE | \
IP_VS_CONN_F_SEQ_MASK | \
IP_VS_CONN_F_NO_CPORT | \
IP_VS_CONN_F_TEMPLATE \
)
#define IP_VS_CONN_F_NFCT	(1 << 16)
#define IP_VS_CONN_F_DEST_MASK (IP_VS_CONN_F_FWD_MASK | \
IP_VS_CONN_F_ONE_PACKET | \
IP_VS_CONN_F_NFCT | \
0)
#define IP_VS_SCHEDNAME_MAXLEN	16
#define IP_VS_PENAME_MAXLEN	16
#define IP_VS_IFNAME_MAXLEN	16
#define IP_VS_PEDATA_MAXLEN     255
struct ip_vs_service_user ;
struct ip_vs_dest_user ;
struct ip_vs_stats_user ;
struct ip_vs_getinfo ;
struct ip_vs_service_entry ;
struct ip_vs_dest_entry ;
struct ip_vs_get_dests ;
struct ip_vs_get_services ;
struct ip_vs_timeout_user ;
struct ip_vs_daemon_user ;
#define IPVS_GENL_NAME		"IPVS"
#define IPVS_GENL_VERSION	0x1
struct ip_vs_flags ;
enum ;
#define IPVS_CMD_MAX (__IPVS_CMD_MAX - 1)
enum ;
#define IPVS_CMD_ATTR_MAX (__IPVS_SVC_ATTR_MAX - 1)
enum ;
#define IPVS_SVC_ATTR_MAX (__IPVS_SVC_ATTR_MAX - 1)
enum ;
#define IPVS_DEST_ATTR_MAX (__IPVS_DEST_ATTR_MAX - 1)
enum ;
#define IPVS_DAEMON_ATTR_MAX (__IPVS_DAEMON_ATTR_MAX - 1)
enum ;
#define IPVS_STATS_ATTR_MAX (__IPVS_STATS_ATTR_MAX - 1)
enum ;
#define IPVS_INFO_ATTR_MAX (__IPVS_INFO_ATTR_MAX - 1)