#define __LOCKSPACE_DOT_H__
int dlm_lockspace_init(void);
void dlm_lockspace_exit(void);
struct dlm_ls *dlm_find_lockspace_global(uint32_t id);
struct dlm_ls *dlm_find_lockspace_local(void *id);
struct dlm_ls *dlm_find_lockspace_device(int minor);
void dlm_put_lockspace(struct dlm_ls *ls);
void dlm_stop_lockspaces(void);
