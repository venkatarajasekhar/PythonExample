#define __MIPS_JZ4740_TIMER_H__
#define JZ_REG_TIMER_STOP		0x0C
#define JZ_REG_TIMER_STOP_SET		0x1C
#define JZ_REG_TIMER_STOP_CLEAR		0x2C
#define JZ_REG_TIMER_ENABLE		0x00
#define JZ_REG_TIMER_ENABLE_SET		0x04
#define JZ_REG_TIMER_ENABLE_CLEAR	0x08
#define JZ_REG_TIMER_FLAG		0x10
#define JZ_REG_TIMER_FLAG_SET		0x14
#define JZ_REG_TIMER_FLAG_CLEAR		0x18
#define JZ_REG_TIMER_MASK		0x20
#define JZ_REG_TIMER_MASK_SET		0x24
#define JZ_REG_TIMER_MASK_CLEAR		0x28
#define JZ_REG_TIMER_DFR(x) (((x) * 0x10) + 0x30)
#define JZ_REG_TIMER_DHR(x) (((x) * 0x10) + 0x34)
#define JZ_REG_TIMER_CNT(x) (((x) * 0x10) + 0x38)
#define JZ_REG_TIMER_CTRL(x) (((x) * 0x10) + 0x3C)
#define JZ_TIMER_IRQ_HALF(x) BIT((x) + 0x10)
#define JZ_TIMER_IRQ_FULL(x) BIT(x)
#define JZ_TIMER_CTRL_PWM_ABBRUPT_SHUTDOWN	BIT(9)
#define JZ_TIMER_CTRL_PWM_ACTIVE_LOW		BIT(8)
#define JZ_TIMER_CTRL_PWM_ENABLE		BIT(7)
#define JZ_TIMER_CTRL_PRESCALE_MASK		0x1c
#define JZ_TIMER_CTRL_PRESCALE_OFFSET		0x3
#define JZ_TIMER_CTRL_PRESCALE_1		(0 << 3)
#define JZ_TIMER_CTRL_PRESCALE_4		(1 << 3)
#define JZ_TIMER_CTRL_PRESCALE_16		(2 << 3)
#define JZ_TIMER_CTRL_PRESCALE_64		(3 << 3)
#define JZ_TIMER_CTRL_PRESCALE_256		(4 << 3)
#define JZ_TIMER_CTRL_PRESCALE_1024		(5 << 3)
#define JZ_TIMER_CTRL_PRESCALER(x) ((x) << JZ_TIMER_CTRL_PRESCALE_OFFSET)
#define JZ_TIMER_CTRL_SRC_EXT		BIT(2)
#define JZ_TIMER_CTRL_SRC_RTC		BIT(1)
#define JZ_TIMER_CTRL_SRC_PCLK		BIT(0)
extern void __iomem *jz4740_timer_base;
void __init jz4740_timer_init(void);
static inline void jz4740_timer_stop(unsigned int timer)
static inline void jz4740_timer_start(unsigned int timer)
static inline bool jz4740_timer_is_enabled(unsigned int timer)
static inline void jz4740_timer_enable(unsigned int timer)
static inline void jz4740_timer_disable(unsigned int timer)
static inline void jz4740_timer_set_period(unsigned int timer, uint16_t period)
static inline void jz4740_timer_set_duty(unsigned int timer, uint16_t duty)
static inline void jz4740_timer_set_count(unsigned int timer, uint16_t count)
static inline uint16_t jz4740_timer_get_count(unsigned int timer)
static inline void jz4740_timer_ack_full(unsigned int timer)
static inline void jz4740_timer_irq_full_enable(unsigned int timer)
static inline void jz4740_timer_irq_full_disable(unsigned int timer)
static inline void jz4740_timer_set_ctrl(unsigned int timer, uint16_t ctrl)
static inline uint16_t jz4740_timer_get_ctrl(unsigned int timer)
