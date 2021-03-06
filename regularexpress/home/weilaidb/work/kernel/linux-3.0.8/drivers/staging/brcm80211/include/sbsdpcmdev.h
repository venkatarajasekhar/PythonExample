#define	_sbsdpcmdev_h_
#define	_PADLINE(line)	pad ## line
#define	_XSTR(line)	_PADLINE(line)
#define	PAD		_XSTR(__LINE__)
typedef volatile struct  dma64p_t;
typedef volatile struct  sdiodma64_t;
typedef volatile struct  sdiodma32_t;
typedef volatile struct  pcmdma32_t;
typedef volatile struct  sdpcmd_regs_t;
#define CC_CISRDY		(1 << 0)
#define CC_BPRESEN		(1 << 1)
#define CC_F2RDY		(1 << 2)
#define CC_CLRPADSISO		(1 << 3)
#define CC_XMTDATAAVAIL_MODE	(1 << 4)
#define CC_XMTDATAAVAIL_CTRL	(1 << 5)
#define CS_PCMCIAMODE	(1 << 0)
#define CS_SMARTDEV	(1 << 1)
#define CS_F2ENABLED	(1 << 2)
#define PCMCIA_MES_PA_MASK	0x7fff
#define PCMCIA_MES_PM_MASK	0x7fff
#define PCMCIA_WFBC_MASK	0xffff
#define PCMCIA_UT_MASK		0x07ff
#define I_SMB_SW0	(1 << 0)
#define I_SMB_SW1	(1 << 1)
#define I_SMB_SW2	(1 << 2)
#define I_SMB_SW3	(1 << 3)
#define I_SMB_SW_MASK	0x0000000f
#define I_SMB_SW_SHIFT	0
#define I_HMB_SW0	(1 << 4)
#define I_HMB_SW1	(1 << 5)
#define I_HMB_SW2	(1 << 6)
#define I_HMB_SW3	(1 << 7)
#define I_HMB_SW_MASK	0x000000f0
#define I_HMB_SW_SHIFT	4
#define I_WR_OOSYNC	(1 << 8)
#define I_RD_OOSYNC	(1 << 9)
#define	I_PC		(1 << 10)
#define	I_PD		(1 << 11)
#define	I_DE		(1 << 12)
#define	I_RU		(1 << 13)
#define	I_RO		(1 << 14)
#define	I_XU		(1 << 15)
#define	I_RI		(1 << 16)
#define I_BUSPWR	(1 << 17)
#define I_XMTDATA_AVAIL (1 << 23)
#define	I_XI		(1 << 24)
#define I_RF_TERM	(1 << 25)
#define I_WF_TERM	(1 << 26)
#define I_PCMCIA_XU	(1 << 27)
#define I_SBINT		(1 << 28)
#define I_CHIPACTIVE	(1 << 29)
#define I_SRESET	(1 << 30)
#define I_IOE2		(1U << 31)
#define	I_ERRORS	(I_PC | I_PD | I_DE | I_RU | I_RO | I_XU)
#define I_DMA		(I_RI | I_XI | I_ERRORS)
#define I_SB_SERR	(1 << 8)
#define I_SB_RESPERR	(1 << 9)
#define I_SB_SPROMERR	(1 << 10)
#define SDA_DATA_MASK	0x000000ff
#define SDA_ADDR_MASK	0x000fff00
#define SDA_ADDR_SHIFT	8
#define SDA_WRITE	0x01000000
#define SDA_READ	0x00000000
#define SDA_BUSY	0x80000000
#define SDA_CCCR_SPACE		0x000
#define SDA_F1_FBR_SPACE	0x100
#define SDA_F2_FBR_SPACE	0x200
#define SDA_F1_REG_SPACE	0x300
#define SDA_CHIPCONTROLDATA	0x006
#define SDA_CHIPCONTROLENAB	0x007
#define SDA_F2WATERMARK		0x008
#define SDA_DEVICECONTROL	0x009
#define SDA_SBADDRLOW		0x00a
#define SDA_SBADDRMID		0x00b
#define SDA_SBADDRHIGH		0x00c
#define SDA_FRAMECTRL		0x00d
#define SDA_CHIPCLOCKCSR	0x00e
#define SDA_SDIOPULLUP		0x00f
#define SDA_SDIOWRFRAMEBCLOW	0x019
#define SDA_SDIOWRFRAMEBCHIGH	0x01a
#define SDA_SDIORDFRAMEBCLOW	0x01b
#define SDA_SDIORDFRAMEBCHIGH	0x01c
#define SDA_F2WATERMARK_MASK	0x7f
#define SDA_SBADDRLOW_MASK	0x80
#define SDA_SBADDRMID_MASK	0xff
#define SDA_SBADDRHIGH_MASK	0xff
#define SFC_RF_TERM	(1 << 0)
#define SFC_WF_TERM	(1 << 1)
#define SFC_CRC4WOOS	(1 << 2)
#define SFC_ABORTALL	(1 << 3)
#define PFC_RF_TERM	(1 << 0)
#define PFC_WF_TERM	(1 << 1)
#define	IRL_TO_MASK	0x00ffffff
#define	IRL_FC_MASK	0xff000000
#define	IRL_FC_SHIFT	24
typedef volatile struct  sdpcmd_rxh_t;
#define RXF_CRC		0x0001
#define RXF_WOOS	0x0002
#define RXF_WF_TERM	0x0004
#define RXF_ABORT	0x0008
#define RXF_DISCARD	(RXF_CRC | RXF_WOOS | RXF_WF_TERM | RXF_ABORT)
#define SDPCM_FRAMETAG_LEN	4
