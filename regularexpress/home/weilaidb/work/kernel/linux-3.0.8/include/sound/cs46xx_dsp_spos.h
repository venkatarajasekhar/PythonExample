#define __CS46XX_DSP_SPOS_H__
#define SYMBOL_CONSTANT  0x0
#define SYMBOL_SAMPLE    0x1
#define SYMBOL_PARAMETER 0x2
#define SYMBOL_CODE      0x3
#define SEGTYPE_SP_PROGRAM              0x00000001
#define SEGTYPE_SP_PARAMETER            0x00000002
#define SEGTYPE_SP_SAMPLE               0x00000003
#define SEGTYPE_SP_COEFFICIENT          0x00000004
#define DSP_SPOS_UU      0x0deadul
#define DSP_SPOS_DC      0x0badul
#define DSP_SPOS_DC_DC   0x0bad0badul
#define DSP_SPOS_UUUU    0xdeadc0edul
#define DSP_SPOS_UUHI    0xdeadul
#define DSP_SPOS_UULO    0xc0edul
#define DSP_SPOS_DCDC    0x0badf1d0ul
#define DSP_SPOS_DCDCHI  0x0badul
#define DSP_SPOS_DCDCLO  0xf1d0ul
#define DSP_MAX_TASK_NAME   60
#define DSP_MAX_SYMBOL_NAME 100
#define DSP_MAX_SCB_NAME    60
#define DSP_MAX_SCB_DESC    200
#define DSP_MAX_TASK_DESC   50
#define DSP_MAX_PCM_CHANNELS 32
#define DSP_MAX_SRC_NR       14
#define DSP_PCM_MAIN_CHANNEL        1
#define DSP_PCM_REAR_CHANNEL        2
#define DSP_PCM_CENTER_LFE_CHANNEL  3
#define DSP_PCM_S71_CHANNEL         4
#define DSP_IEC958_CHANNEL          5
#define DSP_SPDIF_STATUS_OUTPUT_ENABLED       1
#define DSP_SPDIF_STATUS_PLAYBACK_OPEN        2
#define DSP_SPDIF_STATUS_HW_ENABLED           4
#define DSP_SPDIF_STATUS_INPUT_CTRL_ENABLED   8
struct dsp_symbol_entry ;
struct dsp_symbol_desc ;
struct dsp_segment_desc ;
struct dsp_module_desc ;
struct dsp_scb_descriptor ;
struct dsp_task_descriptor ;
struct dsp_pcm_channel_descriptor ;
struct dsp_spos_instance ;
