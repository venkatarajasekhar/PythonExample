static int palmtt_panel_init(struct lcd_panel *panel,
struct omapfb_device *fbdev)
static void palmtt_panel_cleanup(struct lcd_panel *panel)
static int palmtt_panel_enable(struct lcd_panel *panel)
static void palmtt_panel_disable(struct lcd_panel *panel)
static unsigned long palmtt_panel_get_caps(struct lcd_panel *panel)
struct lcd_panel palmtt_panel = ;
static int palmtt_panel_probe(struct platform_device *pdev)
static int palmtt_panel_remove(struct platform_device *pdev)
static int palmtt_panel_suspend(struct platform_device *pdev, pm_message_t mesg)
static int palmtt_panel_resume(struct platform_device *pdev)
struct platform_driver palmtt_panel_driver = ;
static int __init palmtt_panel_drv_init(void)
static void __exit palmtt_panel_drv_cleanup(void)
module_init(palmtt_panel_drv_init);
module_exit(palmtt_panel_drv_cleanup);
