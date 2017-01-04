#define _INPUT_MT_H
#define TRKID_MAX	0xffff
struct input_mt_slot ;
static inline void input_mt_set_value(struct input_mt_slot *slot,
unsigned code, int value)
static inline int input_mt_get_value(const struct input_mt_slot *slot,
unsigned code)
int input_mt_init_slots(struct input_dev *dev, unsigned int num_slots);
void input_mt_destroy_slots(struct input_dev *dev);
static inline int input_mt_new_trkid(struct input_dev *dev)
static inline void input_mt_slot(struct input_dev *dev, int slot)
static inline bool input_is_mt_axis(int axis)
void input_mt_report_slot_state(struct input_dev *dev,
unsigned int tool_type, bool active);
void input_mt_report_finger_count(struct input_dev *dev, int count);
void input_mt_report_pointer_emulation(struct input_dev *dev, bool use_count);