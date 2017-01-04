static int rv370_debugfs_pcie_gart_info_init(struct radeon_device *rdev);
void rv370_pcie_gart_tlb_flush(struct radeon_device *rdev)
#define R300_PTE_WRITEABLE (1 << 2)
#define R300_PTE_READABLE  (1 << 3)
int rv370_pcie_gart_set_page(struct radeon_device *rdev, int i, uint64_t addr)
int rv370_pcie_gart_init(struct radeon_device *rdev)
int rv370_pcie_gart_enable(struct radeon_device *rdev)
void rv370_pcie_gart_disable(struct radeon_device *rdev)
void rv370_pcie_gart_fini(struct radeon_device *rdev)
void r300_fence_ring_emit(struct radeon_device *rdev,
struct radeon_fence *fence)
void r300_ring_start(struct radeon_device *rdev)
void r300_errata(struct radeon_device *rdev)
int r300_mc_wait_for_idle(struct radeon_device *rdev)
void r300_gpu_init(struct radeon_device *rdev)
bool r300_gpu_is_lockup(struct radeon_device *rdev)
int r300_asic_reset(struct radeon_device *rdev)
void r300_mc_init(struct radeon_device *rdev)
void rv370_set_pcie_lanes(struct radeon_device *rdev, int lanes)
int rv370_get_pcie_lanes(struct radeon_device *rdev)
#if defined(CONFIG_DEBUG_FS)
static int rv370_debugfs_pcie_gart_info(struct seq_file *m, void *data)
static struct drm_info_list rv370_pcie_gart_info_list[] = ;
static int rv370_debugfs_pcie_gart_info_init(struct radeon_device *rdev)
static int r300_packet0_check(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt,
unsigned idx, unsigned reg)
static int r300_packet3_check(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt)
int r300_cs_parse(struct radeon_cs_parser *p)
void r300_set_reg_safe(struct radeon_device *rdev)
void r300_mc_program(struct radeon_device *rdev)
void r300_clock_startup(struct radeon_device *rdev)
static int r300_startup(struct radeon_device *rdev)
int r300_resume(struct radeon_device *rdev)
int r300_suspend(struct radeon_device *rdev)
void r300_fini(struct radeon_device *rdev)
int r300_init(struct radeon_device *rdev)