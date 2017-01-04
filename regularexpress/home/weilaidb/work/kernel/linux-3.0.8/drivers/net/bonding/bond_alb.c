#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define __long_aligned __attribute__((aligned((sizeof(long)))))
static const u8 mac_bcast[ETH_ALEN] __long_aligned = ;
static const u8 mac_v6_allmcast[ETH_ALEN] __long_aligned = ;
static const int alb_delta_in_ticks = HZ / ALB_TIMER_TICKS_PER_SEC;
struct learning_pkt ;
struct arp_pkt ;
static inline struct arp_pkt *arp_pkt(const struct sk_buff *skb)
static void alb_send_learning_packets(struct slave *slave, u8 mac_addr[]);
static inline u8 _simple_hash(const u8 *hash_start, int hash_size)
static inline void _lock_tx_hashtbl(struct bonding *bond)
static inline void _unlock_tx_hashtbl(struct bonding *bond)
static inline void tlb_init_table_entry(struct tlb_client_info *entry, int save_load)
static inline void tlb_init_slave(struct slave *slave)
static void tlb_clear_slave(struct bonding *bond, struct slave *slave, int save_load)
static int tlb_initialize(struct bonding *bond)
static void tlb_deinitialize(struct bonding *bond)
static long long compute_gap(struct slave *slave)
static struct slave *tlb_get_least_loaded_slave(struct bonding *bond)
static struct slave *tlb_choose_channel(struct bonding *bond, u32 hash_index, u32 skb_len)
static inline void _lock_rx_hashtbl(struct bonding *bond)
static inline void _unlock_rx_hashtbl(struct bonding *bond)
static void rlb_update_entry_from_arp(struct bonding *bond, struct arp_pkt *arp)
static void rlb_arp_recv(struct sk_buff *skb, struct bonding *bond,
struct slave *slave)
static struct slave *rlb_next_rx_slave(struct bonding *bond)
static void rlb_teach_disabled_mac_on_primary(struct bonding *bond, u8 addr[])
static void rlb_clear_slave(struct bonding *bond, struct slave *slave)
static void rlb_update_client(struct rlb_client_info *client_info)
static void rlb_update_rx_clients(struct bonding *bond)
static void rlb_req_update_slave_clients(struct bonding *bond, struct slave *slave)
static void rlb_req_update_subnet_clients(struct bonding *bond, __be32 src_ip)
static struct slave *rlb_choose_channel(struct sk_buff *skb, struct bonding *bond)
static struct slave *rlb_arp_xmit(struct sk_buff *skb, struct bonding *bond)
static void rlb_rebalance(struct bonding *bond)
static void rlb_init_table_entry(struct rlb_client_info *entry)
static int rlb_initialize(struct bonding *bond)
static void rlb_deinitialize(struct bonding *bond)
static void rlb_clear_vlan(struct bonding *bond, unsigned short vlan_id)
static void alb_send_learning_packets(struct slave *slave, u8 mac_addr[])
static int alb_set_slave_mac_addr(struct slave *slave, u8 addr[], int hw)
static void alb_swap_mac_addr(struct bonding *bond, struct slave *slave1, struct slave *slave2)
static void alb_fasten_mac_swap(struct bonding *bond, struct slave *slave1,
struct slave *slave2)
static void alb_change_hw_addr_on_detach(struct bonding *bond, struct slave *slave)
static int alb_handle_addr_collision_on_attach(struct bonding *bond, struct slave *slave)
static int alb_set_mac_address(struct bonding *bond, void *addr)
int bond_alb_initialize(struct bonding *bond, int rlb_enabled)
void bond_alb_deinitialize(struct bonding *bond)
int bond_alb_xmit(struct sk_buff *skb, struct net_device *bond_dev)
void bond_alb_monitor(struct work_struct *work)
int bond_alb_init_slave(struct bonding *bond, struct slave *slave)
void bond_alb_deinit_slave(struct bonding *bond, struct slave *slave)
void bond_alb_handle_link_change(struct bonding *bond, struct slave *slave, char link)
void bond_alb_handle_active_change(struct bonding *bond, struct slave *new_slave)
__releases(&bond->curr_slave_lock)
__releases(&bond->lock)
__acquires(&bond->lock)
__acquires(&bond->curr_slave_lock)
int bond_alb_set_mac_address(struct net_device *bond_dev, void *addr)
__acquires(&bond->lock)
__releases(&bond->lock)
void bond_alb_clear_vlan(struct bonding *bond, unsigned short vlan_id)