static struct pl061_platform_data gpio_plat_data = ;
struct amba_device spear3xx_gpio_device = ;
struct amba_device spear3xx_uart_device = ;
void __init spear3xx_init(void)
void __init spear3xx_init_irq(void)
struct map_desc spear3xx_io_desc[] __initdata = ;
void __init spear3xx_map_io(void)
static struct pmx_dev_mode pmx_firda_modes[] = ;
struct pmx_dev spear3xx_pmx_firda = ;
static struct pmx_dev_mode pmx_i2c_modes[] = ;
struct pmx_dev spear3xx_pmx_i2c = ;
static struct pmx_dev_mode pmx_ssp_cs_modes[] = ;
struct pmx_dev spear3xx_pmx_ssp_cs = ;
static struct pmx_dev_mode pmx_ssp_modes[] = ;
struct pmx_dev spear3xx_pmx_ssp = ;
static struct pmx_dev_mode pmx_mii_modes[] = ;
struct pmx_dev spear3xx_pmx_mii = ;
static struct pmx_dev_mode pmx_gpio_pin0_modes[] = ;
struct pmx_dev spear3xx_pmx_gpio_pin0 = ;
static struct pmx_dev_mode pmx_gpio_pin1_modes[] = ;
struct pmx_dev spear3xx_pmx_gpio_pin1 = ;
static struct pmx_dev_mode pmx_gpio_pin2_modes[] = ;
struct pmx_dev spear3xx_pmx_gpio_pin2 = ;
static struct pmx_dev_mode pmx_gpio_pin3_modes[] = ;
struct pmx_dev spear3xx_pmx_gpio_pin3 = ;
static struct pmx_dev_mode pmx_gpio_pin4_modes[] = ;
struct pmx_dev spear3xx_pmx_gpio_pin4 = ;
static struct pmx_dev_mode pmx_gpio_pin5_modes[] = ;
struct pmx_dev spear3xx_pmx_gpio_pin5 = ;
static struct pmx_dev_mode pmx_uart0_modem_modes[] = ;
struct pmx_dev spear3xx_pmx_uart0_modem = ;
static struct pmx_dev_mode pmx_uart0_modes[] = ;
struct pmx_dev spear3xx_pmx_uart0 = ;
static struct pmx_dev_mode pmx_timer_3_4_modes[] = ;
struct pmx_dev spear3xx_pmx_timer_3_4 = ;
static struct pmx_dev_mode pmx_timer_1_2_modes[] = ;
struct pmx_dev spear3xx_pmx_timer_1_2 = ;
#if defined(CONFIG_MACH_SPEAR310) || defined(CONFIG_MACH_SPEAR320)
static struct pmx_dev_mode pmx_plgpio_0_1_modes[] = ;
struct pmx_dev spear3xx_pmx_plgpio_0_1 = ;
static struct pmx_dev_mode pmx_plgpio_2_3_modes[] = ;
struct pmx_dev spear3xx_pmx_plgpio_2_3 = ;
static struct pmx_dev_mode pmx_plgpio_4_5_modes[] = ;
struct pmx_dev spear3xx_pmx_plgpio_4_5 = ;
static struct pmx_dev_mode pmx_plgpio_6_9_modes[] = ;
struct pmx_dev spear3xx_pmx_plgpio_6_9 = ;
static struct pmx_dev_mode pmx_plgpio_10_27_modes[] = ;
struct pmx_dev spear3xx_pmx_plgpio_10_27 = ;
static struct pmx_dev_mode pmx_plgpio_28_modes[] = ;
struct pmx_dev spear3xx_pmx_plgpio_28 = ;
static struct pmx_dev_mode pmx_plgpio_29_modes[] = ;
struct pmx_dev spear3xx_pmx_plgpio_29 = ;
static struct pmx_dev_mode pmx_plgpio_30_modes[] = ;
struct pmx_dev spear3xx_pmx_plgpio_30 = ;
static struct pmx_dev_mode pmx_plgpio_31_modes[] = ;
struct pmx_dev spear3xx_pmx_plgpio_31 = ;
static struct pmx_dev_mode pmx_plgpio_32_modes[] = ;
struct pmx_dev spear3xx_pmx_plgpio_32 = ;
static struct pmx_dev_mode pmx_plgpio_33_modes[] = ;
struct pmx_dev spear3xx_pmx_plgpio_33 = ;
static struct pmx_dev_mode pmx_plgpio_34_36_modes[] = ;
struct pmx_dev spear3xx_pmx_plgpio_34_36 = ;
static struct pmx_dev_mode pmx_plgpio_37_42_modes[] = ;
struct pmx_dev spear3xx_pmx_plgpio_37_42 = ;
static struct pmx_dev_mode pmx_plgpio_43_44_47_48_modes[] = ;
struct pmx_dev spear3xx_pmx_plgpio_43_44_47_48 = ;
static struct pmx_dev_mode pmx_plgpio_45_46_49_50_modes[] = ;
struct pmx_dev spear3xx_pmx_plgpio_45_46_49_50 = ;
static void __init spear3xx_timer_init(void)
struct sys_timer spear3xx_timer = ;
