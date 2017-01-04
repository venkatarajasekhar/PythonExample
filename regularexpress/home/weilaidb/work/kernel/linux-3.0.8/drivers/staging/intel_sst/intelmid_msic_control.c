#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define AUDIOMUX12  0x24c
#define AUDIOMUX34  0x24d
static int msic_init_card(void)
static int msic_line_out_restore(u8 value)
static int msic_get_lineout_prvstate(void)
static int msic_set_selected_lineout_dev(u8 value)
static int msic_power_up_pb(unsigned int device)
static int msic_power_up_cp(unsigned int device)
static int msic_power_down(void)
static int msic_power_down_pb(unsigned int device)
static int msic_power_down_cp(unsigned int device)
static int msic_set_selected_output_dev(u8 value)
static int msic_set_selected_input_dev(u8 value)
static int msic_set_hw_dmic_route(u8 hw_ch_index)
static int msic_set_pcm_voice_params(void)
static int msic_set_pcm_audio_params(int sfreq, int word_size, int num_channel)
static int msic_set_audio_port(int status)
static int msic_set_voice_port(int status)
static int msic_set_mute(int dev_id, u8 value)
static int msic_set_vol(int dev_id, int value)
static int msic_get_mute(int dev_id, u8 *value)
static int msic_get_vol(int dev_id, int *value)
static int msic_set_headset_state(int state)
static int msic_enable_mic_bias(void)
static int msic_disable_mic_bias(void)
static int msic_disable_jack_btn(void)
static int msic_enable_jack_btn(void)
static int msic_convert_adc_to_mvolt(unsigned int mic_bias)
int msic_get_headset_state(int mic_bias)
static int msic_get_mic_bias(void *arg)
static void msic_pmic_irq_cb(void *cb_data, u8 intsts)
struct snd_pmic_ops snd_msic_ops = ;
