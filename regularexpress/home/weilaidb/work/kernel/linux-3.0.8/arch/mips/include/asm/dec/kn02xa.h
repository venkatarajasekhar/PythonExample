#define __ASM_MIPS_DEC_KN02XA_H
#define KN02XA_SLOT_BASE	0x1c000000
#define KN02XA_MER		0x0c400000
#define KN02XA_MSR		0x0c800000
#define KN02XA_MEM_CONF		0x0e000000
#define KN02XA_EAR		0x0e000004
#define KN02XA_BOOT0		0x0e000008
#define KN02XA_MEM_INTR		0x0e00000c
#define KN02XA_MER_RES_28	(0xf<<28)
#define KN02XA_MER_RES_17	(0x3ff<<17)
#define KN02XA_MER_PAGERR	(1<<16)
#define KN02XA_MER_TRANSERR	(1<<15)
#define KN02XA_MER_PARDIS	(1<<14)
#define KN02XA_MER_SIZE		(1<<13)
#define KN02XA_MER_RES_12	(1<<12)
#define KN02XA_MER_BYTERR	(0xf<<8)
#define KN02XA_MER_BYTERR_3	(0x8<<8)
#define KN02XA_MER_BYTERR_2	(0x4<<8)
#define KN02XA_MER_BYTERR_1	(0x2<<8)
#define KN02XA_MER_BYTERR_0	(0x1<<8)
#define KN02XA_MER_RES_0	(0xff<<0)
#define KN02XA_MSR_RES_27	(0x1f<<27)
#define KN02XA_MSR_RES_14	(0x7<<14)
#define KN02XA_MSR_SIZE		(1<<13)
#define KN02XA_MSR_RES_0	(0x1fff<<0)
#define KN02XA_EAR_RES_29	(0x7<<29)
#define KN02XA_EAR_ADDRESS	(0x7ffffff<<2)
#define KN02XA_EAR_RES_0	(0x3<<0)
struct pt_regs;
extern void dec_kn02xa_be_init(void);
extern int dec_kn02xa_be_handler(struct pt_regs *regs, int is_fixup);
extern irqreturn_t dec_kn02xa_be_interrupt(int irq, void *dev_id);
