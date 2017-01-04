static struct gpio_led smartq5_leds[] = ;
static struct gpio_led_platform_data smartq5_led_data = ;
static struct platform_device smartq5_leds_device = ;
static struct gpio_keys_button smartq5_buttons[] = ;
static struct gpio_keys_platform_data smartq5_buttons_data  = ;
static struct platform_device smartq5_buttons_device  = ;
static struct s3c_fb_pd_win smartq5_fb_win0 = ;
static struct s3c_fb_platdata smartq5_lcd_pdata __initdata = ;
static struct platform_device *smartq5_devices[] __initdata = ;
static void __init smartq5_machine_init(void)
MACHINE_START(SMARTQ5, "SmartQ 5")
.boot_params	= S3C64XX_PA_SDRAM + 0x100,
.init_irq	= s3c6410_init_irq,
.map_io		= smartq_map_io,
.init_machine	= smartq5_machine_init,
.timer		= &s3c24xx_timer,
MACHINE_END
