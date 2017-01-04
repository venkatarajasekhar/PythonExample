#if defined(CONFIG_USB_ISP1362_HCD) || defined(CONFIG_USB_ISP1362_HCD_MODULE)
const char bfin_board_name[] = "ADI BF533-EZKIT";
#if defined(CONFIG_RTC_DRV_BFIN) || defined(CONFIG_RTC_DRV_BFIN_MODULE)
static struct platform_device rtc_device = ;
#if defined(CONFIG_SMC91X) || defined(CONFIG_SMC91X_MODULE)
static struct smc91x_platdata smc91x_info = ;
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
#if defined(CONFIG_MTD_PHYSMAP) || defined(CONFIG_MTD_PHYSMAP_MODULE)
static struct mtd_partition ezkit_partitions_a[] = ;
static struct physmap_flash_data ezkit_flash_data_a = ;
static struct resource ezkit_flash_resource_a = ;
static struct platform_device ezkit_flash_device_a = ;
static struct mtd_partition ezkit_partitions_b[] = ;
static struct physmap_flash_data ezkit_flash_data_b = ;
static struct resource ezkit_flash_resource_b = ;
static struct platform_device ezkit_flash_device_b = ;
#if defined(CONFIG_MTD_PLATRAM) || defined(CONFIG_MTD_PLATRAM_MODULE)
static struct platdata_mtd_ram sram_data_a = ;
static struct resource sram_resource_a = ;
static struct platform_device sram_device_a = ;
static struct platdata_mtd_ram sram_data_b = ;
static struct resource sram_resource_b = ;
static struct platform_device sram_device_b = ;
#if defined(CONFIG_MTD_M25P80) || defined(CONFIG_MTD_M25P80_MODULE)
static struct mtd_partition bfin_spi_flash_partitions[] = ;
static struct flash_platform_data bfin_spi_flash_data = ;
static struct bfin5xx_spi_chip spi_flash_chip_info = ;
#if defined(CONFIG_BFIN_SPI_ADC) || defined(CONFIG_BFIN_SPI_ADC_MODULE)
static struct bfin5xx_spi_chip spi_adc_chip_info = ;
#if defined(CONFIG_SND_BF5XX_SOC_AD183X) || defined(CONFIG_SND_BF5XX_SOC_AD183X_MODULE)
static struct bfin5xx_spi_chip ad1836_spi_chip_info = ;
#if defined(CONFIG_SPI_SPIDEV) || defined(CONFIG_SPI_SPIDEV_MODULE)
static struct bfin5xx_spi_chip spidev_chip_info = ;
static struct spi_board_info bfin_spi_board_info[] __initdata = ;
#if defined(CONFIG_SPI_BFIN) || defined(CONFIG_SPI_BFIN_MODULE)
static struct resource bfin_spi0_resource[] = ;
static struct bfin5xx_spi_master bfin_spi0_info = ;
static struct platform_device bfin_spi0_device = ;
#if defined(CONFIG_SERIAL_BFIN) || defined(CONFIG_SERIAL_BFIN_MODULE)
static struct resource bfin_uart0_resources[] = ;
static unsigned short bfin_uart0_peripherals[] = ;
static struct platform_device bfin_uart0_device = ;
#if defined(CONFIG_BFIN_SIR) || defined(CONFIG_BFIN_SIR_MODULE)
static struct resource bfin_sir0_resources[] = ;
static struct platform_device bfin_sir0_device = ;
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button bfin_gpio_keys_table[] = ;
static struct gpio_keys_platform_data bfin_gpio_keys_data = ;
static struct platform_device bfin_device_gpiokeys = ;
#if defined(CONFIG_I2C_GPIO) || defined(CONFIG_I2C_GPIO_MODULE)
static struct i2c_gpio_platform_data i2c_gpio_data = ;
static struct platform_device i2c_gpio_device = ;
static const unsigned int cclk_vlev_datasheet[] =
;
static struct bfin_dpmc_platform_data bfin_dmpc_vreg_data = ;
static struct platform_device bfin_dpmc = ;
static struct i2c_board_info __initdata bfin_i2c_board_info[] = ;
#if defined(CONFIG_SND_BF5XX_I2S) || defined(CONFIG_SND_BF5XX_I2S_MODULE)
static struct platform_device bfin_i2s = ;
#if defined(CONFIG_SND_BF5XX_TDM) || defined(CONFIG_SND_BF5XX_TDM_MODULE)
static struct platform_device bfin_tdm = ;
#if defined(CONFIG_SND_BF5XX_AC97) || defined(CONFIG_SND_BF5XX_AC97_MODULE)
static struct platform_device bfin_ac97 = ;
static struct platform_device *ezkit_devices[] __initdata = ;
static int __init ezkit_init(void)
arch_initcall(ezkit_init);
static struct platform_device *ezkit_early_devices[] __initdata = ;
void __init native_machine_early_platform_add_devices(void)
