static void pic_irq_request(struct kvm *kvm, int level);
static void pic_lock(struct kvm_pic *s)
__acquires(&s->lock)
static void pic_unlock(struct kvm_pic *s)
__releases(&s->lock)
static void pic_clear_isr(struct kvm_kpic_state *s, int irq)
static inline int pic_set_irq1(struct kvm_kpic_state *s, int irq, int level)
static inline int get_priority(struct kvm_kpic_state *s, int mask)
static int pic_get_irq(struct kvm_kpic_state *s)
static void pic_update_irq(struct kvm_pic *s)
void kvm_pic_update_irq(struct kvm_pic *s)
int kvm_pic_set_irq(void *opaque, int irq, int level)
static inline void pic_intack(struct kvm_kpic_state *s, int irq)
int kvm_pic_read_irq(struct kvm *kvm)
void kvm_pic_reset(struct kvm_kpic_state *s)
static void pic_ioport_write(void *opaque, u32 addr, u32 val)
static u32 pic_poll_read(struct kvm_kpic_state *s, u32 addr1)
static u32 pic_ioport_read(void *opaque, u32 addr1)
static void elcr_ioport_write(void *opaque, u32 addr, u32 val)
static u32 elcr_ioport_read(void *opaque, u32 addr1)
static int picdev_in_range(gpa_t addr)
static inline struct kvm_pic *to_pic(struct kvm_io_device *dev)
static int picdev_write(struct kvm_io_device *this,
gpa_t addr, int len, const void *val)
static int picdev_read(struct kvm_io_device *this,
gpa_t addr, int len, void *val)
static void pic_irq_request(struct kvm *kvm, int level)
static const struct kvm_io_device_ops picdev_ops = ;
struct kvm_pic *kvm_create_pic(struct kvm *kvm)
void kvm_destroy_pic(struct kvm *kvm)
