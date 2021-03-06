#define USERMODE_ADDR   PAGE_OFFSET
#define MAILBOX_IRQ INT_MAIL_MPU_IRQ
static int create_chirp_list(struct list_head *list, u32 chirps);
static void free_chirp_list(struct list_head *list);
static int search_free_channel(struct chnl_mgr *chnl_mgr_obj,
u32 *chnl);
int bridge_chnl_add_io_req(struct chnl_object *chnl_obj, void *host_buf,
u32 byte_size, u32 buf_size,
u32 dw_dsp_addr, u32 dw_arg)
int bridge_chnl_cancel_io(struct chnl_object *chnl_obj)
int bridge_chnl_close(struct chnl_object *chnl_obj)
int bridge_chnl_create(struct chnl_mgr **channel_mgr,
struct dev_object *hdev_obj,
const struct chnl_mgrattrs *mgr_attrts)
int bridge_chnl_destroy(struct chnl_mgr *hchnl_mgr)
int bridge_chnl_flush_io(struct chnl_object *chnl_obj, u32 timeout)
int bridge_chnl_get_info(struct chnl_object *chnl_obj,
struct chnl_info *channel_info)
int bridge_chnl_get_ioc(struct chnl_object *chnl_obj, u32 timeout,
struct chnl_ioc *chan_ioc)
int bridge_chnl_get_mgr_info(struct chnl_mgr *hchnl_mgr, u32 ch_id,
struct chnl_mgrinfo *mgr_info)
int bridge_chnl_idle(struct chnl_object *chnl_obj, u32 timeout,
bool flush_data)
int bridge_chnl_open(struct chnl_object **chnl,
struct chnl_mgr *hchnl_mgr, s8 chnl_mode,
u32 ch_id, const struct chnl_attr *pattrs)
int bridge_chnl_register_notify(struct chnl_object *chnl_obj,
u32 event_mask, u32 notify_type,
struct dsp_notification *hnotification)
static int create_chirp_list(struct list_head *list, u32 chirps)
static void free_chirp_list(struct list_head *chirp_list)
static int search_free_channel(struct chnl_mgr *chnl_mgr_obj,
u32 *chnl)
