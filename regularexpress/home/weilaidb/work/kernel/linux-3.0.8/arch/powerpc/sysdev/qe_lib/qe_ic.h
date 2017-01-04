#define _POWERPC_SYSDEV_QE_IC_H
#define NR_QE_IC_INTS		64
#define QEIC_CICR		0x00
#define QEIC_CIVEC		0x04
#define QEIC_CRIPNR		0x08
#define QEIC_CIPNR		0x0c
#define QEIC_CIPXCC		0x10
#define QEIC_CIPYCC		0x14
#define QEIC_CIPWCC		0x18
#define QEIC_CIPZCC		0x1c
#define QEIC_CIMR		0x20
#define QEIC_CRIMR		0x24
#define QEIC_CICNR		0x28
#define QEIC_CIPRTA		0x30
#define QEIC_CIPRTB		0x34
#define QEIC_CRICR		0x3c
#define QEIC_CHIVEC		0x60
#define CIPCC_SHIFT_PRI0	29
#define CIPCC_SHIFT_PRI1	26
#define CIPCC_SHIFT_PRI2	23
#define CIPCC_SHIFT_PRI3	20
#define CIPCC_SHIFT_PRI4	13
#define CIPCC_SHIFT_PRI5	10
#define CIPCC_SHIFT_PRI6	7
#define CIPCC_SHIFT_PRI7	4
#define CICR_GWCC		0x00040000
#define CICR_GXCC		0x00020000
#define CICR_GYCC		0x00010000
#define CICR_GZCC		0x00080000
#define CICR_GRTA		0x00200000
#define CICR_GRTB		0x00400000
#define CICR_HPIT_SHIFT		8
#define CICR_HPIT_MASK		0x00000300
#define CICR_HP_SHIFT		24
#define CICR_HP_MASK		0x3f000000
#define CICNR_WCC1T_SHIFT	20
#define CICNR_ZCC1T_SHIFT	28
#define CICNR_YCC1T_SHIFT	12
#define CICNR_XCC1T_SHIFT	4
#define CRICR_RTA1T_SHIFT	20
#define CRICR_RTB1T_SHIFT	28
#define SIGNAL_MASK		3
#define SIGNAL_HIGH		2
#define SIGNAL_LOW		0
struct qe_ic ;
struct qe_ic_info ;
