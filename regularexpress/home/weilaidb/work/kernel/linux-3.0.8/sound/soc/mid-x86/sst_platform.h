#define __SST_PLATFORMDRV_H__
#define SST_MONO		1
#define SST_STEREO		2
#define SST_MAX_CAP		5
#define SST_MIN_RATE		8000
#define SST_MAX_RATE		48000
#define SST_MIN_CHANNEL		1
#define SST_MAX_CHANNEL		5
#define SST_MAX_BUFFER		(800*1024)
#define SST_MIN_BUFFER		(800*1024)
#define SST_MIN_PERIOD_BYTES	32
#define SST_MAX_PERIOD_BYTES	SST_MAX_BUFFER
#define SST_MIN_PERIODS		2
#define SST_MAX_PERIODS		(1024*2)
#define SST_FIFO_SIZE		0
#define SST_CARD_NAMES		"intel_mid_card"
#define MSIC_VENDOR_ID		3
struct sst_runtime_stream ;
enum sst_drv_status ;
