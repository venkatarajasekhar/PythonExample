#define __WINBOND_LOCALPARA_H
#define LOCAL_DEFAULT_BEACON_PERIOD	100
#define LOCAL_DEFAULT_ATIM_WINDOW	0
#define LOCAL_DEFAULT_ERP_CAPABILITY	0x0431
#define LOCAL_DEFAULT_LISTEN_INTERVAL	5
#define LOCAL_DEFAULT_24_CHANNEL_NUM	13
#define LOCAL_DEFAULT_5_CHANNEL_NUM	8
#define LOCAL_USA_24_CHANNEL_NUM	11
#define LOCAL_USA_5_CHANNEL_NUM		12
#define LOCAL_EUROPE_24_CHANNEL_NUM	13
#define LOCAL_EUROPE_5_CHANNEL_NUM	19
#define LOCAL_JAPAN_24_CHANNEL_NUM	14
#define LOCAL_JAPAN_5_CHANNEL_NUM	11
#define LOCAL_UNKNOWN_24_CHANNEL_NUM	14
#define LOCAL_UNKNOWN_5_CHANNEL_NUM	34
#define psLOCAL				(&(adapter->sLocalPara))
#define MODE_802_11_BG			0
#define MODE_802_11_A			1
#define MODE_802_11_ABG			2
#define MODE_802_11_BG_IBSS		3
#define MODE_802_11_B			4
#define MODE_AUTO			255
#define BAND_TYPE_DSSS			0
#define BAND_TYPE_OFDM_24		1
#define BAND_TYPE_OFDM_5		2
#define LOCAL_ALL_SUPPORTED_RATES_BITMAP	0x130c1a66
#define LOCAL_OFDM_SUPPORTED_RATES_BITMAP	0x130c1240
#define LOCAL_11B_SUPPORTED_RATE_BITMAP		0x826
#define LOCAL_11B_BASIC_RATE_BITMAP		0x826
#define LOCAL_11B_OPERATION_RATE_BITMAP		0x826
#define LOCAL_11G_BASIC_RATE_BITMAP		0x826
#define LOCAL_11G_OPERATION_RATE_BITMAP		0x130c1240
#define LOCAL_11A_BASIC_RATE_BITMAP		0x01001040
#define LOCAL_11A_OPERATION_RATE_BITMAP		0x120c0200
#define PWR_ACTIVE				0
#define PWR_SAVE				1
#define PWR_TX_IDLE_CYCLE			6
#define AUTO_MODE				0
#define LONG_MODE				1
#define REGION_AUTO				0xff
#define REGION_UNKNOWN				0
#define REGION_EUROPE				1
#define REGION_JAPAN				2
#define REGION_USA				3
#define	REGION_FRANCE				4
#define REGION_SPAIN				5
#define REGION_ISRAEL				6
#define MAX_BSS_DESCRIPT_ELEMENT		32
#define MAX_PMKID_CandidateList			16
#define EVENT_RCV_DEAUTH			0x0100
#define EVENT_JOIN_FAIL				0x0200
#define EVENT_AUTH_FAIL				0x0300
#define EVENT_ASSOC_FAIL			0x0400
#define EVENT_LOST_SIGNAL			0x0500
#define EVENT_BSS_DESCRIPT_LACK			0x0600
#define EVENT_COUNTERMEASURE			0x0700
#define EVENT_JOIN_FILTER			0x0800
#define EVENT_RX_BUFF_UNAVAILABLE		0x4100
#define EVENT_CONNECT				0x8100
#define EVENT_DISCONNECT			0x8200
#define EVENT_SCAN_REQ				0x8300
#define EVENT_REASON_FILTER_BASIC_RATE		0x0001
#define EVENT_REASON_FILTER_PRIVACY		0x0002
#define EVENT_REASON_FILTER_AUTH_MODE		0x0003
#define EVENT_REASON_TIMEOUT			0x00ff
#define MAX_IE_APPEND_SIZE			(256 + 4)
struct chan_info ;
struct radio_off ;
struct wb_local_para ;
