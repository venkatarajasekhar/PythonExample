#if defined(CONFIG_USB_OHCI_HCD) || defined(CONFIG_USB_OHCI_HCD_MODULE)
static u64 ohci_dmamask = DMA_BIT_MASK(32);
static struct at91_usbh_data usbh_data;
static struct resource usbh_resources[] = ;
static struct platform_device at91sam9261_usbh_device = ;
void __init at91_add_device_usbh(struct at91_usbh_data *data)
void __init at91_add_device_usbh(struct at91_usbh_data *data)
static struct at91_udc_data udc_data;
static struct resource udc_resources[] = ;
static struct platform_device at91sam9261_udc_device = ;
void __init at91_add_device_udc(struct at91_udc_data *data)
void __init at91_add_device_udc(struct at91_udc_data *data)
#if defined(CONFIG_MMC_AT91) || defined(CONFIG_MMC_AT91_MODULE)
static u64 mmc_dmamask = DMA_BIT_MASK(32);
static struct at91_mmc_data mmc_data;
static struct resource mmc_resources[] = ;
static struct platform_device at91sam9261_mmc_device = ;
void __init at91_add_device_mmc(short mmc_id, struct at91_mmc_data *data)
void __init at91_add_device_mmc(short mmc_id, struct at91_mmc_data *data)
#if defined(CONFIG_MTD_NAND_ATMEL) || defined(CONFIG_MTD_NAND_ATMEL_MODULE)
static struct atmel_nand_data nand_data;
#define NAND_BASE	AT91_CHIPSELECT_3
static struct resource nand_resources[] = ;
static struct platform_device atmel_nand_device = ;
void __init at91_add_device_nand(struct atmel_nand_data *data)
void __init at91_add_device_nand(struct atmel_nand_data *data)
#if defined(CONFIG_I2C_GPIO) || defined(CONFIG_I2C_GPIO_MODULE)
static struct i2c_gpio_platform_data pdata = ;
static struct platform_device at91sam9261_twi_device = ;
void __init at91_add_device_i2c(struct i2c_board_info *devices, int nr_devices)
#elif defined(CONFIG_I2C_AT91) || defined(CONFIG_I2C_AT91_MODULE)
static struct resource twi_resources[] = ;
static struct platform_device at91sam9261_twi_device = ;
void __init at91_add_device_i2c(struct i2c_board_info *devices, int nr_devices)
void __init at91_add_device_i2c(struct i2c_board_info *devices, int nr_devices)
#if defined(CONFIG_SPI_ATMEL) || defined(CONFIG_SPI_ATMEL_MODULE)
static u64 spi_dmamask = DMA_BIT_MASK(32);
static struct resource spi0_resources[] = ;
static struct platform_device at91sam9261_spi0_device = ;
static const unsigned spi0_standard_cs[4] = ;
static struct resource spi1_resources[] = ;
static struct platform_device at91sam9261_spi1_device = ;
static const unsigned spi1_standard_cs[4] = ;
void __init at91_add_device_spi(struct spi_board_info *devices, int nr_devices)
void __init at91_add_device_spi(struct spi_board_info *devices, int nr_devices)
#if defined(CONFIG_FB_ATMEL) || defined(CONFIG_FB_ATMEL_MODULE)
static u64 lcdc_dmamask = DMA_BIT_MASK(32);
static struct atmel_lcdfb_info lcdc_data;
static struct resource lcdc_resources[] = ;
static struct platform_device at91_lcdc_device = ;
void __init at91_add_device_lcdc(struct atmel_lcdfb_info *data)
void __init at91_add_device_lcdc(struct atmel_lcdfb_info *data)
static struct resource tcb_resources[] = ;
static struct platform_device at91sam9261_tcb_device = ;
static void __init at91_add_device_tc(void)
static void __init at91_add_device_tc(void)
static struct resource rtt_resources[] = ;
static struct platform_device at91sam9261_rtt_device = ;
static void __init at91_add_device_rtt(void)
#if defined(CONFIG_AT91SAM9X_WATCHDOG) || defined(CONFIG_AT91SAM9X_WATCHDOG_MODULE)
static struct platform_device at91sam9261_wdt_device = ;
static void __init at91_add_device_watchdog(void)
static void __init at91_add_device_watchdog(void)
#if defined(CONFIG_ATMEL_SSC) || defined(CONFIG_ATMEL_SSC_MODULE)
static u64 ssc0_dmamask = DMA_BIT_MASK(32);
static struct resource ssc0_resources[] = ;
static struct platform_device at91sam9261_ssc0_device = ;
static inline void configure_ssc0_pins(unsigned pins)
static u64 ssc1_dmamask = DMA_BIT_MASK(32);
static struct resource ssc1_resources[] = ;
static struct platform_device at91sam9261_ssc1_device = ;
static inline void configure_ssc1_pins(unsigned pins)
static u64 ssc2_dmamask = DMA_BIT_MASK(32);
static struct resource ssc2_resources[] = ;
static struct platform_device at91sam9261_ssc2_device = ;
static inline void configure_ssc2_pins(unsigned pins)
void __init at91_add_device_ssc(unsigned id, unsigned pins)
void __init at91_add_device_ssc(unsigned id, unsigned pins)
#if defined(CONFIG_SERIAL_ATMEL)
static struct resource dbgu_resources[] = ;
static struct atmel_uart_data dbgu_data = ;
static u64 dbgu_dmamask = DMA_BIT_MASK(32);
static struct platform_device at91sam9261_dbgu_device = ;
static inline void configure_dbgu_pins(void)
static struct resource uart0_resources[] = ;
static struct atmel_uart_data uart0_data = ;
static u64 uart0_dmamask = DMA_BIT_MASK(32);
static struct platform_device at91sam9261_uart0_device = ;
static inline void configure_usart0_pins(unsigned pins)
static struct resource uart1_resources[] = ;
static struct atmel_uart_data uart1_data = ;
static u64 uart1_dmamask = DMA_BIT_MASK(32);
static struct platform_device at91sam9261_uart1_device = ;
static inline void configure_usart1_pins(unsigned pins)
static struct resource uart2_resources[] = ;
static struct atmel_uart_data uart2_data = ;
static u64 uart2_dmamask = DMA_BIT_MASK(32);
static struct platform_device at91sam9261_uart2_device = ;
static inline void configure_usart2_pins(unsigned pins)
static struct platform_device *__initdata at91_uarts[ATMEL_MAX_UART];
struct platform_device *atmel_default_console_device;
void __init at91_register_uart(unsigned id, unsigned portnr, unsigned pins)
void __init at91_set_serial_console(unsigned portnr)
void __init at91_add_device_serial(void)
void __init at91_register_uart(unsigned id, unsigned portnr, unsigned pins)
void __init at91_set_serial_console(unsigned portnr)
void __init at91_add_device_serial(void)
static int __init at91_add_standard_devices(void)
arch_initcall(at91_add_standard_devices);
