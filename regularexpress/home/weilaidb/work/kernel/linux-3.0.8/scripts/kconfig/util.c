struct file *file_lookup(const char *name)
int file_write_dep(const char *name)
struct gstr str_new(void)
struct gstr str_assign(const char *s)
void str_free(struct gstr *gs)
void str_append(struct gstr *gs, const char *s)
void str_printf(struct gstr *gs, const char *fmt, ...)
const char *str_get(struct gstr *gs)
