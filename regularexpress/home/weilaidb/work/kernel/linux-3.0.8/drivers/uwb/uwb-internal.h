#define __UWB_INTERNAL_H__
struct uwb_beca_e;
extern void uwb_dev_init(struct uwb_dev *uwb_dev);
extern int __uwb_dev_offair(struct uwb_dev *, struct uwb_rc *);
extern int uwb_dev_add(struct uwb_dev *uwb_dev, struct device *parent_dev,
struct uwb_rc *parent_rc);
extern void uwb_dev_rm(struct uwb_dev *uwb_dev);
extern void uwbd_dev_onair(struct uwb_rc *, struct uwb_beca_e *);
extern void uwbd_dev_offair(struct uwb_beca_e *);
void uwb_notify(struct uwb_rc *rc, struct uwb_dev *uwb_dev, enum uwb_notifs event);
extern struct uwb_rc *__uwb_rc_try_get(struct uwb_rc *);
static inline struct uwb_rc *__uwb_rc_get(struct uwb_rc *rc)
static inline void __uwb_rc_put(struct uwb_rc *rc)
extern int uwb_rc_reset(struct uwb_rc *rc);
extern int uwb_rc_beacon(struct uwb_rc *rc,
int channel, unsigned bpst_offset);
extern int uwb_rc_scan(struct uwb_rc *rc,
unsigned channel, enum uwb_scan_type type,
unsigned bpst_offset);
extern int uwb_rc_send_all_drp_ie(struct uwb_rc *rc);
void uwb_rc_ie_init(struct uwb_rc *);
int uwb_rc_ie_setup(struct uwb_rc *);
void uwb_rc_ie_release(struct uwb_rc *);
int uwb_ie_dump_hex(const struct uwb_ie_hdr *ies, size_t len,
char *buf, size_t size);
int uwb_rc_set_ie(struct uwb_rc *, struct uwb_rc_cmd_set_ie *);
extern const char *uwb_rc_strerror(unsigned code);
#define UWB_RC_CMD_TIMEOUT_MS 1000
struct uwb_rc_neh;
extern int uwb_rc_cmd_async(struct uwb_rc *rc, const char *cmd_name,
struct uwb_rccb *cmd, size_t cmd_size,
u8 expected_type, u16 expected_event,
uwb_rc_cmd_cb_f cb, void *arg);
void uwb_rc_neh_create(struct uwb_rc *rc);
void uwb_rc_neh_destroy(struct uwb_rc *rc);
struct uwb_rc_neh *uwb_rc_neh_add(struct uwb_rc *rc, struct uwb_rccb *cmd,
u8 expected_type, u16 expected_event,
uwb_rc_cmd_cb_f cb, void *arg);
void uwb_rc_neh_rm(struct uwb_rc *rc, struct uwb_rc_neh *neh);
void uwb_rc_neh_arm(struct uwb_rc *rc, struct uwb_rc_neh *neh);
void uwb_rc_neh_put(struct uwb_rc_neh *neh);
extern int uwb_est_create(void);
extern void uwb_est_destroy(void);
struct uwb_cnflt_alien ;
enum uwb_uwb_rsv_alloc_result ;
enum uwb_rsv_mas_status ;
struct uwb_rsv_col_set_info ;
struct uwb_rsv_col_info ;
struct uwb_rsv_row_info ;
struct uwb_rsv_alloc_info ;
int uwb_rsv_find_best_allocation(struct uwb_rsv *rsv, struct uwb_mas_bm *available,
struct uwb_mas_bm *result);
void uwb_rsv_handle_drp_avail_change(struct uwb_rc *rc);
enum uwb_event_type ;
struct uwb_event_notif ;
enum uwb_event_message ;
struct uwb_event ;
extern void uwbd_start(struct uwb_rc *rc);
extern void uwbd_stop(struct uwb_rc *rc);
extern struct uwb_event *uwb_event_alloc(size_t, gfp_t gfp_mask);
extern void uwbd_event_queue(struct uwb_event *);
void uwbd_flush(struct uwb_rc *rc);
extern int uwbd_evt_handle_rc_ie_rcv(struct uwb_event *);
extern int uwbd_evt_handle_rc_beacon(struct uwb_event *);
extern int uwbd_evt_handle_rc_beacon_size(struct uwb_event *);
extern int uwbd_evt_handle_rc_bpoie_change(struct uwb_event *);
extern int uwbd_evt_handle_rc_bp_slot_change(struct uwb_event *);
extern int uwbd_evt_handle_rc_drp(struct uwb_event *);
extern int uwbd_evt_handle_rc_drp_avail(struct uwb_event *);
int uwbd_msg_handle_reset(struct uwb_event *evt);
int uwb_rc_dev_addr_assign(struct uwb_rc *rc);
int uwbd_evt_handle_rc_dev_addr_conflict(struct uwb_event *evt);
extern unsigned long beacon_timeout_ms;
struct uwb_beca_e ;
struct uwb_beacon_frame;
extern ssize_t uwb_bce_print_IEs(struct uwb_dev *, struct uwb_beca_e *,
char *, size_t);
extern void uwb_bce_kfree(struct kref *_bce);
static inline void uwb_bce_get(struct uwb_beca_e *bce)
static inline void uwb_bce_put(struct uwb_beca_e *bce)
extern void uwb_beca_purge(struct uwb_rc *rc);
extern void uwb_beca_release(struct uwb_rc *rc);
struct uwb_dev *uwb_dev_get_by_devaddr(struct uwb_rc *rc,
const struct uwb_dev_addr *devaddr);
struct uwb_dev *uwb_dev_get_by_macaddr(struct uwb_rc *rc,
const struct uwb_mac_addr *macaddr);
int uwb_radio_setup(struct uwb_rc *rc);
void uwb_radio_reset_state(struct uwb_rc *rc);
void uwb_radio_shutdown(struct uwb_rc *rc);
int uwb_radio_force_channel(struct uwb_rc *rc, int channel);
extern struct class uwb_rc_class;
extern struct device_attribute dev_attr_mac_address;
extern struct device_attribute dev_attr_beacon;
extern struct device_attribute dev_attr_scan;
void uwb_rsv_init(struct uwb_rc *rc);
int uwb_rsv_setup(struct uwb_rc *rc);
void uwb_rsv_cleanup(struct uwb_rc *rc);
void uwb_rsv_remove_all(struct uwb_rc *rc);
void uwb_rsv_get(struct uwb_rsv *rsv);
void uwb_rsv_put(struct uwb_rsv *rsv);
bool uwb_rsv_has_two_drp_ies(struct uwb_rsv *rsv);
void uwb_rsv_dump(char *text, struct uwb_rsv *rsv);
int uwb_rsv_try_move(struct uwb_rsv *rsv, struct uwb_mas_bm *available);
void uwb_rsv_backoff_win_timer(unsigned long arg);
void uwb_rsv_backoff_win_increment(struct uwb_rc *rc);
int uwb_rsv_status(struct uwb_rsv *rsv);
int uwb_rsv_companion_status(struct uwb_rsv *rsv);
void uwb_rsv_set_state(struct uwb_rsv *rsv, enum uwb_rsv_state new_state);
void uwb_rsv_remove(struct uwb_rsv *rsv);
struct uwb_rsv *uwb_rsv_find(struct uwb_rc *rc, struct uwb_dev *src,
struct uwb_ie_drp *drp_ie);
void uwb_rsv_sched_update(struct uwb_rc *rc);
void uwb_rsv_queue_update(struct uwb_rc *rc);
int uwb_drp_ie_update(struct uwb_rsv *rsv);
void uwb_drp_ie_to_bm(struct uwb_mas_bm *bm, const struct uwb_ie_drp *drp_ie);
void uwb_drp_avail_init(struct uwb_rc *rc);
void uwb_drp_available(struct uwb_rc *rc, struct uwb_mas_bm *avail);
int  uwb_drp_avail_reserve_pending(struct uwb_rc *rc, struct uwb_mas_bm *mas);
void uwb_drp_avail_reserve(struct uwb_rc *rc, struct uwb_mas_bm *mas);
void uwb_drp_avail_release(struct uwb_rc *rc, struct uwb_mas_bm *mas);
void uwb_drp_avail_ie_update(struct uwb_rc *rc);
void uwb_rc_pal_init(struct uwb_rc *rc);
extern ssize_t uwb_mac_frame_hdr_print(char *, size_t,
const struct uwb_mac_frame_hdr *);
void uwb_dbg_init(void);
void uwb_dbg_exit(void);
void uwb_dbg_add_rc(struct uwb_rc *rc);
void uwb_dbg_del_rc(struct uwb_rc *rc);
struct dentry *uwb_dbg_create_pal_dir(struct uwb_pal *pal);
static inline void uwb_dev_lock(struct uwb_dev *uwb_dev)
static inline void uwb_dev_unlock(struct uwb_dev *uwb_dev)
