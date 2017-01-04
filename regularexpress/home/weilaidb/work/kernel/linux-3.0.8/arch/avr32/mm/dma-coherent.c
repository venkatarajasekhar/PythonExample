void dma_cache_sync(struct device *dev, void *vaddr, size_t size, int direction)
EXPORT_SYMBOL(dma_cache_sync);
static struct page *__dma_alloc(struct device *dev, size_t size,
dma_addr_t *handle, gfp_t gfp)
static void __dma_free(struct device *dev, size_t size,
struct page *page, dma_addr_t handle)
void *dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *handle, gfp_t gfp)
EXPORT_SYMBOL(dma_alloc_coherent);
void dma_free_coherent(struct device *dev, size_t size,
void *cpu_addr, dma_addr_t handle)
EXPORT_SYMBOL(dma_free_coherent);
void *dma_alloc_writecombine(struct device *dev, size_t size,
dma_addr_t *handle, gfp_t gfp)
EXPORT_SYMBOL(dma_alloc_writecombine);
void dma_free_writecombine(struct device *dev, size_t size,
void *cpu_addr, dma_addr_t handle)
EXPORT_SYMBOL(dma_free_writecombine);
