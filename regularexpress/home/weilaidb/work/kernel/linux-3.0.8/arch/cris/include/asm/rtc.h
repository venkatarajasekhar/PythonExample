#define __RTC_H__
#  define RTC_SECONDS      0
#  define RTC_MINUTES      1
#  define RTC_HOURS        2
#  define RTC_DAY_OF_MONTH 3
#  define RTC_MONTH        4
#  define RTC_WEEKDAY      5
#  define RTC_YEAR         6
#  define RTC_CONTROL      7
#  define RTC_CONTROL_WRITEPROTECT	0x80
#  define RTC_TRICKLECHARGER		8
#  define RTC_TCR_PATTERN	0xA0
#  define RTC_TCR_1DIOD		0x04
#  define RTC_TCR_2DIOD		0x08
#  define RTC_TCR_DISABLED	0x00
#  define RTC_TCR_2KOHM		0x01
#  define RTC_TCR_4KOHM		0x02
#  define RTC_TCR_8KOHM		0x03
#elif defined(CONFIG_ETRAX_PCF8563)
#  define RTC_I2C_READ		0xa3
#  define RTC_I2C_WRITE		0xa2
#  define RTC_CONTROL1		0x00
#  define RTC_CONTROL2		0x01
#  define RTC_CLOCKOUT_FREQ	0x0d
#  define RTC_TIMER_CONTROL	0x0e
#  define RTC_TIMER_CNTDOWN	0x0f
#  define RTC_SECONDS		0x02
#  define RTC_MINUTES		0x03
#  define RTC_HOURS		0x04
#  define RTC_DAY_OF_MONTH	0x05
#  define RTC_WEEKDAY		0x06
#  define RTC_MONTH		0x07
#  define RTC_YEAR		0x08
#  define RTC_MINUTE_ALARM	0x09
#  define RTC_HOUR_ALARM	0x0a
#  define RTC_DAY_ALARM		0x0b
#  define RTC_WEEKDAY_ALARM 0x0c
extern unsigned char ds1302_readreg(int reg);
extern void ds1302_writereg(int reg, unsigned char val);
extern int ds1302_init(void);
#  define CMOS_READ(x) ds1302_readreg(x)
#  define CMOS_WRITE(val,reg) ds1302_writereg(reg,val)
#  define RTC_INIT() ds1302_init()
#elif defined(CONFIG_ETRAX_PCF8563)
extern unsigned char pcf8563_readreg(int reg);
extern void pcf8563_writereg(int reg, unsigned char val);
extern int pcf8563_init(void);
#  define CMOS_READ(x) pcf8563_readreg(x)
#  define CMOS_WRITE(val,reg) pcf8563_writereg(reg,val)
#  define RTC_INIT() pcf8563_init()
#  define CMOS_READ(x) 42
#  define CMOS_WRITE(x,y)
#  define RTC_INIT() (-1)
struct rtc_time ;
#define RTC_MAGIC 'p'
#define RTC_RD_TIME		_IOR(RTC_MAGIC, 0x09, struct rtc_time)
#define RTC_SET_TIME		_IOW(RTC_MAGIC, 0x0a, struct rtc_time)
#define RTC_SET_CHARGE		_IOW(RTC_MAGIC, 0x0b, int)
#define RTC_VL_READ		_IOR(RTC_MAGIC, 0x13, int)
#define RTC_VL_CLR		_IO(RTC_MAGIC, 0x14)
#define RTC_MAX_IOCTL 0x14
