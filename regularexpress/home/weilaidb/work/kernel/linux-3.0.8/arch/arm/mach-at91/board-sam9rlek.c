static void __init ek_init_early(void)
static void __init ek_init_irq(void)
static struct usba_platform_data __initdata ek_usba_udc_data = ;
static struct at91_mmc_data __initdata ek_mmc_data = ;
static struct mtd_partition __initdata ek_nand_partition[] = ;
static struct mtd_partition * __init nand_partitions(int size, int *num_partitions)
static struct atmel_nand_data __initdata ek_nand_data = ;
static struct sam9_smc_config __initdata ek_nand_smc_config = ;
static void __init ek_add_device_nand(void)
static struct spi_board_info ek_spi_devices[] = ;
#if defined(CONFIG_FB_ATMEL) || defined(CONFIG_FB_ATMEL_MODULE)
static struct fb_videomode at91_tft_vga_modes[] = ;
static struct fb_monspecs at91fb_default_monspecs = ;
#define AT91SAM9RL_DEFAULT_LCDCON2	(ATMEL_LCDC_MEMOR_LITTLE \
| ATMEL_LCDC_DISTYPE_TFT \
| ATMEL_LCDC_CLKMOD_ALWAYSACTIVE)
static void at91_lcdc_power_control(int on)
static struct atmel_lcdfb_info __initdata ek_lcdc_data = ;
static struct atmel_lcdfb_info __initdata ek_lcdc_data;
static struct ac97c_platform_data ek_ac97_data = ;
static struct gpio_led ek_leds[] = ;
static struct at91_tsadcc_data ek_tsadcc_data = ;
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button ek_buttons[] = ;
static struct gpio_keys_platform_data ek_button_data = ;
static struct platform_device ek_button_device = ;
static void __init ek_add_device_buttons(void)
static void __init ek_add_device_buttons(void)
static void __init ek_board_init(void)
MACHINE_START(AT91SAM9RLEK, "Atmel AT91SAM9RL-EK")
.timer		= &at91sam926x_timer,
.map_io		= at91sam9rl_map_io,
.init_early	= ek_init_early,
.init_irq	= ek_init_irq,
.init_machine	= ek_board_init,
MACHINE_END
