#define __PHANTOM_H
struct phm_reg ;
struct phm_regs ;
#define PH_IOC_MAGIC		'p'
#define PHN_GET_REG		_IOWR(PH_IOC_MAGIC, 0, struct phm_reg *)
#define PHN_SET_REG		_IOW(PH_IOC_MAGIC, 1, struct phm_reg *)
#define PHN_GET_REGS		_IOWR(PH_IOC_MAGIC, 2, struct phm_regs *)
#define PHN_SET_REGS		_IOW(PH_IOC_MAGIC, 3, struct phm_regs *)
#define PHN_NOT_OH		_IO(PH_IOC_MAGIC, 4)
#define PHN_GETREG		_IOWR(PH_IOC_MAGIC, 5, struct phm_reg)
#define PHN_SETREG		_IOW(PH_IOC_MAGIC, 6, struct phm_reg)
#define PHN_GETREGS		_IOWR(PH_IOC_MAGIC, 7, struct phm_regs)
#define PHN_SETREGS		_IOW(PH_IOC_MAGIC, 8, struct phm_regs)
#define PHN_CONTROL		0x6
#define PHN_CTL_AMP		0x1
#define PHN_CTL_BUT		0x2
#define PHN_CTL_IRQ		0x10
#define PHN_ZERO_FORCE		2048
