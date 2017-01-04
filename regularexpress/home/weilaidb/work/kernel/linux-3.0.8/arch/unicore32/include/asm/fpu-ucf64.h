#define FPSCR			s31
#define FPSCR_DEFAULT_NAN	(1<<25)
#define FPSCR_CMPINSTR_BIT	(1<<31)
#define FPSCR_CON		(1<<29)
#define FPSCR_TRAP		(1<<27)
#define FPSCR_ROUND_NEAREST	(0<<0)
#define FPSCR_ROUND_PLUSINF	(2<<0)
#define FPSCR_ROUND_MINUSINF	(3<<0)
#define FPSCR_ROUND_TOZERO	(1<<0)
#define FPSCR_RMODE_BIT		(0)
#define FPSCR_RMODE_MASK	(7 << FPSCR_RMODE_BIT)
#define FPSCR_IOE		(1<<16)
#define FPSCR_OFE		(1<<14)
#define FPSCR_UFE		(1<<13)
#define FPSCR_IXE		(1<<12)
#define FPSCR_HIE		(1<<11)
#define FPSCR_NDE		(1<<10)
#define FPSCR_IDC		(1<<24)
#define FPSCR_HIC		(1<<23)
#define FPSCR_IXC		(1<<22)
#define FPSCR_OFC		(1<<21)
#define FPSCR_UFC		(1<<20)
#define FPSCR_IOC		(1<<19)
#define FPSCR_IOS		(1<<9)
#define FPSCR_OFS		(1<<7)
#define FPSCR_UFS		(1<<6)
#define FPSCR_IXS		(1<<5)
#define FPSCR_HIS		(1<<4)
#define FPSCR_NDS		(1<<3)
