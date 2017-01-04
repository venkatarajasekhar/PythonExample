#define _ASM_SIGNAL_H
#define _NSIG		128
#define _NSIG_BPW	(sizeof(unsigned long) * 8)
#define _NSIG_WORDS	(_NSIG / _NSIG_BPW)
typedef struct  sigset_t;
typedef unsigned long old_sigset_t;
#define SIGHUP		 1
#define SIGINT		 2
#define SIGQUIT		 3
#define SIGILL		 4
#define SIGTRAP		 5
#define SIGIOT		 6
#define SIGABRT		 SIGIOT
#define SIGEMT		 7
#define SIGFPE		 8
#define SIGKILL		 9
#define SIGBUS		10
#define SIGSEGV		11
#define SIGSYS		12
#define SIGPIPE		13
#define SIGALRM		14
#define SIGTERM		15
#define SIGUSR1		16
#define SIGUSR2		17
#define SIGCHLD		18
#define SIGCLD		SIGCHLD
#define SIGPWR		19
#define SIGWINCH	20
#define SIGURG		21
#define SIGIO		22
#define SIGPOLL		SIGIO
#define SIGSTOP		23
#define SIGTSTP		24
#define SIGCONT		25
#define SIGTTIN		26
#define SIGTTOU		27
#define SIGVTALRM	28
#define SIGPROF		29
#define SIGXCPU		30
#define SIGXFSZ		31
#define SIGRTMIN	32
#define SIGRTMAX	_NSIG
#define SA_ONSTACK	0x08000000
#define SA_RESETHAND	0x80000000
#define SA_RESTART	0x10000000
#define SA_SIGINFO	0x00000008
#define SA_NODEFER	0x40000000
#define SA_NOCLDWAIT	0x00010000
#define SA_NOCLDSTOP	0x00000001
#define SA_NOMASK	SA_NODEFER
#define SA_ONESHOT	SA_RESETHAND
#define SA_RESTORER	0x04000000
#define SS_ONSTACK     1
#define SS_DISABLE     2
#define MINSIGSTKSZ    2048
#define SIGSTKSZ       8192
#define sig_uses_siginfo(ka)	((ka)->sa.sa_flags & SA_SIGINFO)
#define sig_uses_siginfo(ka)	(1)
#define SIG_BLOCK	1
#define SIG_UNBLOCK	2
#define SIG_SETMASK	3
struct sigaction ;
struct k_sigaction ;
typedef struct sigaltstack  stack_t;
#define ptrace_signal_deliver(regs, cookie) do  while (0)
