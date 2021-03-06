#define __iwl_helpers_h__
#define IWL_MASK(lo, hi) ((1 << (hi)) | ((1 << (hi)) - (1 << (lo))))
static inline struct ieee80211_conf *ieee80211_get_hw_conf(
struct ieee80211_hw *hw)
static inline int iwl_queue_inc_wrap(int index, int n_bd)
static inline int iwl_queue_dec_wrap(int index, int n_bd)
static inline void iwl_set_swq_id(struct iwl_tx_queue *txq, u8 ac, u8 hwq)
static inline void iwl_wake_queue(struct iwl_priv *priv,
struct iwl_tx_queue *txq)
static inline void iwl_stop_queue(struct iwl_priv *priv,
struct iwl_tx_queue *txq)
static inline void iwl_wake_any_queue(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
#define ieee80211_stop_queue DO_NOT_USE_ieee80211_stop_queue
#define ieee80211_wake_queue DO_NOT_USE_ieee80211_wake_queue
static inline void iwl_disable_interrupts(struct iwl_priv *priv)
static inline void iwl_enable_rfkill_int(struct iwl_priv *priv)
static inline void iwl_enable_interrupts(struct iwl_priv *priv)
static inline u32 iwl_beacon_time_mask_low(struct iwl_priv *priv,
u16 tsf_bits)
static inline u32 iwl_beacon_time_mask_high(struct iwl_priv *priv,
u16 tsf_bits)
