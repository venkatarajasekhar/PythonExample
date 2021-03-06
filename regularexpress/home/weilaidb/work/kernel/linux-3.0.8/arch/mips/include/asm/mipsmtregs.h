#define _ASM_MIPSMTREGS_H
#define read_c0_mvpcontrol()		__read_32bit_c0_register($0, 1)
#define write_c0_mvpcontrol(val)	__write_32bit_c0_register($0, 1, val)
#define read_c0_mvpconf0()		__read_32bit_c0_register($0, 2)
#define read_c0_mvpconf1()		__read_32bit_c0_register($0, 3)
#define read_c0_vpecontrol()		__read_32bit_c0_register($1, 1)
#define write_c0_vpecontrol(val)	__write_32bit_c0_register($1, 1, val)
#define read_c0_vpeconf0()		__read_32bit_c0_register($1, 2)
#define write_c0_vpeconf0(val)		__write_32bit_c0_register($1, 2, val)
#define read_c0_tcstatus()		__read_32bit_c0_register($2, 1)
#define write_c0_tcstatus(val)		__write_32bit_c0_register($2, 1, val)
#define read_c0_tcbind()		__read_32bit_c0_register($2, 2)
#define read_c0_tccontext()		__read_32bit_c0_register($2, 5)
#define write_c0_tccontext(val)		__write_32bit_c0_register($2, 5, val)
#define CP0_MVPCONTROL		$0, 1
#define CP0_MVPCONF0		$0, 2
#define CP0_MVPCONF1		$0, 3
#define CP0_VPECONTROL		$1, 1
#define CP0_VPECONF0		$1, 2
#define CP0_VPECONF1		$1, 3
#define CP0_YQMASK		$1, 4
#define CP0_VPESCHEDULE	$1, 5
#define CP0_VPESCHEFBK		$1, 6
#define CP0_TCSTATUS		$2, 1
#define CP0_TCBIND		$2, 2
#define CP0_TCRESTART		$2, 3
#define CP0_TCHALT		$2, 4
#define CP0_TCCONTEXT		$2, 5
#define CP0_TCSCHEDULE		$2, 6
#define CP0_TCSCHEFBK		$2, 7
#define CP0_SRSCONF0		$6, 1
#define CP0_SRSCONF1		$6, 2
#define CP0_SRSCONF2		$6, 3
#define CP0_SRSCONF3		$6, 4
#define CP0_SRSCONF4		$6, 5
#define MVPCONTROL_EVP		(_ULCAST_(1))
#define MVPCONTROL_VPC_SHIFT	1
#define MVPCONTROL_VPC		(_ULCAST_(1) << MVPCONTROL_VPC_SHIFT)
#define MVPCONTROL_STLB_SHIFT	2
#define MVPCONTROL_STLB		(_ULCAST_(1) << MVPCONTROL_STLB_SHIFT)
#define MVPCONF0_PTC_SHIFT	0
#define MVPCONF0_PTC		( _ULCAST_(0xff))
#define MVPCONF0_PVPE_SHIFT	10
#define MVPCONF0_PVPE		( _ULCAST_(0xf) << MVPCONF0_PVPE_SHIFT)
#define MVPCONF0_TCA_SHIFT	15
#define MVPCONF0_TCA		( _ULCAST_(1) << MVPCONF0_TCA_SHIFT)
#define MVPCONF0_PTLBE_SHIFT	16
#define MVPCONF0_PTLBE		(_ULCAST_(0x3ff) << MVPCONF0_PTLBE_SHIFT)
#define MVPCONF0_TLBS_SHIFT	29
#define MVPCONF0_TLBS		(_ULCAST_(1) << MVPCONF0_TLBS_SHIFT)
#define MVPCONF0_M_SHIFT	31
#define MVPCONF0_M		(_ULCAST_(0x1) << MVPCONF0_M_SHIFT)
#define CONFIG3_MT_SHIFT	2
#define CONFIG3_MT		(_ULCAST_(1) << CONFIG3_MT_SHIFT)
#define VPECONTROL_TARGTC	(_ULCAST_(0xff))
#define VPECONTROL_TE_SHIFT	15
#define VPECONTROL_TE		(_ULCAST_(1) << VPECONTROL_TE_SHIFT)
#define VPECONTROL_EXCPT_SHIFT	16
#define VPECONTROL_EXCPT	(_ULCAST_(0x7) << VPECONTROL_EXCPT_SHIFT)
#define THREX_TU		0
#define THREX_TO		1
#define THREX_IYQ		2
#define THREX_GSX		3
#define THREX_YSCH		4
#define THREX_GSSCH		5
#define VPECONTROL_GSI_SHIFT	20
#define VPECONTROL_GSI		(_ULCAST_(1) << VPECONTROL_GSI_SHIFT)
#define VPECONTROL_YSI_SHIFT	21
#define VPECONTROL_YSI		(_ULCAST_(1) << VPECONTROL_YSI_SHIFT)
#define VPECONF0_VPA_SHIFT	0
#define VPECONF0_VPA		(_ULCAST_(1) << VPECONF0_VPA_SHIFT)
#define VPECONF0_MVP_SHIFT	1
#define VPECONF0_MVP		(_ULCAST_(1) << VPECONF0_MVP_SHIFT)
#define VPECONF0_XTC_SHIFT	21
#define VPECONF0_XTC		(_ULCAST_(0xff) << VPECONF0_XTC_SHIFT)
#define TCSTATUS_TASID		(_ULCAST_(0xff))
#define TCSTATUS_IXMT_SHIFT	10
#define TCSTATUS_IXMT		(_ULCAST_(1) << TCSTATUS_IXMT_SHIFT)
#define TCSTATUS_TKSU_SHIFT	11
#define TCSTATUS_TKSU		(_ULCAST_(3) << TCSTATUS_TKSU_SHIFT)
#define TCSTATUS_A_SHIFT	13
#define TCSTATUS_A		(_ULCAST_(1) << TCSTATUS_A_SHIFT)
#define TCSTATUS_DA_SHIFT	15
#define TCSTATUS_DA		(_ULCAST_(1) << TCSTATUS_DA_SHIFT)
#define TCSTATUS_DT_SHIFT	20
#define TCSTATUS_DT		(_ULCAST_(1) << TCSTATUS_DT_SHIFT)
#define TCSTATUS_TDS_SHIFT	21
#define TCSTATUS_TDS		(_ULCAST_(1) << TCSTATUS_TDS_SHIFT)
#define TCSTATUS_TSST_SHIFT	22
#define TCSTATUS_TSST		(_ULCAST_(1) << TCSTATUS_TSST_SHIFT)
#define TCSTATUS_RNST_SHIFT	23
#define TCSTATUS_RNST		(_ULCAST_(3) << TCSTATUS_RNST_SHIFT)
#define TC_RUNNING		0
#define TC_WAITING		1
#define TC_YIELDING		2
#define TC_GATED		3
#define TCSTATUS_TMX_SHIFT	27
#define TCSTATUS_TMX		(_ULCAST_(1) << TCSTATUS_TMX_SHIFT)
#define TCBIND_CURVPE_SHIFT	0
#define TCBIND_CURVPE		(_ULCAST_(0xf))
#define TCBIND_CURTC_SHIFT	21
#define TCBIND_CURTC		(_ULCAST_(0xff) << TCBIND_CURTC_SHIFT)
#define TCHALT_H		(_ULCAST_(1))
static inline unsigned int dvpe(void)
static inline void __raw_evpe(void)
#define EVPE_ENABLE MVPCONTROL_EVP
static inline void evpe(int previous)
static inline unsigned int dmt(void)
static inline void __raw_emt(void)
#define EMT_ENABLE VPECONTROL_TE
static inline void emt(int previous)
static inline void ehb(void)
#define mftc0(rt,sel)							\
()
#define mftgpr(rt)							\
()
#define mftr(rt, u, sel)							\
()
#define mttgpr(rd,v)							\
do  while (0)
#define mttc0(rd, sel, v)							\
()
#define mttr(rd, u, sel, v)						\
()
#define settc(tc)							\
do  while (0)
#define read_vpe_c0_vpecontrol()	mftc0(1, 1)
#define write_vpe_c0_vpecontrol(val)	mttc0(1, 1, val)
#define read_vpe_c0_vpeconf0()		mftc0(1, 2)
#define write_vpe_c0_vpeconf0(val)	mttc0(1, 2, val)
#define read_vpe_c0_count()		mftc0(9, 0)
#define write_vpe_c0_count(val)		mttc0(9, 0, val)
#define read_vpe_c0_status()		mftc0(12, 0)
#define write_vpe_c0_status(val)	mttc0(12, 0, val)
#define read_vpe_c0_cause()		mftc0(13, 0)
#define write_vpe_c0_cause(val)		mttc0(13, 0, val)
#define read_vpe_c0_config()		mftc0(16, 0)
#define write_vpe_c0_config(val)	mttc0(16, 0, val)
#define read_vpe_c0_config1()		mftc0(16, 1)
#define write_vpe_c0_config1(val)	mttc0(16, 1, val)
#define read_vpe_c0_config7()		mftc0(16, 7)
#define write_vpe_c0_config7(val)	mttc0(16, 7, val)
#define read_vpe_c0_ebase()		mftc0(15, 1)
#define write_vpe_c0_ebase(val)		mttc0(15, 1, val)
#define write_vpe_c0_compare(val)	mttc0(11, 0, val)
#define read_vpe_c0_badvaddr()		mftc0(8, 0)
#define read_vpe_c0_epc()		mftc0(14, 0)
#define write_vpe_c0_epc(val)		mttc0(14, 0, val)
#define read_tc_c0_tcstatus()		mftc0(2, 1)
#define write_tc_c0_tcstatus(val)	mttc0(2, 1, val)
#define read_tc_c0_tcbind()		mftc0(2, 2)
#define write_tc_c0_tcbind(val)		mttc0(2, 2, val)
#define read_tc_c0_tcrestart()		mftc0(2, 3)
#define write_tc_c0_tcrestart(val)	mttc0(2, 3, val)
#define read_tc_c0_tchalt()		mftc0(2, 4)
#define write_tc_c0_tchalt(val)		mttc0(2, 4, val)
#define read_tc_c0_tccontext()		mftc0(2, 5)
#define write_tc_c0_tccontext(val)	mttc0(2, 5, val)
#define read_tc_gpr_sp()		mftgpr(29)
#define write_tc_gpr_sp(val)		mttgpr(29, val)
#define read_tc_gpr_gp()		mftgpr(28)
#define write_tc_gpr_gp(val)		mttgpr(28, val)
__BUILD_SET_C0(mvpcontrol)
