#define _ASM_MICROBLAZE_SETUP_H
#define COMMAND_LINE_SIZE	256
# ifndef __ASSEMBLY__
#  ifdef __KERNEL__
extern unsigned int boot_cpuid;
extern char cmd_line[COMMAND_LINE_SIZE];
void early_printk(const char *fmt, ...);
int setup_early_printk(char *opt);
void disable_early_printk(void);
#if defined(CONFIG_EARLY_PRINTK)
#define eprintk early_printk
#define eprintk printk
void heartbeat(void);
void setup_heartbeat(void);
#   ifdef CONFIG_MMU
extern void mmu_reset(void);
extern void early_console_reg_tlb_alloc(unsigned int addr);
#   endif
extern void of_platform_reset_gpio_probe(void);
void time_init(void);
void init_IRQ(void);
void machine_early_init(const char *cmdline, unsigned int ram,
unsigned int fdt, unsigned int msr);
void machine_restart(char *cmd);
void machine_shutdown(void);
void machine_halt(void);
void machine_power_off(void);
#  endif
# endif
