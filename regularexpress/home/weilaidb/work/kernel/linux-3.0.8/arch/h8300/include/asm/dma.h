#define _H8300_DMA_H
#define MAX_DMA_CHANNELS 0
#define MAX_DMA_ADDRESS PAGE_OFFSET
extern int request_dma(unsigned int dmanr, const char *device_id);
extern void free_dma(unsigned int dmanr);
