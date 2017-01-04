#define __LINUX_MFD_MAX8925_H
enum ;
enum ;
enum ;
#define MAX8925_CHG_IRQ1		(0x7e)
#define MAX8925_CHG_IRQ2		(0x7f)
#define MAX8925_CHG_IRQ1_MASK		(0x80)
#define MAX8925_CHG_IRQ2_MASK		(0x81)
#define MAX8925_CHG_STATUS		(0x82)
#define MAX8925_SYSENSEL		(0x00)
#define MAX8925_ON_OFF_IRQ1		(0x01)
#define MAX8925_ON_OFF_IRQ1_MASK	(0x02)
#define MAX8925_ON_OFF_STATUS		(0x03)
#define MAX8925_ON_OFF_IRQ2		(0x0d)
#define MAX8925_ON_OFF_IRQ2_MASK	(0x0e)
#define MAX8925_RESET_CNFG		(0x0f)
#define MAX8925_TSC_IRQ			(0x00)
#define MAX8925_TSC_IRQ_MASK		(0x01)
#define MAX8925_TSC_CNFG1		(0x02)
#define MAX8925_ADC_SCHED		(0x10)
#define MAX8925_ADC_RES_END		(0x6f)
#define MAX8925_NREF_OK			(1 << 4)
#define MAX8925_ALARM0_CNTL		(0x18)
#define MAX8925_ALARM1_CNTL		(0x19)
#define MAX8925_RTC_IRQ			(0x1c)
#define MAX8925_RTC_IRQ_MASK		(0x1d)
#define MAX8925_MPL_CNTL		(0x1e)
#define MAX8925_WLED_MODE_CNTL		(0x84)
#define MAX8925_WLED_CNTL		(0x85)
#define MAX8925_SDCTL1			(0x04)
#define MAX8925_SDCTL2			(0x07)
#define MAX8925_SDCTL3			(0x0A)
#define MAX8925_SDV1			(0x06)
#define MAX8925_SDV2			(0x09)
#define MAX8925_SDV3			(0x0C)
#define MAX8925_LDOCTL1			(0x18)
#define MAX8925_LDOCTL2			(0x1C)
#define MAX8925_LDOCTL3			(0x20)
#define MAX8925_LDOCTL4			(0x24)
#define MAX8925_LDOCTL5			(0x28)
#define MAX8925_LDOCTL6			(0x2C)
#define MAX8925_LDOCTL7			(0x30)
#define MAX8925_LDOCTL8			(0x34)
#define MAX8925_LDOCTL9			(0x38)
#define MAX8925_LDOCTL10		(0x3C)
#define MAX8925_LDOCTL11		(0x40)
#define MAX8925_LDOCTL12		(0x44)
#define MAX8925_LDOCTL13		(0x48)
#define MAX8925_LDOCTL14		(0x4C)
#define MAX8925_LDOCTL15		(0x50)
#define MAX8925_LDOCTL16		(0x10)
#define MAX8925_LDOCTL17		(0x14)
#define MAX8925_LDOCTL18		(0x72)
#define MAX8925_LDOCTL19		(0x5C)
#define MAX8925_LDOCTL20		(0x9C)
#define MAX8925_LDOVOUT1		(0x1A)
#define MAX8925_LDOVOUT2		(0x1E)
#define MAX8925_LDOVOUT3		(0x22)
#define MAX8925_LDOVOUT4		(0x26)
#define MAX8925_LDOVOUT5		(0x2A)
#define MAX8925_LDOVOUT6		(0x2E)
#define MAX8925_LDOVOUT7		(0x32)
#define MAX8925_LDOVOUT8		(0x36)
#define MAX8925_LDOVOUT9		(0x3A)
#define MAX8925_LDOVOUT10		(0x3E)
#define MAX8925_LDOVOUT11		(0x42)
#define MAX8925_LDOVOUT12		(0x46)
#define MAX8925_LDOVOUT13		(0x4A)
#define MAX8925_LDOVOUT14		(0x4E)
#define MAX8925_LDOVOUT15		(0x52)
#define MAX8925_LDOVOUT16		(0x12)
#define MAX8925_LDOVOUT17		(0x16)
#define MAX8925_LDOVOUT18		(0x74)
#define MAX8925_LDOVOUT19		(0x5E)
#define MAX8925_LDOVOUT20		(0x9E)
#define CHG_IRQ1_MASK			(0x07)
#define CHG_IRQ2_MASK			(0xff)
#define ON_OFF_IRQ1_MASK		(0xff)
#define ON_OFF_IRQ2_MASK		(0x03)
#define TSC_IRQ_MASK			(0x03)
#define RTC_IRQ_MASK			(0x0c)
#define MAX8925_MAX_REGULATOR		(23)
#define MAX8925_NAME_SIZE		(32)
enum ;
struct max8925_chip ;
struct max8925_backlight_pdata ;
struct max8925_touch_pdata ;
struct max8925_power_pdata ;
struct max8925_platform_data ;
extern int max8925_reg_read(struct i2c_client *, int);
extern int max8925_reg_write(struct i2c_client *, int, unsigned char);
extern int max8925_bulk_read(struct i2c_client *, int, int, unsigned char *);
extern int max8925_bulk_write(struct i2c_client *, int, int, unsigned char *);
extern int max8925_set_bits(struct i2c_client *, int, unsigned char,
unsigned char);
extern int max8925_device_init(struct max8925_chip *,
struct max8925_platform_data *);
extern void max8925_device_exit(struct max8925_chip *);
