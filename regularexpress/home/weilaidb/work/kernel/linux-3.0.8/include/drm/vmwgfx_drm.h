#define __VMWGFX_DRM_H__
#define DRM_VMW_MAX_SURFACE_FACES 6
#define DRM_VMW_MAX_MIP_LEVELS 24
#define DRM_VMW_EXT_NAME_LEN 128
#define DRM_VMW_GET_PARAM            0
#define DRM_VMW_ALLOC_DMABUF         1
#define DRM_VMW_UNREF_DMABUF         2
#define DRM_VMW_CURSOR_BYPASS        3
#define DRM_VMW_CONTROL_STREAM       4
#define DRM_VMW_CLAIM_STREAM         5
#define DRM_VMW_UNREF_STREAM         6
#define DRM_VMW_CREATE_CONTEXT       7
#define DRM_VMW_UNREF_CONTEXT        8
#define DRM_VMW_CREATE_SURFACE       9
#define DRM_VMW_UNREF_SURFACE        10
#define DRM_VMW_REF_SURFACE          11
#define DRM_VMW_EXECBUF              12
#define DRM_VMW_FIFO_DEBUG           13
#define DRM_VMW_FENCE_WAIT           14
#define DRM_VMW_UPDATE_LAYOUT        15
#define DRM_VMW_PARAM_NUM_STREAMS      0
#define DRM_VMW_PARAM_NUM_FREE_STREAMS 1
#define DRM_VMW_PARAM_3D               2
#define DRM_VMW_PARAM_FIFO_OFFSET      3
#define DRM_VMW_PARAM_HW_CAPS          4
#define DRM_VMW_PARAM_FIFO_CAPS        5
#define DRM_VMW_PARAM_MAX_FB_SIZE      6
struct drm_vmw_getparam_arg ;
struct drm_vmw_extension_rep ;
union drm_vmw_extension_arg ;
struct drm_vmw_context_arg ;
struct drm_vmw_surface_create_req ;
struct drm_vmw_surface_arg ;
struct drm_vmw_size ;
union drm_vmw_surface_create_arg ;
union drm_vmw_surface_reference_arg ;
#define DRM_VMW_EXECBUF_VERSION 0
struct drm_vmw_execbuf_arg ;
struct drm_vmw_fence_rep ;
struct drm_vmw_alloc_dmabuf_req ;
struct drm_vmw_dmabuf_rep ;
union drm_vmw_alloc_dmabuf_arg ;
struct drm_vmw_unref_dmabuf_arg ;
struct drm_vmw_fifo_debug_arg ;
struct drm_vmw_fence_wait_arg ;
struct drm_vmw_rect ;
struct drm_vmw_control_stream_arg ;
#define DRM_VMW_CURSOR_BYPASS_ALL    (1 << 0)
#define DRM_VMW_CURSOR_BYPASS_FLAGS       (1)
struct drm_vmw_cursor_bypass_arg ;
struct drm_vmw_stream_arg ;
struct drm_vmw_update_layout_arg ;
