#define CHIPC_DEF_H
#define chipcHw_DDR_HW_PHASE_ALIGN    0
#define chipcHw_VPM_HW_PHASE_ALIGN    0
typedef uint32_t chipcHw_freq;
typedef enum  chipcHw_CLOCK_e;
typedef enum  chipcHw_BOOT_DEVICE_e;
typedef enum  chipcHw_BOOT_MODE_e;
typedef enum  chipcHw_NAND_PAGESIZE_e;
typedef enum  chipcHw_GPIO_FUNCTION_e;
typedef enum  chipcHw_PIN_SLEW_RATE_e;
typedef enum  chipcHw_PIN_CURRENT_STRENGTH_e;
typedef enum  chipcHw_PIN_PULL_e;
typedef enum  chipcHw_PIN_INPUTTYPE_e;
typedef enum  chipcHw_SPREAD_SPECTRUM_e;
typedef struct  chipcHw_INIT_PARAM_t;
typedef enum  chipcHw_REV_NUMBER_e;
typedef enum  chipcHw_VPM_HW_PHASE_INTR_e;
typedef enum  chipcHw_DDR_HW_PHASE_MARGIN_e;
typedef enum  chipcHw_VPM_HW_PHASE_MARGIN_e;
#define chipcHw_XTAL_FREQ_Hz                    25000000
#define chipcHw_PIN_GPIO(n)                     ((((n) >= 0) && ((n) < (chipcHw_GPIO_COUNT))) ? (n) : 0xFFFFFFFF)
#define chipcHw_PIN_UARTTXD                     (chipcHw_GPIO_COUNT + 0)
#define chipcHw_PIN_NVI_A                       (chipcHw_GPIO_COUNT + 1)
#define chipcHw_PIN_NVI_D                       (chipcHw_GPIO_COUNT + 2)
#define chipcHw_PIN_NVI_OEB                     (chipcHw_GPIO_COUNT + 3)
#define chipcHw_PIN_NVI_WEB                     (chipcHw_GPIO_COUNT + 4)
#define chipcHw_PIN_NVI_CS                      (chipcHw_GPIO_COUNT + 5)
#define chipcHw_PIN_NVI_NAND_CSB                (chipcHw_GPIO_COUNT + 6)
#define chipcHw_PIN_NVI_FLASHWP                 (chipcHw_GPIO_COUNT + 7)
#define chipcHw_PIN_NVI_NAND_RDYB               (chipcHw_GPIO_COUNT + 8)
#define chipcHw_PIN_CL_DATA_0_17                (chipcHw_GPIO_COUNT + 9)
#define chipcHw_PIN_CL_DATA_18_20               (chipcHw_GPIO_COUNT + 10)
#define chipcHw_PIN_CL_DATA_21_23               (chipcHw_GPIO_COUNT + 11)
#define chipcHw_PIN_CL_POWER                    (chipcHw_GPIO_COUNT + 12)
#define chipcHw_PIN_CL_ACK                      (chipcHw_GPIO_COUNT + 13)
#define chipcHw_PIN_CL_FP                       (chipcHw_GPIO_COUNT + 14)
#define chipcHw_PIN_CL_LP                       (chipcHw_GPIO_COUNT + 15)
#define chipcHw_PIN_UARTRXD                     (chipcHw_GPIO_COUNT + 16)
void chipcHw_Init(chipcHw_INIT_PARAM_t *initParam
) __attribute__ ((section(".aramtext")));
void chipcHw_pll1Enable(uint32_t vcoFreqHz,
chipcHw_SPREAD_SPECTRUM_e ssSupport
) __attribute__ ((section(".aramtext")));
void chipcHw_pll2Enable(uint32_t vcoFreqHz
) __attribute__ ((section(".aramtext")));
static inline void chipcHw_pll1Disable(void);
static inline void chipcHw_pll2Disable(void);
chipcHw_freq chipcHw_getClockFrequency(chipcHw_CLOCK_e clock
) __attribute__ ((section(".aramtext")));
chipcHw_freq chipcHw_setClockFrequency(chipcHw_CLOCK_e clock,
uint32_t freq
) __attribute__ ((section(".aramtext")));
int chipcHw_vpmPhaseAlign(void);
static inline void chipcHw_setClockEnable(chipcHw_CLOCK_e clock
);
static inline void chipcHw_setClockDisable(chipcHw_CLOCK_e clock
);
static inline void chipcHw_bypassClockEnable(chipcHw_CLOCK_e clock
);
static inline void chipcHw_bypassClockDisable(chipcHw_CLOCK_e clock
);
static inline uint32_t chipcHw_getChipId(void);
static inline uint32_t chipcHw_getChipProductId(void);
static inline chipcHw_REV_NUMBER_e chipcHw_getChipRevisionNumber(void);
static inline void chipcHw_busInterfaceClockEnable(uint32_t mask
);
static inline void chipcHw_busInterfaceClockDisable(uint32_t mask
);
static inline void chipcHw_audioChannelEnable(uint32_t mask
);
static inline void chipcHw_audioChannelDisable(uint32_t mask
);
static inline void chipcHw_softReset(uint64_t mask
);
static inline void chipcHw_softResetDisable(uint64_t mask
);
static inline void chipcHw_softResetEnable(uint64_t mask
);
static inline void chipcHw_miscControl(uint32_t mask
);
static inline void chipcHw_miscControlDisable(uint32_t mask
);
static inline void chipcHw_miscControlEnable(uint32_t mask
);
static inline void chipcHw_setOTPOption(uint64_t mask
);
static inline uint32_t chipcHw_getStickyBits(void);
static inline void chipcHw_setStickyBits(uint32_t mask
);
static inline void chipcHw_clearStickyBits(uint32_t mask
);
static inline uint32_t chipcHw_getSoftStraps(void);
static inline void chipcHw_setSoftStraps(uint32_t strapOptions);
static inline uint32_t chipcHw_getPinStraps(void);
static inline uint32_t chipcHw_getValidStraps(void);
static inline void chipcHw_initValidStraps(void);
static inline uint32_t chipcHw_getBusInterfaceClockStatus(void);
static inline chipcHw_BOOT_DEVICE_e chipcHw_getBootDevice(void);
static inline chipcHw_BOOT_MODE_e chipcHw_getBootMode(void);
static inline chipcHw_NAND_PAGESIZE_e chipcHw_getNandPageSize(void);
static inline int chipcHw_getNandExtraCycle(void);
static inline void chipcHw_activatePifInterface(void);
static inline void chipcHw_activateLcdInterface(void);
static inline void chipcHw_deactivatePifLcdInterface(void);
static inline chipcHw_GPIO_FUNCTION_e chipcHw_getGpioPinFunction(int pin
);
static inline void chipcHw_setGpioPinFunction(int pin,
chipcHw_GPIO_FUNCTION_e func
);
static inline void chipcHw_setPinSlewRate(uint32_t pin,
chipcHw_PIN_SLEW_RATE_e slewRate
);
static inline void chipcHw_setPinOutputCurrent(uint32_t pin,
chipcHw_PIN_CURRENT_STRENGTH_e curr
);
static inline void chipcHw_setPinPullup(uint32_t pin,
chipcHw_PIN_PULL_e pullup
);
static inline void chipcHw_setPinInputType(uint32_t pin,
chipcHw_PIN_INPUTTYPE_e inputType
);
const char *chipcHw_getGpioPinFunctionStr(int pin);
void chipcHw_reset(uint32_t mask);
void chipcHw_clockReconfig(uint32_t busHz, uint32_t armRatio, uint32_t vpmRatio,
uint32_t ddrRatio);
static inline void chipcHw_enableSpreadSpectrum(void);
static inline void chipcHw_disableSpreadSpectrum(void);
static inline int chipcHw_isSoftwareStrapsEnable(void);
static inline void chipcHw_softwareStrapsEnable(void);
static inline void chipcHw_softwareStrapsDisable(void);
static inline void chipcHw_pllTestEnable(void);
static inline void chipcHw_pll2TestEnable(void);
static inline void chipcHw_pllTestDisable(void);
static inline void chipcHw_pll2TestDisable(void);
static inline int chipcHw_isPllTestEnable(void);
static inline int chipcHw_isPll2TestEnable(void);
static inline void chipcHw_pllTestSelect(uint32_t val);
static inline void chipcHw_pll2TestSelect(uint32_t val);
static inline uint8_t chipcHw_getPllTestSelected(void);
static inline uint8_t chipcHw_getPll2TestSelected(void);
static inline void chipcHw_ddrPhaseAlignInterruptEnable(void);
static inline void chipcHw_ddrPhaseAlignInterruptDisable(void);
static inline void
chipcHw_vpmPhaseAlignInterruptMode(chipcHw_VPM_HW_PHASE_INTR_e mode);
static inline void chipcHw_ddrSwPhaseAlignEnable(void);
static inline void chipcHw_ddrSwPhaseAlignDisable(void);
static inline void chipcHw_ddrHwPhaseAlignEnable(void);
static inline void chipcHw_ddrHwPhaseAlignDisable(void);
static inline void chipcHw_vpmSwPhaseAlignEnable(void);
static inline void chipcHw_vpmSwPhaseAlignDisable(void);
static inline void chipcHw_vpmHwPhaseAlignEnable(void);
static inline void chipcHw_vpmHwPhaseAlignDisable(void);
static inline void chipcHw_setDdrHwPhaseAlignMargin(chipcHw_DDR_HW_PHASE_MARGIN_e margin
);
static inline void chipcHw_setVpmHwPhaseAlignMargin(chipcHw_VPM_HW_PHASE_MARGIN_e margin
);
static inline uint32_t chipcHw_isDdrHwPhaseAligned(void);
static inline uint32_t chipcHw_isVpmHwPhaseAligned(void);
static inline uint32_t chipcHw_getDdrHwPhaseAlignStatus(void);
static inline uint32_t chipcHw_getVpmHwPhaseAlignStatus(void);
static inline uint32_t chipcHw_getDdrPhaseControl(void);
static inline uint32_t chipcHw_getVpmPhaseControl(void);
static inline void chipcHw_ddrHwPhaseAlignTimeout(uint32_t busCycle
);
static inline void chipcHw_vpmHwPhaseAlignTimeout(uint32_t busCycle
);
static inline void chipcHw_ddrHwPhaseAlignTimeoutInterruptEnable(void);
static inline void chipcHw_vpmHwPhaseAlignTimeoutInterruptEnable(void);
static inline void chipcHw_ddrHwPhaseAlignTimeoutInterruptDisable(void);
static inline void chipcHw_vpmHwPhaseAlignTimeoutInterruptDisable(void);
static inline void chipcHw_ddrHwPhaseAlignTimeoutInterruptClear(void);
static inline void chipcHw_vpmHwPhaseAlignTimeoutInterruptClear(void);
