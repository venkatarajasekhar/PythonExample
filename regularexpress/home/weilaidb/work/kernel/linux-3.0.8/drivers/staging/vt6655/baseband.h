#define __BASEBAND_H__
#define BB_MAX_CONTEXT_SIZE 256
#define PREAMBLE_LONG   0
#define PREAMBLE_SHORT  1
#define F5G             0
#define F2_4G           1
#define TOP_RATE_54M        0x80000000
#define TOP_RATE_48M        0x40000000
#define TOP_RATE_36M        0x20000000
#define TOP_RATE_24M        0x10000000
#define TOP_RATE_18M        0x08000000
#define TOP_RATE_12M        0x04000000
#define TOP_RATE_11M        0x02000000
#define TOP_RATE_9M         0x01000000
#define TOP_RATE_6M         0x00800000
#define TOP_RATE_55M        0x00400000
#define TOP_RATE_2M         0x00200000
#define TOP_RATE_1M         0x00100000
#define BBvClearFOE(dwIoBase)                               \
#define BBvSetFOE(dwIoBase)                                 \
unsigned int
BBuGetFrameTime(
unsigned char byPreambleType,
unsigned char byPktType,
unsigned int cbFrameLength,
unsigned short wRate
);
void
BBvCaculateParameter (
PSDevice pDevice,
unsigned int cbFrameLength,
unsigned short wRate,
unsigned char byPacketType,
unsigned short *pwPhyLen,
unsigned char *pbyPhySrv,
unsigned char *pbyPhySgn
);
bool BBbReadEmbeded(unsigned long dwIoBase, unsigned char byBBAddr, unsigned char *pbyData);
bool BBbWriteEmbeded(unsigned long dwIoBase, unsigned char byBBAddr, unsigned char byData);
void BBvReadAllRegs(unsigned long dwIoBase, unsigned char *pbyBBRegs);
void BBvLoopbackOn(PSDevice pDevice);
void BBvLoopbackOff(PSDevice pDevice);
void BBvSetShortSlotTime(PSDevice pDevice);
bool BBbIsRegBitsOn(unsigned long dwIoBase, unsigned char byBBAddr, unsigned char byTestBits);
bool BBbIsRegBitsOff(unsigned long dwIoBase, unsigned char byBBAddr, unsigned char byTestBits);
void BBvSetVGAGainOffset(PSDevice pDevice, unsigned char byData);
bool BBbVT3253Init(PSDevice pDevice);
void BBvSoftwareReset(unsigned long dwIoBase);
void BBvPowerSaveModeON(unsigned long dwIoBase);
void BBvPowerSaveModeOFF(unsigned long dwIoBase);
void BBvSetTxAntennaMode(unsigned long dwIoBase, unsigned char byAntennaMode);
void BBvSetRxAntennaMode(unsigned long dwIoBase, unsigned char byAntennaMode);
void BBvSetDeepSleep(unsigned long dwIoBase, unsigned char byLocalID);
void BBvExitDeepSleep(unsigned long dwIoBase, unsigned char byLocalID);
void
TimerSQ3CallBack (
void *hDeviceContext
);
void
TimerState1CallBack(
void *hDeviceContext
);
void BBvAntennaDiversity(PSDevice pDevice, unsigned char byRxRate, unsigned char bySQ3);
void
BBvClearAntDivSQ3Value (PSDevice pDevice);
