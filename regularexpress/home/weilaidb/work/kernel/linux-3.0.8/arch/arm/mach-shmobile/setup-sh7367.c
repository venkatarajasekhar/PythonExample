static struct plat_sci_port scif0_platform_data = ;
static struct platform_device scif0_device = ;
static struct plat_sci_port scif1_platform_data = ;
static struct platform_device scif1_device = ;
static struct plat_sci_port scif2_platform_data = ;
static struct platform_device scif2_device = ;
static struct plat_sci_port scif3_platform_data = ;
static struct platform_device scif3_device = ;
static struct plat_sci_port scif4_platform_data = ;
static struct platform_device scif4_device = ;
static struct plat_sci_port scif5_platform_data = ;
static struct platform_device scif5_device = ;
static struct plat_sci_port scif6_platform_data = ;
static struct platform_device scif6_device = ;
static struct sh_timer_config cmt10_platform_data = ;
static struct resource cmt10_resources[] = ;
static struct platform_device cmt10_device = ;
static struct uio_info vpu_platform_data = ;
static struct resource vpu_resources[] = ;
static struct platform_device vpu_device = ;
static struct uio_info veu0_platform_data = ;
static struct resource veu0_resources[] = ;
static struct platform_device veu0_device = ;
static struct uio_info veu1_platform_data = ;
static struct resource veu1_resources[] = ;
static struct platform_device veu1_device = ;
static struct uio_info veu2_platform_data = ;
static struct resource veu2_resources[] = ;
static struct platform_device veu2_device = ;
static struct uio_info veu3_platform_data = ;
static struct resource veu3_resources[] = ;
static struct platform_device veu3_device = ;
static struct uio_info veu2h_platform_data = ;
static struct resource veu2h_resources[] = ;
static struct platform_device veu2h_device = ;
static struct uio_info jpu_platform_data = ;
static struct resource jpu_resources[] = ;
static struct platform_device jpu_device = ;
static struct uio_info spu1_platform_data = ;
static struct resource spu1_resources[] = ;
static struct platform_device spu1_device = ;
static struct platform_device *sh7367_early_devices[] __initdata = ;
static struct platform_device *sh7367_devices[] __initdata = ;
void __init sh7367_add_standard_devices(void)
#define SYMSTPCR2 0xe6158048
#define SYMSTPCR2_CMT1 (1 << 29)
void __init sh7367_add_early_devices(void)
