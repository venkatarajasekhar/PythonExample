#define _IPT_ECN_TARGET_H
#define IPT_ECN_IP_MASK	(~XT_DSCP_MASK)
#define IPT_ECN_OP_SET_IP	0x01
#define IPT_ECN_OP_SET_ECE	0x10
#define IPT_ECN_OP_SET_CWR	0x20
#define IPT_ECN_OP_MASK		0xce
struct ipt_ECN_info ;
