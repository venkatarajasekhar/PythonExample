#define DMA_TIMER_0	(0x00)
#define DMA_TIMER_1	(0x40)
#define DMA_TIMER_2	(0x80)
#define DMA_TIMER_3	(0xc0)
#define DTMR0	(MCF_IPSBAR + DMA_TIMER_0 + 0x400)
#define DTXMR0	(MCF_IPSBAR + DMA_TIMER_0 + 0x402)
#define DTER0	(MCF_IPSBAR + DMA_TIMER_0 + 0x403)
#define DTRR0	(MCF_IPSBAR + DMA_TIMER_0 + 0x404)
#define DTCR0	(MCF_IPSBAR + DMA_TIMER_0 + 0x408)
#define DTCN0	(MCF_IPSBAR + DMA_TIMER_0 + 0x40c)
#define DMA_FREQ    ((MCF_CLK / 2) / 16)
#define DMA_DTMR_RESTART	(1 << 3)
#define DMA_DTMR_CLK_DIV_1	(1 << 1)
#define DMA_DTMR_CLK_DIV_16	(2 << 1)
#define DMA_DTMR_ENABLE		(1 << 0)
static cycle_t cf_dt_get_cycles(struct clocksource *cs)
static struct clocksource clocksource_cf_dt = ;
static int __init  init_cf_dt_clocksource(void)
arch_initcall(init_cf_dt_clocksource);
#define CYC2NS_SCALE_FACTOR 10
#define CYC2NS_SCALE	((1000000 << CYC2NS_SCALE_FACTOR) / (DMA_FREQ / 1000))
static unsigned long long cycles2ns(unsigned long cycl)
unsigned long long sched_clock(void)