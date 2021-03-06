void r420_pm_init_profile(struct radeon_device *rdev)
static void r420_set_reg_safe(struct radeon_device *rdev)
void r420_pipes_init(struct radeon_device *rdev)
u32 r420_mc_rreg(struct radeon_device *rdev, u32 reg)
void r420_mc_wreg(struct radeon_device *rdev, u32 reg, u32 v)
static void r420_debugfs(struct radeon_device *rdev)
static void r420_clock_resume(struct radeon_device *rdev)
static void r420_cp_errata_init(struct radeon_device *rdev)
static void r420_cp_errata_fini(struct radeon_device *rdev)
static int r420_startup(struct radeon_device *rdev)
int r420_resume(struct radeon_device *rdev)
int r420_suspend(struct radeon_device *rdev)
void r420_fini(struct radeon_device *rdev)
int r420_init(struct radeon_device *rdev)
#if defined(CONFIG_DEBUG_FS)
static int r420_debugfs_pipes_info(struct seq_file *m, void *data)
static struct drm_info_list r420_pipes_info_list[] = ;
int r420_debugfs_pipes_info_init(struct radeon_device *rdev)
