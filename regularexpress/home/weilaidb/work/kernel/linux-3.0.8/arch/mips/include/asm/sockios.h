#define _ASM_SOCKIOS_H
#define FIOGETOWN	_IOR('f', 123, int)
#define FIOSETOWN 	_IOW('f', 124, int)
#define SIOCATMARK	_IOR('s', 7, int)
#define SIOCSPGRP	_IOW('s', 8, pid_t)
#define SIOCGPGRP	_IOR('s', 9, pid_t)
#define SIOCGSTAMP	0x8906
#define SIOCGSTAMPNS	0x8907
