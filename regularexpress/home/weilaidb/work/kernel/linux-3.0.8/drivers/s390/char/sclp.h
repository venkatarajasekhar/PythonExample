#define __SCLP_H__
#define MAX_KMEM_PAGES (sizeof(unsigned long) << 3)
#define MAX_CONSOLE_PAGES	6
#define EVTYP_OPCMD		0x01
#define EVTYP_MSG		0x02
#define EVTYP_STATECHANGE	0x08
#define EVTYP_PMSGCMD		0x09
#define EVTYP_CNTLPROGOPCMD	0x20
#define EVTYP_CNTLPROGIDENT	0x0B
#define EVTYP_SIGQUIESCE	0x1D
#define EVTYP_VT220MSG		0x1A
#define EVTYP_CONFMGMDATA	0x04
#define EVTYP_SDIAS		0x1C
#define EVTYP_ASYNC		0x0A
#define EVTYP_OCF		0x1E
#define EVTYP_OPCMD_MASK	0x80000000
#define EVTYP_MSG_MASK		0x40000000
#define EVTYP_STATECHANGE_MASK	0x01000000
#define EVTYP_PMSGCMD_MASK	0x00800000
#define EVTYP_CTLPROGOPCMD_MASK	0x00000001
#define EVTYP_CTLPROGIDENT_MASK	0x00200000
#define EVTYP_SIGQUIESCE_MASK	0x00000008
#define EVTYP_VT220MSG_MASK	0x00000040
#define EVTYP_CONFMGMDATA_MASK	0x10000000
#define EVTYP_SDIAS_MASK	0x00000010
#define EVTYP_ASYNC_MASK	0x00400000
#define EVTYP_OCF_MASK		0x00000004
#define GNRLMSGFLGS_DOM		0x8000
#define GNRLMSGFLGS_SNDALRM	0x4000
#define GNRLMSGFLGS_HOLDMSG	0x2000
#define LNTPFLGS_CNTLTEXT	0x8000
#define LNTPFLGS_LABELTEXT	0x4000
#define LNTPFLGS_DATATEXT	0x2000
#define LNTPFLGS_ENDTEXT	0x1000
#define LNTPFLGS_PROMPTTEXT	0x0800
typedef unsigned int sclp_cmdw_t;
#define SCLP_CMDW_READ_EVENT_DATA	0x00770005
#define SCLP_CMDW_WRITE_EVENT_DATA	0x00760005
#define SCLP_CMDW_WRITE_EVENT_MASK	0x00780005
#define GDS_ID_MDSMU		0x1310
#define GDS_ID_MDSROUTEINFO	0x1311
#define GDS_ID_AGUNWRKCORR	0x1549
#define GDS_ID_SNACONDREPORT	0x1532
#define GDS_ID_CPMSU		0x1212
#define GDS_ID_ROUTTARGINSTR	0x154D
#define GDS_ID_OPREQ		0x8070
#define GDS_ID_TEXTCMD		0x1320
#define GDS_KEY_SELFDEFTEXTMSG	0x31
enum sclp_pm_event ;
#define SCLP_PANIC_PRIO		1
#define SCLP_PANIC_PRIO_CLIENT	0
typedef u32 sccb_mask_t;
struct sccb_header  __attribute__((packed));
extern u64 sclp_facilities;
#define SCLP_HAS_CHP_INFO	(sclp_facilities & 0x8000000000000000ULL)
#define SCLP_HAS_CHP_RECONFIG	(sclp_facilities & 0x2000000000000000ULL)
#define SCLP_HAS_CPU_INFO	(sclp_facilities & 0x0800000000000000ULL)
#define SCLP_HAS_CPU_RECONFIG	(sclp_facilities & 0x0400000000000000ULL)
struct gds_subvector  __attribute__((packed));
struct gds_vector  __attribute__((packed));
struct evbuf_header  __attribute__((packed));
struct sclp_req ;
#define SCLP_REQ_FILLED	  0x00
#define SCLP_REQ_QUEUED	  0x01
#define SCLP_REQ_RUNNING  0x02
#define SCLP_REQ_DONE	  0x03
#define SCLP_REQ_FAILED	  0x05
struct sclp_register ;
int sclp_add_request(struct sclp_req *req);
void sclp_sync_wait(void);
int sclp_register(struct sclp_register *reg);
void sclp_unregister(struct sclp_register *reg);
int sclp_remove_processed(struct sccb_header *sccb);
int sclp_deactivate(void);
int sclp_reactivate(void);
int sclp_service_call(sclp_cmdw_t command, void *sccb);
int sclp_sdias_init(void);
void sclp_sdias_exit(void);
static inline unsigned char
sclp_ascebc(unsigned char ch)
static inline void
sclp_ebcasc_str(unsigned char *str, int nr)
static inline void
sclp_ascebc_str(unsigned char *str, int nr)
static inline struct gds_vector *
sclp_find_gds_vector(void *start, void *end, u16 id)
static inline struct gds_subvector *
sclp_find_gds_subvector(void *start, void *end, u8 key)
