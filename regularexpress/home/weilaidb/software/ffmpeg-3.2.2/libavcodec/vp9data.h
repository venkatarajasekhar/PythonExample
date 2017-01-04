#define AVCODEC_VP9DATA_H
static const int8_t vp9_partition_tree[3][2] = ;
static const uint8_t vp9_default_kf_partition_probs[4][4][3] = ;
static const int8_t vp9_segmentation_tree[7][2] = ;
static const int8_t vp9_intramode_tree[9][2] = ;
static const uint8_t vp9_default_kf_ymode_probs[10][10][9] = ;
static const uint8_t vp9_default_kf_uvmode_probs[10][9] = ;
static const int8_t vp9_inter_mode_tree[3][2] = ;
static const int8_t vp9_filter_tree[2][2] = ;
static const enum FilterMode vp9_filter_lut[3] = ;
static const int16_t vp9_dc_qlookup[3][256] = ;
static const int16_t vp9_ac_qlookup[3][256] = ;
static const enum TxfmType vp9_intra_txfm_type[14] = ;
static const int16_t vp9_default_scan_4x4[16] = ;
static const int16_t vp9_col_scan_4x4[16] = ;
static const int16_t vp9_row_scan_4x4[16] = ;
static const int16_t vp9_default_scan_8x8[64] = ;
static const int16_t vp9_col_scan_8x8[64] = ;
static const int16_t vp9_row_scan_8x8[64] = ;
static const int16_t vp9_default_scan_16x16[256] = ;
static const int16_t vp9_col_scan_16x16[256] = ;
static const int16_t vp9_row_scan_16x16[256] = ;
static const int16_t vp9_default_scan_32x32[1024] = ;
static const int16_t * const vp9_scans[5][4] = ;
static const int16_t vp9_default_scan_4x4_nb[16][2] = ;
static const int16_t vp9_col_scan_4x4_nb[16][2] = ;
static const int16_t vp9_row_scan_4x4_nb[16][2] = ;
static const int16_t vp9_default_scan_8x8_nb[64][2] = ;
static const int16_t vp9_col_scan_8x8_nb[64][2] = ;
static const int16_t vp9_row_scan_8x8_nb[64][2] = ;
static const int16_t vp9_default_scan_16x16_nb[256][2] = ;
static const int16_t vp9_col_scan_16x16_nb[256][2] = ;
static const int16_t vp9_row_scan_16x16_nb[256][2] = ;
static const int16_t vp9_default_scan_32x32_nb[1024][2] = ;
static const int16_t (* const vp9_scans_nb[5][4])[2] = ;
static const uint8_t vp9_model_pareto8[256][8] = ;
typedef struct  prob_context;
static const prob_context vp9_default_probs = ;
static const uint8_t vp9_default_coef_probs[4][2][2][6][6][3] = ;
enum MVJoint ;
static const int8_t vp9_mv_joint_tree[3][2] = ;
static const int8_t vp9_mv_class_tree[10][2] = ;
static const int8_t vp9_mv_fp_tree[3][2] = ;
