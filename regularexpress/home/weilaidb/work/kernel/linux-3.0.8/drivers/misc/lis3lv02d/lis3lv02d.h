enum lis3_reg ;
enum lis302d_reg ;
enum lis3lv02d_reg ;
enum lis3_who_am_i ;
enum lis3lv02d_ctrl1_12b ;
enum lis3lv02d_ctrl1_8b ;
enum lis3lv02d_ctrl1_3dc ;
enum lis3lv02d_ctrl2 ;
enum lis3lv02d_ctrl4_3dc ;
enum lis302d_ctrl2 ;
enum lis3lv02d_ctrl3 ;
enum lis3lv02d_status_reg ;
enum lis3lv02d_ff_wu_cfg ;
enum lis3lv02d_ff_wu_src ;
enum lis3lv02d_dd_cfg ;
enum lis3lv02d_dd_src ;
enum lis3lv02d_click_src_8b ;
enum lis3lv02d_reg_state ;
union axis_conversion ;
struct lis3lv02d ;
int lis3lv02d_init_device(struct lis3lv02d *lis3);
int lis3lv02d_joystick_enable(void);
void lis3lv02d_joystick_disable(void);
void lis3lv02d_poweroff(struct lis3lv02d *lis3);
void lis3lv02d_poweron(struct lis3lv02d *lis3);
int lis3lv02d_remove_fs(struct lis3lv02d *lis3);
extern struct lis3lv02d lis3_dev;
