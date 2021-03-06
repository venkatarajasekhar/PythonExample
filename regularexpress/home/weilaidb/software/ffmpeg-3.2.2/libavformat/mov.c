#if CONFIG_ZLIB
typedef struct MOVParseTableEntry  MOVParseTableEntry;
mov_read_default;
mov_read_mfra;
mov_metadata_track_or_disc_number
mov_metadata_int8_bypass_padding
mov_metadata_int8_no_padding
mov_metadata_gnre
static const uint32_t mac_to_unicode[128] = ;
mov_read_mac_string
mov_read_covr
mov_metadata_loci
mov_metadata_hmmt
mov_read_udta_string
mov_read_chpl
#define MIN_DATA_ENTRY_BOX_SIZE 12
mov_read_dref
mov_read_hdlr
ff_mov_read_esds
mov_read_esds
mov_read_dac3
mov_read_dec3
mov_read_ddts
mov_read_chan
mov_read_wfex
mov_read_pasp
mov_read_mdat
#define DRM_BLOB_SIZE 56
mov_read_adrm
aax_filter
mov_read_ftyp
mov_read_moov
mov_read_moof
mov_metadata_creation_time
mov_read_mdhd
mov_read_mvhd
mov_read_enda
mov_read_colr
mov_read_fiel
mov_realloc_extradata
mov_read_atom_into_extradata
mov_read_extradata
mov_read_alac
mov_read_avss
mov_read_jp2h
mov_read_dpxe
mov_read_avid
mov_read_targa_y216
mov_read_ares
mov_read_aclr
mov_read_svq3
mov_read_wave
mov_read_glbl
mov_read_dvc1
mov_read_strf
mov_read_stco
ff_mov_get_lpcm_codec_id
mov_codec_id
mov_parse_stsd_video
mov_parse_stsd_audio
mov_parse_stsd_subtitle
yuv_to_rgba
mov_rewrite_dvd_sub_extradata
mov_parse_stsd_data
mov_finalize_stsd_codec
mov_skip_multiple_stsd
ff_mov_read_stsd_entries
mov_read_stsd
mov_read_stsc
mov_get_stsc_samples
mov_read_stps
mov_read_stss
mov_read_stsz
mov_read_stts
mov_update_dts_shift
mov_read_ctts
mov_read_sbgp
get_edit_list_entry
find_prev_closest_keyframe_index
add_index_entry
fix_index_entry_timestamps
add_ctts_entry
mov_fix_index
mov_build_index
test_same_origin
mov_open_dref
fix_timescale
mov_read_trak
mov_read_ilst
mov_read_keys
mov_read_custom
mov_read_meta
mov_read_tkhd
mov_read_tfhd
mov_read_chap
mov_read_trex
mov_read_tfdt
mov_read_trun
mov_read_sidx
if (avio_rb32(pb) != 0)
atom.type = avio_rl32(pb);
atom.size -= 8;
if (atom.type != MKTAG('m','d','a','t'))
err = mov_read_mdat(c, pb, atom);
return err;
}
mov_read_cmov
mov_read_elst
mov_read_tmcd
mov_read_uuid
mov_read_free
mov_read_frma
mov_read_senc
mov_read_saiz
cenc_filter
mov_seek_auxiliary_info
static const MOVParseTableEntry mov_default_parse_table[] = ;
mov_read_default
mov_probe
mov_read_chapters
parse_timecode_in_framenum_format
mov_read_rtmd_track
mov_read_timecode_track
mov_read_close
tmcd_is_referenced
export_orphan_timecode
read_tfra
mov_read_mfra
mov_read_header
*mov_find_next_sample
should_retry
mov_switch_root
mov_change_extradata
mov_read_packet
mov_seek_fragment
mov_seek_stream
mov_read_seek
OFFSET offsetof(MOVContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption mov_options[] = ;
static const AVClass mov_class = ;
AVInputFormat ff_mov_demuxer = ;
