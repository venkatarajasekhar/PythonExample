#define AMBA_UART_DR(base)	(*(volatile unsigned char *)((base) + 0x00))
#define AMBA_UART_LCRH(base)	(*(volatile unsigned char *)((base) + 0x2c))
#define AMBA_UART_CR(base)	(*(volatile unsigned char *)((base) + 0x30))
#define AMBA_UART_FR(base)	(*(volatile unsigned char *)((base) + 0x18))
#define get_uart_base()	(0x10000000 + 0x00009000)
static inline void putc(int c)
static inline void flush(void)
#define arch_decomp_setup()
#define arch_decomp_wdog()
