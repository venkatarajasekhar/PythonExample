#define _LINUX_MISCDEVICE_H
#define PSMOUSE_MINOR		1
#define MS_BUSMOUSE_MINOR	2
#define ATIXL_BUSMOUSE_MINOR	3
#define ATARIMOUSE_MINOR	5
#define SUN_MOUSE_MINOR		6
#define APOLLO_MOUSE_MINOR	7
#define PC110PAD_MINOR		9
#define WATCHDOG_MINOR		130
#define TEMP_MINOR		131
#define RTC_MINOR		135
#define EFI_RTC_MINOR		136
#define SUN_OPENPROM_MINOR	139
#define DMAPI_MINOR		140
#define NVRAM_MINOR		144
#define SGI_MMTIMER		153
#define STORE_QUEUE_MINOR	155
#define I2O_MINOR		166
#define MICROCODE_MINOR		184
#define TUN_MINOR		200
#define MWAVE_MINOR		219
#define MPT_MINOR		220
#define MPT2SAS_MINOR		221
#define UINPUT_MINOR		223
#define HPET_MINOR		228
#define FUSE_MINOR		229
#define KVM_MINOR		232
#define BTRFS_MINOR		234
#define AUTOFS_MINOR		235
#define MAPPER_CTRL_MINOR	236
#define MISC_DYNAMIC_MINOR	255
struct device;
struct miscdevice  ;
extern int misc_register(struct miscdevice * misc);
extern int misc_deregister(struct miscdevice *misc);
#define MODULE_ALIAS_MISCDEV(minor)				\
MODULE_ALIAS("char-major-" __stringify(MISC_MAJOR)	\
"-" __stringify(minor))