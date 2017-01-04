#define __STMPE_H
static inline void stmpe_dump_bytes(const char *str, const void *buf,
size_t len)
static inline void stmpe_dump_bytes(const char *str, const void *buf,
size_t len)
struct stmpe_variant_block ;
struct stmpe_variant_info ;
#define STMPE_ICR_LSB_HIGH	(1 << 2)
#define STMPE_ICR_LSB_EDGE	(1 << 1)
#define STMPE_ICR_LSB_GIM	(1 << 0)
#define STMPE811_IRQ_TOUCH_DET		0
#define STMPE811_IRQ_FIFO_TH		1
#define STMPE811_IRQ_FIFO_OFLOW		2
#define STMPE811_IRQ_FIFO_FULL		3
#define STMPE811_IRQ_FIFO_EMPTY		4
#define STMPE811_IRQ_TEMP_SENS		5
#define STMPE811_IRQ_ADC		6
#define STMPE811_IRQ_GPIOC		7
#define STMPE811_NR_INTERNAL_IRQS	8
#define STMPE811_REG_CHIP_ID		0x00
#define STMPE811_REG_SYS_CTRL2		0x04
#define STMPE811_REG_INT_CTRL		0x09
#define STMPE811_REG_INT_EN		0x0A
#define STMPE811_REG_INT_STA		0x0B
#define STMPE811_REG_GPIO_INT_EN	0x0C
#define STMPE811_REG_GPIO_INT_STA	0x0D
#define STMPE811_REG_GPIO_SET_PIN	0x10
#define STMPE811_REG_GPIO_CLR_PIN	0x11
#define STMPE811_REG_GPIO_MP_STA	0x12
#define STMPE811_REG_GPIO_DIR		0x13
#define STMPE811_REG_GPIO_ED		0x14
#define STMPE811_REG_GPIO_RE		0x15
#define STMPE811_REG_GPIO_FE		0x16
#define STMPE811_REG_GPIO_AF		0x17
#define STMPE811_SYS_CTRL2_ADC_OFF	(1 << 0)
#define STMPE811_SYS_CTRL2_TSC_OFF	(1 << 1)
#define STMPE811_SYS_CTRL2_GPIO_OFF	(1 << 2)
#define STMPE811_SYS_CTRL2_TS_OFF	(1 << 3)
#define STMPE1601_IRQ_GPIOC		8
#define STMPE1601_IRQ_PWM3		7
#define STMPE1601_IRQ_PWM2		6
#define STMPE1601_IRQ_PWM1		5
#define STMPE1601_IRQ_PWM0		4
#define STMPE1601_IRQ_KEYPAD_OVER	2
#define STMPE1601_IRQ_KEYPAD		1
#define STMPE1601_IRQ_WAKEUP		0
#define STMPE1601_NR_INTERNAL_IRQS	9
#define STMPE1601_REG_SYS_CTRL			0x02
#define STMPE1601_REG_SYS_CTRL2			0x03
#define STMPE1601_REG_ICR_LSB			0x11
#define STMPE1601_REG_IER_LSB			0x13
#define STMPE1601_REG_ISR_MSB			0x14
#define STMPE1601_REG_CHIP_ID			0x80
#define STMPE1601_REG_INT_EN_GPIO_MASK_LSB	0x17
#define STMPE1601_REG_INT_STA_GPIO_MSB		0x18
#define STMPE1601_REG_GPIO_MP_LSB		0x87
#define STMPE1601_REG_GPIO_SET_LSB		0x83
#define STMPE1601_REG_GPIO_CLR_LSB		0x85
#define STMPE1601_REG_GPIO_SET_DIR_LSB		0x89
#define STMPE1601_REG_GPIO_ED_MSB		0x8A
#define STMPE1601_REG_GPIO_RE_LSB		0x8D
#define STMPE1601_REG_GPIO_FE_LSB		0x8F
#define STMPE1601_REG_GPIO_AF_U_MSB		0x92
#define STMPE1601_SYS_CTRL_ENABLE_GPIO		(1 << 3)
#define STMPE1601_SYS_CTRL_ENABLE_KPC		(1 << 1)
#define STMPE1601_SYSCON_ENABLE_SPWM		(1 << 0)
#define STMPE1601_AUTOSLEEP_TIMEOUT_MASK	(0x7)
#define STPME1601_AUTOSLEEP_ENABLE		(1 << 3)
#define STMPE24XX_IRQ_GPIOC		8
#define STMPE24XX_IRQ_PWM2		7
#define STMPE24XX_IRQ_PWM1		6
#define STMPE24XX_IRQ_PWM0		5
#define STMPE24XX_IRQ_ROT_OVER		4
#define STMPE24XX_IRQ_ROT		3
#define STMPE24XX_IRQ_KEYPAD_OVER	2
#define STMPE24XX_IRQ_KEYPAD		1
#define STMPE24XX_IRQ_WAKEUP		0
#define STMPE24XX_NR_INTERNAL_IRQS	9
#define STMPE24XX_REG_SYS_CTRL		0x02
#define STMPE24XX_REG_ICR_LSB		0x11
#define STMPE24XX_REG_IER_LSB		0x13
#define STMPE24XX_REG_ISR_MSB		0x14
#define STMPE24XX_REG_CHIP_ID		0x80
#define STMPE24XX_REG_IEGPIOR_LSB	0x18
#define STMPE24XX_REG_ISGPIOR_MSB	0x19
#define STMPE24XX_REG_GPMR_LSB		0xA5
#define STMPE24XX_REG_GPSR_LSB		0x85
#define STMPE24XX_REG_GPCR_LSB		0x88
#define STMPE24XX_REG_GPDR_LSB		0x8B
#define STMPE24XX_REG_GPEDR_MSB		0x8C
#define STMPE24XX_REG_GPRER_LSB		0x91
#define STMPE24XX_REG_GPFER_LSB		0x94
#define STMPE24XX_REG_GPAFR_U_MSB	0x9B
#define STMPE24XX_SYS_CTRL_ENABLE_GPIO		(1 << 3)
#define STMPE24XX_SYSCON_ENABLE_PWM		(1 << 2)
#define STMPE24XX_SYS_CTRL_ENABLE_KPC		(1 << 1)
#define STMPE24XX_SYSCON_ENABLE_ROT		(1 << 0)