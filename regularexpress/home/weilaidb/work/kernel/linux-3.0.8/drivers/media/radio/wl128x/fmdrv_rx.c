void fm_rx_reset_rds_cache(struct fmdev *fmdev)
void fm_rx_reset_station_info(struct fmdev *fmdev)
u32 fm_rx_set_freq(struct fmdev *fmdev, u32 freq)
static u32 fm_rx_set_channel_spacing(struct fmdev *fmdev, u32 spacing)
u32 fm_rx_seek(struct fmdev *fmdev, u32 seek_upward,
u32 wrap_around, u32 spacing)
u32 fm_rx_set_volume(struct fmdev *fmdev, u16 vol_to_set)
u32 fm_rx_get_volume(struct fmdev *fmdev, u16 *curr_vol)
u32 fm_rx_get_band_freq_range(struct fmdev *fmdev, u32 *bot_freq, u32 *top_freq)
void fm_rx_get_region(struct fmdev *fmdev, u8 *region)
u32 fm_rx_set_region(struct fmdev *fmdev, u8 region_to_set)
u32 fm_rx_get_mute_mode(struct fmdev *fmdev, u8 *curr_mute_mode)
static u32 fm_config_rx_mute_reg(struct fmdev *fmdev)
u32 fm_rx_set_mute_mode(struct fmdev *fmdev, u8 mute_mode_toset)
u32 fm_rx_get_rfdepend_softmute(struct fmdev *fmdev, u8 *curr_mute_mode)
u32 fm_rx_set_rfdepend_softmute(struct fmdev *fmdev, u8 rfdepend_mute)
u32 fm_rx_get_rssi_level(struct fmdev *fmdev, u16 *rssilvl)
u32 fm_rx_set_rssi_threshold(struct fmdev *fmdev, short rssi_lvl_toset)
u32 fm_rx_get_rssi_threshold(struct fmdev *fmdev, short *curr_rssi_lvl)
u32 fm_rx_set_stereo_mono(struct fmdev *fmdev, u16 mode)
u32 fm_rx_get_stereo_mono(struct fmdev *fmdev, u16 *mode)
u32 fm_rx_set_deemphasis_mode(struct fmdev *fmdev, u16 mode)
u32 fm_rx_get_deemph_mode(struct fmdev *fmdev, u16 *curr_deemphasis_mode)
u32 fm_rx_set_rds_mode(struct fmdev *fmdev, u8 rds_en_dis)
u32 fm_rx_get_rds_mode(struct fmdev *fmdev, u8 *curr_rds_en_dis)
u32 fm_rx_set_rds_system(struct fmdev *fmdev, u8 rds_mode)
u32 fm_rx_get_rds_system(struct fmdev *fmdev, u8 *rds_mode)
u32 fm_rx_set_af_switch(struct fmdev *fmdev, u8 af_mode)
u32 fm_rx_get_af_switch(struct fmdev *fmdev, u8 *af_mode)
