typedef struct  BBoxContext;
#define OFFSET(x) offsetof(BBoxContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption bbox_options[] = ;
AVFILTER_DEFINE_CLASS(bbox);
static int query_formats(AVFilterContext *ctx)
#define SET_META(key, value) \
av_dict_set_int(metadata, key, value, 0);
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static const AVFilterPad bbox_inputs[] = ;
static const AVFilterPad bbox_outputs[] = ;
AVFilter ff_vf_bbox = ;
