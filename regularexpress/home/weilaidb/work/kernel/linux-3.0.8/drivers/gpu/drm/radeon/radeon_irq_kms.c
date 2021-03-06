irqreturn_t radeon_driver_irq_handler_kms(DRM_IRQ_ARGS)
static void radeon_hotplug_work_func(struct work_struct *work)
void radeon_driver_irq_preinstall_kms(struct drm_device *dev)
int radeon_driver_irq_postinstall_kms(struct drm_device *dev)
void radeon_driver_irq_uninstall_kms(struct drm_device *dev)
int radeon_irq_kms_init(struct radeon_device *rdev)
void radeon_irq_kms_fini(struct radeon_device *rdev)
void radeon_irq_kms_sw_irq_get(struct radeon_device *rdev)
void radeon_irq_kms_sw_irq_put(struct radeon_device *rdev)
void radeon_irq_kms_pflip_irq_get(struct radeon_device *rdev, int crtc)
void radeon_irq_kms_pflip_irq_put(struct radeon_device *rdev, int crtc)
