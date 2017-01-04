#define __LINUX_BRIDGE_EBT_IP6_H
#define EBT_IP6_SOURCE 0x01
#define EBT_IP6_DEST 0x02
#define EBT_IP6_TCLASS 0x04
#define EBT_IP6_PROTO 0x08
#define EBT_IP6_SPORT 0x10
#define EBT_IP6_DPORT 0x20
#define EBT_IP6_ICMP6 0x40
#define EBT_IP6_MASK (EBT_IP6_SOURCE | EBT_IP6_DEST | EBT_IP6_TCLASS |\
EBT_IP6_PROTO | EBT_IP6_SPORT | EBT_IP6_DPORT | \
EBT_IP6_ICMP6)
#define EBT_IP6_MATCH "ip6"
struct ebt_ip6_info ;
