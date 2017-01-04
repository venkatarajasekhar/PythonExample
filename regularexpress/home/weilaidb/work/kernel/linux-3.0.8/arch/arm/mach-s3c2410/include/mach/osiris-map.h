#define __ASM_ARCH_OSIRISMAP_H
#define OSIRIS_IOADDR(x)	(S3C2410_ADDR((x) + 0x04000000))
#define OSIRIS_PA_CPLD		(S3C2410_CS1 | (1<<26))
#define OSIRIS_VA_CTRL0		OSIRIS_IOADDR(0x00000000)
#define OSIRIS_PA_CTRL0		(OSIRIS_PA_CPLD)
#define OSIRIS_VA_CTRL1		OSIRIS_IOADDR(0x00100000)
#define OSIRIS_PA_CTRL1		(OSIRIS_PA_CPLD + (1<<23))
#define OSIRIS_VA_CTRL2		OSIRIS_IOADDR(0x00200000)
#define OSIRIS_PA_CTRL2		(OSIRIS_PA_CPLD + (2<<23))
#define OSIRIS_VA_CTRL3		OSIRIS_IOADDR(0x00300000)
#define OSIRIS_PA_CTRL3		(OSIRIS_PA_CPLD + (2<<23))
#define OSIRIS_VA_IDREG		OSIRIS_IOADDR(0x00700000)
#define OSIRIS_PA_IDREG		(OSIRIS_PA_CPLD + (7<<23))
