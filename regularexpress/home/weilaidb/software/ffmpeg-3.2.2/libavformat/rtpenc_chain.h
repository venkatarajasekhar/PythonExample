#define AVFORMAT_RTPENC_CHAIN_H
int ff_rtp_chain_mux_open(AVFormatContext **out, AVFormatContext *s,
AVStream *st, URLContext *handle, int packet_size,
int id);
