#define FFMPEG_H
#if HAVE_PTHREADS
#define VSYNC_AUTO       -1
#define VSYNC_PASSTHROUGH 0
#define VSYNC_CFR         1
#define VSYNC_VFR         2
#define VSYNC_VSCFR       0xfe
#define VSYNC_DROP        0xff
#define MAX_STREAMS 1024
enum HWAccelID ;
typedef struct HWAccel  HWAccel;
typedef struct StreamMap  StreamMap;
typedef struct  AudioChannelMap;
typedef struct OptionsContext  OptionsContext;
typedef struct InputFilter  InputFilter;
typedef struct OutputFilter  OutputFilter;
typedef struct FilterGraph  FilterGraph;
typedef struct InputStream  InputStream;
typedef struct InputFile  InputFile;
enum forced_keyframes_const ;
#define ABORT_ON_FLAG_EMPTY_OUTPUT (1 <<  0)
extern const char *const forced_keyframes_const_names[];
typedef enum  OSTFinished ;
typedef struct OutputStream  OutputStream;
typedef struct OutputFile  OutputFile;
extern InputStream **input_streams;
extern int        nb_input_streams;
extern InputFile   **input_files;
extern int        nb_input_files;
extern OutputStream **output_streams;
extern int         nb_output_streams;
extern OutputFile   **output_files;
extern int         nb_output_files;
extern FilterGraph **filtergraphs;
extern int        nb_filtergraphs;
extern char *vstats_filename;
extern char *sdp_filename;
extern float audio_drift_threshold;
extern float dts_delta_threshold;
extern float dts_error_threshold;
extern int audio_volume;
extern int audio_sync_method;
extern int video_sync_method;
extern float frame_drop_threshold;
extern int do_benchmark;
extern int do_benchmark_all;
extern int do_deinterlace;
extern int do_hex_dump;
extern int do_pkt_dump;
extern int copy_ts;
extern int start_at_zero;
extern int copy_tb;
extern int debug_ts;
extern int exit_on_error;
extern int abort_on_flags;
extern int print_stats;
extern int qp_hist;
extern int stdin_interaction;
extern int frame_bits_per_raw_sample;
extern AVIOContext *progress_avio;
extern float max_error_rate;
extern char *videotoolbox_pixfmt;
extern const AVIOInterruptCB int_cb;
extern const OptionDef options[];
extern const HWAccel hwaccels[];
extern int hwaccel_lax_profile_check;
extern AVBufferRef *hw_device_ctx;
term_init;
term_exit;
reset_options;
show_usage;
opt_output_file;
remove_avoptions;
assert_avoptions;
guess_input_channel_layout;
choose_pixel_fmt;
choose_sample_fmt;
configure_filtergraph;
configure_output_filter;
ist_in_filtergraph;
filtergraph_is_simple;
init_simple_filtergraph;
init_complex_filtergraph;
ffmpeg_parse_options;
vdpau_init;
dxva2_init;
vda_init;
videotoolbox_init;
qsv_init;
qsv_transcode_init;
vaapi_decode_init;
vaapi_device_init;
cuvid_init;
cuvid_transcode_init;
