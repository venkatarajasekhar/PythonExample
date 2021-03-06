static int ui_browser__percent_color(double percent, bool current)
void ui_browser__set_color(struct ui_browser *self __used, int color)
void ui_browser__set_percent_color(struct ui_browser *self,
double percent, bool current)
void ui_browser__gotorc(struct ui_browser *self, int y, int x)
void ui_browser__list_head_seek(struct ui_browser *self, off_t offset, int whence)
void ui_browser__rb_tree_seek(struct ui_browser *self, off_t offset, int whence)
unsigned int ui_browser__rb_tree_refresh(struct ui_browser *self)
bool ui_browser__is_current_entry(struct ui_browser *self, unsigned row)
void ui_browser__refresh_dimensions(struct ui_browser *self)
void ui_browser__reset_index(struct ui_browser *self)
void ui_browser__add_exit_key(struct ui_browser *self, int key)
void ui_browser__add_exit_keys(struct ui_browser *self, int keys[])
void __ui_browser__show_title(struct ui_browser *browser, const char *title)
void ui_browser__show_title(struct ui_browser *browser, const char *title)
int ui_browser__show(struct ui_browser *self, const char *title,
const char *helpline, ...)
void ui_browser__hide(struct ui_browser *self)
int ui_browser__refresh(struct ui_browser *self)
int ui_browser__run(struct ui_browser *self)
unsigned int ui_browser__list_head_refresh(struct ui_browser *self)
static struct newtPercentTreeColors  defaultPercentTreeColors = ;
void ui_browser__init(void)
