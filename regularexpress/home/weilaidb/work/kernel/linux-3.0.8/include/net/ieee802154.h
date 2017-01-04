#define NET_IEEE802154_H
#define IEEE802154_FC_TYPE_BEACON	0x0
#define	IEEE802154_FC_TYPE_DATA		0x1
#define IEEE802154_FC_TYPE_ACK		0x2
#define IEEE802154_FC_TYPE_MAC_CMD	0x3
#define IEEE802154_FC_TYPE_SHIFT		0
#define IEEE802154_FC_TYPE_MASK		((1 << 3) - 1)
#define IEEE802154_FC_TYPE(x)		((x & IEEE802154_FC_TYPE_MASK) >> IEEE802154_FC_TYPE_SHIFT)
#define IEEE802154_FC_SET_TYPE(v, x)	do  while (0)
#define IEEE802154_FC_SECEN		(1 << 3)
#define IEEE802154_FC_FRPEND		(1 << 4)
#define IEEE802154_FC_ACK_REQ		(1 << 5)
#define IEEE802154_FC_INTRA_PAN		(1 << 6)
#define IEEE802154_FC_SAMODE_SHIFT	14
#define IEEE802154_FC_SAMODE_MASK	(3 << IEEE802154_FC_SAMODE_SHIFT)
#define IEEE802154_FC_DAMODE_SHIFT	10
#define IEEE802154_FC_DAMODE_MASK	(3 << IEEE802154_FC_DAMODE_SHIFT)
#define IEEE802154_FC_SAMODE(x)		\
(((x) & IEEE802154_FC_SAMODE_MASK) >> IEEE802154_FC_SAMODE_SHIFT)
#define IEEE802154_FC_DAMODE(x)		\
(((x) & IEEE802154_FC_DAMODE_MASK) >> IEEE802154_FC_DAMODE_SHIFT)
#define IEEE802154_CMD_ASSOCIATION_REQ		0x01
#define IEEE802154_CMD_ASSOCIATION_RESP		0x02
#define IEEE802154_CMD_DISASSOCIATION_NOTIFY	0x03
#define IEEE802154_CMD_DATA_REQ			0x04
#define IEEE802154_CMD_PANID_CONFLICT_NOTIFY	0x05
#define IEEE802154_CMD_ORPHAN_NOTIFY		0x06
#define IEEE802154_CMD_BEACON_REQ		0x07
#define IEEE802154_CMD_COORD_REALIGN_NOTIFY	0x08
#define IEEE802154_CMD_GTS_REQ			0x09
enum ;