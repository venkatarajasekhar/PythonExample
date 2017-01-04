#define _M68K_SEGMENT_H
#define USER_DATA     (1)
#define __USER_DS     (USER_DATA)
#define USER_PROGRAM  (2)
#define SUPER_DATA    (5)
#define __KERNEL_DS   (SUPER_DATA)
#define SUPER_PROGRAM (6)
#define CPU_SPACE     (7)
typedef struct  mm_segment_t;
#define MAKE_MM_SEG(s)	((mm_segment_t) )
#define USER_DS		MAKE_MM_SEG(__USER_DS)
#define KERNEL_DS	MAKE_MM_SEG(__KERNEL_DS)
static inline mm_segment_t get_fs(void)
static inline mm_segment_t get_ds(void)
static inline void set_fs(mm_segment_t val)
#define segment_eq(a,b)	((a).seg == (b).seg)
