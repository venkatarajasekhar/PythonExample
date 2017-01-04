static int br_is_designated_for_some_port(const struct net_bridge *br)
static void br_hello_timer_expired(unsigned long arg)
static void br_message_age_timer_expired(unsigned long arg)
static void br_forward_delay_timer_expired(unsigned long arg)
static void br_tcn_timer_expired(unsigned long arg)
static void br_topology_change_timer_expired(unsigned long arg)
static void br_hold_timer_expired(unsigned long arg)
void br_stp_timer_init(struct net_bridge *br)
void br_stp_port_timer_init(struct net_bridge_port *p)
unsigned long br_timer_value(const struct timer_list *timer)
