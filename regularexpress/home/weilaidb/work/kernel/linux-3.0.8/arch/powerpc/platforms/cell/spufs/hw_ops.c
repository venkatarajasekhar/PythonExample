static int spu_hw_mbox_read(struct spu_context *ctx, u32 * data)
static u32 spu_hw_mbox_stat_read(struct spu_context *ctx)
static unsigned int spu_hw_mbox_stat_poll(struct spu_context *ctx,
unsigned int events)
static int spu_hw_ibox_read(struct spu_context *ctx, u32 * data)
static int spu_hw_wbox_write(struct spu_context *ctx, u32 data)
static void spu_hw_signal1_write(struct spu_context *ctx, u32 data)
static void spu_hw_signal2_write(struct spu_context *ctx, u32 data)
static void spu_hw_signal1_type_set(struct spu_context *ctx, u64 val)
static u64 spu_hw_signal1_type_get(struct spu_context *ctx)
static void spu_hw_signal2_type_set(struct spu_context *ctx, u64 val)
static u64 spu_hw_signal2_type_get(struct spu_context *ctx)
static u32 spu_hw_npc_read(struct spu_context *ctx)
static void spu_hw_npc_write(struct spu_context *ctx, u32 val)
static u32 spu_hw_status_read(struct spu_context *ctx)
static char *spu_hw_get_ls(struct spu_context *ctx)
static void spu_hw_privcntl_write(struct spu_context *ctx, u64 val)
static u32 spu_hw_runcntl_read(struct spu_context *ctx)
static void spu_hw_runcntl_write(struct spu_context *ctx, u32 val)
static void spu_hw_runcntl_stop(struct spu_context *ctx)
static void spu_hw_master_start(struct spu_context *ctx)
static void spu_hw_master_stop(struct spu_context *ctx)
static int spu_hw_set_mfc_query(struct spu_context * ctx, u32 mask, u32 mode)
static u32 spu_hw_read_mfc_tagstatus(struct spu_context * ctx)
static u32 spu_hw_get_mfc_free_elements(struct spu_context *ctx)
static int spu_hw_send_mfc_command(struct spu_context *ctx,
struct mfc_dma_command *cmd)
static void spu_hw_restart_dma(struct spu_context *ctx)
struct spu_context_ops spu_hw_ops = ;
