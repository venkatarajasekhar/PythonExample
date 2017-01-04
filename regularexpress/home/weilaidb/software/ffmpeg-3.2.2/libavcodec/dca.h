#define AVCODEC_DCA_H
enum DCASpeaker ;
enum DCASpeakerMask ;
#define DCA_SPEAKER_LAYOUT_MONO         (DCA_SPEAKER_MASK_C)
#define DCA_SPEAKER_LAYOUT_STEREO       (DCA_SPEAKER_MASK_L | DCA_SPEAKER_MASK_R)
#define DCA_SPEAKER_LAYOUT_2POINT1      (DCA_SPEAKER_LAYOUT_STEREO | DCA_SPEAKER_MASK_LFE1)
#define DCA_SPEAKER_LAYOUT_3_0          (DCA_SPEAKER_LAYOUT_STEREO | DCA_SPEAKER_MASK_C)
#define DCA_SPEAKER_LAYOUT_2_1          (DCA_SPEAKER_LAYOUT_STEREO | DCA_SPEAKER_MASK_Cs)
#define DCA_SPEAKER_LAYOUT_3_1          (DCA_SPEAKER_LAYOUT_3_0 | DCA_SPEAKER_MASK_Cs)
#define DCA_SPEAKER_LAYOUT_2_2          (DCA_SPEAKER_LAYOUT_STEREO | DCA_SPEAKER_MASK_Ls | DCA_SPEAKER_MASK_Rs)
#define DCA_SPEAKER_LAYOUT_5POINT0      (DCA_SPEAKER_LAYOUT_3_0 | DCA_SPEAKER_MASK_Ls | DCA_SPEAKER_MASK_Rs)
#define DCA_SPEAKER_LAYOUT_5POINT1      (DCA_SPEAKER_LAYOUT_5POINT0 | DCA_SPEAKER_MASK_LFE1)
#define DCA_SPEAKER_LAYOUT_7POINT0_WIDE (DCA_SPEAKER_LAYOUT_5POINT0 | DCA_SPEAKER_MASK_Lw | DCA_SPEAKER_MASK_Rw)
#define DCA_SPEAKER_LAYOUT_7POINT1_WIDE (DCA_SPEAKER_LAYOUT_7POINT0_WIDE | DCA_SPEAKER_MASK_LFE1)
#define DCA_HAS_STEREO(mask) \
((mask & DCA_SPEAKER_LAYOUT_STEREO) == DCA_SPEAKER_LAYOUT_STEREO)
enum DCASpeakerPair ;
static inline int ff_dca_count_chs_for_mask(unsigned int mask)
enum DCARepresentationType ;
enum DCAExtensionMask ;
enum DCADownMixType ;
extern av_export const uint32_t avpriv_dca_sample_rates[16];
extern const uint32_t ff_dca_sampling_freqs[16];
extern const uint8_t ff_dca_freq_ranges[16];
int avpriv_dca_convert_bitstream(const uint8_t *src, int src_size, uint8_t *dst,
int max_size);
