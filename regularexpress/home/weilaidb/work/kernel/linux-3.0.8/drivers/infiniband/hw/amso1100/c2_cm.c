int c2_llp_connect(struct iw_cm_id *cm_id, struct iw_cm_conn_param *iw_param)
int c2_llp_service_create(struct iw_cm_id *cm_id, int backlog)
int c2_llp_service_destroy(struct iw_cm_id *cm_id)
int c2_llp_accept(struct iw_cm_id *cm_id, struct iw_cm_conn_param *iw_param)
int c2_llp_reject(struct iw_cm_id *cm_id, const void *pdata, u8 pdata_len)