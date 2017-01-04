#define Py_CONFIG_H
#define PLATFORM	"os2emx"
#define COMPILER	"[EMX GCC " __VERSION__ "]"
#define PYOS_OS2	1
#define PYCC_GCC	1
#define PREFIX		""
#define PYTHONPATH	"./Lib;./Lib/plat-" PLATFORM \
";./Lib/lib-dynload;./Lib/site-packages"
#  define PyAPI_FUNC(RTYPE)	RTYPE
#  define PyAPI_FUNC(RTYPE)	extern RTYPE
#define PyAPI_DATA(RTYPE)	extern RTYPE
#define PyMODINIT_FUNC	void
#define WITH_THREAD	1
#define OS2_THREADS	1
#define TCPIPV4		1
#define USE_SOCKET	1
#define socklen_t	int
#define FD_SETSIZE	1024
#define	WITH_PYMALLOC	1
#define WITH_CYCLE_GC	1
#define WITH_DOC_STRINGS 1
#define Py_USING_UNICODE 1
#define PY_UNICODE_TYPE	wchar_t
#define Py_UNICODE_SIZE SIZEOF_SHORT
#define HAVE_SSIZE_T	1
#define HAVE_TTYNAME	1
#define HAVE_WAIT	1
#define HAVE_GETEGID    1
#define HAVE_GETEUID    1
#define HAVE_GETGID     1
#define HAVE_GETPPID    1
#define HAVE_GETUID     1
#define HAVE_OPENDIR    1
#define HAVE_PIPE       1
#define HAVE_POPEN      1
#define HAVE_SYSTEM	1
#define HAVE_TTYNAME	1
#define HAVE_DYNAMIC_LOADING	1
#define HAVE_NDBM_H 1
typedef long intptr_t;
#define HAVE_TZNAME 1
#define RETSIGTYPE void
#define STDC_HEADERS 1
#define TIME_WITH_SYS_TIME 1
#define HAVE_LONG_LONG 1
#define HAVE_PROTOTYPES 1
#define HAVE_STDARG_PROTOTYPES 1
#define MALLOC_ZERO_RETURNS_NULL 1
#define _REENTRANT 1
#define SYS_SELECT_WITH_SYS_TIME 1
#define SIZEOF_OFF_T 4
#define SIZEOF_TIME_T 4
#define SIZEOF_SHORT 2
#define SIZEOF_INT 4
#define SIZEOF_LONG 4
#define SIZEOF_LONG_LONG 8
#define SIZEOF_VOID_P 4
#define SIZEOF_SIZE_T 4
#define HAVE_ALARM 1
#define HAVE_CLOCK 1
#define HAVE_DUP2 1
#define HAVE_EXECV 1
#define HAVE_SPAWNV 1
#define HAVE_FLOCK 1
#define HAVE_FORK 1
#define HAVE_FSYNC 1
#define HAVE_FTIME 1
#define HAVE_FTRUNCATE 1
#define HAVE_GETCWD 1
#define HAVE_GETPEERNAME 1
#define HAVE_GETPGRP 1
#define HAVE_GETPID 1
#define HAVE_GETPWENT 1
#define HAVE_GETTIMEOFDAY 1
#define HAVE_GETWD 1
#define HAVE_HYPOT 1
#define HAVE_KILL 1
#define HAVE_MEMMOVE 1
#define HAVE_MKTIME 1
#define HAVE_PAUSE 1
#define HAVE_PUTENV 1
#define HAVE_SELECT 1
#define HAVE_SETGID 1
#define HAVE_SETLOCALE 1
#define HAVE_SETPGID 1
#define HAVE_SETUID 1
#define HAVE_SETVBUF 1
#define HAVE_SIGACTION 1
#define HAVE_STRERROR 1
#define HAVE_STRFTIME 1
#define HAVE_TCGETPGRP 1
#define HAVE_TCSETPGRP 1
#define HAVE_TMPFILE 1
#define HAVE_TIMES 1
#define HAVE_TRUNCATE 1
#define HAVE_UNAME 1
#define HAVE_WAITPID 1
#undef HAVE_CONIO_H
#define HAVE_COPYSIGN 1
#undef HAVE_DIRECT_H
#define HAVE_DIRENT_H 1
#define HAVE_ERRNO_H 1
#define HAVE_FCNTL_H 1
#undef HAVE_IO_H
#define HAVE_NCURSES_H 1
#define HAVE_PROCESS_H 1
#define HAVE_SIGNAL_H 1
#define HAVE_SYS_FILE_H 1
#define HAVE_SYS_PARAM_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_SYS_TIMES_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_UN_H 1
#define HAVE_SYS_UTSNAME_H 1
#define HAVE_SYS_WAIT_H 1
#define HAVE_UNISTD_H 1
#define HAVE_UTIME_H 1
#define HAVE_SNPRINTF 1
