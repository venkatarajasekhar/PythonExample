#define AVCODEC_MIPS_AACDEC_MIPS_H
#if HAVE_INLINE_ASM && HAVE_MIPSFPU
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
*VMUL2_mips
*VMUL4_mips
*VMUL2S_mips
*VMUL4S_mips
#define VMUL2 VMUL2_mips
#define VMUL4 VMUL4_mips
#define VMUL2S VMUL2S_mips
#define VMUL4S VMUL4S_mips
