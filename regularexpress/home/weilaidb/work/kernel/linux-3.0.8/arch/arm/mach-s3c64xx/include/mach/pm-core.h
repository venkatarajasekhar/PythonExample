static inline void s3c_pm_debug_init_uart(void)
static inline void s3c_pm_arch_prepare_irqs(void)
static inline void s3c_pm_arch_stop_clocks(void)
static inline void s3c_pm_arch_show_resume_irqs(void)
#define s3c_irqwake_eintallow	((1 << 28) - 1)
#define s3c_irqwake_intallow	(0)
static inline void s3c_pm_arch_update_uart(void __iomem *regs,
struct pm_uart_save *save)
