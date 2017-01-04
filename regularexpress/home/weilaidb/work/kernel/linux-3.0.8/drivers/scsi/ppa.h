#define _PPA_H
#define   PPA_VERSION   "2.07 (for Linux 2.4.x)"
#define   PPA_AUTODETECT        0
#define   PPA_NIBBLE            1
#define   PPA_PS2               2
#define   PPA_EPP_8             3
#define   PPA_EPP_16            4
#define   PPA_EPP_32            5
#define   PPA_UNKNOWN           6
static char *PPA_MODE_STRING[] =
;
#define PPA_BURST_SIZE	512
#define PPA_SELECT_TMO  5000
#define PPA_SPIN_TMO    50000
#define PPA_RECON_TMO   500
#define PPA_DEBUG	0
#define IN_EPP_MODE(x) (x == PPA_EPP_8 || x == PPA_EPP_16 || x == PPA_EPP_32)
#define CONNECT_EPP_MAYBE 1
#define CONNECT_NORMAL  0
#define r_dtr(x)        (unsigned char)inb((x))
#define r_str(x)        (unsigned char)inb((x)+1)
#define r_ctr(x)        (unsigned char)inb((x)+2)
#define r_epp(x)        (unsigned char)inb((x)+4)
#define r_fifo(x)       (unsigned char)inb((x))
#define r_ecr(x)        (unsigned char)inb((x)+0x2)
#define w_dtr(x,y)      outb(y, (x))
#define w_str(x,y)      outb(y, (x)+1)
#define w_epp(x,y)      outb(y, (x)+4)
#define w_fifo(x,y)     outb(y, (x))
#define w_ecr(x,y)      outb(y, (x)+0x2)
#define w_ctr(x,y)      outb_p(y, (x)+2)
#define w_ctr(x,y)      outb(y, (x)+2)
static int ppa_engine(ppa_struct *, struct scsi_cmnd *);
