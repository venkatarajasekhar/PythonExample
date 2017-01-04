#if defined(CONFIG_PCMCIA) && defined(CONFIG_M32R_CFC)
#define M32R_PCC_IOMAP_SIZE 0x1000
#define M32R_PCC_IOSTART0 0x1000
#define M32R_PCC_IOEND0   (M32R_PCC_IOSTART0 + M32R_PCC_IOMAP_SIZE - 1)
extern void pcc_ioread_byte(int, unsigned long, void *, size_t, size_t, int);
extern void pcc_ioread_word(int, unsigned long, void *, size_t, size_t, int);
extern void pcc_iowrite_byte(int, unsigned long, void *, size_t, size_t, int);
extern void pcc_iowrite_word(int, unsigned long, void *, size_t, size_t, int);
#define PORT2ADDR(port)      _port2addr(port)
#define PORT2ADDR_NE(port)   _port2addr_ne(port)
#define PORT2ADDR_USB(port)  _port2addr_usb(port)
static inline void *_port2addr(unsigned long port)
#if defined(CONFIG_IDE)
static inline void *__port2addr_ata(unsigned long port)
#define LAN_IOSTART	(0x300 | NONCACHE_OFFSET)
#define LAN_IOEND	(0x320 | NONCACHE_OFFSET)
static inline void *_port2addr_ne(unsigned long port)
static inline void *_port2addr_usb(unsigned long port)
static inline void delay(void)
static inline unsigned char _ne_inb(void *portp)
static inline unsigned short _ne_inw(void *portp)
static inline void _ne_insb(void *portp, void * addr, unsigned long count)
static inline void _ne_outb(unsigned char b, void *portp)
static inline void _ne_outw(unsigned short w, void *portp)
unsigned char _inb(unsigned long port)
unsigned short _inw(unsigned long port)
unsigned long _inl(unsigned long port)
unsigned char _inb_p(unsigned long port)
unsigned short _inw_p(unsigned long port)
unsigned long _inl_p(unsigned long port)
void _outb(unsigned char b, unsigned long port)
void _outw(unsigned short w, unsigned long port)
void _outl(unsigned long l, unsigned long port)
void _outb_p(unsigned char b, unsigned long port)
void _outw_p(unsigned short w, unsigned long port)
void _outl_p(unsigned long l, unsigned long port)
void _insb(unsigned int port, void * addr, unsigned long count)
void _insw(unsigned int port, void * addr, unsigned long count)
void _insl(unsigned int port, void * addr, unsigned long count)
void _outsb(unsigned int port, const void * addr, unsigned long count)
void _outsw(unsigned int port, const void * addr, unsigned long count)
void _outsl(unsigned int port, const void * addr, unsigned long count)
