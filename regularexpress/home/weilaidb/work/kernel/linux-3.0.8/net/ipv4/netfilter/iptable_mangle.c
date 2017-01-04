MODULE_LICENSE("GPL");
MODULE_AUTHOR("Netfilter Core Team <coreteam@netfilter.org>");
MODULE_DESCRIPTION("iptables mangle table");
#define MANGLE_VALID_HOOKS ((1 << NF_INET_PRE_ROUTING) | \
(1 << NF_INET_LOCAL_IN) | \
(1 << NF_INET_FORWARD) | \
(1 << NF_INET_LOCAL_OUT) | \
(1 << NF_INET_POST_ROUTING))
static const struct xt_table packet_mangler = ;
static unsigned int
ipt_mangle_out(struct sk_buff *skb, const struct net_device *out)
static unsigned int
iptable_mangle_hook(unsigned int hook,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static struct nf_hook_ops *mangle_ops __read_mostly;
static int __net_init iptable_mangle_net_init(struct net *net)
static void __net_exit iptable_mangle_net_exit(struct net *net)
static struct pernet_operations iptable_mangle_net_ops = ;
static int __init iptable_mangle_init(void)
static void __exit iptable_mangle_fini(void)
module_init(iptable_mangle_init);
module_exit(iptable_mangle_fini);
