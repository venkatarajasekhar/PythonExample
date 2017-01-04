#define __ASM_RTC_H__
#define RTC_PIE 0x40
#define RTC_AIE 0x20
#define RTC_UIE 0x10
#define RTC_BATT_BAD 0x100
#define RTC_SQWE 0x08
#define RTC_DM_BINARY 0x04
#define RTC_24H 0x02
#define RTC_DST_EN 0x01
static inline unsigned char rtc_is_updating(void)
static inline unsigned int __get_rtc_time(struct rtc_time *time)
#define get_rtc_time	__get_rtc_time
static inline int __set_rtc_time(struct rtc_time *time)
#define set_rtc_time	__set_rtc_time
static inline unsigned int get_rtc_ss(void)
static inline int get_rtc_pll(struct rtc_pll_info *pll)
static inline int set_rtc_pll(struct rtc_pll_info *pll)
