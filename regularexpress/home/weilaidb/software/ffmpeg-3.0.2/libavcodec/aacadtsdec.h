#define AVCODEC_AACADTSDEC_H
#define AAC_ADTS_HEADER_SIZE 7
typedef struct AACADTSHeaderInfo  AACADTSHeaderInfo;
int avpriv_aac_parse_header(GetBitContext *gbc, AACADTSHeaderInfo *hdr);
