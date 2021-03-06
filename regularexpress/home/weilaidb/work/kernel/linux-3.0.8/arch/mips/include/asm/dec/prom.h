#define _ASM_DEC_PROM_H
#define VEC_RESET		(u64 *)CKSEG1ADDR(0x1fc00000)
#define PMAX_PROM_ENTRY(x)	(VEC_RESET + (x))
#define PMAX_PROM_HALT		PMAX_PROM_ENTRY(2)
#define PMAX_PROM_AUTOBOOT	PMAX_PROM_ENTRY(5)
#define PMAX_PROM_OPEN		PMAX_PROM_ENTRY(6)
#define PMAX_PROM_READ		PMAX_PROM_ENTRY(7)
#define PMAX_PROM_CLOSE		PMAX_PROM_ENTRY(10)
#define PMAX_PROM_LSEEK		PMAX_PROM_ENTRY(11)
#define PMAX_PROM_GETCHAR	PMAX_PROM_ENTRY(12)
#define PMAX_PROM_PUTCHAR	PMAX_PROM_ENTRY(13)
#define PMAX_PROM_GETS		PMAX_PROM_ENTRY(15)
#define PMAX_PROM_PRINTF	PMAX_PROM_ENTRY(17)
#define PMAX_PROM_GETENV	PMAX_PROM_ENTRY(33)
#define REX_PROM_MAGIC		0x30464354
#define prom_is_rex(magic)	1
#define prom_is_rex(magic)	((magic) == REX_PROM_MAGIC)
#define REX_PROM_GETBITMAP	0x84/4
#define REX_PROM_GETCHAR	0x24/4
#define REX_PROM_GETENV		0x64/4
#define REX_PROM_GETSYSID	0x80/4
#define REX_PROM_GETTCINFO	0xa4/4
#define REX_PROM_PRINTF		0x30/4
#define REX_PROM_SLOTADDR	0x6c/4
#define REX_PROM_BOOTINIT	0x54/4
#define REX_PROM_BOOTREAD	0x58/4
#define REX_PROM_CLEARCACHE	0x7c/4
typedef struct  memmap;
extern int (*__rex_bootinit)(void);
extern int (*__rex_bootread)(void);
extern int (*__rex_getbitmap)(memmap *);
extern unsigned long *(*__rex_slot_address)(int);
extern void *(*__rex_gettcinfo)(void);
extern int (*__rex_getsysid)(void);
extern void (*__rex_clear_cache)(void);
extern int (*__prom_getchar)(void);
extern char *(*__prom_getenv)(char *);
extern int (*__prom_printf)(char *, ...);
extern int (*__pmax_open)(char*, int);
extern int (*__pmax_lseek)(int, long, int);
extern int (*__pmax_read)(int, void *, int);
extern int (*__pmax_close)(int);
#define __DEC_PROM_O32(fun, arg) fun arg __asm__(#fun); \
__asm__(#fun " = call_o32")
int __DEC_PROM_O32(_rex_bootinit, (int (*)(void)));
int __DEC_PROM_O32(_rex_bootread, (int (*)(void)));
int __DEC_PROM_O32(_rex_getbitmap, (int (*)(memmap *), memmap *));
unsigned long *__DEC_PROM_O32(_rex_slot_address,
(unsigned long *(*)(int), int));
void *__DEC_PROM_O32(_rex_gettcinfo, (void *(*)(void)));
int __DEC_PROM_O32(_rex_getsysid, (int (*)(void)));
void __DEC_PROM_O32(_rex_clear_cache, (void (*)(void)));
int __DEC_PROM_O32(_prom_getchar, (int (*)(void)));
char *__DEC_PROM_O32(_prom_getenv, (char *(*)(char *), char *));
int __DEC_PROM_O32(_prom_printf, (int (*)(char *, ...), char *, ...));
#define rex_bootinit()		_rex_bootinit(__rex_bootinit)
#define rex_bootread()		_rex_bootread(__rex_bootread)
#define rex_getbitmap(x)	_rex_getbitmap(__rex_getbitmap, x)
#define rex_slot_address(x)	_rex_slot_address(__rex_slot_address, x)
#define rex_gettcinfo()		_rex_gettcinfo(__rex_gettcinfo)
#define rex_getsysid()		_rex_getsysid(__rex_getsysid)
#define rex_clear_cache()	_rex_clear_cache(__rex_clear_cache)
#define prom_getchar()		_prom_getchar(__prom_getchar)
#define prom_getenv(x)		_prom_getenv(__prom_getenv, x)
#define prom_printf(x...)	_prom_printf(__prom_printf, x)
#define rex_bootinit		__rex_bootinit
#define rex_bootread		__rex_bootread
#define rex_getbitmap		__rex_getbitmap
#define rex_slot_address	__rex_slot_address
#define rex_gettcinfo		__rex_gettcinfo
#define rex_getsysid		__rex_getsysid
#define rex_clear_cache		__rex_clear_cache
#define prom_getchar		__prom_getchar
#define prom_getenv		__prom_getenv
#define prom_printf		__prom_printf
#define pmax_open		__pmax_open
#define pmax_lseek		__pmax_lseek
#define pmax_read		__pmax_read
#define pmax_close		__pmax_close
extern void prom_meminit(u32);
extern void prom_identify_arch(u32);
extern void prom_init_cmdline(s32, s32 *, u32);
extern void register_prom_console(void);
extern void unregister_prom_console(void);
