#define CHNL_
extern int chnl_create(struct chnl_mgr **channel_mgr,
struct dev_object *hdev_obj,
const struct chnl_mgrattrs *mgr_attrts);
extern int chnl_destroy(struct chnl_mgr *hchnl_mgr);
extern void chnl_exit(void);
extern bool chnl_init(void);
