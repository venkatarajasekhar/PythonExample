#define _LINUX_CYCLADES_H
struct cyclades_monitor ;
struct cyclades_idle_stats ;
#define CYCLADES_MAGIC  0x4359
#define CYGETMON                0x435901
#define CYGETTHRESH             0x435902
#define CYSETTHRESH             0x435903
#define CYGETDEFTHRESH          0x435904
#define CYSETDEFTHRESH          0x435905
#define CYGETTIMEOUT            0x435906
#define CYSETTIMEOUT            0x435907
#define CYGETDEFTIMEOUT         0x435908
#define CYSETDEFTIMEOUT         0x435909
#define CYSETRFLOW		0x43590a
#define CYGETRFLOW		0x43590b
#define CYSETRTSDTR_INV		0x43590c
#define CYGETRTSDTR_INV		0x43590d
#define CYZSETPOLLCYCLE		0x43590e
#define CYZGETPOLLCYCLE		0x43590f
#define CYGETCD1400VER		0x435910
#define	CYSETWAIT		0x435912
#define	CYGETWAIT		0x435913
#define CZIOC           ('M' << 8)
#define CZ_NBOARDS      (CZIOC|0xfa)
#define CZ_BOOT_START   (CZIOC|0xfb)
#define CZ_BOOT_DATA    (CZIOC|0xfc)
#define CZ_BOOT_END     (CZIOC|0xfd)
#define CZ_TEST         (CZIOC|0xfe)
#define CZ_DEF_POLL	(HZ/25)
#define MAX_BOARD       4
#define MAX_DEV         256
#define	CYZ_MAX_SPEED	921600
#define	CYZ_FIFO_SIZE	16
#define CYZ_BOOT_NWORDS 0x100
struct CYZ_BOOT_CTRL ;
#define	DP_WINDOW_SIZE		(0x00080000)
#define	ZE_DP_WINDOW_SIZE	(0x00100000)
#define	CTRL_WINDOW_SIZE	(0x00000080)
struct	CUSTOM_REG ;
struct RUNTIME_9060 ;
#define	WIN_RAM		0x00000001L
#define	WIN_CREG	0x14000001L
#define	TIMER_BY_1M	0x00
#define	TIMER_BY_256K	0x01
#define	TIMER_BY_128K	0x02
#define	TIMER_BY_32K	0x03
#define	MAX_CHAN	64
#define ID_ADDRESS	0x00000180L
#define	ZFIRM_ID	0x5557465AL
#define	ZFIRM_HLT	0x59505B5CL
#define	ZFIRM_RST	0x56040674L
#define	ZF_TINACT_DEF	1000
#define	ZF_TINACT	ZF_TINACT_DEF
struct	FIRM_ID ;
#define	C_OS_LINUX	0x00000030
#define	C_CH_DISABLE	0x00000000
#define	C_CH_TXENABLE	0x00000001
#define	C_CH_RXENABLE	0x00000002
#define	C_CH_ENABLE	0x00000003
#define	C_CH_LOOPBACK	0x00000004
#define	C_PR_NONE	0x00000000
#define	C_PR_ODD	0x00000001
#define C_PR_EVEN	0x00000002
#define C_PR_MARK	0x00000004
#define C_PR_SPACE	0x00000008
#define C_PR_PARITY	0x000000ff
#define	C_PR_DISCARD	0x00000100
#define C_PR_IGNORE	0x00000200
#define C_DL_CS5	0x00000001
#define C_DL_CS6	0x00000002
#define C_DL_CS7	0x00000004
#define C_DL_CS8	0x00000008
#define	C_DL_CS		0x0000000f
#define C_DL_1STOP	0x00000010
#define C_DL_15STOP	0x00000020
#define C_DL_2STOP	0x00000040
#define	C_DL_STOP	0x000000f0
#define	C_IN_DISABLE	0x00000000
#define	C_IN_TXBEMPTY	0x00000001
#define	C_IN_TXLOWWM	0x00000002
#define	C_IN_RXHIWM	0x00000010
#define	C_IN_RXNNDT	0x00000020
#define	C_IN_MDCD	0x00000100
#define	C_IN_MDSR	0x00000200
#define	C_IN_MRI	0x00000400
#define	C_IN_MCTS	0x00000800
#define	C_IN_RXBRK	0x00001000
#define	C_IN_PR_ERROR	0x00002000
#define	C_IN_FR_ERROR	0x00004000
#define C_IN_OVR_ERROR  0x00008000
#define C_IN_RXOFL	0x00010000
#define C_IN_IOCTLW	0x00020000
#define C_IN_MRTS	0x00040000
#define C_IN_ICHAR	0x00080000
#define	C_FL_OXX	0x00000001
#define	C_FL_IXX	0x00000002
#define C_FL_OIXANY	0x00000004
#define	C_FL_SWFLOW	0x0000000f
#define	C_FS_TXIDLE	0x00000000
#define	C_FS_SENDING	0x00000001
#define	C_FS_SWFLOW	0x00000002
#define C_RS_PARAM	0x80000000
#define	C_RS_RTS	0x00000001
#define	C_RS_DTR	0x00000004
#define	C_RS_DCD	0x00000100
#define	C_RS_DSR	0x00000200
#define	C_RS_RI		0x00000400
#define	C_RS_CTS	0x00000800
#define	C_CM_RESET	0x01
#define	C_CM_IOCTL	0x02
#define	C_CM_IOCTLW	0x03
#define	C_CM_IOCTLM	0x04
#define	C_CM_SENDXOFF	0x10
#define	C_CM_SENDXON	0x11
#define C_CM_CLFLOW	0x12
#define	C_CM_SENDBRK	0x41
#define	C_CM_INTBACK	0x42
#define	C_CM_SET_BREAK	0x43
#define	C_CM_CLR_BREAK	0x44
#define	C_CM_CMD_DONE	0x45
#define C_CM_INTBACK2	0x46
#define	C_CM_TINACT	0x51
#define	C_CM_IRQ_ENBL	0x52
#define	C_CM_IRQ_DSBL	0x53
#define	C_CM_ACK_ENBL	0x54
#define	C_CM_ACK_DSBL	0x55
#define	C_CM_FLUSH_RX	0x56
#define	C_CM_FLUSH_TX	0x57
#define C_CM_Q_ENABLE	0x58
#define C_CM_Q_DISABLE  0x59
#define	C_CM_TXBEMPTY	0x60
#define	C_CM_TXLOWWM	0x61
#define	C_CM_RXHIWM	0x62
#define	C_CM_RXNNDT	0x63
#define	C_CM_TXFEMPTY	0x64
#define	C_CM_ICHAR	0x65
#define	C_CM_MDCD	0x70
#define	C_CM_MDSR	0x71
#define	C_CM_MRI	0x72
#define	C_CM_MCTS	0x73
#define C_CM_MRTS	0x74
#define	C_CM_RXBRK	0x84
#define	C_CM_PR_ERROR	0x85
#define	C_CM_FR_ERROR	0x86
#define C_CM_OVR_ERROR  0x87
#define C_CM_RXOFL	0x88
#define	C_CM_CMDERROR	0x90
#define	C_CM_FATAL	0x91
#define	C_CM_HW_RESET	0x92
struct CH_CTRL ;
struct	BUF_CTRL	;
struct BOARD_CTRL ;
#define QUEUE_SIZE	(10*MAX_CHAN)
struct	INT_QUEUE ;
struct ZFW_CTRL ;
struct cyclades_card ;
#define cy_writeb(port,val)     do  while (0)
#define cy_writew(port,val)     do  while (0)
#define cy_writel(port,val)     do  while (0)
struct cyclades_icount ;
struct cyclades_port ;
#define	CLOSING_WAIT_DELAY	30*HZ
#define CY_CLOSING_WAIT_NONE	ASYNC_CLOSING_WAIT_NONE
#define CY_CLOSING_WAIT_INF	ASYNC_CLOSING_WAIT_INF
#define CyMAX_CHIPS_PER_CARD	8
#define CyMAX_CHAR_FIFO		12
#define CyPORTS_PER_CHIP	4
#define	CD1400_MAX_SPEED	115200
#define	CyISA_Ywin	0x2000
#define CyPCI_Ywin 	0x4000
#define CyPCI_Yctl 	0x80
#define CyPCI_Zctl 	CTRL_WINDOW_SIZE
#define CyPCI_Zwin 	0x80000
#define CyPCI_Ze_win 	(2 * CyPCI_Zwin)
#define PCI_DEVICE_ID_MASK	0x06
#define CD1400_REV_G	0x46
#define CD1400_REV_J	0x48
#define CyRegSize  	0x0400
#define Cy_HwReset 	0x1400
#define Cy_ClrIntr 	0x1800
#define Cy_EpldRev 	0x1e00
#define CyGFRCR		(0x40*2)
#define      CyRevE		(44)
#define CyCAR		(0x68*2)
#define      CyCHAN_0		(0x00)
#define      CyCHAN_1		(0x01)
#define      CyCHAN_2		(0x02)
#define      CyCHAN_3		(0x03)
#define CyGCR		(0x4B*2)
#define      CyCH0_SERIAL	(0x00)
#define      CyCH0_PARALLEL	(0x80)
#define CySVRR		(0x67*2)
#define      CySRModem		(0x04)
#define      CySRTransmit	(0x02)
#define      CySRReceive	(0x01)
#define CyRICR		(0x44*2)
#define CyTICR		(0x45*2)
#define CyMICR		(0x46*2)
#define      CyICR0		(0x00)
#define      CyICR1		(0x01)
#define      CyICR2		(0x02)
#define      CyICR3		(0x03)
#define CyRIR		(0x6B*2)
#define CyTIR		(0x6A*2)
#define CyMIR		(0x69*2)
#define      CyIRDirEq		(0x80)
#define      CyIRBusy		(0x40)
#define      CyIRUnfair		(0x20)
#define      CyIRContext	(0x1C)
#define      CyIRChannel	(0x03)
#define CyPPR 		(0x7E*2)
#define      CyCLOCK_20_1MS	(0x27)
#define      CyCLOCK_25_1MS	(0x31)
#define      CyCLOCK_25_5MS	(0xf4)
#define      CyCLOCK_60_1MS	(0x75)
#define      CyCLOCK_60_2MS	(0xea)
#define CyRIVR		(0x43*2)
#define CyTIVR		(0x42*2)
#define CyMIVR		(0x41*2)
#define      CyIVRMask (0x07)
#define      CyIVRRxEx (0x07)
#define      CyIVRRxOK (0x03)
#define      CyIVRTxOK (0x02)
#define      CyIVRMdmOK (0x01)
#define CyTDR		(0x63*2)
#define CyRDSR		(0x62*2)
#define      CyTIMEOUT		(0x80)
#define      CySPECHAR		(0x70)
#define      CyBREAK		(0x08)
#define      CyPARITY		(0x04)
#define      CyFRAME		(0x02)
#define      CyOVERRUN		(0x01)
#define CyMISR		(0x4C*2)
#define CyEOSRR		(0x60*2)
#define CyLIVR		(0x18*2)
#define      CyMscsr		(0x01)
#define      CyTdsr		(0x02)
#define      CyRgdsr		(0x03)
#define      CyRedsr		(0x07)
#define CyCCR		(0x05*2)
#define      CyCHAN_RESET	(0x80)
#define      CyCHIP_RESET	(0x81)
#define      CyFlushTransFIFO	(0x82)
#define      CyCOR_CHANGE	(0x40)
#define      CyCOR1ch		(0x02)
#define      CyCOR2ch		(0x04)
#define      CyCOR3ch		(0x08)
#define      CySEND_SPEC_1	(0x21)
#define      CySEND_SPEC_2	(0x22)
#define      CySEND_SPEC_3	(0x23)
#define      CySEND_SPEC_4	(0x24)
#define      CyCHAN_CTL		(0x10)
#define      CyDIS_RCVR		(0x01)
#define      CyENB_RCVR		(0x02)
#define      CyDIS_XMTR		(0x04)
#define      CyENB_XMTR		(0x08)
#define CySRER		(0x06*2)
#define      CyMdmCh		(0x80)
#define      CyRxData		(0x10)
#define      CyTxRdy		(0x04)
#define      CyTxMpty		(0x02)
#define      CyNNDT		(0x01)
#define CyCOR1		(0x08*2)
#define      CyPARITY_NONE	(0x00)
#define      CyPARITY_0		(0x20)
#define      CyPARITY_1		(0xA0)
#define      CyPARITY_E		(0x40)
#define      CyPARITY_O		(0xC0)
#define      Cy_1_STOP		(0x00)
#define      Cy_1_5_STOP	(0x04)
#define      Cy_2_STOP		(0x08)
#define      Cy_5_BITS		(0x00)
#define      Cy_6_BITS		(0x01)
#define      Cy_7_BITS		(0x02)
#define      Cy_8_BITS		(0x03)
#define CyCOR2		(0x09*2)
#define      CyIXM		(0x80)
#define      CyTxIBE		(0x40)
#define      CyETC		(0x20)
#define      CyAUTO_TXFL	(0x60)
#define      CyLLM		(0x10)
#define      CyRLM		(0x08)
#define      CyRtsAO		(0x04)
#define      CyCtsAE		(0x02)
#define      CyDsrAE		(0x01)
#define CyCOR3		(0x0A*2)
#define      CySPL_CH_DRANGE	(0x80)
#define      CySPL_CH_DET1	(0x40)
#define      CyFL_CTRL_TRNSP	(0x20)
#define      CySPL_CH_DET2	(0x10)
#define      CyREC_FIFO		(0x0F)
#define CyCOR4		(0x1E*2)
#define CyCOR5		(0x1F*2)
#define CyCCSR		(0x0B*2)
#define      CyRxEN		(0x80)
#define      CyRxFloff		(0x40)
#define      CyRxFlon		(0x20)
#define      CyTxEN		(0x08)
#define      CyTxFloff		(0x04)
#define      CyTxFlon		(0x02)
#define CyRDCR		(0x0E*2)
#define CySCHR1		(0x1A*2)
#define CySCHR2 	(0x1B*2)
#define CySCHR3		(0x1C*2)
#define CySCHR4		(0x1D*2)
#define CySCRL		(0x22*2)
#define CySCRH		(0x23*2)
#define CyLNC		(0x24*2)
#define CyMCOR1 	(0x15*2)
#define CyMCOR2		(0x16*2)
#define CyRTPR		(0x21*2)
#define CyMSVR1		(0x6C*2)
#define CyMSVR2		(0x6D*2)
#define      CyANY_DELTA	(0xF0)
#define      CyDSR		(0x80)
#define      CyCTS		(0x40)
#define      CyRI		(0x20)
#define      CyDCD		(0x10)
#define      CyDTR              (0x02)
#define      CyRTS              (0x01)
#define CyPVSR		(0x6F*2)
#define CyRBPR		(0x78*2)
#define CyRCOR		(0x7C*2)
#define CyTBPR		(0x72*2)
#define CyTCOR		(0x76*2)
#define	CyPLX_VER	(0x3400)
#define	PLX_9050	0x0b
#define	PLX_9060	0x0c
#define	PLX_9080	0x0d
