static void __init neocore926_init_early(void)
static void __init neocore926_init_irq(void)
static struct at91_usbh_data __initdata neocore926_usbh_data = ;
static struct at91_udc_data __initdata neocore926_udc_data = ;
#if defined(CONFIG_TOUCHSCREEN_ADS7846) || defined(CONFIG_TOUCHSCREEN_ADS7846_MODULE)
static int ads7843_pendown_state(void)
static struct ads7846_platform_data ads_info = ;
static void __init neocore926_add_device_ts(void)
static void __init neocore926_add_device_ts(void)
static struct spi_board_info neocore926_spi_devices[] = ;
static struct at91_mmc_data __initdata neocore926_mmc_data = ;
static struct at91_eth_data __initdata neocore926_macb_data = ;
static struct mtd_partition __initdata neocore926_nand_partition[] = ;
static struct mtd_partition * __init nand_partitions(int size, int *num_partitions)
static struct atmel_nand_data __initdata neocore926_nand_data = ;
static struct sam9_smc_config __initdata neocore926_nand_smc_config = ;
static void __init neocore926_add_device_nand(void)
#if defined(CONFIG_FB_ATMEL) || defined(CONFIG_FB_ATMEL_MODULE)
static struct fb_videomode at91_tft_vga_modes[] = ;
static struct fb_monspecs at91fb_default_monspecs = ;
#define AT91SAM9263_DEFAULT_LCDCON2 (ATMEL_LCDC_MEMOR_LITTLE \
| ATMEL_LCDC_DISTYPE_TFT \
| ATMEL_LCDC_CLKMOD_ALWAYSACTIVE)
static void at91_lcdc_power_control(int on)
static struct atmel_lcdfb_info __initdata neocore926_lcdc_data = ;
static struct atmel_lcdfb_info __initdata neocore926_lcdc_data;
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button neocore926_buttons[] = ;
static struct gpio_keys_platform_data neocore926_button_data = ;
static struct platform_device neocore926_button_device = ;
static void __init neocore926_add_device_buttons(void)
static void __init neocore926_add_device_buttons(void)
static struct ac97c_platform_data neocore926_ac97_data = ;
static void __init neocore926_board_init(void)
MACHINE_START(NEOCORE926, "ADENEO NEOCORE 926")
.timer		= &at91sam926x_timer,
.map_io		= at91sam9263_map_io,
.init_early	= neocore926_init_early,
.init_irq	= neocore926_init_irq,
.init_machine	= neocore926_board_init,
MACHINE_END
