int vmw_mmap(struct file *filp, struct vm_area_struct *vma)
static int vmw_ttm_mem_global_init(struct drm_global_reference *ref)
static void vmw_ttm_mem_global_release(struct drm_global_reference *ref)
int vmw_ttm_global_init(struct vmw_private *dev_priv)
void vmw_ttm_global_release(struct vmw_private *dev_priv)
