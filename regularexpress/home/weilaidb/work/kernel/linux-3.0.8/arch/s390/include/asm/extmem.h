#define _ASM_S390X_DCSS_H
#define SEG_TYPE_SW 0
#define SEG_TYPE_EW 1
#define SEG_TYPE_SR 2
#define SEG_TYPE_ER 3
#define SEG_TYPE_SN 4
#define SEG_TYPE_EN 5
#define SEG_TYPE_SC 6
#define SEG_TYPE_EWEN 7
#define SEGMENT_SHARED 0
#define SEGMENT_EXCLUSIVE 1
int segment_load (char *name, int segtype, unsigned long *addr, unsigned long *length);
void segment_unload(char *name);
void segment_save(char *name);
int segment_type (char* name);
int segment_modify_shared (char *name, int do_nonshared);
void segment_warning(int rc, char *seg_name);
