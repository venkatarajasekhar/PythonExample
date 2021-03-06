#define _I8042_JAZZ_H
#define I8042_KBD_PHYS_DESC "R4030/serio0"
#define I8042_AUX_PHYS_DESC "R4030/serio1"
#define I8042_MUX_PHYS_DESC "R4030/serio%d"
#define I8042_KBD_IRQ JAZZ_KEYBOARD_IRQ
#define I8042_AUX_IRQ JAZZ_MOUSE_IRQ
#define I8042_COMMAND_REG	((unsigned long)&jazz_kh->command)
#define I8042_STATUS_REG	((unsigned long)&jazz_kh->command)
#define I8042_DATA_REG		((unsigned long)&jazz_kh->data)
static inline int i8042_read_data(void)
static inline int i8042_read_status(void)
static inline void i8042_write_data(int val)
static inline void i8042_write_command(int val)
static inline int i8042_platform_init(void)
static inline void i8042_platform_exit(void)
