#define AVUTIL_MASTERING_DISPLAY_METADATA_H
typedef struct AVMasteringDisplayMetadata  AVMasteringDisplayMetadata;
AVMasteringDisplayMetadata *av_mastering_display_metadata_alloc(void);
AVMasteringDisplayMetadata *av_mastering_display_metadata_create_side_data(AVFrame *frame);