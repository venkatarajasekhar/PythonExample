enum ;
#define IRQ_PER_CPU		GOT_YOU_MORON
#define IRQ_NO_BALANCING	GOT_YOU_MORON
#define IRQ_LEVEL		GOT_YOU_MORON
#define IRQ_NOPROBE		GOT_YOU_MORON
#define IRQ_NOREQUEST		GOT_YOU_MORON
#define IRQ_NOTHREAD		GOT_YOU_MORON
#define IRQ_NOAUTOEN		GOT_YOU_MORON
#define IRQ_NESTED_THREAD	GOT_YOU_MORON
#undef IRQF_MODIFY_MASK
#define IRQF_MODIFY_MASK	GOT_YOU_MORON
static inline void
irq_settings_clr_and_set(struct irq_desc *desc, u32 clr, u32 set)
static inline bool irq_settings_is_per_cpu(struct irq_desc *desc)
static inline void irq_settings_set_per_cpu(struct irq_desc *desc)
static inline void irq_settings_set_no_balancing(struct irq_desc *desc)
static inline bool irq_settings_has_no_balance_set(struct irq_desc *desc)
static inline u32 irq_settings_get_trigger_mask(struct irq_desc *desc)
static inline void
irq_settings_set_trigger_mask(struct irq_desc *desc, u32 mask)
static inline bool irq_settings_is_level(struct irq_desc *desc)
static inline void irq_settings_clr_level(struct irq_desc *desc)
static inline void irq_settings_set_level(struct irq_desc *desc)
static inline bool irq_settings_can_request(struct irq_desc *desc)
static inline void irq_settings_clr_norequest(struct irq_desc *desc)
static inline void irq_settings_set_norequest(struct irq_desc *desc)
static inline bool irq_settings_can_thread(struct irq_desc *desc)
static inline void irq_settings_clr_nothread(struct irq_desc *desc)
static inline void irq_settings_set_nothread(struct irq_desc *desc)
static inline bool irq_settings_can_probe(struct irq_desc *desc)
static inline void irq_settings_clr_noprobe(struct irq_desc *desc)
static inline void irq_settings_set_noprobe(struct irq_desc *desc)
static inline bool irq_settings_can_move_pcntxt(struct irq_desc *desc)
static inline bool irq_settings_can_autoenable(struct irq_desc *desc)
static inline bool irq_settings_is_nested_thread(struct irq_desc *desc)
