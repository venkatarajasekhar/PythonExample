#define MTHCA_CMD_H
#define MTHCA_MAILBOX_SIZE 4096
enum ;
enum ;
enum ;
struct mthca_mailbox ;
struct mthca_dev_lim ;
struct mthca_adapter ;
struct mthca_init_hca_param ;
struct mthca_init_ib_param ;
struct mthca_set_ib_param ;
int mthca_cmd_init(struct mthca_dev *dev);
void mthca_cmd_cleanup(struct mthca_dev *dev);
int mthca_cmd_use_events(struct mthca_dev *dev);
void mthca_cmd_use_polling(struct mthca_dev *dev);
void mthca_cmd_event(struct mthca_dev *dev, u16 token,
u8  status, u64 out_param);
struct mthca_mailbox *mthca_alloc_mailbox(struct mthca_dev *dev,
gfp_t gfp_mask);
void mthca_free_mailbox(struct mthca_dev *dev, struct mthca_mailbox *mailbox);
int mthca_SYS_EN(struct mthca_dev *dev, u8 *status);
int mthca_SYS_DIS(struct mthca_dev *dev, u8 *status);
int mthca_MAP_FA(struct mthca_dev *dev, struct mthca_icm *icm, u8 *status);
int mthca_UNMAP_FA(struct mthca_dev *dev, u8 *status);
int mthca_RUN_FW(struct mthca_dev *dev, u8 *status);
int mthca_QUERY_FW(struct mthca_dev *dev, u8 *status);
int mthca_ENABLE_LAM(struct mthca_dev *dev, u8 *status);
int mthca_DISABLE_LAM(struct mthca_dev *dev, u8 *status);
int mthca_QUERY_DDR(struct mthca_dev *dev, u8 *status);
int mthca_QUERY_DEV_LIM(struct mthca_dev *dev,
struct mthca_dev_lim *dev_lim, u8 *status);
int mthca_QUERY_ADAPTER(struct mthca_dev *dev,
struct mthca_adapter *adapter, u8 *status);
int mthca_INIT_HCA(struct mthca_dev *dev,
struct mthca_init_hca_param *param,
u8 *status);
int mthca_INIT_IB(struct mthca_dev *dev,
struct mthca_init_ib_param *param,
int port, u8 *status);
int mthca_CLOSE_IB(struct mthca_dev *dev, int port, u8 *status);
int mthca_CLOSE_HCA(struct mthca_dev *dev, int panic, u8 *status);
int mthca_SET_IB(struct mthca_dev *dev, struct mthca_set_ib_param *param,
int port, u8 *status);
int mthca_MAP_ICM(struct mthca_dev *dev, struct mthca_icm *icm, u64 virt, u8 *status);
int mthca_MAP_ICM_page(struct mthca_dev *dev, u64 dma_addr, u64 virt, u8 *status);
int mthca_UNMAP_ICM(struct mthca_dev *dev, u64 virt, u32 page_count, u8 *status);
int mthca_MAP_ICM_AUX(struct mthca_dev *dev, struct mthca_icm *icm, u8 *status);
int mthca_UNMAP_ICM_AUX(struct mthca_dev *dev, u8 *status);
int mthca_SET_ICM_SIZE(struct mthca_dev *dev, u64 icm_size, u64 *aux_pages,
u8 *status);
int mthca_SW2HW_MPT(struct mthca_dev *dev, struct mthca_mailbox *mailbox,
int mpt_index, u8 *status);
int mthca_HW2SW_MPT(struct mthca_dev *dev, struct mthca_mailbox *mailbox,
int mpt_index, u8 *status);
int mthca_WRITE_MTT(struct mthca_dev *dev, struct mthca_mailbox *mailbox,
int num_mtt, u8 *status);
int mthca_SYNC_TPT(struct mthca_dev *dev, u8 *status);
int mthca_MAP_EQ(struct mthca_dev *dev, u64 event_mask, int unmap,
int eq_num, u8 *status);
int mthca_SW2HW_EQ(struct mthca_dev *dev, struct mthca_mailbox *mailbox,
int eq_num, u8 *status);
int mthca_HW2SW_EQ(struct mthca_dev *dev, struct mthca_mailbox *mailbox,
int eq_num, u8 *status);
int mthca_SW2HW_CQ(struct mthca_dev *dev, struct mthca_mailbox *mailbox,
int cq_num, u8 *status);
int mthca_HW2SW_CQ(struct mthca_dev *dev, struct mthca_mailbox *mailbox,
int cq_num, u8 *status);
int mthca_RESIZE_CQ(struct mthca_dev *dev, int cq_num, u32 lkey, u8 log_size,
u8 *status);
int mthca_SW2HW_SRQ(struct mthca_dev *dev, struct mthca_mailbox *mailbox,
int srq_num, u8 *status);
int mthca_HW2SW_SRQ(struct mthca_dev *dev, struct mthca_mailbox *mailbox,
int srq_num, u8 *status);
int mthca_QUERY_SRQ(struct mthca_dev *dev, u32 num,
struct mthca_mailbox *mailbox, u8 *status);
int mthca_ARM_SRQ(struct mthca_dev *dev, int srq_num, int limit, u8 *status);
int mthca_MODIFY_QP(struct mthca_dev *dev, enum ib_qp_state cur,
enum ib_qp_state next, u32 num, int is_ee,
struct mthca_mailbox *mailbox, u32 optmask,
u8 *status);
int mthca_QUERY_QP(struct mthca_dev *dev, u32 num, int is_ee,
struct mthca_mailbox *mailbox, u8 *status);
int mthca_CONF_SPECIAL_QP(struct mthca_dev *dev, int type, u32 qpn,
u8 *status);
int mthca_MAD_IFC(struct mthca_dev *dev, int ignore_mkey, int ignore_bkey,
int port, struct ib_wc *in_wc, struct ib_grh *in_grh,
void *in_mad, void *response_mad, u8 *status);
int mthca_READ_MGM(struct mthca_dev *dev, int index,
struct mthca_mailbox *mailbox, u8 *status);
int mthca_WRITE_MGM(struct mthca_dev *dev, int index,
struct mthca_mailbox *mailbox, u8 *status);
int mthca_MGID_HASH(struct mthca_dev *dev, struct mthca_mailbox *mailbox,
u16 *hash, u8 *status);
int mthca_NOP(struct mthca_dev *dev, u8 *status);
