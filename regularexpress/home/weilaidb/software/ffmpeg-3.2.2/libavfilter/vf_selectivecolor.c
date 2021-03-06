#define R 0
#define G 1
#define B 2
#define A 3
enum color_range ;
enum correction_method ;
static const char *color_names[NB_RANGES] = ;
typedef int (*get_adjust_range_func)(int r, int g, int b, int min_val, int max_val);
struct process_range ;
typedef struct ThreadData  ThreadData;
typedef struct  SelectiveColorContext;
OFFSET offsetof(SelectiveColorContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
RANGE_OPTION \
static const AVOption selectivecolor_options[] = ;
AVFILTER_DEFINE_CLASS(selectivecolor);
get_mid_val
get_rgb_adjust_range
get_cmy_adjust_range
DECLARE_ADJUST_RANGE_FUNCS                                                   \
static int get_neutrals_adjust_range##nbits(int r, int g, int b, int min_val, int max_val)  \
\
\
static int get_whites_adjust_range##nbits(int r, int g, int b, int min_val, int max_val)    \
\
\
static int get_blacks_adjust_range##nbits(int r, int g, int b, int min_val, int max_val)    \
\
DECLARE_ADJUST_RANGE_FUNCS(8)
DECLARE_ADJUST_RANGE_FUNCS(16)
register_range
parse_psfile
config_input
query_formats
comp_adjust
DECLARE_SELECTIVE_COLOR_FUNC                                                             \
static inline int selective_color_##nbits(AVFilterContext *ctx, ThreadData *td,                         \
int jobnr, int nb_jobs, int direct, int correction_method)    \
DEF_SELECTIVE_COLOR_FUNC                                \
static int selective_color_##name##_##nbits(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)    \
DEF_SELECTIVE_COLOR_FUNCS                                                                \
DECLARE_SELECTIVE_COLOR_FUNC(nbits)                                                                     \
DEF_SELECTIVE_COLOR_FUNC(indirect_absolute, 0, CORRECTION_METHOD_ABSOLUTE, nbits)                       \
DEF_SELECTIVE_COLOR_FUNC(indirect_relative, 0, CORRECTION_METHOD_RELATIVE, nbits)                       \
DEF_SELECTIVE_COLOR_FUNC(  direct_absolute, 1, CORRECTION_METHOD_ABSOLUTE, nbits)                       \
DEF_SELECTIVE_COLOR_FUNC(  direct_relative, 1, CORRECTION_METHOD_RELATIVE, nbits)
DEF_SELECTIVE_COLOR_FUNCS(8)
DEF_SELECTIVE_COLOR_FUNCS(16)
typedef int (*selective_color_func_type)(AVFilterContext *ctx, void *td, int jobnr, int nb_jobs);
filter_frame
static const AVFilterPad selectivecolor_inputs[] = ;
static const AVFilterPad selectivecolor_outputs[] = ;
AVFilter ff_vf_selectivecolor = ;
