static struct resource msm_iommu_jpegd_resources[] = ;
static struct resource msm_iommu_vpe_resources[] = ;
static struct resource msm_iommu_mdp0_resources[] = ;
static struct resource msm_iommu_mdp1_resources[] = ;
static struct resource msm_iommu_rot_resources[] = ;
static struct resource msm_iommu_ijpeg_resources[] = ;
static struct resource msm_iommu_vfe_resources[] = ;
static struct resource msm_iommu_vcodec_a_resources[] = ;
static struct resource msm_iommu_vcodec_b_resources[] = ;
static struct resource msm_iommu_gfx3d_resources[] = ;
static struct resource msm_iommu_gfx2d0_resources[] = ;
static struct resource msm_iommu_gfx2d1_resources[] = ;
static struct platform_device msm_root_iommu_dev = ;
static struct msm_iommu_dev jpegd_iommu = ;
static struct msm_iommu_dev vpe_iommu = ;
static struct msm_iommu_dev mdp0_iommu = ;
static struct msm_iommu_dev mdp1_iommu = ;
static struct msm_iommu_dev rot_iommu = ;
static struct msm_iommu_dev ijpeg_iommu = ;
static struct msm_iommu_dev vfe_iommu = ;
static struct msm_iommu_dev vcodec_a_iommu = ;
static struct msm_iommu_dev vcodec_b_iommu = ;
static struct msm_iommu_dev gfx3d_iommu = ;
static struct msm_iommu_dev gfx2d0_iommu = ;
static struct msm_iommu_dev gfx2d1_iommu = ;
static struct platform_device msm_device_iommu_jpegd = ;
static struct platform_device msm_device_iommu_vpe = ;
static struct platform_device msm_device_iommu_mdp0 = ;
static struct platform_device msm_device_iommu_mdp1 = ;
static struct platform_device msm_device_iommu_rot = ;
static struct platform_device msm_device_iommu_ijpeg = ;
static struct platform_device msm_device_iommu_vfe = ;
static struct platform_device msm_device_iommu_vcodec_a = ;
static struct platform_device msm_device_iommu_vcodec_b = ;
static struct platform_device msm_device_iommu_gfx3d = ;
static struct platform_device msm_device_iommu_gfx2d0 = ;
struct platform_device msm_device_iommu_gfx2d1 = ;
static struct msm_iommu_ctx_dev jpegd_src_ctx = ;
static struct msm_iommu_ctx_dev jpegd_dst_ctx = ;
static struct msm_iommu_ctx_dev vpe_src_ctx = ;
static struct msm_iommu_ctx_dev vpe_dst_ctx = ;
static struct msm_iommu_ctx_dev mdp_vg1_ctx = ;
static struct msm_iommu_ctx_dev mdp_rgb1_ctx = ;
static struct msm_iommu_ctx_dev mdp_vg2_ctx = ;
static struct msm_iommu_ctx_dev mdp_rgb2_ctx = ;
static struct msm_iommu_ctx_dev rot_src_ctx = ;
static struct msm_iommu_ctx_dev rot_dst_ctx = ;
static struct msm_iommu_ctx_dev ijpeg_src_ctx = ;
static struct msm_iommu_ctx_dev ijpeg_dst_ctx = ;
static struct msm_iommu_ctx_dev vfe_imgwr_ctx = ;
static struct msm_iommu_ctx_dev vfe_misc_ctx = ;
static struct msm_iommu_ctx_dev vcodec_a_stream_ctx = ;
static struct msm_iommu_ctx_dev vcodec_a_mm1_ctx = ;
static struct msm_iommu_ctx_dev vcodec_b_mm2_ctx = ;
static struct msm_iommu_ctx_dev gfx3d_user_ctx = ;
static struct msm_iommu_ctx_dev gfx3d_priv_ctx = ;
static struct msm_iommu_ctx_dev gfx2d0_2d0_ctx = ;
static struct msm_iommu_ctx_dev gfx2d1_2d1_ctx = ;
static struct platform_device msm_device_jpegd_src_ctx = ;
static struct platform_device msm_device_jpegd_dst_ctx = ;
static struct platform_device msm_device_vpe_src_ctx = ;
static struct platform_device msm_device_vpe_dst_ctx = ;
static struct platform_device msm_device_mdp_vg1_ctx = ;
static struct platform_device msm_device_mdp_rgb1_ctx = ;
static struct platform_device msm_device_mdp_vg2_ctx = ;
static struct platform_device msm_device_mdp_rgb2_ctx = ;
static struct platform_device msm_device_rot_src_ctx = ;
static struct platform_device msm_device_rot_dst_ctx = ;
static struct platform_device msm_device_ijpeg_src_ctx = ;
static struct platform_device msm_device_ijpeg_dst_ctx = ;
static struct platform_device msm_device_vfe_imgwr_ctx = ;
static struct platform_device msm_device_vfe_misc_ctx = ;
static struct platform_device msm_device_vcodec_a_stream_ctx = ;
static struct platform_device msm_device_vcodec_a_mm1_ctx = ;
static struct platform_device msm_device_vcodec_b_mm2_ctx = ;
static struct platform_device msm_device_gfx3d_user_ctx = ;
static struct platform_device msm_device_gfx3d_priv_ctx = ;
static struct platform_device msm_device_gfx2d0_2d0_ctx = ;
static struct platform_device msm_device_gfx2d1_2d1_ctx = ;
static struct platform_device *msm_iommu_devs[] = ;
static struct msm_iommu_dev *msm_iommu_data[] = ;
static struct platform_device *msm_iommu_ctx_devs[] = ;
static struct msm_iommu_ctx_dev *msm_iommu_ctx_data[] = ;
static int __init msm8x60_iommu_init(void)
static void __exit msm8x60_iommu_exit(void)
subsys_initcall(msm8x60_iommu_init);
module_exit(msm8x60_iommu_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Stepan Moskovchenko <stepanm@codeaurora.org>");
