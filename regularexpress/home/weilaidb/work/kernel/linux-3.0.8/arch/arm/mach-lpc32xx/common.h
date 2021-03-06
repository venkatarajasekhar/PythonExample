#define __LPC32XX_COMMON_H
extern struct platform_device lpc32xx_watchdog_device;
extern struct platform_device lpc32xx_i2c0_device;
extern struct platform_device lpc32xx_i2c1_device;
extern struct platform_device lpc32xx_i2c2_device;
extern struct sys_timer lpc32xx_timer;
extern void __init lpc32xx_init_irq(void);
extern void __init lpc32xx_map_io(void);
extern void __init lpc32xx_serial_init(void);
extern void __init lpc32xx_gpio_init(void);
struct clk_pll_setup ;
extern int clk_is_sysclk_mainosc(void);
extern u32 clk_check_pll_setup(u32 ifreq, struct clk_pll_setup *pllsetup);
extern u32 clk_get_pllrate_from_reg(u32 inputclk, u32 regval);
extern u32 clk_get_pclk_div(void);
extern void lpc32xx_get_uid(u32 devid[4]);
extern void lpc32xx_watchdog_reset(void);
extern u32 lpc32xx_return_iram_size(void);
extern int lpc32xx_sys_suspend(void);
extern int lpc32xx_sys_suspend_sz;
