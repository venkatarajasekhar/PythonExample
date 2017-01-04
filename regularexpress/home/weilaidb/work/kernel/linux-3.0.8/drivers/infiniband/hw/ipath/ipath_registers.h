#define _IPATH_REGISTERS_H
#define INFINIPATH_R_CHIPREVMINOR_MASK 0xFF
#define INFINIPATH_R_CHIPREVMINOR_SHIFT 0
#define INFINIPATH_R_CHIPREVMAJOR_MASK 0xFF
#define INFINIPATH_R_CHIPREVMAJOR_SHIFT 8
#define INFINIPATH_R_ARCH_MASK 0xFF
#define INFINIPATH_R_ARCH_SHIFT 16
#define INFINIPATH_R_SOFTWARE_MASK 0xFF
#define INFINIPATH_R_SOFTWARE_SHIFT 24
#define INFINIPATH_R_BOARDID_MASK 0xFF
#define INFINIPATH_R_BOARDID_SHIFT 32
#define INFINIPATH_C_FREEZEMODE 0x00000002
#define INFINIPATH_C_LINKENABLE 0x00000004
#define INFINIPATH_S_DISARMPIOBUF_SHIFT 16
#define INFINIPATH_S_UPDTHRESH_SHIFT 24
#define INFINIPATH_S_UPDTHRESH_MASK 0x1f
#define IPATH_S_ABORT		0
#define IPATH_S_PIOINTBUFAVAIL	1
#define IPATH_S_PIOBUFAVAILUPD	2
#define IPATH_S_PIOENABLE	3
#define IPATH_S_SDMAINTENABLE	9
#define IPATH_S_SDMASINGLEDESCRIPTOR	10
#define IPATH_S_SDMAENABLE	11
#define IPATH_S_SDMAHALT	12
#define IPATH_S_DISARM		31
#define INFINIPATH_S_ABORT		(1U << IPATH_S_ABORT)
#define INFINIPATH_S_PIOINTBUFAVAIL	(1U << IPATH_S_PIOINTBUFAVAIL)
#define INFINIPATH_S_PIOBUFAVAILUPD	(1U << IPATH_S_PIOBUFAVAILUPD)
#define INFINIPATH_S_PIOENABLE		(1U << IPATH_S_PIOENABLE)
#define INFINIPATH_S_SDMAINTENABLE	(1U << IPATH_S_SDMAINTENABLE)
#define INFINIPATH_S_SDMASINGLEDESCRIPTOR \
(1U << IPATH_S_SDMASINGLEDESCRIPTOR)
#define INFINIPATH_S_SDMAENABLE		(1U << IPATH_S_SDMAENABLE)
#define INFINIPATH_S_SDMAHALT		(1U << IPATH_S_SDMAHALT)
#define INFINIPATH_S_DISARM		(1U << IPATH_S_DISARM)
#define INFINIPATH_R_PORTENABLE_SHIFT 0
#define INFINIPATH_R_QPMAP_ENABLE (1ULL << 38)
#define INFINIPATH_I_SDMAINT		0x8000000000000000ULL
#define INFINIPATH_I_SDMADISABLED	0x4000000000000000ULL
#define INFINIPATH_I_ERROR		0x0000000080000000ULL
#define INFINIPATH_I_SPIOSENT		0x0000000040000000ULL
#define INFINIPATH_I_SPIOBUFAVAIL	0x0000000020000000ULL
#define INFINIPATH_I_GPIO		0x0000000010000000ULL
#define INFINIPATH_I_JINT		0x0000000004000000ULL
#define INFINIPATH_E_RFORMATERR			0x0000000000000001ULL
#define INFINIPATH_E_RVCRC			0x0000000000000002ULL
#define INFINIPATH_E_RICRC			0x0000000000000004ULL
#define INFINIPATH_E_RMINPKTLEN			0x0000000000000008ULL
#define INFINIPATH_E_RMAXPKTLEN			0x0000000000000010ULL
#define INFINIPATH_E_RLONGPKTLEN		0x0000000000000020ULL
#define INFINIPATH_E_RSHORTPKTLEN		0x0000000000000040ULL
#define INFINIPATH_E_RUNEXPCHAR			0x0000000000000080ULL
#define INFINIPATH_E_RUNSUPVL			0x0000000000000100ULL
#define INFINIPATH_E_REBP			0x0000000000000200ULL
#define INFINIPATH_E_RIBFLOW			0x0000000000000400ULL
#define INFINIPATH_E_RBADVERSION		0x0000000000000800ULL
#define INFINIPATH_E_RRCVEGRFULL		0x0000000000001000ULL
#define INFINIPATH_E_RRCVHDRFULL		0x0000000000002000ULL
#define INFINIPATH_E_RBADTID			0x0000000000004000ULL
#define INFINIPATH_E_RHDRLEN			0x0000000000008000ULL
#define INFINIPATH_E_RHDR			0x0000000000010000ULL
#define INFINIPATH_E_RIBLOSTLINK		0x0000000000020000ULL
#define INFINIPATH_E_SENDSPECIALTRIGGER		0x0000000008000000ULL
#define INFINIPATH_E_SDMADISABLED		0x0000000010000000ULL
#define INFINIPATH_E_SMINPKTLEN			0x0000000020000000ULL
#define INFINIPATH_E_SMAXPKTLEN			0x0000000040000000ULL
#define INFINIPATH_E_SUNDERRUN			0x0000000080000000ULL
#define INFINIPATH_E_SPKTLEN			0x0000000100000000ULL
#define INFINIPATH_E_SDROPPEDSMPPKT		0x0000000200000000ULL
#define INFINIPATH_E_SDROPPEDDATAPKT		0x0000000400000000ULL
#define INFINIPATH_E_SPIOARMLAUNCH		0x0000000800000000ULL
#define INFINIPATH_E_SUNEXPERRPKTNUM		0x0000001000000000ULL
#define INFINIPATH_E_SUNSUPVL			0x0000002000000000ULL
#define INFINIPATH_E_SENDBUFMISUSE		0x0000004000000000ULL
#define INFINIPATH_E_SDMAGENMISMATCH		0x0000008000000000ULL
#define INFINIPATH_E_SDMAOUTOFBOUND		0x0000010000000000ULL
#define INFINIPATH_E_SDMATAILOUTOFBOUND		0x0000020000000000ULL
#define INFINIPATH_E_SDMABASE			0x0000040000000000ULL
#define INFINIPATH_E_SDMA1STDESC		0x0000080000000000ULL
#define INFINIPATH_E_SDMARPYTAG			0x0000100000000000ULL
#define INFINIPATH_E_SDMADWEN			0x0000200000000000ULL
#define INFINIPATH_E_SDMAMISSINGDW		0x0000400000000000ULL
#define INFINIPATH_E_SDMAUNEXPDATA		0x0000800000000000ULL
#define INFINIPATH_E_IBSTATUSCHANGED		0x0001000000000000ULL
#define INFINIPATH_E_INVALIDADDR		0x0002000000000000ULL
#define INFINIPATH_E_RESET			0x0004000000000000ULL
#define INFINIPATH_E_HARDWARE			0x0008000000000000ULL
#define INFINIPATH_E_SDMADESCADDRMISALIGN	0x0010000000000000ULL
#define INFINIPATH_E_INVALIDEEPCMD		0x0020000000000000ULL
#define INFINIPATH_E_PKTERRS ( INFINIPATH_E_SPKTLEN \
| INFINIPATH_E_SDROPPEDDATAPKT | INFINIPATH_E_RVCRC \
| INFINIPATH_E_RICRC | INFINIPATH_E_RSHORTPKTLEN \
| INFINIPATH_E_REBP )
#define INFINIPATH_E_SDMAERRS ( \
INFINIPATH_E_SDMAGENMISMATCH | INFINIPATH_E_SDMAOUTOFBOUND | \
INFINIPATH_E_SDMATAILOUTOFBOUND | INFINIPATH_E_SDMABASE | \
INFINIPATH_E_SDMA1STDESC | INFINIPATH_E_SDMARPYTAG | \
INFINIPATH_E_SDMADWEN | INFINIPATH_E_SDMAMISSINGDW | \
INFINIPATH_E_SDMAUNEXPDATA | \
INFINIPATH_E_SDMADESCADDRMISALIGN | \
INFINIPATH_E_SDMADISABLED | \
INFINIPATH_E_SENDBUFMISUSE)
#define INFINIPATH_HWE_TXEMEMPARITYERR_MASK 0xFULL
#define INFINIPATH_HWE_TXEMEMPARITYERR_SHIFT 40
#define INFINIPATH_HWE_RXEMEMPARITYERR_MASK 0x7FULL
#define INFINIPATH_HWE_RXEMEMPARITYERR_SHIFT 44
#define INFINIPATH_HWE_IBCBUSTOSPCPARITYERR 0x4000000000000000ULL
#define INFINIPATH_HWE_IBCBUSFRSPCPARITYERR 0x8000000000000000ULL
#define INFINIPATH_HWE_TXEMEMPARITYERR_PIOBUF	0x1ULL
#define INFINIPATH_HWE_TXEMEMPARITYERR_PIOPBC	0x2ULL
#define INFINIPATH_HWE_TXEMEMPARITYERR_PIOLAUNCHFIFO 0x4ULL
#define INFINIPATH_HWE_RXEMEMPARITYERR_RCVBUF   0x01ULL
#define INFINIPATH_HWE_RXEMEMPARITYERR_LOOKUPQ  0x02ULL
#define INFINIPATH_HWE_RXEMEMPARITYERR_EXPTID   0x04ULL
#define INFINIPATH_HWE_RXEMEMPARITYERR_EAGERTID 0x08ULL
#define INFINIPATH_HWE_RXEMEMPARITYERR_FLAGBUF  0x10ULL
#define INFINIPATH_HWE_RXEMEMPARITYERR_DATAINFO 0x20ULL
#define INFINIPATH_HWE_RXEMEMPARITYERR_HDRINFO  0x40ULL
#define INFINIPATH_HWE_RXDSYNCMEMPARITYERR  0x0000000400000000ULL
#define INFINIPATH_HWE_MEMBISTFAILED	0x0040000000000000ULL
#define INFINIPATH_DC_FORCETXEMEMPARITYERR_MASK 0xFULL
#define INFINIPATH_DC_FORCETXEMEMPARITYERR_SHIFT 40
#define INFINIPATH_DC_FORCERXEMEMPARITYERR_MASK 0x7FULL
#define INFINIPATH_DC_FORCERXEMEMPARITYERR_SHIFT 44
#define INFINIPATH_DC_FORCERXDSYNCMEMPARITYERR  0x0000000400000000ULL
#define INFINIPATH_DC_COUNTERDISABLE            0x1000000000000000ULL
#define INFINIPATH_DC_COUNTERWREN               0x2000000000000000ULL
#define INFINIPATH_DC_FORCEIBCBUSTOSPCPARITYERR 0x4000000000000000ULL
#define INFINIPATH_DC_FORCEIBCBUSFRSPCPARITYERR 0x8000000000000000ULL
#define INFINIPATH_IBCC_FLOWCTRLPERIOD_MASK 0xFFULL
#define INFINIPATH_IBCC_FLOWCTRLPERIOD_SHIFT 0
#define INFINIPATH_IBCC_FLOWCTRLWATERMARK_MASK 0xFFULL
#define INFINIPATH_IBCC_FLOWCTRLWATERMARK_SHIFT 8
#define INFINIPATH_IBCC_LINKINITCMD_MASK 0x3ULL
#define INFINIPATH_IBCC_LINKINITCMD_DISABLE 1
#define INFINIPATH_IBCC_LINKINITCMD_POLL 2
#define INFINIPATH_IBCC_LINKINITCMD_SLEEP 3
#define INFINIPATH_IBCC_LINKINITCMD_SHIFT 16
#define INFINIPATH_IBCC_LINKCMD_MASK 0x3ULL
#define INFINIPATH_IBCC_LINKCMD_DOWN 1
#define INFINIPATH_IBCC_LINKCMD_ARMED 2
#define INFINIPATH_IBCC_LINKCMD_ACTIVE 3
#define INFINIPATH_IBCC_LINKCMD_SHIFT 18
#define INFINIPATH_IBCC_MAXPKTLEN_MASK 0x7FFULL
#define INFINIPATH_IBCC_MAXPKTLEN_SHIFT 20
#define INFINIPATH_IBCC_PHYERRTHRESHOLD_MASK 0xFULL
#define INFINIPATH_IBCC_PHYERRTHRESHOLD_SHIFT 32
#define INFINIPATH_IBCC_OVERRUNTHRESHOLD_MASK 0xFULL
#define INFINIPATH_IBCC_OVERRUNTHRESHOLD_SHIFT 36
#define INFINIPATH_IBCC_CREDITSCALE_MASK 0x7ULL
#define INFINIPATH_IBCC_CREDITSCALE_SHIFT 40
#define INFINIPATH_IBCC_LOOPBACK             0x8000000000000000ULL
#define INFINIPATH_IBCC_LINKDOWNDEFAULTSTATE 0x4000000000000000ULL
#define INFINIPATH_IBCS_LINKTRAININGSTATE_SHIFT 0
#define INFINIPATH_IBCS_LINKSTATE_MASK 0x7
#define INFINIPATH_IBCS_TXREADY       0x40000000
#define INFINIPATH_IBCS_TXCREDITOK    0x80000000
#define INFINIPATH_IBCS_LT_STATE_DISABLED	0x00
#define INFINIPATH_IBCS_LT_STATE_LINKUP		0x01
#define INFINIPATH_IBCS_LT_STATE_POLLACTIVE	0x02
#define INFINIPATH_IBCS_LT_STATE_POLLQUIET	0x03
#define INFINIPATH_IBCS_LT_STATE_SLEEPDELAY	0x04
#define INFINIPATH_IBCS_LT_STATE_SLEEPQUIET	0x05
#define INFINIPATH_IBCS_LT_STATE_CFGDEBOUNCE	0x08
#define INFINIPATH_IBCS_LT_STATE_CFGRCVFCFG	0x09
#define INFINIPATH_IBCS_LT_STATE_CFGWAITRMT	0x0a
#define INFINIPATH_IBCS_LT_STATE_CFGIDLE	0x0b
#define INFINIPATH_IBCS_LT_STATE_RECOVERRETRAIN	0x0c
#define INFINIPATH_IBCS_LT_STATE_RECOVERWAITRMT	0x0e
#define INFINIPATH_IBCS_LT_STATE_RECOVERIDLE	0x0f
#define INFINIPATH_IBCS_L_STATE_DOWN		0x0
#define INFINIPATH_IBCS_L_STATE_INIT		0x1
#define INFINIPATH_IBCS_L_STATE_ARM		0x2
#define INFINIPATH_IBCS_L_STATE_ACTIVE		0x3
#define INFINIPATH_IBCS_L_STATE_ACT_DEFER	0x4
#define INFINIPATH_EXTS_SERDESPLLLOCK 0x1
#define INFINIPATH_EXTS_GPIOIN_MASK 0xFFFFULL
#define INFINIPATH_EXTS_GPIOIN_SHIFT 48
#define INFINIPATH_EXTC_GPIOINVERT_MASK 0xFFFFULL
#define INFINIPATH_EXTC_GPIOINVERT_SHIFT 32
#define INFINIPATH_EXTC_GPIOOE_MASK 0xFFFFULL
#define INFINIPATH_EXTC_GPIOOE_SHIFT 48
#define INFINIPATH_EXTC_SERDESENABLE         0x80000000ULL
#define INFINIPATH_EXTC_SERDESCONNECT        0x40000000ULL
#define INFINIPATH_EXTC_SERDESENTRUNKING     0x20000000ULL
#define INFINIPATH_EXTC_SERDESDISRXFIFO      0x10000000ULL
#define INFINIPATH_EXTC_SERDESENPLPBK1       0x08000000ULL
#define INFINIPATH_EXTC_SERDESENPLPBK2       0x04000000ULL
#define INFINIPATH_EXTC_SERDESENENCDEC       0x02000000ULL
#define INFINIPATH_EXTC_LED1SECPORT_ON       0x00000020ULL
#define INFINIPATH_EXTC_LED2SECPORT_ON       0x00000010ULL
#define INFINIPATH_EXTC_LED1PRIPORT_ON       0x00000008ULL
#define INFINIPATH_EXTC_LED2PRIPORT_ON       0x00000004ULL
#define INFINIPATH_EXTC_LEDGBLOK_ON          0x00000002ULL
#define INFINIPATH_EXTC_LEDGBLERR_OFF        0x00000001ULL
#define INFINIPATH_PKEY_SIZE 16
#define INFINIPATH_PKEY_MASK 0xFFFF
#define INFINIPATH_PKEY_DEFAULT_PKEY 0xFFFF
#define INFINIPATH_SERDC0_RESET_MASK  0xfULL
#define INFINIPATH_SERDC0_RESET_PLL   0x10000000ULL
#define INFINIPATH_SERDC0_TXIDLE      0xF000ULL
#define INFINIPATH_SERDC0_RXDETECT_EN 0xF0000ULL
#define INFINIPATH_SERDC0_L1PWR_DN	 0xF0ULL
#define INFINIPATH_XGXS_RX_POL_SHIFT 19
#define INFINIPATH_XGXS_RX_POL_MASK 0xfULL
#define IPATH_PIO_MAXIBHDR 128
typedef u64 ipath_err_t;
extern u64 infinipath_i_bitsextant;
extern ipath_err_t infinipath_e_bitsextant, infinipath_hwe_bitsextant;
extern u32 infinipath_i_rcvavail_mask, infinipath_i_rcvurg_mask;
typedef const u16 ipath_kreg,
ipath_creg,
ipath_sreg;
struct ipath_kregs ;
struct ipath_cregs ;