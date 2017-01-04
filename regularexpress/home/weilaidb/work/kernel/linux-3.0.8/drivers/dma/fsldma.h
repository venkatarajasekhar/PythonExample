#define __DMA_FSLDMA_H
#define FSL_DMA_MR_CS		0x00000001
#define FSL_DMA_MR_CC		0x00000002
#define FSL_DMA_MR_CA		0x00000008
#define FSL_DMA_MR_EIE		0x00000040
#define FSL_DMA_MR_XFE		0x00000020
#define FSL_DMA_MR_EOLNIE	0x00000100
#define FSL_DMA_MR_EOLSIE	0x00000080
#define FSL_DMA_MR_EOSIE	0x00000200
#define FSL_DMA_MR_CDSM		0x00000010
#define FSL_DMA_MR_CTM		0x00000004
#define FSL_DMA_MR_EMP_EN	0x00200000
#define FSL_DMA_MR_EMS_EN	0x00040000
#define FSL_DMA_MR_DAHE		0x00002000
#define FSL_DMA_MR_SAHE		0x00001000
#define FSL_DMA_MR_BWC         0x08000000
#define FSL_DMA_MR_EOTIE	0x00000080
#define FSL_DMA_MR_PRC_RM	0x00000800
#define FSL_DMA_SR_CH		0x00000020
#define FSL_DMA_SR_PE		0x00000010
#define FSL_DMA_SR_CB		0x00000004
#define FSL_DMA_SR_TE		0x00000080
#define FSL_DMA_SR_EOSI		0x00000002
#define FSL_DMA_SR_EOLSI	0x00000001
#define FSL_DMA_SR_EOCDI	0x00000001
#define FSL_DMA_SR_EOLNI	0x00000008
#define FSL_DMA_SATR_SBPATMU			0x20000000
#define FSL_DMA_SATR_STRANSINT_RIO		0x00c00000
#define FSL_DMA_SATR_SREADTYPE_SNOOP_READ	0x00050000
#define FSL_DMA_SATR_SREADTYPE_BP_IORH		0x00020000
#define FSL_DMA_SATR_SREADTYPE_BP_NREAD		0x00040000
#define FSL_DMA_SATR_SREADTYPE_BP_MREAD		0x00070000
#define FSL_DMA_DATR_DBPATMU			0x20000000
#define FSL_DMA_DATR_DTRANSINT_RIO		0x00c00000
#define FSL_DMA_DATR_DWRITETYPE_SNOOP_WRITE	0x00050000
#define FSL_DMA_DATR_DWRITETYPE_BP_FLUSH	0x00010000
#define FSL_DMA_EOL		((u64)0x1)
#define FSL_DMA_SNEN		((u64)0x10)
#define FSL_DMA_EOSIE		0x8
#define FSL_DMA_NLDA_MASK	(~(u64)0x1f)
#define FSL_DMA_BCR_MAX_CNT	0x03ffffffu
#define FSL_DMA_DGSR_TE		0x80
#define FSL_DMA_DGSR_CH		0x20
#define FSL_DMA_DGSR_PE		0x10
#define FSL_DMA_DGSR_EOLNI	0x08
#define FSL_DMA_DGSR_CB		0x04
#define FSL_DMA_DGSR_EOSI	0x02
#define FSL_DMA_DGSR_EOLSI	0x01
typedef u64 __bitwise v64;
typedef u32 __bitwise v32;
struct fsl_dma_ld_hw  __attribute__((aligned(32)));
struct fsl_desc_sw  __attribute__((aligned(32)));
struct fsldma_chan_regs ;
struct fsldma_chan;
#define FSL_DMA_MAX_CHANS_PER_DEVICE 4
struct fsldma_device ;
#define FSL_DMA_LITTLE_ENDIAN	0x00000000
#define FSL_DMA_BIG_ENDIAN	0x00000001
#define FSL_DMA_IP_MASK		0x00000ff0
#define FSL_DMA_IP_85XX		0x00000010
#define FSL_DMA_IP_83XX		0x00000020
#define FSL_DMA_CHAN_PAUSE_EXT	0x00001000
#define FSL_DMA_CHAN_START_EXT	0x00002000
struct fsldma_chan ;
#define to_fsl_chan(chan) container_of(chan, struct fsldma_chan, common)
#define to_fsl_desc(lh) container_of(lh, struct fsl_desc_sw, node)
#define tx_to_fsl_desc(tx) container_of(tx, struct fsl_desc_sw, async_tx)
static u64 in_be64(const u64 __iomem *addr)
static void out_be64(u64 __iomem *addr, u64 val)
static u64 in_le64(const u64 __iomem *addr)
static void out_le64(u64 __iomem *addr, u64 val)
#define DMA_IN(fsl_chan, addr, width)					\
(((fsl_chan)->feature & FSL_DMA_BIG_ENDIAN) ?		\
in_be##width(addr) : in_le##width(addr))
#define DMA_OUT(fsl_chan, addr, val, width)				\
(((fsl_chan)->feature & FSL_DMA_BIG_ENDIAN) ?		\
out_be##width(addr, val) : out_le##width(addr, val))
#define DMA_TO_CPU(fsl_chan, d, width)					\
(((fsl_chan)->feature & FSL_DMA_BIG_ENDIAN) ?		\
be##width##_to_cpu((__force __be##width)(v##width)d) : \
le##width##_to_cpu((__force __le##width)(v##width)d))
#define CPU_TO_DMA(fsl_chan, c, width)					\
(((fsl_chan)->feature & FSL_DMA_BIG_ENDIAN) ?		\
(__force v##width)cpu_to_be##width(c) :		\
(__force v##width)cpu_to_le##width(c))
