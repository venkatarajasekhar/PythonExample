#define _INCLUDE_GUARD_PD6729_H_
#define I365_DF_VS1		0x40
#define I365_DF_VS2		0x80
#define PD67_EXD_VS1(s)		(0x01 << ((s) << 1))
#define PD67_EXD_VS2(s)		(0x02 << ((s) << 1))
#define PD67_MASK	0x0eb8
struct pd6729_socket ;
