#define _DVB_FILTER_H_
typedef int (dvb_filter_pes2ts_cb_t) (void *, unsigned char *);
struct dvb_filter_pes2ts ;
void dvb_filter_pes2ts_init(struct dvb_filter_pes2ts *p2ts, unsigned short pid,
dvb_filter_pes2ts_cb_t *cb, void *priv);
int dvb_filter_pes2ts(struct dvb_filter_pes2ts *p2ts, unsigned char *pes,
int len, int payload_start);
#define PROG_STREAM_MAP  0xBC
#define PRIVATE_STREAM1  0xBD
#define PADDING_STREAM   0xBE
#define PRIVATE_STREAM2  0xBF
#define AUDIO_STREAM_S   0xC0
#define AUDIO_STREAM_E   0xDF
#define VIDEO_STREAM_S   0xE0
#define VIDEO_STREAM_E   0xEF
#define ECM_STREAM       0xF0
#define EMM_STREAM       0xF1
#define DSM_CC_STREAM    0xF2
#define ISO13522_STREAM  0xF3
#define PROG_STREAM_DIR  0xFF
#define DVB_PICTURE_START    0x00
#define DVB_USER_START       0xb2
#define DVB_SEQUENCE_HEADER  0xb3
#define DVB_SEQUENCE_ERROR   0xb4
#define DVB_EXTENSION_START  0xb5
#define DVB_SEQUENCE_END     0xb7
#define DVB_GOP_START        0xb8
#define DVB_EXCEPT_SLICE     0xb0
#define SEQUENCE_EXTENSION           0x01
#define SEQUENCE_DISPLAY_EXTENSION   0x02
#define PICTURE_CODING_EXTENSION     0x08
#define QUANT_MATRIX_EXTENSION       0x03
#define PICTURE_DISPLAY_EXTENSION    0x07
#define I_FRAME 0x01
#define B_FRAME 0x02
#define P_FRAME 0x03
#define INIT_HORIZONTAL_SIZE        720
#define INIT_VERTICAL_SIZE          576
#define INIT_ASPECT_RATIO          0x02
#define INIT_FRAME_RATE            0x03
#define INIT_DISP_HORIZONTAL_SIZE   540
#define INIT_DISP_VERTICAL_SIZE     576
#define PTS_DTS_FLAGS    0xC0
#define ESCR_FLAG        0x20
#define ES_RATE_FLAG     0x10
#define DSM_TRICK_FLAG   0x08
#define ADD_CPY_FLAG     0x04
#define PES_CRC_FLAG     0x02
#define PES_EXT_FLAG     0x01
#define PTS_ONLY         0x80
#define PTS_DTS          0xC0
#define TS_SIZE        188
#define TRANS_ERROR    0x80
#define PAY_START      0x40
#define TRANS_PRIO     0x20
#define PID_MASK_HI    0x1F
#define TRANS_SCRMBL1  0x80
#define TRANS_SCRMBL2  0x40
#define ADAPT_FIELD    0x20
#define PAYLOAD        0x10
#define COUNT_MASK     0x0F
#define DISCON_IND     0x80
#define RAND_ACC_IND   0x40
#define ES_PRI_IND     0x20
#define PCR_FLAG       0x10
#define OPCR_FLAG      0x08
#define SPLICE_FLAG    0x04
#define TRANS_PRIV     0x02
#define ADAP_EXT_FLAG  0x01
#define LTW_FLAG       0x80
#define PIECE_RATE     0x40
#define SEAM_SPLICE    0x20
#define MAX_PLENGTH 0xFFFF
#define MMAX_PLENGTH (256*MAX_PLENGTH)
#define IPACKS 2048
struct ipack ;
struct dvb_video_info ;
#define OFF_SIZE 4
#define FIRST_FIELD 0
#define SECOND_FIELD 1
#define VIDEO_FRAME_PICTURE 0x03
struct mpg_picture ;
struct dvb_audio_info ;
int dvb_filter_get_ac3info(u8 *mbuf, int count, struct dvb_audio_info *ai, int pr);
