void
Dot11d_Init(struct ieee80211_device *ieee)
void
Dot11d_Reset(struct ieee80211_device *ieee)
void
Dot11d_UpdateCountryIe(
struct ieee80211_device *dev,
u8 *		pTaddr,
u16	CoutryIeLen,
u8 * pCoutryIe
)
u8
DOT11D_GetMaxTxPwrInDbm(
struct ieee80211_device *dev,
u8 Channel
)
void
DOT11D_ScanComplete(
struct ieee80211_device * dev
)
int IsLegalChannel(
struct ieee80211_device * dev,
u8 channel
)
int ToLegalChannel(
struct ieee80211_device * dev,
u8 channel
)
EXPORT_SYMBOL(Dot11d_Init);
EXPORT_SYMBOL(Dot11d_Reset);
EXPORT_SYMBOL(Dot11d_UpdateCountryIe);
EXPORT_SYMBOL(DOT11D_GetMaxTxPwrInDbm);
EXPORT_SYMBOL(DOT11D_ScanComplete);
EXPORT_SYMBOL(IsLegalChannel);
EXPORT_SYMBOL(ToLegalChannel);
