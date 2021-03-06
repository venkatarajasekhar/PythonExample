#if CONFIG_NETWORK
const char av_format_ffversion[] =  FFMPEG_VERSION;
avformat_version
*avformat_configuration
*avformat_license
#define RELATIVE_TS_BASE (INT64_MAX - (1LL<<48))
is_relative
wrap_timestamp
MAKE_ACCESSORS(AVStream, stream, AVRational, r_frame_rate)
MAKE_ACCESSORS(AVStream, stream, char *, recommended_encoder_configuration)
MAKE_ACCESSORS(AVFormatContext, format, AVCodec *, video_codec)
MAKE_ACCESSORS(AVFormatContext, format, AVCodec *, audio_codec)
MAKE_ACCESSORS(AVFormatContext, format, AVCodec *, subtitle_codec)
MAKE_ACCESSORS(AVFormatContext, format, AVCodec *, data_codec)
MAKE_ACCESSORS(AVFormatContext, format, int, metadata_header_padding)
MAKE_ACCESSORS(AVFormatContext, format, void *, opaque)
MAKE_ACCESSORS(AVFormatContext, format, av_format_control_message, control_message_cb)
#if FF_API_OLD_OPEN_CALLBACKS
MAKE_ACCESSORS
FF_ENABLE_DEPRECATION_WARNINGS
av_stream_get_end_pts
*av_stream_get_parser
av_format_inject_global_side_data
ff_copy_whiteblacklists
*find_decoder
*find_probe_decoder
av_format_get_probe_score
#define SANE_CHUNK_SIZE (50000000)
ffio_limit
append_packet_chunked
av_get_packet
av_append_packet
av_filename_number_test
set_codec_from_probe_data
av_demuxer_open
init_input
add_to_pktbuf
avformat_queue_attached_pictures
update_stream_avctx
avformat_open_input
force_codec_ids
probe_codec
update_wrap_reference
ff_read_packet
determinable_frame_size
ff_compute_frame_duration
is_intra_only
has_decode_delay_been_guessed
*get_next_pkt
select_from_pts_buffer
update_dts_from_pts
update_initial_timestamps
update_initial_durations
compute_pkt_fields
free_packet_buffer
parse_packet
read_from_packet_buffer
ts_to_samples
read_frame_internal
av_read_frame
flush_packet_queue
av_find_default_stream_index
ff_read_frame_flush
ff_update_cur_dts
ff_reduce_index
ff_add_index_entry
av_add_index_entry
ff_index_search_timestamp
ff_configure_buffers_for_index
av_index_search_timestamp
ff_read_timestamp(struct AVFormatContext *, int , int64_t *, int64_t ))
ff_seek_frame_binary
ff_find_last_ts(struct AVFormatContext *, int , int64_t *, int64_t ))
ff_gen_search(struct AVFormatContext *, int,
int64_t *, int64_t))
seek_frame_byte
seek_frame_generic
seek_frame_internal
av_seek_frame
avformat_seek_file
avformat_flush
has_duration
update_stream_timings
fill_all_stream_timings
estimate_timings_from_bit_rate
#define DURATION_MAX_READ_SIZE 250000LL
#define DURATION_MAX_RETRY 6
estimate_timings_from_pts
estimate_timings
has_codec_parameters
try_decode_frame
ff_codec_get_tag
ff_codec_get_id
ff_get_pcm_codec_id
av_codec_get_tag
av_codec_get_tag2
av_codec_get_id
compute_chapters_end
get_std_framerate
tb_unreliable
ff_alloc_extradata
ff_get_extradata
ff_rfps_add_frame
ff_rfps_calculate
avformat_find_stream_info
*av_find_program_from_stream
av_find_best_stream
av_read_play
av_read_pause
ff_stream_encode_params_copy
free_stream
ff_free_stream
avformat_free_context
avformat_close_input
*avformat_new_stream
*av_new_program
*avpriv_new_chapter
av_program_add_stream_index
ff_ntp_time
av_get_frame_filename2
av_get_frame_filename
av_url_split
*ff_data_to_hex
ff_hex_to_data
avpriv_set_pts_info
ff_parse_key_value
ff_find_stream_index
avformat_query_codec
avformat_network_init
avformat_network_deinit
ff_add_param_change
av_guess_sample_aspect_ratio
av_guess_frame_rate
avformat_match_stream_specifier
ff_generate_avci_extradata
#if FF_API_NOCONST_GET_SIDE_DATA
*av_stream_get_side_data
*av_stream_get_side_data
*av_stream_new_side_data
ff_stream_add_bitstream_filter
#if FF_API_OLD_BSF
FF_DISABLE_DEPRECATION_WARNINGS
av_apply_bitstream_filters
FF_ENABLE_DEPRECATION_WARNINGS
ff_format_output_open
ff_format_io_close
ff_parse_creation_time_metadata
ff_standardize_creation_time
ff_get_packet_palette
ff_bprint_to_codecpar_extradata
avformat_transfer_internal_stream_timing_info
av_stream_get_codec_timebase
