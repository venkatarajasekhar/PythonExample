#define _FC_FC2_H_
#define PACKED  __attribute__ ((__packed__))
struct fc_ssb  PACKED;
#define FC_SSB_SIZE         17
#define SSB_ST_RESP         (1 << 15)
#define SSB_ST_ACTIVE       (1 << 14)
#define SSB_ST_ABNORMAL     (1 << 12)
#define SSB_ST_REQ_MASK     (3 << 10)
#define SSB_ST_REQ_CONT     (0 << 10)
#define SSB_ST_REQ_ABORT    (1 << 10)
#define SSB_ST_REQ_STOP     (2 << 10)
#define SSB_ST_REQ_RETRANS  (3 << 10)
#define SSB_ST_ABTS         (1 << 9)
#define SSB_ST_RETRANS      (1 << 8)
#define SSB_ST_TIMEOUT      (1 << 7)
#define SSB_ST_P_RJT        (1 << 6)
#define SSB_ST_CLASS_BIT    4
#define SSB_ST_CLASS_MASK   3
#define SSB_ST_ACK          (1 << 3)
struct fc_esb  __attribute__((packed));
#define FC_ESB_SIZE         (1 + 5*4 + 112 + 8)
#define ESB_ST_RESP         (1 << 31)
#define ESB_ST_SEQ_INIT     (1 << 30)
#define ESB_ST_COMPLETE     (1 << 29)
#define ESB_ST_ABNORMAL     (1 << 28)
#define ESB_ST_REC_QUAL     (1 << 26)
#define ESB_ST_ERRP_BIT     24
#define ESB_ST_ERRP_MASK    (3 << 24)
#define ESB_ST_ERRP_MULT    (0 << 24)
#define ESB_ST_ERRP_SING    (1 << 24)
#define ESB_ST_ERRP_INF     (2 << 24)
#define ESB_ST_ERRP_IMM     (3 << 24)
#define ESB_ST_OX_ID_INVL   (1 << 23)
#define ESB_ST_RX_ID_INVL   (1 << 22)
#define ESB_ST_PRI_INUSE    (1 << 21)
