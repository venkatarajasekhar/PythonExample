#define _NF_CONNTRACK_IRC_H
#define IRC_PORT	6667
extern unsigned int (*nf_nat_irc_hook)(struct sk_buff *skb,
enum ip_conntrack_info ctinfo,
unsigned int matchoff,
unsigned int matchlen,
struct nf_conntrack_expect *exp);
