int SDLTest_Crc32Init(SDLTest_Crc32Context *crcContext)
int SDLTest_Crc32Calc(SDLTest_Crc32Context * crcContext, CrcUint8 *inBuf, CrcUint32 inLen, CrcUint32 *crc32)
int SDLTest_Crc32CalcStart(SDLTest_Crc32Context * crcContext, CrcUint32 *crc32)
int SDLTest_Crc32CalcEnd(SDLTest_Crc32Context * crcContext, CrcUint32 *crc32)
int SDLTest_Crc32CalcBuffer(SDLTest_Crc32Context * crcContext, CrcUint8 *inBuf, CrcUint32 inLen, CrcUint32 *crc32)
int SDLTest_Crc32Done(SDLTest_Crc32Context * crcContext)
