#define _LBS_MESH_H_
struct lbs_mesh_stats ;
struct net_device;
struct lbs_private;
int lbs_init_mesh(struct lbs_private *priv);
int lbs_deinit_mesh(struct lbs_private *priv);
int lbs_add_mesh(struct lbs_private *priv);
void lbs_remove_mesh(struct lbs_private *priv);
struct rxpd;
struct txpd;
struct net_device *lbs_mesh_set_dev(struct lbs_private *priv,
struct net_device *dev, struct rxpd *rxpd);
void lbs_mesh_set_txpd(struct lbs_private *priv,
struct net_device *dev, struct txpd *txpd);
struct cmd_ds_command;
struct cmd_ds_mesh_access;
struct cmd_ds_mesh_config;
int lbs_mesh_bt_add_del(struct lbs_private *priv, bool add, u8 *addr1);
int lbs_mesh_bt_reset(struct lbs_private *priv);
int lbs_mesh_bt_get_inverted(struct lbs_private *priv, bool *inverted);
int lbs_mesh_bt_set_inverted(struct lbs_private *priv, bool inverted);
int lbs_mesh_bt_get_entry(struct lbs_private *priv, u32 id, u8 *addr1);
int lbs_cmd_fwt_access(struct lbs_private *priv, u16 cmd_action,
struct cmd_ds_fwt_access *cmd);
int lbs_mesh_access(struct lbs_private *priv, uint16_t cmd_action,
struct cmd_ds_mesh_access *cmd);
int lbs_mesh_config_send(struct lbs_private *priv,
struct cmd_ds_mesh_config *cmd,
uint16_t action, uint16_t type);
int lbs_mesh_config(struct lbs_private *priv, uint16_t enable, uint16_t chan);
void lbs_persist_config_init(struct net_device *net);
void lbs_persist_config_remove(struct net_device *net);
struct ethtool_stats;
void lbs_mesh_ethtool_get_stats(struct net_device *dev,
struct ethtool_stats *stats, uint64_t *data);
int lbs_mesh_ethtool_get_sset_count(struct net_device *dev, int sset);
void lbs_mesh_ethtool_get_strings(struct net_device *dev,
uint32_t stringset, uint8_t *s);
#define lbs_mesh_open(priv) (priv->mesh_open)
#define lbs_mesh_connected(priv) (priv->mesh_connect_status == LBS_CONNECTED)
#define lbs_init_mesh(priv)
#define lbs_deinit_mesh(priv)
#define lbs_add_mesh(priv)
#define lbs_remove_mesh(priv)
#define lbs_mesh_set_dev(priv, dev, rxpd) (dev)
#define lbs_mesh_set_txpd(priv, dev, txpd)
#define lbs_mesh_config(priv, enable, chan)
#define lbs_mesh_open(priv) (0)
#define lbs_mesh_connected(priv) (0)
