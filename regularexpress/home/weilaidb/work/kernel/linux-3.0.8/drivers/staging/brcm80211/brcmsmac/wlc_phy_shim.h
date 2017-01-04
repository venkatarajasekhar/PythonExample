#define _wlc_phy_shim_h_
#define RADAR_TYPE_NONE		0
#define RADAR_TYPE_ETSI_1	1
#define RADAR_TYPE_ETSI_2	2
#define RADAR_TYPE_ETSI_3	3
#define RADAR_TYPE_ITU_E	4
#define RADAR_TYPE_ITU_K	5
#define RADAR_TYPE_UNCLASSIFIED	6
#define RADAR_TYPE_BIN5		7
#define RADAR_TYPE_STG2 	8
#define RADAR_TYPE_STG3 	9
#define RADAR_TYPE_FRA		10
#define FRA_T1_20MHZ	52770
#define FRA_T2_20MHZ	61538
#define FRA_T3_20MHZ	66002
#define FRA_T1_40MHZ	105541
#define FRA_T2_40MHZ	123077
#define FRA_T3_40MHZ	132004
#define FRA_ERR_20MHZ	60
#define FRA_ERR_40MHZ	120
#define ANTSEL_NA		0
#define ANTSEL_2x4		1
#define ANTSEL_2x3		2
#define	ANT_RX_DIV_FORCE_0		0
#define	ANT_RX_DIV_FORCE_1		1
#define	ANT_RX_DIV_START_1		2
#define	ANT_RX_DIV_START_0		3
#define	ANT_RX_DIV_ENABLE		3
#define ANT_RX_DIV_DEF		ANT_RX_DIV_START_0
struct wlc_hw_info;
typedef struct wlc_phy_shim_info wlc_phy_shim_info_t;
extern wlc_phy_shim_info_t *wlc_phy_shim_attach(struct wlc_hw_info *wlc_hw,
void *wl, void *wlc);
extern void wlc_phy_shim_detach(wlc_phy_shim_info_t *physhim);
struct wlapi_timer;
extern struct wlapi_timer *wlapi_init_timer(wlc_phy_shim_info_t *physhim,
void (*fn) (void *arg), void *arg,
const char *name);
extern void wlapi_free_timer(wlc_phy_shim_info_t *physhim,
struct wlapi_timer *t);
extern void wlapi_add_timer(wlc_phy_shim_info_t *physhim,
struct wlapi_timer *t, uint ms, int periodic);
extern bool wlapi_del_timer(wlc_phy_shim_info_t *physhim,
struct wlapi_timer *t);
extern void wlapi_intrson(wlc_phy_shim_info_t *physhim);
extern u32 wlapi_intrsoff(wlc_phy_shim_info_t *physhim);
extern void wlapi_intrsrestore(wlc_phy_shim_info_t *physhim,
u32 macintmask);
extern void wlapi_bmac_write_shm(wlc_phy_shim_info_t *physhim, uint offset,
u16 v);
extern u16 wlapi_bmac_read_shm(wlc_phy_shim_info_t *physhim, uint offset);
extern void wlapi_bmac_mhf(wlc_phy_shim_info_t *physhim, u8 idx,
u16 mask, u16 val, int bands);
extern void wlapi_bmac_corereset(wlc_phy_shim_info_t *physhim, u32 flags);
extern void wlapi_suspend_mac_and_wait(wlc_phy_shim_info_t *physhim);
extern void wlapi_switch_macfreq(wlc_phy_shim_info_t *physhim, u8 spurmode);
extern void wlapi_enable_mac(wlc_phy_shim_info_t *physhim);
extern void wlapi_bmac_mctrl(wlc_phy_shim_info_t *physhim, u32 mask,
u32 val);
extern void wlapi_bmac_phy_reset(wlc_phy_shim_info_t *physhim);
extern void wlapi_bmac_bw_set(wlc_phy_shim_info_t *physhim, u16 bw);
extern void wlapi_bmac_phyclk_fgc(wlc_phy_shim_info_t *physhim, bool clk);
extern void wlapi_bmac_macphyclk_set(wlc_phy_shim_info_t *physhim, bool clk);
extern void wlapi_bmac_core_phypll_ctl(wlc_phy_shim_info_t *physhim, bool on);
extern void wlapi_bmac_core_phypll_reset(wlc_phy_shim_info_t *physhim);
extern void wlapi_bmac_ucode_wake_override_phyreg_set(wlc_phy_shim_info_t *
physhim);
extern void wlapi_bmac_ucode_wake_override_phyreg_clear(wlc_phy_shim_info_t *
physhim);
extern void wlapi_bmac_write_template_ram(wlc_phy_shim_info_t *physhim, int o,
int len, void *buf);
extern u16 wlapi_bmac_rate_shm_offset(wlc_phy_shim_info_t *physhim,
u8 rate);
extern void wlapi_ucode_sample_init(wlc_phy_shim_info_t *physhim);
extern void wlapi_copyfrom_objmem(wlc_phy_shim_info_t *physhim, uint,
void *buf, int, u32 sel);
extern void wlapi_copyto_objmem(wlc_phy_shim_info_t *physhim, uint,
const void *buf, int, u32);
extern void wlapi_high_update_phy_mode(wlc_phy_shim_info_t *physhim,
u32 phy_mode);
extern u16 wlapi_bmac_get_txant(wlc_phy_shim_info_t *physhim);
