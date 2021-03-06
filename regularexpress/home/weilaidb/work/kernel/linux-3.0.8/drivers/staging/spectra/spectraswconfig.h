#define _SPECTRASWCONFIG_
#define GLOB_VERSION          "driver version 20100311"
#define RETRY_TIMES                   3
#define READ_BADBLOCK_INFO            1
#define READBACK_VERIFY               0
#define AUTO_FORMAT_FLASH             0
#define CACHE_ITEM_NUM            128
#define BLK_NUM_FOR_L2_CACHE        16
#define BLOCK_TABLE_INDEX             0
#define WEAR_LEVELING_GATE         0x10
#define WEAR_LEVELING_BLOCK_NUM      10
#define DEBUG_BNDRY             0
#define FLASH_EMU               defined(CONFIG_SPECTRA_EMU)
#define FLASH_NAND              defined(CONFIG_SPECTRA_MRST_HW)
#define FLASH_MTD               defined(CONFIG_SPECTRA_MTD)
#define CMD_DMA                 defined(CONFIG_SPECTRA_MRST_HW_DMA)
#define SPECTRA_PARTITION_ID    0
#define SUPPORT_LARGE_BLOCKNUM  1
#define SPECTRA_START_BLOCK     3
#define NUM_FREE_BLOCKS_GATE    60
#define GLOB_HWCTL_REG_BASE     0xFFA40000
#define GLOB_HWCTL_REG_SIZE     4096
#define GLOB_HWCTL_MEM_BASE     0xFFA48000
#define GLOB_HWCTL_MEM_SIZE     4096
#define SCRATCH_REG_ADDR    0xFF108018
#define SCRATCH_REG_SIZE    64
#define GLOB_HWCTL_DEFAULT_BLKS    2048
#define SUPPORT_15BITECC        1
#define SUPPORT_8BITECC         1
#define ONFI_BLOOM_TIME         0
#define MODE5_WORKAROUND        1
