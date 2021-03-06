#define __ASM_ARCH_TIMEX_H
#if defined(CONFIG_ARCH_AT91RM9200)
#define CLOCK_TICK_RATE		(AT91_SLOW_CLOCK)
#elif defined(CONFIG_ARCH_AT91SAM9260)
#if defined(CONFIG_MACH_USB_A9260) || defined(CONFIG_MACH_QIL_A9260)
#define AT91SAM9_MASTER_CLOCK	90000000
#define AT91SAM9_MASTER_CLOCK	99300000
#define CLOCK_TICK_RATE		(AT91SAM9_MASTER_CLOCK/16)
#elif defined(CONFIG_ARCH_AT91SAM9261)
#define AT91SAM9_MASTER_CLOCK	99300000
#define CLOCK_TICK_RATE		(AT91SAM9_MASTER_CLOCK/16)
#elif defined(CONFIG_ARCH_AT91SAM9G10)
#define AT91SAM9_MASTER_CLOCK	133000000
#define CLOCK_TICK_RATE		(AT91SAM9_MASTER_CLOCK/16)
#elif defined(CONFIG_ARCH_AT91SAM9263)
#if defined(CONFIG_MACH_USB_A9263)
#define AT91SAM9_MASTER_CLOCK	90000000
#define AT91SAM9_MASTER_CLOCK	99959500
#define CLOCK_TICK_RATE		(AT91SAM9_MASTER_CLOCK/16)
#elif defined(CONFIG_ARCH_AT91SAM9RL)
#define AT91SAM9_MASTER_CLOCK	100000000
#define CLOCK_TICK_RATE		(AT91SAM9_MASTER_CLOCK/16)
#elif defined(CONFIG_ARCH_AT91SAM9G20)
#define AT91SAM9_MASTER_CLOCK	132096000
#define CLOCK_TICK_RATE		(AT91SAM9_MASTER_CLOCK/16)
#elif defined(CONFIG_ARCH_AT91SAM9G45)
#define AT91SAM9_MASTER_CLOCK	133333333
#define CLOCK_TICK_RATE		(AT91SAM9_MASTER_CLOCK/16)
#elif defined(CONFIG_ARCH_AT91CAP9)
#define AT91CAP9_MASTER_CLOCK	100000000
#define CLOCK_TICK_RATE		(AT91CAP9_MASTER_CLOCK/16)
#elif defined(CONFIG_ARCH_AT91X40)
#define AT91X40_MASTER_CLOCK	40000000
#define CLOCK_TICK_RATE		(AT91X40_MASTER_CLOCK)
