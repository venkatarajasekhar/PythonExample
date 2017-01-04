static void mlx4_en_vlan_rx_register(struct net_device *dev, struct vlan_group *grp)
static void mlx4_en_vlan_rx_add_vid(struct net_device *dev, unsigned short vid)
static void mlx4_en_vlan_rx_kill_vid(struct net_device *dev, unsigned short vid)
u64 mlx4_en_mac_to_u64(u8 *addr)
static int mlx4_en_set_mac(struct net_device *dev, void *addr)
static void mlx4_en_do_set_mac(struct work_struct *work)
static void mlx4_en_clear_list(struct net_device *dev)
static void mlx4_en_cache_mclist(struct net_device *dev)
static void mlx4_en_set_multicast(struct net_device *dev)
static void mlx4_en_do_set_multicast(struct work_struct *work)
static void mlx4_en_netpoll(struct net_device *dev)
static void mlx4_en_tx_timeout(struct net_device *dev)
static struct net_device_stats *mlx4_en_get_stats(struct net_device *dev)
static void mlx4_en_set_default_moderation(struct mlx4_en_priv *priv)
static void mlx4_en_auto_moderation(struct mlx4_en_priv *priv)
static void mlx4_en_do_get_stats(struct work_struct *work)
static void mlx4_en_linkstate(struct work_struct *work)
int mlx4_en_start_port(struct net_device *dev)
void mlx4_en_stop_port(struct net_device *dev)
static void mlx4_en_restart(struct work_struct *work)
static int mlx4_en_open(struct net_device *dev)
static int mlx4_en_close(struct net_device *dev)
void mlx4_en_free_resources(struct mlx4_en_priv *priv, bool reserve_vectors)
int mlx4_en_alloc_resources(struct mlx4_en_priv *priv)
void mlx4_en_destroy_netdev(struct net_device *dev)
static int mlx4_en_change_mtu(struct net_device *dev, int new_mtu)
static const struct net_device_ops mlx4_netdev_ops = ;
int mlx4_en_init_netdev(struct mlx4_en_dev *mdev, int port,
struct mlx4_en_port_profile *prof)