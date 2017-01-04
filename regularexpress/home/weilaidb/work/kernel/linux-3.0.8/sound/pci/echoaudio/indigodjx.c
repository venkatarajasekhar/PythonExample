#define INDIGO_FAMILY
#define ECHOCARD_INDIGO_DJX
#define ECHOCARD_NAME "Indigo DJx"
#define ECHOCARD_HAS_SUPER_INTERLEAVE
#define ECHOCARD_HAS_VMIXER
#define ECHOCARD_HAS_STEREO_BIG_ENDIAN32
#define PX_ANALOG_OUT	0
#define PX_DIGITAL_OUT	8
#define PX_ANALOG_IN	8
#define PX_DIGITAL_IN	8
#define PX_NUM		8
#define BX_ANALOG_OUT	0
#define BX_DIGITAL_OUT	4
#define BX_ANALOG_IN	4
#define BX_DIGITAL_IN	4
#define BX_NUM		4
MODULE_FIRMWARE("ea/loader_dsp.fw");
MODULE_FIRMWARE("ea/indigo_djx_dsp.fw");
#define FW_361_LOADER		0
#define FW_INDIGO_DJX_DSP	1
static const struct firmware card_fw[] = ;
static DEFINE_PCI_DEVICE_TABLE(snd_echo_ids) = ;
static struct snd_pcm_hardware pcm_hardware_skel = ;
