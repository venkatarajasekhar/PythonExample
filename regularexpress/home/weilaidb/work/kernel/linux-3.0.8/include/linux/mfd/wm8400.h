#define __LINUX_MFD_WM8400_H
#define WM8400_LDO1  0
#define WM8400_LDO2  1
#define WM8400_LDO3  2
#define WM8400_LDO4  3
#define WM8400_DCDC1 4
#define WM8400_DCDC2 5
struct wm8400_platform_data ;
int wm8400_register_regulator(struct device *dev, int reg,
struct regulator_init_data *initdata);
