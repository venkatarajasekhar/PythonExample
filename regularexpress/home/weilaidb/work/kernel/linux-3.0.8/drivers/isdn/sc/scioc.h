#define __ISDN_SC_SCIOC_H__
#define SCIOCLOAD	0x01
#define SCIOCRESET	0x02
#define SCIOCDEBUG	0x03
#define SCIOCREV	0x04
#define SCIOCSTART	0x05
#define SCIOCGETSWITCH	0x06
#define SCIOCSETSWITCH	0x07
#define SCIOCGETSPID	0x08
#define SCIOCSETSPID	0x09
#define SCIOCGETDN	0x0A
#define SCIOCSETDN	0x0B
#define SCIOCTRACE	0x0C
#define SCIOCSTAT	0x0D
#define SCIOCGETSPEED	0x0E
#define SCIOCSETSPEED	0x0F
#define SCIOCLOOPTST	0x10
typedef struct  scs_ioctl;
#define SCIOC_SPIDSIZE		49
#define SCIOC_DNSIZE		SCIOC_SPIDSIZE
#define SCIOC_REVSIZE		SCIOC_SPIDSIZE
#define SCIOC_SRECSIZE		49
typedef struct  ChLinkStats;
typedef struct  BRIStat;
typedef BRIStat POTStat;
typedef struct  PRIStat;
typedef char PRIInfo;
typedef char BRIInfo;
typedef char POTInfo;
typedef struct  ACFAStat;
typedef struct  boardInfo;
