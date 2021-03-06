#define AT91_PIT_H
#define AT91_PIT_MR		(AT91_PIT + 0x00)
#define		AT91_PIT_PITIEN		(1 << 25)
#define		AT91_PIT_PITEN		(1 << 24)
#define		AT91_PIT_PIV		(0xfffff)
#define AT91_PIT_SR		(AT91_PIT + 0x04)
#define		AT91_PIT_PITS		(1 << 0)
#define AT91_PIT_PIVR		(AT91_PIT + 0x08)
#define AT91_PIT_PIIR		(AT91_PIT + 0x0c)
#define		AT91_PIT_PICNT		(0xfff << 20)
#define		AT91_PIT_CPIV		(0xfffff)
