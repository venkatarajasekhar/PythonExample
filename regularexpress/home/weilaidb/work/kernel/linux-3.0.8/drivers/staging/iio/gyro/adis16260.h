#define SPI_ADIS16260_H_
#define ADIS16260_STARTUP_DELAY	220
#define ADIS16260_READ_REG(a)    a
#define ADIS16260_WRITE_REG(a) ((a) | 0x80)
#define ADIS16260_FLASH_CNT  0x00
#define ADIS16260_SUPPLY_OUT 0x02
#define ADIS16260_GYRO_OUT   0x04
#define ADIS16260_AUX_ADC    0x0A
#define ADIS16260_TEMP_OUT   0x0C
#define ADIS16260_ANGL_OUT   0x0E
#define ADIS16260_GYRO_OFF   0x14
#define ADIS16260_GYRO_SCALE 0x16
#define ADIS16260_ALM_MAG1   0x20
#define ADIS16260_ALM_MAG2   0x22
#define ADIS16260_ALM_SMPL1  0x24
#define ADIS16260_ALM_SMPL2  0x26
#define ADIS16260_ALM_CTRL   0x28
#define ADIS16260_AUX_DAC    0x30
#define ADIS16260_GPIO_CTRL  0x32
#define ADIS16260_MSC_CTRL   0x34
#define ADIS16260_SMPL_PRD   0x36
#define ADIS16260_SENS_AVG   0x38
#define ADIS16260_SLP_CNT    0x3A
#define ADIS16260_DIAG_STAT  0x3C
#define ADIS16260_GLOB_CMD   0x3E
#define ADIS16260_LOT_ID1    0x52
#define ADIS16260_LOT_ID2    0x54
#define ADIS16260_PROD_ID    0x56
#define ADIS16260_SERIAL_NUM 0x58
#define ADIS16260_OUTPUTS    5
#define ADIS16260_ERROR_ACTIVE			(1<<14)
#define ADIS16260_NEW_DATA			(1<<15)
#define ADIS16260_MSC_CTRL_MEM_TEST		(1<<11)
#define ADIS16260_MSC_CTRL_INT_SELF_TEST	(1<<10)
#define ADIS16260_MSC_CTRL_NEG_SELF_TEST	(1<<9)
#define ADIS16260_MSC_CTRL_POS_SELF_TEST	(1<<8)
#define ADIS16260_MSC_CTRL_DATA_RDY_EN		(1<<2)
#define ADIS16260_MSC_CTRL_DATA_RDY_POL_HIGH	(1<<1)
#define ADIS16260_MSC_CTRL_DATA_RDY_DIO2	(1<<0)
#define ADIS16260_SMPL_PRD_TIME_BASE	(1<<7)
#define ADIS16260_SMPL_PRD_DIV_MASK	0x7F
#define ADIS16260_SLP_CNT_POWER_OFF     0x80
#define ADIS16260_DIAG_STAT_ALARM2	(1<<9)
#define ADIS16260_DIAG_STAT_ALARM1	(1<<8)
#define ADIS16260_DIAG_STAT_FLASH_CHK	(1<<6)
#define ADIS16260_DIAG_STAT_SELF_TEST	(1<<5)
#define ADIS16260_DIAG_STAT_OVERFLOW	(1<<4)
#define ADIS16260_DIAG_STAT_SPI_FAIL	(1<<3)
#define ADIS16260_DIAG_STAT_FLASH_UPT	(1<<2)
#define ADIS16260_DIAG_STAT_POWER_HIGH	(1<<1)
#define ADIS16260_DIAG_STAT_POWER_LOW	(1<<0)
#define ADIS16260_GLOB_CMD_SW_RESET	(1<<7)
#define ADIS16260_GLOB_CMD_FLASH_UPD	(1<<3)
#define ADIS16260_GLOB_CMD_DAC_LATCH	(1<<2)
#define ADIS16260_GLOB_CMD_FAC_CALIB	(1<<1)
#define ADIS16260_GLOB_CMD_AUTO_NULL	(1<<0)
#define ADIS16260_MAX_TX 24
#define ADIS16260_MAX_RX 24
#define ADIS16260_SPI_SLOW	(u32)(300 * 1000)
#define ADIS16260_SPI_BURST	(u32)(1000 * 1000)
#define ADIS16260_SPI_FAST	(u32)(2000 * 1000)
struct adis16260_state ;
int adis16260_set_irq(struct iio_dev *indio_dev, bool enable);
#define ADIS16260_SCAN_SUPPLY	0
#define ADIS16260_SCAN_GYRO	1
#define ADIS16260_SCAN_AUX_ADC	2
#define ADIS16260_SCAN_TEMP	3
#define ADIS16260_SCAN_ANGL	4
void adis16260_remove_trigger(struct iio_dev *indio_dev);
int adis16260_probe_trigger(struct iio_dev *indio_dev);
ssize_t adis16260_read_data_from_ring(struct device *dev,
struct device_attribute *attr,
char *buf);
int adis16260_configure_ring(struct iio_dev *indio_dev);
void adis16260_unconfigure_ring(struct iio_dev *indio_dev);
static inline void adis16260_remove_trigger(struct iio_dev *indio_dev)
static inline int adis16260_probe_trigger(struct iio_dev *indio_dev)
static inline ssize_t
adis16260_read_data_from_ring(struct device *dev,
struct device_attribute *attr,
char *buf)
static int adis16260_configure_ring(struct iio_dev *indio_dev)
static inline void adis16260_unconfigure_ring(struct iio_dev *indio_dev)
