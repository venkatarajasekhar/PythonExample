static inline uint32_t psb_gtt_mask_pte(uint32_t pfn, int type)
u32 *psb_gtt_entry(struct drm_device *dev, struct gtt_range *r)
static int psb_gtt_insert(struct drm_device *dev, struct gtt_range *r)
static void psb_gtt_remove(struct drm_device *dev, struct gtt_range *r)
static int psb_gtt_attach_pages(struct gtt_range *gt)
static void psb_gtt_detach_pages(struct gtt_range *gt)
int psb_gtt_pin(struct gtt_range *gt)
void psb_gtt_unpin(struct gtt_range *gt)
struct gtt_range *psb_gtt_alloc_range(struct drm_device *dev, int len,
const char *name, int backed)
static void psb_gtt_destroy(struct kref *kref)
void psb_gtt_kref_put(struct gtt_range *gt)
void psb_gtt_free_range(struct drm_device *dev, struct gtt_range *gt)
struct psb_gtt *psb_gtt_alloc(struct drm_device *dev)
void psb_gtt_takedown(struct drm_device *dev)
int psb_gtt_init(struct drm_device *dev, int resume)
