PA header file -- do not include this header file for non-PA builds.
#define _MACHINE_FPU_INCLUDED
#define PA83_FPU_FLAG    0x00000001
#define PA89_FPU_FLAG    0x00000002
#define PA2_0_FPU_FLAG   0x00000010
#define TIMEX_EXTEN_FLAG 0x00000004
#define ROLEX_EXTEN_FLAG 0x00000008
#define COPR_FP 	0x00000080
#define SFU_MPY_DIVIDE	0x00008000
#define EM_FPU_TYPE_OFFSET 272
#define EMULATION_VERSION 4
#define ROLEX_POTENTIAL_KEY_FLAGS	PDC_MODEL_CPU_KEY_WORD_TO_IO
#define TIMEX_POTENTIAL_KEY_FLAGS	(PDC_MODEL_CPU_KEY_QUAD_STORE | \
PDC_MODEL_CPU_KEY_RECIP_SQRT)
