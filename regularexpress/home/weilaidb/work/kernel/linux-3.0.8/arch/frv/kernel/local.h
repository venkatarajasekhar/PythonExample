#define _FRV_LOCAL_H
extern unsigned long frv_dma_inprogress;
extern void frv_dma_pause_all(void);
extern void frv_dma_resume_all(void);
extern asmlinkage void frv_cpu_suspend(unsigned long);
extern asmlinkage void frv_cpu_core_sleep(void);
extern unsigned long __nongprelbss pdm_suspend_mode;
extern void determine_clocks(int verbose);
extern int __nongprelbss clock_p0_current;
extern int __nongprelbss clock_cm_current;
extern int __nongprelbss clock_cmode_current;
extern int __nongprelbss clock_cmodes_permitted;
extern unsigned long __nongprelbss clock_bits_settable;
#define CLOCK_BIT_CM		0x0000000f
#define CLOCK_BIT_CM_H		0x00000001
#define CLOCK_BIT_CM_M		0x00000002
#define CLOCK_BIT_CM_L		0x00000004
#define CLOCK_BIT_P0		0x00000010
#define CLOCK_BIT_CMODE		0x00000020
extern void (*__power_switch_wake_setup)(void);
extern int  (*__power_switch_wake_check)(void);
extern void (*__power_switch_wake_cleanup)(void);
extern void time_divisor_init(void);
extern asmlinkage void frv_change_cmode(int);
