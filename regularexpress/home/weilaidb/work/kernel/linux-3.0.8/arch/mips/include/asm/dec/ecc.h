#define __ASM_MIPS_DEC_ECC_H
#define KN0X_EAR_VALID		(1<<31)
#define KN0X_EAR_CPU		(1<<30)
#define KN0X_EAR_WRITE		(1<<29)
#define KN0X_EAR_ECCERR		(1<<28)
#define KN0X_EAR_RES_27		(1<<27)
#define KN0X_EAR_ADDRESS	(0x7ffffff<<0)
#define KN0X_ESR_VLDHI		(1<<31)
#define KN0X_ESR_CHKHI		(0x7f<<24)
#define KN0X_ESR_SNGHI		(1<<23)
#define KN0X_ESR_SYNHI		(0x7f<<16)
#define KN0X_ESR_VLDLO		(1<<15)
#define KN0X_ESR_CHKLO		(0x7f<<8)
#define KN0X_ESR_SNGLO		(1<<7)
#define KN0X_ESR_SYNLO		(0x7f<<0)
struct pt_regs;
extern void dec_ecc_be_init(void);
extern int dec_ecc_be_handler(struct pt_regs *regs, int is_fixup);
extern irqreturn_t dec_ecc_be_interrupt(int irq, void *dev_id);
