enum ;
static struct intc_vect intca_vectors[] __initdata = ;
static struct intc_group intca_groups[] __initdata = ;
static struct intc_mask_reg intca_mask_registers[] __initdata = ;
static struct intc_prio_reg intca_prio_registers[] __initdata = ;
static struct intc_sense_reg intca_sense_registers[] __initdata = ;
static struct intc_mask_reg intca_ack_registers[] __initdata = ;
static DECLARE_INTC_DESC_ACK(intca_desc, "sh7372-intca",
intca_vectors, intca_groups,
intca_mask_registers, intca_prio_registers,
intca_sense_registers, intca_ack_registers);
enum ;
static struct intc_vect intcs_vectors[] = ;
static struct intc_group intcs_groups[] __initdata = ;
static struct intc_mask_reg intcs_mask_registers[] = ;
static struct intc_prio_reg intcs_prio_registers[] = ;
static struct resource intcs_resources[] __initdata = ;
static struct intc_desc intcs_desc __initdata = ;
static void intcs_demux(unsigned int irq, struct irq_desc *desc)
void __init sh7372_init_irq(void)
