#define MODULE_VERMAGIC_SMP "SMP "
#define MODULE_VERMAGIC_SMP ""
#define MODULE_VERMAGIC_PREEMPT "preempt "
#define MODULE_VERMAGIC_PREEMPT ""
#define MODULE_VERMAGIC_MODULE_UNLOAD "mod_unload "
#define MODULE_VERMAGIC_MODULE_UNLOAD ""
#define MODULE_VERMAGIC_MODVERSIONS "modversions "
#define MODULE_VERMAGIC_MODVERSIONS ""
#define MODULE_ARCH_VERMAGIC ""
#define VERMAGIC_STRING 						\
UTS_RELEASE " "							\
MODULE_VERMAGIC_SMP MODULE_VERMAGIC_PREEMPT 			\
MODULE_VERMAGIC_MODULE_UNLOAD MODULE_VERMAGIC_MODVERSIONS	\
MODULE_ARCH_VERMAGIC
