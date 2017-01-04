#define _GL_POLL_H
#define POLLIN      0x0001
#define POLLPRI     0x0002
#define POLLOUT     0x0004
#define POLLERR     0x0008
#define POLLHUP     0x0010
#define POLLNVAL    0x0020
#define POLLRDNORM  0x0040
#define POLLRDBAND  0x0080
#define POLLWRNORM  0x0100
#define POLLWRBAND  0x0200
struct pollfd
;
typedef unsigned long nfds_t;
extern int poll (struct pollfd *pfd, nfds_t nfd, int timeout);
#if !defined (_POSIX_C_SOURCE) && !defined (_XOPEN_SOURCE)
#define INFTIM (-1)
