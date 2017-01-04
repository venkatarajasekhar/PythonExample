#define _SMT_
#define SMT6_10
#define SMT7_20
#define	OPT_PMF
#define	OPT_SRF
#define SMT_VID	0x0001
#define SMT_VID_2 0x0002
struct smt_sid  ;
typedef u_char	t_station_id[8] ;
_packed struct smt_header  ;
#define SWAP_SMTHEADER	"662sl8ss"
#if	0
#define FC_SMT_INFO	0x41
#define FC_SMT_NSA	0x4f
#define SMT_ANNOUNCE	0x01
#define SMT_REQUEST	0x02
#define SMT_REPLY	0x03
#define SMT_NIF		0x01
#define SMT_SIF_CONFIG	0x02
#define SMT_SIF_OPER	0x03
#define SMT_ECF		0x04
#define SMT_RAF		0x05
#define SMT_RDF		0x06
#define SMT_SRF		0x07
#define SMT_PMF_GET	0x08
#define SMT_PMF_SET	0x09
#define SMT_ESF		0xff
#define SMT_MAX_ECHO_LEN	4458
#if	defined(CONC) || defined(CONC_II)
#define SMT_TEST_ECHO_LEN	50
#define SMT_TEST_ECHO_LEN	SMT_MAX_ECHO_LEN
#define SMT_MAX_INFO_LEN	(4352-20)
struct smt_para  ;
#define PARA_LEN	(sizeof(struct smt_para))
#define SMTSETPARA(p,t)		(p)->para.p_type = (t),\
(p)->para.p_len = sizeof(*(p)) - PARA_LEN
#define SMT_P_UNA	0x0001
#define SWAP_SMT_P_UNA	"s6"
struct smt_p_una  ;
#define SMT_P_SDE	0x0002
#define SWAP_SMT_P_SDE	"1111"
#define SMT_SDE_STATION		0
#define SMT_SDE_CONCENTRATOR	1
struct smt_p_sde  ;
#define SMT_P_STATE	0x0003
#define SWAP_SMT_P_STATE	"scc"
struct smt_p_state  ;
#define SMT_ST_WRAPPED		(1<<0)
#define SMT_ST_UNATTACHED	(1<<1)
#define SMT_ST_TWISTED_A	(1<<2)
#define SMT_ST_TWISTED_B	(1<<3)
#define SMT_ST_ROOTED_S		(1<<4)
#define SMT_ST_SRF		(1<<5)
#define SMT_ST_SYNC_SERVICE	(1<<6)
#define SMT_ST_MY_DUPA		(1<<0)
#define SMT_ST_UNA_DUPA		(1<<1)
#define SMT_P_TIMESTAMP	0x0004
#define SWAP_SMT_P_TIMESTAMP	"8"
struct smt_p_timestamp  ;
#define SMT_P_POLICY	0x0005
#define SWAP_SMT_P_POLICY	"ss"
struct smt_p_policy  ;
#define SMT_PL_HOLD		1
#define SMT_P_LATENCY	0x0006
#define SWAP_SMT_P_LATENCY	"ssss"
struct smt_p_latency  ;
#define SMT_P_NEIGHBORS	0x0007
#define SWAP_SMT_P_NEIGHBORS	"ss66"
struct smt_p_neighbor  ;
#define SMT_PHY_A	0
#define SMT_PHY_B	1
#define SMT_PHY_S	2
#define SMT_PHY_M	3
#define SMT_CS_DISABLED	0
#define SMT_CS_CONNECTING	1
#define SMT_CS_STANDBY	2
#define SMT_CS_ACTIVE	3
#define SMT_RM_NONE	0
#define SMT_RM_MAC	1
struct smt_phy_rec  ;
struct smt_mac_rec  ;
#define SMT_P_PATH	0x0008
#define SWAP_SMT_P_PATH	"[6s]"
struct smt_p_path  ;
#define SMT_P_MAC_STATUS	0x0009
#define SWAP_SMT_P_MAC_STATUS	"sslllllllll"
struct smt_p_mac_status  ;
#define SMT_P_LEM	0x000a
#define SWAP_SMT_P_LEM	"ssccccll"
struct smt_p_lem  ;
#define SMT_P_MAC_COUNTER 0x000b
#define SWAP_SMT_P_MAC_COUNTER	"ssll"
struct smt_p_mac_counter  ;
#define SMT_P_MAC_FNC	0x000c
#define SWAP_SMT_P_MAC_FNC	"ssl"
struct smt_p_mac_fnc  ;
#define SMT_P_PRIORITY	0x000d
#define SWAP_SMT_P_PRIORITY	"ssl"
struct smt_p_priority  ;
#define SMT_P_EB	0x000e
#define SWAP_SMT_P_EB	"ssl"
struct smt_p_eb  ;
#define SMT_P_MANUFACTURER	0x000f
#define SWAP_SMT_P_MANUFACTURER	""
struct smp_p_manufacturer  ;
#define SMT_P_USER		0x0010
#define SWAP_SMT_P_USER	""
struct smp_p_user  ;
#define SMT_P_ECHODATA	0x0011
#define SWAP_SMT_P_ECHODATA	""
struct smt_p_echo  ;
#define SMT_P_REASON	0x0012
#define SWAP_SMT_P_REASON	"l"
struct smt_p_reason  ;
#define SMT_RDF_CLASS	0x00000001
#define SMT_RDF_VERSION	0x00000002
#define SMT_RDF_SUCCESS	0x00000003
#define SMT_RDF_BADSET	0x00000004
#define SMT_RDF_ILLEGAL 0x00000005
#define SMT_RDF_NOPARAM	0x6
#define SMT_RDF_RANGE	0x8
#define SMT_RDF_AUTHOR	0x9
#define SMT_RDF_LENGTH	0x0a
#define SMT_RDF_TOOLONG	0x0b
#define SMT_RDF_SBA	0x0d
#define SMT_P_REFUSED	0x0013
#define SWAP_SMT_P_REFUSED	"l"
struct smt_p_refused  ;
#define SMT_P_VERSION	0x0014
#define SWAP_SMT_P_VERSION	"sccss"
struct smt_p_version  ;
#define	SWAP_SMT_P0015		"l"
struct smt_p_0015  ;
#define	SYNC_BW		0x00000001L
#define	SWAP_SMT_P0016		"l"
struct smt_p_0016  ;
#define	REQUEST_ALLOCATION	0x1
#define	REPORT_ALLOCATION	0x2
#define	CHANGE_ALLOCATION	0x3
#define	SWAP_SMT_P0017		"l"
struct smt_p_0017  ;
#define	SWAP_SMT_P0018		"l"
struct smt_p_0018  ;
#define	SWAP_SMT_P0019		"s6"
struct smt_p_0019  ;
#define	SWAP_SMT_P001A		"l"
struct smt_p_001a  ;
#define	SWAP_SMT_P001B		"l"
struct smt_p_001b  ;
#define	SWAP_SMT_P001C		"l"
struct smt_p_001c  ;
#define	SWAP_SMT_P001D		"l"
struct smt_p_001d  ;
#define SMT_P_FSC	0x200b
struct smt_p_fsc  ;
#define FSC_TYPE0	0
#define FSC_TYPE1	1
#define FSC_TYPE2	2
#define SMT_P_AUTHOR	0x0021
#define SWAP_SMT_P1048	"ll"
struct smt_p_1048  ;
#define SWAP_SMT_P208C	"4lss66"
struct smt_p_208c  ;
#define SWAP_SMT_P208D	"4lllll"
struct smt_p_208d  ;
#define SWAP_SMT_P208E	"4llll"
struct smt_p_208e  ;
#define SWAP_SMT_P208F	"4ll6666s6"
struct smt_p_208f  ;
#define SWAP_SMT_P2090	"4lssl"
struct smt_p_2090  ;
#define SBAPATHINDEX	(0x01000000L)
#define SBAPATHINDEX	(0x01L)
#define	SWAP_SMT_P320B	"42s"
struct	smt_p_320b  ;
#define	SWAP_SMT_P320F	"4l"
struct	smt_p_320f  ;
#define	SWAP_SMT_P3210	"4l"
struct	smt_p_3210  ;
#define SWAP_SMT_P4050	"4l1111ll"
struct smt_p_4050  ;
#define SWAP_SMT_P4051	"4lssss"
struct smt_p_4051  ;
#define SWAP_SMT_P4052	"4ll"
struct smt_p_4052  ;
#define SWAP_SMT_P4053	"4lsslss"
struct smt_p_4053  ;
#define SMT_P_SETCOUNT	0x1035
#define SWAP_SMT_P_SETCOUNT	"l8"
struct smt_p_setcount  ;
struct smt_nif  ;
struct smt_sif_config  ;
#define SIZEOF_SMT_SIF_CONFIG	(sizeof(struct smt_sif_config)- \
sizeof(struct smt_p_path))
struct smt_sif_operation  ;
#define SIZEOF_SMT_SIF_OPERATION	(sizeof(struct smt_sif_operation)- \
sizeof(struct smt_p_lem))
struct smt_ecf  ;
#define SMT_ECF_LEN	(sizeof(struct smt_header)+sizeof(struct smt_para))
struct smt_rdf  ;
struct smt_sba_alc_res  ;
struct smt_sba_alc_req  ;
struct smt_sba_chg  ;
struct smt_sba_rep_req  ;
struct smt_sba_rep_res  ;
#define SMT_STATION_ACTION	1
#define SMT_STATION_ACTION_CONNECT	0
#define SMT_STATION_ACTION_DISCONNECT	1
#define SMT_STATION_ACTION_PATHTEST	2
#define SMT_STATION_ACTION_SELFTEST	3
#define SMT_STATION_ACTION_DISABLE_A	4
#define SMT_STATION_ACTION_DISABLE_B	5
#define SMT_STATION_ACTION_DISABLE_M	6
#define SMT_PORT_ACTION		2
#define SMT_PORT_ACTION_MAINT	0
#define SMT_PORT_ACTION_ENABLE	1
#define SMT_PORT_ACTION_DISABLE	2
#define SMT_PORT_ACTION_START	3
#define SMT_PORT_ACTION_STOP	4
