#define __PNX008_DUM_H__
#define PNX4008_DUMCONF_VA_BASE		IO_ADDRESS(PNX4008_DUMCONF_BASE)
#define PNX4008_DUM_MAIN_VA_BASE	IO_ADDRESS(PNX4008_DUM_MAINCFG_BASE)
#define DUM_CH_BASE_ADR		(PNX4008_DUMCONF_VA_BASE + 0x00)
#define DUM_CH_MIN_ADR		(PNX4008_DUMCONF_VA_BASE + 0x00)
#define DUM_CH_MAX_ADR		(PNX4008_DUMCONF_VA_BASE + 0x04)
#define DUM_CH_CONF_ADR		(PNX4008_DUMCONF_VA_BASE + 0x08)
#define DUM_CH_STAT_ADR		(PNX4008_DUMCONF_VA_BASE + 0x0C)
#define DUM_CH_CTRL_ADR		(PNX4008_DUMCONF_VA_BASE + 0x10)
#define CH_MARG		(0x100 / sizeof(u32))
#define DUM_CH_MIN(i)	(*((volatile u32 *)DUM_CH_MIN_ADR + (i) * CH_MARG))
#define DUM_CH_MAX(i)	(*((volatile u32 *)DUM_CH_MAX_ADR + (i) * CH_MARG))
#define DUM_CH_CONF(i)	(*((volatile u32 *)DUM_CH_CONF_ADR + (i) * CH_MARG))
#define DUM_CH_STAT(i)	(*((volatile u32 *)DUM_CH_STAT_ADR + (i) * CH_MARG))
#define DUM_CH_CTRL(i)	(*((volatile u32 *)DUM_CH_CTRL_ADR + (i) * CH_MARG))
#define DUM_CONF_ADR          (PNX4008_DUM_MAIN_VA_BASE + 0x00)
#define DUM_CTRL_ADR          (PNX4008_DUM_MAIN_VA_BASE + 0x04)
#define DUM_STAT_ADR          (PNX4008_DUM_MAIN_VA_BASE + 0x08)
#define DUM_DECODE_ADR        (PNX4008_DUM_MAIN_VA_BASE + 0x0C)
#define DUM_COM_BASE_ADR      (PNX4008_DUM_MAIN_VA_BASE + 0x10)
#define DUM_SYNC_C_ADR        (PNX4008_DUM_MAIN_VA_BASE + 0x14)
#define DUM_CLK_DIV_ADR       (PNX4008_DUM_MAIN_VA_BASE + 0x18)
#define DUM_DIRTY_LOW_ADR     (PNX4008_DUM_MAIN_VA_BASE + 0x20)
#define DUM_DIRTY_HIGH_ADR    (PNX4008_DUM_MAIN_VA_BASE + 0x24)
#define DUM_FORMAT_ADR        (PNX4008_DUM_MAIN_VA_BASE + 0x28)
#define DUM_WTCFG1_ADR        (PNX4008_DUM_MAIN_VA_BASE + 0x30)
#define DUM_RTCFG1_ADR        (PNX4008_DUM_MAIN_VA_BASE + 0x34)
#define DUM_WTCFG2_ADR        (PNX4008_DUM_MAIN_VA_BASE + 0x38)
#define DUM_RTCFG2_ADR        (PNX4008_DUM_MAIN_VA_BASE + 0x3C)
#define DUM_TCFG_ADR          (PNX4008_DUM_MAIN_VA_BASE + 0x40)
#define DUM_OUTP_FORMAT1_ADR  (PNX4008_DUM_MAIN_VA_BASE + 0x44)
#define DUM_OUTP_FORMAT2_ADR  (PNX4008_DUM_MAIN_VA_BASE + 0x48)
#define DUM_SYNC_MODE_ADR     (PNX4008_DUM_MAIN_VA_BASE + 0x4C)
#define DUM_SYNC_OUT_C_ADR    (PNX4008_DUM_MAIN_VA_BASE + 0x50)
#define DUM_CONF              (*(volatile u32 *)(DUM_CONF_ADR))
#define DUM_CTRL              (*(volatile u32 *)(DUM_CTRL_ADR))
#define DUM_STAT              (*(volatile u32 *)(DUM_STAT_ADR))
#define DUM_DECODE            (*(volatile u32 *)(DUM_DECODE_ADR))
#define DUM_COM_BASE          (*(volatile u32 *)(DUM_COM_BASE_ADR))
#define DUM_SYNC_C            (*(volatile u32 *)(DUM_SYNC_C_ADR))
#define DUM_CLK_DIV           (*(volatile u32 *)(DUM_CLK_DIV_ADR))
#define DUM_DIRTY_LOW         (*(volatile u32 *)(DUM_DIRTY_LOW_ADR))
#define DUM_DIRTY_HIGH        (*(volatile u32 *)(DUM_DIRTY_HIGH_ADR))
#define DUM_FORMAT            (*(volatile u32 *)(DUM_FORMAT_ADR))
#define DUM_WTCFG1            (*(volatile u32 *)(DUM_WTCFG1_ADR))
#define DUM_RTCFG1            (*(volatile u32 *)(DUM_RTCFG1_ADR))
#define DUM_WTCFG2            (*(volatile u32 *)(DUM_WTCFG2_ADR))
#define DUM_RTCFG2            (*(volatile u32 *)(DUM_RTCFG2_ADR))
#define DUM_TCFG              (*(volatile u32 *)(DUM_TCFG_ADR))
#define DUM_OUTP_FORMAT1      (*(volatile u32 *)(DUM_OUTP_FORMAT1_ADR))
#define DUM_OUTP_FORMAT2      (*(volatile u32 *)(DUM_OUTP_FORMAT2_ADR))
#define DUM_SYNC_MODE         (*(volatile u32 *)(DUM_SYNC_MODE_ADR))
#define DUM_SYNC_OUT_C        (*(volatile u32 *)(DUM_SYNC_OUT_C_ADR))
#define DUM_SLAVE_WRITE_ADR      (PNX4008_DUM_MAINCFG_BASE + 0x0000000)
#define DUM_SLAVE_READ1_I_ADR    (PNX4008_DUM_MAINCFG_BASE + 0x1000000)
#define DUM_SLAVE_READ1_R_ADR    (PNX4008_DUM_MAINCFG_BASE + 0x1000004)
#define DUM_SLAVE_READ2_I_ADR    (PNX4008_DUM_MAINCFG_BASE + 0x1000008)
#define DUM_SLAVE_READ2_R_ADR    (PNX4008_DUM_MAINCFG_BASE + 0x100000C)
#define DUM_SLAVE_WRITE_W  ((volatile u32 *)(DUM_SLAVE_WRITE_ADR))
#define DUM_SLAVE_WRITE_HW ((volatile u16 *)(DUM_SLAVE_WRITE_ADR))
#define DUM_SLAVE_READ1_I  ((volatile u8 *)(DUM_SLAVE_READ1_I_ADR))
#define DUM_SLAVE_READ1_R  ((volatile u16 *)(DUM_SLAVE_READ1_R_ADR))
#define DUM_SLAVE_READ2_I  ((volatile u8 *)(DUM_SLAVE_READ2_I_ADR))
#define DUM_SLAVE_READ2_R  ((volatile u16 *)(DUM_SLAVE_READ2_R_ADR))
#define DISP_0_REG            (0x00)
#define DISP_1_REG            (0x01)
#define DISP_CAL_REG          (0x20)
#define DISP_ID_REG           (0x2A)
#define DISP_XMIN_L_REG       (0x30)
#define DISP_XMIN_H_REG       (0x31)
#define DISP_YMIN_REG         (0x32)
#define DISP_XMAX_L_REG       (0x34)
#define DISP_XMAX_H_REG       (0x35)
#define DISP_YMAX_REG         (0x36)
#define DISP_SYNC_EN_REG      (0x38)
#define DISP_SYNC_RISE_L_REG  (0x3C)
#define DISP_SYNC_RISE_H_REG  (0x3D)
#define DISP_SYNC_FALL_L_REG  (0x3E)
#define DISP_SYNC_FALL_H_REG  (0x3F)
#define DISP_PIXEL_REG        (0x0B)
#define DISP_DUMMY1_REG       (0x28)
#define DISP_DUMMY2_REG       (0x29)
#define DISP_TIMING_REG       (0x98)
#define DISP_DUMP_REG         (0x99)
#define SONY_ID1              (0x22)
#define SONY_ID2              (0x23)
#define PH_DISP_ORIENT_REG    (0x003)
#define PH_DISP_YPOINT_REG    (0x200)
#define PH_DISP_XPOINT_REG    (0x201)
#define PH_DISP_PIXEL_REG     (0x202)
#define PH_DISP_YMIN_REG      (0x406)
#define PH_DISP_YMAX_REG      (0x407)
#define PH_DISP_XMIN_REG      (0x408)
#define PH_DISP_XMAX_REG      (0x409)
#define NO_VALID_DISPLAY_FOUND      (0)
#define DISPLAY2_IS_NOT_CONNECTED   (0)
#define V_BAC_ENABLE		(BIT(0))
#define V_BAC_DISABLE_IDLE	(BIT(1))
#define V_BAC_DISABLE_TRIG	(BIT(2))
#define V_DUM_RESET		(BIT(3))
#define V_MUX_RESET		(BIT(4))
#define BAC_ENABLED		(BIT(0))
#define BAC_DISABLED		0
#define V_LCD_STANDBY_OFF	((BIT(25)) | (0 << 16) | DISP_0_REG)
#define V_LCD_USE_9BIT_BUS	((BIT(25)) | (2 << 16) | DISP_1_REG)
#define V_LCD_SYNC_RISE_L	((BIT(25)) | (0 << 16) | DISP_SYNC_RISE_L_REG)
#define V_LCD_SYNC_RISE_H	((BIT(25)) | (0 << 16) | DISP_SYNC_RISE_H_REG)
#define V_LCD_SYNC_FALL_L	((BIT(25)) | (160 << 16) | DISP_SYNC_FALL_L_REG)
#define V_LCD_SYNC_FALL_H	((BIT(25)) | (0 << 16) | DISP_SYNC_FALL_H_REG)
#define V_LCD_SYNC_ENABLE	((BIT(25)) | (128 << 16) | DISP_SYNC_EN_REG)
#define V_LCD_DISPLAY_ON	((BIT(25)) | (64 << 16) | DISP_0_REG)
enum ;
enum ;
struct dum_setup ;
struct dum_ch_setup ;
struct disp_window ;
