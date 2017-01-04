#define __SOUND_INITVAL_H
#define SNDRV_AUTO_PORT		1
#define SNDRV_AUTO_IRQ		0xffff
#define SNDRV_AUTO_DMA		0xffff
#define SNDRV_AUTO_DMA_SIZE	(0x7fffffff)
#define SNDRV_DEFAULT_IDX1	(-1)
#define SNDRV_DEFAULT_STR1	NULL
#define SNDRV_DEFAULT_ENABLE1	1
#define SNDRV_DEFAULT_PORT1	SNDRV_AUTO_PORT
#define SNDRV_DEFAULT_IRQ1	SNDRV_AUTO_IRQ
#define SNDRV_DEFAULT_DMA1	SNDRV_AUTO_DMA
#define SNDRV_DEFAULT_DMA_SIZE1	SNDRV_AUTO_DMA_SIZE
#define SNDRV_DEFAULT_PTR1	SNDRV_DEFAULT_STR1
#define SNDRV_DEFAULT_IDX
#define SNDRV_DEFAULT_STR
#define SNDRV_DEFAULT_ENABLE
#define SNDRV_DEFAULT_ENABLE_PNP
#define SNDRV_DEFAULT_ENABLE_ISAPNP SNDRV_DEFAULT_ENABLE_PNP
#define SNDRV_DEFAULT_ENABLE_ISAPNP SNDRV_DEFAULT_ENABLE
#define SNDRV_DEFAULT_PORT
#define SNDRV_DEFAULT_IRQ
#define SNDRV_DEFAULT_DMA
#define SNDRV_DEFAULT_DMA_SIZE
#define SNDRV_DEFAULT_PTR	SNDRV_DEFAULT_STR
static irqreturn_t snd_legacy_empty_irq_handler(int irq, void *dev_id)
static int snd_legacy_find_free_irq(int *irq_table)
static int snd_legacy_find_free_dma(int *dma_table)