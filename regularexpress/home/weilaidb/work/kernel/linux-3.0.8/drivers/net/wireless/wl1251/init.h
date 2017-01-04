#define __WL1251_INIT_H__
enum ;
#define CWMIN_BK  15
#define CWMIN_BE  15
#define CWMIN_VI  7
#define CWMIN_VO  3
#define CWMAX_BK  1023
#define CWMAX_BE  63
#define CWMAX_VI  15
#define CWMAX_VO  7
#define AIFS_PIFS 1
#define AIFS_DIFS 2
#define AIFSN_BK  7
#define AIFSN_BE  3
#define AIFSN_VI  AIFS_PIFS
#define AIFSN_VO  AIFS_PIFS
#define TXOP_BK   0
#define TXOP_BE   0
#define TXOP_VI   3008
#define TXOP_VO   1504
int wl1251_hw_init_hwenc_config(struct wl1251 *wl);
int wl1251_hw_init_templates_config(struct wl1251 *wl);
int wl1251_hw_init_rx_config(struct wl1251 *wl, u32 config, u32 filter);
int wl1251_hw_init_phy_config(struct wl1251 *wl);
int wl1251_hw_init_beacon_filter(struct wl1251 *wl);
int wl1251_hw_init_pta(struct wl1251 *wl);
int wl1251_hw_init_energy_detection(struct wl1251 *wl);
int wl1251_hw_init_beacon_broadcast(struct wl1251 *wl);
int wl1251_hw_init_power_auth(struct wl1251 *wl);
int wl1251_hw_init_mem_config(struct wl1251 *wl);
int wl1251_hw_init(struct wl1251 *wl);
