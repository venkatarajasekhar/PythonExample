#define _LINUX_ATMARP_H
#define ATMARP_RETRY_DELAY 30
#define ATMARP_MAX_UNRES_PACKETS 5
#define ATMARPD_CTRL	_IO('a',ATMIOC_CLIP+1)
#define ATMARP_MKIP	_IO('a',ATMIOC_CLIP+2)
#define ATMARP_SETENTRY	_IO('a',ATMIOC_CLIP+3)
#define ATMARP_ENCAP	_IO('a',ATMIOC_CLIP+5)
enum atmarp_ctrl_type ;
struct atmarp_ctrl ;
