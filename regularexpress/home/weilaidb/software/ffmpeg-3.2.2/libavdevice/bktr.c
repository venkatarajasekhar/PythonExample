#if HAVE_DEV_BKTR_IOCTL_METEOR_H && HAVE_DEV_BKTR_IOCTL_BT848_H
# include <dev/bktr/ioctl_meteor.h>
# include <dev/bktr/ioctl_bt848.h>
#elif HAVE_MACHINE_IOCTL_METEOR_H && HAVE_MACHINE_IOCTL_BT848_H
# include <machine/ioctl_meteor.h>
# include <machine/ioctl_bt848.h>
#elif HAVE_DEV_VIDEO_METEOR_IOCTL_METEOR_H && HAVE_DEV_VIDEO_BKTR_IOCTL_BT848_H
# include <dev/video/meteor/ioctl_meteor.h>
# include <dev/video/bktr/ioctl_bt848.h>
#elif HAVE_DEV_IC_BT8XX_H
# include <dev/ic/bt8xx.h>
typedef struct VideoData  VideoData;
#define PAL 1
#define PALBDGHI 1
#define NTSC 2
#define NTSCM 2
#define SECAM 3
#define PALN 4
#define PALM 5
#define NTSCJ 6
#define PAL_HEIGHT 576
#define SECAM_HEIGHT 576
#define NTSC_HEIGHT 480
#define VIDEO_FORMAT NTSC
static const int bktr_dev[] = ;
uint8_t *video_buf;
size_t video_buf_size;
uint64_t last_frame_time;
volatile sig_atomic_t nsignals;
catchsignal
bktr_init
bktr_getframe
grab_read_packet
grab_read_header
grab_read_close
OFFSET offsetof(VideoData, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ,
,
,
};
static const AVClass bktr_class = ;
AVInputFormat ff_bktr_demuxer = ;
