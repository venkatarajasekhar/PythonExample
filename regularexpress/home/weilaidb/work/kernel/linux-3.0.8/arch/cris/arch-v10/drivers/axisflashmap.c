#define FLASH_UNCACHED_ADDR  KSEG_8
#define FLASH_CACHED_ADDR    KSEG_5
#define FLASH_UNCACHED_ADDR  KSEG_E
#define FLASH_CACHED_ADDR    KSEG_F
#if CONFIG_ETRAX_FLASH_BUSWIDTH==1
#define flash_data __u8
#elif CONFIG_ETRAX_FLASH_BUSWIDTH==2
#define flash_data __u16
#elif CONFIG_ETRAX_FLASH_BUSWIDTH==4
#define flash_data __u32
extern unsigned long romfs_start, romfs_length, romfs_in_flash;
struct mtd_info* axisflash_mtd = NULL;
static map_word flash_read(struct map_info *map, unsigned long ofs)
static void flash_copy_from(struct map_info *map, void *to,
unsigned long from, ssize_t len)
static void flash_write(struct map_info *map, map_word d, unsigned long adr)
static struct map_info map_cse0 = ;
static struct map_info map_cse1 = ;
#define MAX_PARTITIONS         7
#define NUM_DEFAULT_PARTITIONS 3
static struct mtd_partition axis_default_partitions[NUM_DEFAULT_PARTITIONS] = ;
static struct mtd_partition axis_partitions[MAX_PARTITIONS] = ;
static struct mtd_partition main_partition = ;
static struct mtd_info *probe_cs(struct map_info *map_cs)
static struct mtd_info *flash_probe(void)
static int __init init_axis_flash(void)
module_init(init_axis_flash);
EXPORT_SYMBOL(axisflash_mtd);
