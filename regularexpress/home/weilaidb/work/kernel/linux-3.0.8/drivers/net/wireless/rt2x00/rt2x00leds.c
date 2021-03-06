void rt2x00leds_led_quality(struct rt2x00_dev *rt2x00dev, int rssi)
static void rt2x00led_led_simple(struct rt2x00_led *led, bool enabled)
void rt2x00led_led_activity(struct rt2x00_dev *rt2x00dev, bool enabled)
void rt2x00leds_led_assoc(struct rt2x00_dev *rt2x00dev, bool enabled)
void rt2x00leds_led_radio(struct rt2x00_dev *rt2x00dev, bool enabled)
static int rt2x00leds_register_led(struct rt2x00_dev *rt2x00dev,
struct rt2x00_led *led,
const char *name)
void rt2x00leds_register(struct rt2x00_dev *rt2x00dev)
static void rt2x00leds_unregister_led(struct rt2x00_led *led)
void rt2x00leds_unregister(struct rt2x00_dev *rt2x00dev)
static inline void rt2x00leds_suspend_led(struct rt2x00_led *led)
void rt2x00leds_suspend(struct rt2x00_dev *rt2x00dev)
static inline void rt2x00leds_resume_led(struct rt2x00_led *led)
void rt2x00leds_resume(struct rt2x00_dev *rt2x00dev)
