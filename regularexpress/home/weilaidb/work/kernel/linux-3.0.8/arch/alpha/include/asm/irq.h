#define _ALPHA_IRQ_H
#if   defined(CONFIG_ALPHA_GENERIC)
# if defined(CONFIG_ALPHA_LEGACY_START_ADDRESS)
#  define NR_IRQS      (128)
# else
#  define NR_IRQS      (32768 + 16)
# endif
#elif defined(CONFIG_ALPHA_CABRIOLET) || \
defined(CONFIG_ALPHA_EB66P)     || \
defined(CONFIG_ALPHA_EB164)     || \
defined(CONFIG_ALPHA_PC164)     || \
defined(CONFIG_ALPHA_LX164)
# define NR_IRQS	35
#elif defined(CONFIG_ALPHA_EB66)      || \
defined(CONFIG_ALPHA_EB64P)     || \
defined(CONFIG_ALPHA_MIKASA)
# define NR_IRQS	32
#elif defined(CONFIG_ALPHA_ALCOR)     || \
defined(CONFIG_ALPHA_MIATA)     || \
defined(CONFIG_ALPHA_RUFFIAN)   || \
defined(CONFIG_ALPHA_RX164)     || \
defined(CONFIG_ALPHA_NORITAKE)
# define NR_IRQS	48
#elif defined(CONFIG_ALPHA_SABLE)     || \
defined(CONFIG_ALPHA_SX164)
# define NR_IRQS	40
#elif defined(CONFIG_ALPHA_DP264) || \
defined(CONFIG_ALPHA_LYNX)  || \
defined(CONFIG_ALPHA_SHARK) || \
defined(CONFIG_ALPHA_EIGER)
# define NR_IRQS	64
#elif defined(CONFIG_ALPHA_TITAN)
#define NR_IRQS		80
#elif defined(CONFIG_ALPHA_RAWHIDE) || \
defined(CONFIG_ALPHA_TAKARA)
# define NR_IRQS	128
#elif defined(CONFIG_ALPHA_WILDFIRE)
# define NR_IRQS	2048
#elif defined(CONFIG_ALPHA_MARVEL)
# define NR_IRQS	(32768 + 16)
# define NR_IRQS	16
static __inline__ int irq_canonicalize(int irq)
struct pt_regs;
extern void (*perf_irq)(unsigned long, struct pt_regs *);