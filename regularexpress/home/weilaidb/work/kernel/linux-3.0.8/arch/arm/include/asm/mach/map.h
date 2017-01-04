struct map_desc ;
#define MT_UNCACHED		4
#define MT_CACHECLEAN		5
#define MT_MINICLEAN		6
#define MT_LOW_VECTORS		7
#define MT_HIGH_VECTORS		8
#define MT_MEMORY		9
#define MT_ROM			10
#define MT_MEMORY_NONCACHED	11
#define MT_MEMORY_DTCM		12
#define MT_MEMORY_ITCM		13
extern void iotable_init(struct map_desc *, int);
struct mem_type;
extern const struct mem_type *get_mem_type(unsigned int type);
extern int ioremap_page(unsigned long virt, unsigned long phys,
const struct mem_type *mtype);
#define iotable_init(map,num)	do  while (0)
