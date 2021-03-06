#define _ASM_PARISC_AGP_H
#define map_page_into_agp(page)
#define unmap_page_from_agp(page)
#define flush_agp_cache()		mb()
#define alloc_gatt_pages(order)		\
((char *)__get_free_pages(GFP_KERNEL, (order)))
#define free_gatt_pages(table, order)	\
free_pages((unsigned long)(table), (order))
