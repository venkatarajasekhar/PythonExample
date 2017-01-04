void NVWriteCrtc(struct nvidia_par *par, u8 index, u8 value)
u8 NVReadCrtc(struct nvidia_par *par, u8 index)
void NVWriteGr(struct nvidia_par *par, u8 index, u8 value)
u8 NVReadGr(struct nvidia_par *par, u8 index)
void NVWriteSeq(struct nvidia_par *par, u8 index, u8 value)
u8 NVReadSeq(struct nvidia_par *par, u8 index)
void NVWriteAttr(struct nvidia_par *par, u8 index, u8 value)
u8 NVReadAttr(struct nvidia_par *par, u8 index)
void NVWriteMiscOut(struct nvidia_par *par, u8 value)
u8 NVReadMiscOut(struct nvidia_par *par)
void NVWriteDacMask(struct nvidia_par *par, u8 value)
void NVWriteDacReadAddr(struct nvidia_par *par, u8 value)
void NVWriteDacWriteAddr(struct nvidia_par *par, u8 value)
void NVWriteDacData(struct nvidia_par *par, u8 value)
u8 NVReadDacData(struct nvidia_par *par)
static int NVIsConnected(struct nvidia_par *par, int output)
static void NVSelectHeadRegisters(struct nvidia_par *par, int head)
static void nv4GetConfig(struct nvidia_par *par)
static void nv10GetConfig(struct nvidia_par *par)
int NVCommonSetup(struct fb_info *info)
