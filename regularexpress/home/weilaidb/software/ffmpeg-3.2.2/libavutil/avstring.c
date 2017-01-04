int av_strstart(const char *str, const char *pfx, const char **ptr)
int av_stristart(const char *str, const char *pfx, const char **ptr)
char *av_stristr(const char *s1, const char *s2)
char *av_strnstr(const char *haystack, const char *needle, size_t hay_length)
size_t av_strlcpy(char *dst, const char *src, size_t size)
size_t av_strlcat(char *dst, const char *src, size_t size)
size_t av_strlcatf(char *dst, size_t size, const char *fmt, ...)
char *av_asprintf(const char *fmt, ...)
char *av_d2str(double d)
#define WHITESPACES " \n\t\r"
char *av_get_token(const char **buf, const char *term)
char *av_strtok(char *s, const char *delim, char **saveptr)
int av_strcasecmp(const char *a, const char *b)
int av_strncasecmp(const char *a, const char *b, size_t n)
const char *av_basename(const char *path)
const char *av_dirname(char *path)
char *av_append_path_component(const char *path, const char *component)
int av_escape(char **dst, const char *src, const char *special_chars,
enum AVEscapeMode mode, int flags)
int av_match_name(const char *name, const char *names)
int av_utf8_decode(int32_t *codep, const uint8_t **bufp, const uint8_t *buf_end,
unsigned int flags)
int av_match_list(const char *name, const char *list, char separator)
