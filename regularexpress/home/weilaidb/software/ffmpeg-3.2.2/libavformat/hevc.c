#define MAX_SPATIAL_SEGMENTATION 4096
typedef struct HVCCNALUnitArray  HVCCNALUnitArray;
typedef struct HEVCDecoderConfigurationRecord  HEVCDecoderConfigurationRecord;
typedef struct HVCCProfileTierLevel  HVCCProfileTierLevel;
hvcc_update_ptl
hvcc_parse_ptl
skip_sub_layer_hrd_parameters
skip_hrd_parameters
skip_timing_info
hvcc_parse_vui
skip_sub_layer_ordering_info
hvcc_parse_vps
skip_scaling_list_data
parse_rps
hvcc_parse_sps
hvcc_parse_pps
*nal_unit_extract_rbsp
nal_unit_parse_header
hvcc_array_add_nal_unit
hvcc_add_nal_unit
hvcc_init
hvcc_close
hvcc_write
ff_hevc_annexb2mp4
ff_hevc_annexb2mp4_buf
ff_isom_write_hvcc
