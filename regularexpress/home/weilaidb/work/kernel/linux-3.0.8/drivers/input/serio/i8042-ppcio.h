#define _I8042_PPCIO_H
#if defined(CONFIG_WALNUT)
#define I8042_KBD_IRQ 25
#define I8042_AUX_IRQ 26
#define I8042_KBD_PHYS_DESC "walnutps2/serio0"
#define I8042_AUX_PHYS_DESC "walnutps2/serio1"
#define I8042_MUX_PHYS_DESC "walnutps2/serio%d"
extern void *kb_cs;
extern void *kb_data;
#define I8042_COMMAND_REG (*(int *)kb_cs)
#define I8042_DATA_REG (*(int *)kb_data)
static inline int i8042_read_data(void)
static inline int i8042_read_status(void)
static inline void i8042_write_data(int val)
static inline void i8042_write_command(int val)
static inline int i8042_platform_init(void)
static inline void i8042_platform_exit(void)
