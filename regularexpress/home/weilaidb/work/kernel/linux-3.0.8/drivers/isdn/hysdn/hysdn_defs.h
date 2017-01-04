#define HYSDN_DEFS_H
#define GLOBAL_OPTION_INTERNAL_CONTROLLER 0x0001
#define GLOBAL_OPTION_EXTERNAL_CONTROLLER 0x0002
#define GLOBAL_OPTION_HANDSET             0x0004
#define GLOBAL_OPTION_DTMF                0x0008
#define GLOBAL_OPTION_SUPPL_SERVICES      0x0010
#define GLOBAL_OPTION_CHANNEL_ALLOCATION  0x0020
#define GLOBAL_OPTION_B_CHANNEL_OPERATION 0x0040
#define B1_PROT_64KBIT_HDLC        0x0001
#define B1_PROT_64KBIT_TRANSPARENT 0x0002
#define B1_PROT_V110_ASYNCH        0x0004
#define B1_PROT_V110_SYNCH         0x0008
#define B1_PROT_T30                0x0010
#define B1_PROT_64KBIT_INV_HDLC    0x0020
#define B1_PROT_56KBIT_TRANSPARENT 0x0040
#define B2_PROT_ISO7776            0x0001
#define B2_PROT_TRANSPARENT        0x0002
#define B2_PROT_SDLC               0x0004
#define B2_PROT_LAPD               0x0008
#define B2_PROT_T30                0x0010
#define B2_PROT_PPP                0x0020
#define B2_PROT_TRANSPARENT_IGNORE_B1_FRAMING_ERRORS 0x0040
#define B3_PROT_TRANSPARENT        0x0001
#define B3_PROT_T90NL              0x0002
#define B3_PROT_ISO8208            0x0004
#define B3_PROT_X25_DCE            0x0008
#define B3_PROT_T30                0x0010
#define B3_PROT_T30EXT             0x0020
#define HYSDN_MAXVERSION		8
#define HYSDN_MAX_CAPI_SKB             20
#define LOG_MAX_LINELEN 120
#define DEB_OUT_SYSLOG  0x80000000
#define LOG_MEM_ERR     0x00000001
#define LOG_POF_OPEN    0x00000010
#define LOG_POF_RECORD  0x00000020
#define LOG_POF_WRITE   0x00000040
#define LOG_POF_CARD    0x00000080
#define LOG_CNF_LINE    0x00000100
#define LOG_CNF_DATA    0x00000200
#define LOG_CNF_MISC    0x00000400
#define LOG_SCHED_ASYN  0x00001000
#define LOG_PROC_OPEN   0x00100000
#define LOG_PROC_ALL    0x00200000
#define LOG_NET_INIT    0x00010000
#define DEF_DEB_FLAGS   0x7fff000f
#define PROC_SUBDIR_NAME "hysdn"
#define PROC_CONF_BASENAME "cardconf"
#define PROC_LOG_BASENAME "cardlog"
#define PCI_REG_PLX_MEM_BASE    0
#define PCI_REG_PLX_IO_BASE     1
#define PCI_REG_MEMORY_BASE     3
#define BD_NONE         0U
#define BD_PERFORMANCE  1U
#define BD_VALUE        2U
#define BD_PCCARD       3U
#define BD_ERGO         4U
#define BD_METRO        5U
#define BD_CHAMP2       6U
#define BD_PLEXUS       7U
#define CARD_STATE_UNUSED   0
#define CARD_STATE_BOOTING  1
#define CARD_STATE_BOOTERR  2
#define CARD_STATE_RUN      3
#define ERRLOG_STATE_OFF   0
#define ERRLOG_STATE_ON    1
#define ERRLOG_STATE_START 2
#define ERRLOG_STATE_STOP  3
typedef struct HYSDN_CARD  hysdn_card;
typedef struct hycapictrl_info hycapictrl_info;
extern hysdn_card *card_root;
extern int hysdn_procconf_init(void);
extern void hysdn_procconf_release(void);
extern int hysdn_proclog_init(hysdn_card *);
extern void hysdn_proclog_release(hysdn_card *);
extern void hysdn_addlog(hysdn_card *, char *,...);
extern void hysdn_card_errlog(hysdn_card *, tErrLogEntry *, int);
extern int ergo_inithardware(hysdn_card * card);
extern int pof_write_close(hysdn_card *);
extern int pof_write_open(hysdn_card *, unsigned char **);
extern int pof_write_buffer(hysdn_card *, int);
extern int EvalSysrTokData(hysdn_card *, unsigned char *, int);
extern int hysdn_sched_tx(hysdn_card *, unsigned char *,
unsigned short volatile *, unsigned short volatile *,
unsigned short);
extern int hysdn_sched_rx(hysdn_card *, unsigned char *, unsigned short,
unsigned short);
extern int hysdn_tx_cfgline(hysdn_card *, unsigned char *,
unsigned short);
extern unsigned int hynet_enable;
extern int hysdn_net_create(hysdn_card *);
extern int hysdn_net_release(hysdn_card *);
extern char *hysdn_net_getname(hysdn_card *);
extern void hysdn_tx_netack(hysdn_card *);
extern struct sk_buff *hysdn_tx_netget(hysdn_card *);
extern void hysdn_rx_netpkt(hysdn_card *, unsigned char *,
unsigned short);
extern unsigned int hycapi_enable;
extern int hycapi_capi_create(hysdn_card *);
extern int hycapi_capi_release(hysdn_card *);
extern int hycapi_capi_stop(hysdn_card *card);
extern void hycapi_rx_capipkt(hysdn_card * card, unsigned char * buf,
unsigned short len);
extern void hycapi_tx_capiack(hysdn_card * card);
extern struct sk_buff *hycapi_tx_capiget(hysdn_card *card);
extern int hycapi_init(void);
extern void hycapi_cleanup(void);
