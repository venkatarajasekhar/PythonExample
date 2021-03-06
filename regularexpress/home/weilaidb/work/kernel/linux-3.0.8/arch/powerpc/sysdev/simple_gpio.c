struct u8_gpio_chip ;
static struct u8_gpio_chip *to_u8_gpio_chip(struct of_mm_gpio_chip *mm_gc)
static u8 u8_pin2mask(unsigned int pin)
static int u8_gpio_get(struct gpio_chip *gc, unsigned int gpio)
static void u8_gpio_set(struct gpio_chip *gc, unsigned int gpio, int val)
static int u8_gpio_dir_in(struct gpio_chip *gc, unsigned int gpio)
static int u8_gpio_dir_out(struct gpio_chip *gc, unsigned int gpio, int val)
static void u8_gpio_save_regs(struct of_mm_gpio_chip *mm_gc)
static int __init u8_simple_gpiochip_add(struct device_node *np)
void __init simple_gpiochip_init(const char *compatible)
