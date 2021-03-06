#define __ARCH_ARM_MACH_OMAP2_CLOCKDOMAIN_H
#define CLKDM_CAN_FORCE_SLEEP			(1 << 0)
#define CLKDM_CAN_FORCE_WAKEUP			(1 << 1)
#define CLKDM_CAN_ENABLE_AUTO			(1 << 2)
#define CLKDM_CAN_DISABLE_AUTO			(1 << 3)
#define CLKDM_NO_AUTODEPS			(1 << 4)
#define CLKDM_CAN_HWSUP		(CLKDM_CAN_ENABLE_AUTO | CLKDM_CAN_DISABLE_AUTO)
#define CLKDM_CAN_SWSUP		(CLKDM_CAN_FORCE_SLEEP | CLKDM_CAN_FORCE_WAKEUP)
#define CLKDM_CAN_HWSUP_SWSUP	(CLKDM_CAN_SWSUP | CLKDM_CAN_HWSUP)
struct clkdm_autodep ;
struct clkdm_dep ;
struct clockdomain ;
struct clkdm_ops ;
void clkdm_init(struct clockdomain **clkdms, struct clkdm_autodep *autodeps,
struct clkdm_ops *custom_funcs);
struct clockdomain *clkdm_lookup(const char *name);
int clkdm_for_each(int (*fn)(struct clockdomain *clkdm, void *user),
void *user);
struct powerdomain *clkdm_get_pwrdm(struct clockdomain *clkdm);
int clkdm_add_wkdep(struct clockdomain *clkdm1, struct clockdomain *clkdm2);
int clkdm_del_wkdep(struct clockdomain *clkdm1, struct clockdomain *clkdm2);
int clkdm_read_wkdep(struct clockdomain *clkdm1, struct clockdomain *clkdm2);
int clkdm_clear_all_wkdeps(struct clockdomain *clkdm);
int clkdm_add_sleepdep(struct clockdomain *clkdm1, struct clockdomain *clkdm2);
int clkdm_del_sleepdep(struct clockdomain *clkdm1, struct clockdomain *clkdm2);
int clkdm_read_sleepdep(struct clockdomain *clkdm1, struct clockdomain *clkdm2);
int clkdm_clear_all_sleepdeps(struct clockdomain *clkdm);
void clkdm_allow_idle(struct clockdomain *clkdm);
void clkdm_deny_idle(struct clockdomain *clkdm);
int clkdm_wakeup(struct clockdomain *clkdm);
int clkdm_sleep(struct clockdomain *clkdm);
int clkdm_clk_enable(struct clockdomain *clkdm, struct clk *clk);
int clkdm_clk_disable(struct clockdomain *clkdm, struct clk *clk);
extern void __init omap2xxx_clockdomains_init(void);
extern void __init omap3xxx_clockdomains_init(void);
extern void __init omap44xx_clockdomains_init(void);
extern void _clkdm_add_autodeps(struct clockdomain *clkdm);
extern void _clkdm_del_autodeps(struct clockdomain *clkdm);
extern struct clkdm_ops omap2_clkdm_operations;
extern struct clkdm_ops omap3_clkdm_operations;
extern struct clkdm_ops omap4_clkdm_operations;
