#define OMAP34XX_WDT3_BASE 		(L4_PER_34XX_BASE + 0x30000)
static struct dsp_wdt_setting dsp_wdt;
void dsp_wdt_dpc(unsigned long data)
irqreturn_t dsp_wdt_isr(int irq, void *data)
int dsp_wdt_init(void)
void dsp_wdt_sm_set(void *data)
void dsp_wdt_exit(void)
void dsp_wdt_enable(bool enable)
void dsp_wdt_enable(bool enable)
void dsp_wdt_sm_set(void *data)
int dsp_wdt_init(void)
void dsp_wdt_exit(void)
