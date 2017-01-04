#define WAIT_FOR_BBP(__dev, __reg) \
rt2x00pci_regbusy_read((__dev), BBPCSR, BBPCSR_BUSY, (__reg))
#define WAIT_FOR_RF(__dev, __reg) \
rt2x00pci_regbusy_read((__dev), RFCSR, RFCSR_BUSY, (__reg))
static void rt2500pci_bbp_write(struct rt2x00_dev *rt2x00dev,
const unsigned int word, const u8 value)
static void rt2500pci_bbp_read(struct rt2x00_dev *rt2x00dev,
const unsigned int word, u8 *value)
static void rt2500pci_rf_write(struct rt2x00_dev *rt2x00dev,
const unsigned int word, const u32 value)
static void rt2500pci_eepromregister_read(struct eeprom_93cx6 *eeprom)
static void rt2500pci_eepromregister_write(struct eeprom_93cx6 *eeprom)
static const struct rt2x00debug rt2500pci_rt2x00debug = ;
static int rt2500pci_rfkill_poll(struct rt2x00_dev *rt2x00dev)
static void rt2500pci_brightness_set(struct led_classdev *led_cdev,
enum led_brightness brightness)
static int rt2500pci_blink_set(struct led_classdev *led_cdev,
unsigned long *delay_on,
unsigned long *delay_off)
static void rt2500pci_init_led(struct rt2x00_dev *rt2x00dev,
struct rt2x00_led *led,
enum led_type type)
static void rt2500pci_config_filter(struct rt2x00_dev *rt2x00dev,
const unsigned int filter_flags)
static void rt2500pci_config_intf(struct rt2x00_dev *rt2x00dev,
struct rt2x00_intf *intf,
struct rt2x00intf_conf *conf,
const unsigned int flags)
static void rt2500pci_config_erp(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_erp *erp,
u32 changed)
static void rt2500pci_config_ant(struct rt2x00_dev *rt2x00dev,
struct antenna_setup *ant)
static void rt2500pci_config_channel(struct rt2x00_dev *rt2x00dev,
struct rf_channel *rf, const int txpower)
static void rt2500pci_config_txpower(struct rt2x00_dev *rt2x00dev,
const int txpower)
static void rt2500pci_config_retry_limit(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_conf *libconf)
static void rt2500pci_config_ps(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_conf *libconf)
static void rt2500pci_config(struct rt2x00_dev *rt2x00dev,
struct rt2x00lib_conf *libconf,
const unsigned int flags)
static void rt2500pci_link_stats(struct rt2x00_dev *rt2x00dev,
struct link_qual *qual)
static inline void rt2500pci_set_vgc(struct rt2x00_dev *rt2x00dev,
struct link_qual *qual, u8 vgc_level)
static void rt2500pci_reset_tuner(struct rt2x00_dev *rt2x00dev,
struct link_qual *qual)
static void rt2500pci_link_tuner(struct rt2x00_dev *rt2x00dev,
struct link_qual *qual, const u32 count)
static void rt2500pci_start_queue(struct data_queue *queue)
static void rt2500pci_kick_queue(struct data_queue *queue)
static void rt2500pci_stop_queue(struct data_queue *queue)
static bool rt2500pci_get_entry_state(struct queue_entry *entry)
static void rt2500pci_clear_entry(struct queue_entry *entry)
static int rt2500pci_init_queues(struct rt2x00_dev *rt2x00dev)
static int rt2500pci_init_registers(struct rt2x00_dev *rt2x00dev)
static int rt2500pci_wait_bbp_ready(struct rt2x00_dev *rt2x00dev)
static int rt2500pci_init_bbp(struct rt2x00_dev *rt2x00dev)
static void rt2500pci_toggle_irq(struct rt2x00_dev *rt2x00dev,
enum dev_state state)
static int rt2500pci_enable_radio(struct rt2x00_dev *rt2x00dev)
static void rt2500pci_disable_radio(struct rt2x00_dev *rt2x00dev)
static int rt2500pci_set_state(struct rt2x00_dev *rt2x00dev,
enum dev_state state)
static int rt2500pci_set_device_state(struct rt2x00_dev *rt2x00dev,
enum dev_state state)
static void rt2500pci_write_tx_desc(struct queue_entry *entry,
struct txentry_desc *txdesc)
static void rt2500pci_write_beacon(struct queue_entry *entry,
struct txentry_desc *txdesc)
static void rt2500pci_fill_rxdone(struct queue_entry *entry,
struct rxdone_entry_desc *rxdesc)
static void rt2500pci_txdone(struct rt2x00_dev *rt2x00dev,
const enum data_queue_qid queue_idx)
static inline void rt2500pci_enable_interrupt(struct rt2x00_dev *rt2x00dev,
struct rt2x00_field32 irq_field)
static void rt2500pci_txstatus_tasklet(unsigned long data)
static void rt2500pci_tbtt_tasklet(unsigned long data)
static void rt2500pci_rxdone_tasklet(unsigned long data)
static irqreturn_t rt2500pci_interrupt(int irq, void *dev_instance)
static int rt2500pci_validate_eeprom(struct rt2x00_dev *rt2x00dev)
static int rt2500pci_init_eeprom(struct rt2x00_dev *rt2x00dev)
static const struct rf_channel rf_vals_bg_2522[] = ;
static const struct rf_channel rf_vals_bg_2523[] = ;
static const struct rf_channel rf_vals_bg_2524[] = ;
static const struct rf_channel rf_vals_bg_2525[] = ;
static const struct rf_channel rf_vals_bg_2525e[] = ;
static const struct rf_channel rf_vals_5222[] = ;
static int rt2500pci_probe_hw_mode(struct rt2x00_dev *rt2x00dev)
static int rt2500pci_probe_hw(struct rt2x00_dev *rt2x00dev)
static u64 rt2500pci_get_tsf(struct ieee80211_hw *hw)
static int rt2500pci_tx_last_beacon(struct ieee80211_hw *hw)
static const struct ieee80211_ops rt2500pci_mac80211_ops = ;
static const struct rt2x00lib_ops rt2500pci_rt2x00_ops = ;
static const struct data_queue_desc rt2500pci_queue_rx = ;
static const struct data_queue_desc rt2500pci_queue_tx = ;
static const struct data_queue_desc rt2500pci_queue_bcn = ;
static const struct data_queue_desc rt2500pci_queue_atim = ;
static const struct rt2x00_ops rt2500pci_ops = ;
static DEFINE_PCI_DEVICE_TABLE(rt2500pci_device_table) = ;
MODULE_AUTHOR(DRV_PROJECT);
MODULE_VERSION(DRV_VERSION);
MODULE_DESCRIPTION("Ralink RT2500 PCI & PCMCIA Wireless LAN driver.");
MODULE_SUPPORTED_DEVICE("Ralink RT2560 PCI & PCMCIA chipset based cards");
MODULE_DEVICE_TABLE(pci, rt2500pci_device_table);
MODULE_LICENSE("GPL");
static int rt2500pci_probe(struct pci_dev *pci_dev,
const struct pci_device_id *id)
static struct pci_driver rt2500pci_driver = ;
static int __init rt2500pci_init(void)
static void __exit rt2500pci_exit(void)
module_init(rt2500pci_init);
module_exit(rt2500pci_exit);
