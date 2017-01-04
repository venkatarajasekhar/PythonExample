#define _BF5XX_AC97_H
extern struct snd_ac97_bus_ops bf5xx_ac97_ops;
extern struct snd_ac97 *ac97;
struct ac97_frame  __attribute__ ((packed));
#define SP_FL		0x0001
#define SP_FR		0x0010
#define SP_FC		0x0002
#define SP_LFE		0x0020
#define SP_SL		0x0004
#define SP_SR		0x0040
#define SP_STEREO	(SP_FL | SP_FR)
#define SP_2DOT1	(SP_FL | SP_FR | SP_LFE)
#define SP_QUAD		(SP_FL | SP_FR | SP_SL | SP_SR)
#define SP_5DOT1	(SP_FL | SP_FR | SP_FC | SP_LFE | SP_SL | SP_SR)
#define TAG_VALID		0x8000
#define TAG_CMD			0x6000
#define TAG_PCM_LEFT		0x1000
#define TAG_PCM_RIGHT		0x0800
#define TAG_PCM_MDM_L1		0x0400
#define TAG_PCM_CENTER		0x0200
#define TAG_PCM_SL		0x0100
#define TAG_PCM_SR		0x0080
#define TAG_PCM_LFE		0x0040
void bf5xx_pcm_to_ac97(struct ac97_frame *dst, const __u16 *src, \
size_t count, unsigned int chan_mask);
void bf5xx_ac97_to_pcm(const struct ac97_frame *src, __u16 *dst, \
size_t count);
