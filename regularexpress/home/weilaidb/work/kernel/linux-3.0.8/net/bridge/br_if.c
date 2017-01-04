static int port_cost(struct net_device *dev)
void br_port_carrier_check(struct net_bridge_port *p)
static void release_nbp(struct kobject *kobj)
static struct kobj_type brport_ktype = ;
static void destroy_nbp(struct net_bridge_port *p)
static void destroy_nbp_rcu(struct rcu_head *head)
static void del_nbp(struct net_bridge_port *p)
static void del_br(struct net_bridge *br, struct list_head *head)
static int find_portno(struct net_bridge *br)
static struct net_bridge_port *new_nbp(struct net_bridge *br,
struct net_device *dev)
int br_add_bridge(struct net *net, const char *name)
int br_del_bridge(struct net *net, const char *name)
int br_min_mtu(const struct net_bridge *br)
u32 br_features_recompute(struct net_bridge *br, u32 features)
int br_add_if(struct net_bridge *br, struct net_device *dev)
int br_del_if(struct net_bridge *br, struct net_device *dev)
void __net_exit br_net_exit(struct net *net)
