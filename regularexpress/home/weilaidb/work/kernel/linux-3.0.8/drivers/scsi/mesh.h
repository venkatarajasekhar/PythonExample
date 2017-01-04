#define _MESH_H
struct mesh_regs ;
#define SEQ_DMA_MODE	0x80
#define SEQ_TARGET	0x40
#define SEQ_ATN		0x20
#define SEQ_ACTIVE_NEG	0x10
#define SEQ_CMD		0x0f
#define SEQ_ARBITRATE	1
#define SEQ_SELECT	2
#define SEQ_COMMAND	3
#define SEQ_STATUS	4
#define SEQ_DATAOUT	5
#define SEQ_DATAIN	6
#define SEQ_MSGOUT	7
#define SEQ_MSGIN	8
#define SEQ_BUSFREE	9
#define SEQ_ENBPARITY	0x0a
#define SEQ_DISPARITY	0x0b
#define SEQ_ENBRESEL	0x0c
#define SEQ_DISRESEL	0x0d
#define SEQ_RESETMESH	0x0e
#define SEQ_FLUSHFIFO	0x0f
#define BS0_REQ		0x20
#define BS0_ACK		0x10
#define BS0_ATN		0x08
#define BS0_MSG		0x04
#define BS0_CD		0x02
#define BS0_IO		0x01
#define BS1_RST		0x80
#define BS1_BSY		0x40
#define BS1_SEL		0x20
#define BS0_PHASE	(BS0_MSG+BS0_CD+BS0_IO)
#define BP_DATAOUT	0
#define BP_DATAIN	BS0_IO
#define BP_COMMAND	BS0_CD
#define BP_STATUS	(BS0_CD+BS0_IO)
#define BP_MSGOUT	(BS0_MSG+BS0_CD)
#define BP_MSGIN	(BS0_MSG+BS0_CD+BS0_IO)
#define EXC_SELWATN	0x20
#define EXC_SELECTED	0x10
#define EXC_RESELECTED	0x08
#define EXC_ARBLOST	0x04
#define EXC_PHASEMM	0x02
#define EXC_SELTO	0x01
#define ERR_UNEXPDISC	0x40
#define ERR_SCSIRESET	0x20
#define ERR_SEQERR	0x10
#define ERR_PARITY	0x01
#define INT_ERROR	0x04
#define INT_EXCEPTION	0x02
#define INT_CMDDONE	0x01
#define SYNC_OFF(x)	((x) >> 4)
#define SYNC_PER(x)	((x) & 0xf)
#define SYNC_PARAMS(o, p)	(((o) << 4) | (p))
#define ASYNC_PARAMS	2
