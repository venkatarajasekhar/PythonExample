#define UART_3		0
#define UART_4		1
#define UART_5		2
#define UART_6		3
#define UART_UNKNOWN	(-1)
#define UART3_BASE_VA	IO_ADDRESS(PNX4008_UART3_BASE)
#define UART4_BASE_VA	IO_ADDRESS(PNX4008_UART4_BASE)
#define UART5_BASE_VA	IO_ADDRESS(PNX4008_UART5_BASE)
#define UART6_BASE_VA	IO_ADDRESS(PNX4008_UART6_BASE)
#define UART_FCR_OFFSET		8
#define UART_FIFO_SIZE		64
void pnx4008_uart_init(void)
