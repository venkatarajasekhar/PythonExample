#define __RTL_CORE_H__
#define RTL_SUPPORTED_FILTERS		\
(FIF_PROMISC_IN_BSS | \
FIF_ALLMULTI | FIF_CONTROL | \
FIF_OTHER_BSS | \
FIF_FCSFAIL | \
FIF_BCN_PRBRESP_PROMISC)
#define RTL_SUPPORTED_CTRL_FILTER	0xFF
extern const struct ieee80211_ops rtl_ops;
