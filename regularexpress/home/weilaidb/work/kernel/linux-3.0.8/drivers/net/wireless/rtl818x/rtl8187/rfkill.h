#define RTL8187_RFKILL_H
void rtl8187_rfkill_init(struct ieee80211_hw *hw);
void rtl8187_rfkill_poll(struct ieee80211_hw *hw);
void rtl8187_rfkill_exit(struct ieee80211_hw *hw);
