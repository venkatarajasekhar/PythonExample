#define _XTENSA_CORE_TIE_ASM_H
#define XTHAL_SAS_TIE	0x0001
#define XTHAL_SAS_OPT	0x0002
#define XTHAL_SAS_NOCC	0x0004
#define XTHAL_SAS_CC	0x0008
#define XTHAL_SAS_CALR	0x0010
#define XTHAL_SAS_CALE	0x0020
#define XTHAL_SAS_GLOB	0x0040
#define XTHAL_SAS_ALL	0xFFFF
.macro xchal_ncp_store  ptr at1 at2 at3 at4  continue=0 ofs=-1 select=XTHAL_SAS_ALL
xchal_sa_start	\continue, \ofs
.ifeq (XTHAL_SAS_OPT | XTHAL_SAS_NOCC | XTHAL_SAS_CALR) & ~\select
xchal_sa_align	\ptr, 0, 1024-4, 4, 4
rsr	\at1, BR
s32i	\at1, \ptr, .Lxchal_ofs_ + 0
.set	.Lxchal_ofs_, .Lxchal_ofs_ + 4
.endif
.endm
.macro xchal_ncp_load  ptr at1 at2 at3 at4  continue=0 ofs=-1 select=XTHAL_SAS_ALL
xchal_sa_start	\continue, \ofs
.ifeq (XTHAL_SAS_OPT | XTHAL_SAS_NOCC | XTHAL_SAS_CALR) & ~\select
xchal_sa_align	\ptr, 0, 1024-4, 4, 4
l32i	\at1, \ptr, .Lxchal_ofs_ + 0
wsr	\at1, BR
.set	.Lxchal_ofs_, .Lxchal_ofs_ + 4
.endif
.endm
#define XCHAL_NCP_NUM_ATMPS	1
#define xchal_cp_FPU_store	xchal_cp0_store
.macro	xchal_cp0_store  ptr at1 at2 at3 at4  continue=0 ofs=-1 select=XTHAL_SAS_ALL
xchal_sa_start \continue, \ofs
.ifeq (XTHAL_SAS_TIE | XTHAL_SAS_NOCC | XTHAL_SAS_CALR) & ~\select
xchal_sa_align	\ptr, 0, 0, 1, 16
rur232	\at1
s32i	\at1, \ptr, 0
rur233	\at1
s32i	\at1, \ptr, 4
SSI f0, \ptr,  8
SSI f1, \ptr,  12
SSI f2, \ptr,  16
SSI f3, \ptr,  20
SSI f4, \ptr,  24
SSI f5, \ptr,  28
SSI f6, \ptr,  32
SSI f7, \ptr,  36
SSI f8, \ptr,  40
SSI f9, \ptr,  44
SSI f10, \ptr,  48
SSI f11, \ptr,  52
SSI f12, \ptr,  56
SSI f13, \ptr,  60
SSI f14, \ptr,  64
SSI f15, \ptr,  68
.set	.Lxchal_ofs_, .Lxchal_ofs_ + 72
.endif
.endm
#define xchal_cp_FPU_load	xchal_cp0_load
.macro	xchal_cp0_load  ptr at1 at2 at3 at4  continue=0 ofs=-1 select=XTHAL_SAS_ALL
xchal_sa_start \continue, \ofs
.ifeq (XTHAL_SAS_TIE | XTHAL_SAS_NOCC | XTHAL_SAS_CALR) & ~\select
xchal_sa_align	\ptr, 0, 0, 1, 16
l32i	\at1, \ptr, 0
wur232	\at1
l32i	\at1, \ptr, 4
wur233	\at1
LSI f0, \ptr,  8
LSI f1, \ptr,  12
LSI f2, \ptr,  16
LSI f3, \ptr,  20
LSI f4, \ptr,  24
LSI f5, \ptr,  28
LSI f6, \ptr,  32
LSI f7, \ptr,  36
LSI f8, \ptr,  40
LSI f9, \ptr,  44
LSI f10, \ptr,  48
LSI f11, \ptr,  52
LSI f12, \ptr,  56
LSI f13, \ptr,  60
LSI f14, \ptr,  64
LSI f15, \ptr,  68
.set	.Lxchal_ofs_, .Lxchal_ofs_ + 72
.endif
.endm
#define XCHAL_CP0_NUM_ATMPS	1
#define xchal_cp_XAD_store	xchal_cp6_store
.macro	xchal_cp6_store  ptr at1 at2 at3 at4  continue=0 ofs=-1 select=XTHAL_SAS_ALL
xchal_sa_start \continue, \ofs
.ifeq (XTHAL_SAS_TIE | XTHAL_SAS_NOCC | XTHAL_SAS_CALR) & ~\select
xchal_sa_align	\ptr, 0, 0, 1, 16
rur0	\at1
s32i	\at1, \ptr, 0
rur1	\at1
s32i	\at1, \ptr, 4
rur2	\at1
s32i	\at1, \ptr, 8
rur3	\at1
s32i	\at1, \ptr, 12
rur8	\at1
s32i	\at1, \ptr, 16
rur9	\at1
s32i	\at1, \ptr, 20
rur10	\at1
s32i	\at1, \ptr, 24
rur11	\at1
s32i	\at1, \ptr, 28
rur12	\at1
s32i	\at1, \ptr, 32
rur13	\at1
s32i	\at1, \ptr, 36
rur24	\at1
s32i	\at1, \ptr, 40
rur25	\at1
s32i	\at1, \ptr, 44
rur26	\at1
s32i	\at1, \ptr, 48
rur27	\at1
s32i	\at1, \ptr, 52
WRAS128I wra0, \ptr,  64
WRAS128I wra1, \ptr,  80
WRAS128I wra2, \ptr,  96
WRAS128I wra3, \ptr,  112
WRAS128I wra4, \ptr,  128
WRAS128I wra5, \ptr,  144
WRAS128I wra6, \ptr,  160
WRAS128I wra7, \ptr,  176
WRAS128I wra8, \ptr,  192
WRAS128I wra9, \ptr,  208
WRAS128I wra10, \ptr,  224
WRAS128I wra11, \ptr,  240
WRAS128I wra12, \ptr,  256
WRAS128I wra13, \ptr,  272
WRAS128I wra14, \ptr,  288
WRAS128I wra15, \ptr,  304
WRBS128I wrb0, \ptr,  320
WRBS128I wrb1, \ptr,  336
WRBS128I wrb2, \ptr,  352
WRBS128I wrb3, \ptr,  368
WRBS128I wrb4, \ptr,  384
WRBS128I wrb5, \ptr,  400
WRBS128I wrb6, \ptr,  416
WRBS128I wrb7, \ptr,  432
WRBS128I wrb8, \ptr,  448
WRBS128I wrb9, \ptr,  464
WRBS128I wrb10, \ptr,  480
WRBS128I wrb11, \ptr,  496
WRBS128I wrb12, \ptr,  512
WRBS128I wrb13, \ptr,  528
WRBS128I wrb14, \ptr,  544
WRBS128I wrb15, \ptr,  560
.set	.Lxchal_ofs_, .Lxchal_ofs_ + 576
.endif
.endm
#define xchal_cp_XAD_load	xchal_cp6_load
.macro	xchal_cp6_load  ptr at1 at2 at3 at4  continue=0 ofs=-1 select=XTHAL_SAS_ALL
xchal_sa_start \continue, \ofs
.ifeq (XTHAL_SAS_TIE | XTHAL_SAS_NOCC | XTHAL_SAS_CALR) & ~\select
xchal_sa_align	\ptr, 0, 0, 1, 16
l32i	\at1, \ptr, 0
wur0	\at1
l32i	\at1, \ptr, 4
wur1	\at1
l32i	\at1, \ptr, 8
wur2	\at1
l32i	\at1, \ptr, 12
wur3	\at1
l32i	\at1, \ptr, 16
wur8	\at1
l32i	\at1, \ptr, 20
wur9	\at1
l32i	\at1, \ptr, 24
wur10	\at1
l32i	\at1, \ptr, 28
wur11	\at1
l32i	\at1, \ptr, 32
wur12	\at1
l32i	\at1, \ptr, 36
wur13	\at1
l32i	\at1, \ptr, 40
wur24	\at1
l32i	\at1, \ptr, 44
wur25	\at1
l32i	\at1, \ptr, 48
wur26	\at1
l32i	\at1, \ptr, 52
wur27	\at1
WRBL128I wrb0, \ptr,  320
WRBL128I wrb1, \ptr,  336
WRBL128I wrb2, \ptr,  352
WRBL128I wrb3, \ptr,  368
WRBL128I wrb4, \ptr,  384
WRBL128I wrb5, \ptr,  400
WRBL128I wrb6, \ptr,  416
WRBL128I wrb7, \ptr,  432
WRBL128I wrb8, \ptr,  448
WRBL128I wrb9, \ptr,  464
WRBL128I wrb10, \ptr,  480
WRBL128I wrb11, \ptr,  496
WRBL128I wrb12, \ptr,  512
WRBL128I wrb13, \ptr,  528
WRBL128I wrb14, \ptr,  544
WRBL128I wrb15, \ptr,  560
WRAL128I wra0, \ptr,  64
WRAL128I wra1, \ptr,  80
WRAL128I wra2, \ptr,  96
WRAL128I wra3, \ptr,  112
WRAL128I wra4, \ptr,  128
WRAL128I wra5, \ptr,  144
WRAL128I wra6, \ptr,  160
WRAL128I wra7, \ptr,  176
WRAL128I wra8, \ptr,  192
WRAL128I wra9, \ptr,  208
WRAL128I wra10, \ptr,  224
WRAL128I wra11, \ptr,  240
WRAL128I wra12, \ptr,  256
WRAL128I wra13, \ptr,  272
WRAL128I wra14, \ptr,  288
WRAL128I wra15, \ptr,  304
.set	.Lxchal_ofs_, .Lxchal_ofs_ + 576
.endif
.endm
#define XCHAL_CP6_NUM_ATMPS	1
#define XCHAL_SA_NUM_ATMPS	1
.macro xchal_cp1_store	p a b c d continue=0 ofs=-1 select=-1 ; .endm
.macro xchal_cp1_load	p a b c d continue=0 ofs=-1 select=-1 ; .endm
.macro xchal_cp2_store	p a b c d continue=0 ofs=-1 select=-1 ; .endm
.macro xchal_cp2_load	p a b c d continue=0 ofs=-1 select=-1 ; .endm
.macro xchal_cp3_store	p a b c d continue=0 ofs=-1 select=-1 ; .endm
.macro xchal_cp3_load	p a b c d continue=0 ofs=-1 select=-1 ; .endm
.macro xchal_cp4_store	p a b c d continue=0 ofs=-1 select=-1 ; .endm
.macro xchal_cp4_load	p a b c d continue=0 ofs=-1 select=-1 ; .endm
.macro xchal_cp5_store	p a b c d continue=0 ofs=-1 select=-1 ; .endm
.macro xchal_cp5_load	p a b c d continue=0 ofs=-1 select=-1 ; .endm
.macro xchal_cp7_store	p a b c d continue=0 ofs=-1 select=-1 ; .endm
.macro xchal_cp7_load	p a b c d continue=0 ofs=-1 select=-1 ; .endm
