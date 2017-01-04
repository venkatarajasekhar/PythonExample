static struct mcf_platform_uart m527x_uart_platform[] = ;
static struct platform_device m527x_uart = ;
static struct resource m527x_fec0_resources[] = ;
static struct resource m527x_fec1_resources[] = ;
static struct platform_device m527x_fec[] = ;
#if defined(CONFIG_SPI_COLDFIRE_QSPI) || defined(CONFIG_SPI_COLDFIRE_QSPI_MODULE)
static struct resource m527x_qspi_resources[] = ;
#if defined(CONFIG_M5271)
#define MCFQSPI_CS0    91
#define MCFQSPI_CS1    92
#define MCFQSPI_CS2    99
#define MCFQSPI_CS3    103
#elif defined(CONFIG_M5275)
#define MCFQSPI_CS0    59
#define MCFQSPI_CS1    60
#define MCFQSPI_CS2    61
#define MCFQSPI_CS3    62
static int m527x_cs_setup(struct mcfqspi_cs_control *cs_control)
static void m527x_cs_teardown(struct mcfqspi_cs_control *cs_control)
static void m527x_cs_select(struct mcfqspi_cs_control *cs_control,
u8 chip_select, bool cs_high)
static void m527x_cs_deselect(struct mcfqspi_cs_control *cs_control,
u8 chip_select, bool cs_high)
static struct mcfqspi_cs_control m527x_cs_control = ;
static struct mcfqspi_platform_data m527x_qspi_data = ;
static struct platform_device m527x_qspi = ;
static void __init m527x_qspi_init(void)
static struct platform_device *m527x_devices[] __initdata = ;
static void __init m527x_uart_init_line(int line, int irq)
static void __init m527x_uarts_init(void)
static void __init m527x_fec_init(void)
static void m527x_cpu_reset(void)
void __init config_BSP(char *commandp, int size)
static int __init init_BSP(void)
arch_initcall(init_BSP);
