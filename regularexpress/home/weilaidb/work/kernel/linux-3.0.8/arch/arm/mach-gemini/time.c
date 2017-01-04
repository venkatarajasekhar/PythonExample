#define TIMER_COUNT(BASE_ADDR)		(BASE_ADDR  + 0x00)
#define TIMER_LOAD(BASE_ADDR)		(BASE_ADDR  + 0x04)
#define TIMER_MATCH1(BASE_ADDR)		(BASE_ADDR  + 0x08)
#define TIMER_MATCH2(BASE_ADDR)		(BASE_ADDR  + 0x0C)
#define TIMER_CR(BASE_ADDR)		(BASE_ADDR  + 0x30)
#define TIMER_1_CR_ENABLE		(1 << 0)
#define TIMER_1_CR_CLOCK		(1 << 1)
#define TIMER_1_CR_INT			(1 << 2)
#define TIMER_2_CR_ENABLE		(1 << 3)
#define TIMER_2_CR_CLOCK		(1 << 4)
#define TIMER_2_CR_INT			(1 << 5)
#define TIMER_3_CR_ENABLE		(1 << 6)
#define TIMER_3_CR_CLOCK		(1 << 7)
#define TIMER_3_CR_INT			(1 << 8)
static irqreturn_t gemini_timer_interrupt(int irq, void *dev_id)
static struct irqaction gemini_timer_irq = ;
void __init gemini_timer_init(void)
