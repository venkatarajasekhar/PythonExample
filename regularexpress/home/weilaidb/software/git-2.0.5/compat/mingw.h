typedef int pid_t;
typedef int uid_t;
typedef int socklen_t;
#define hstrerror strerror
#define S_IFLNK    0120000
#define S_ISLNK(x) (((x) & S_IFMT) == S_IFLNK)
#define S_ISSOCK(x) 0
#define S_IRGRP 0
#define S_IWGRP 0
#define S_IXGRP 0
#define S_IRWXG (S_IRGRP | S_IWGRP | S_IXGRP)
#define S_IROTH 0
#define S_IWOTH 0
#define S_IXOTH 0
#define S_IRWXO (S_IROTH | S_IWOTH | S_IXOTH)
#define S_ISUID 0004000
#define S_ISGID 0002000
#define S_ISVTX 0001000
#define WIFEXITED(x) 1
#define WIFSIGNALED(x) 0
#define WEXITSTATUS(x) ((x) & 0xff)
#define WTERMSIG(x) SIGTERM
#define EWOULDBLOCK EAGAIN
#define SHUT_WR SD_SEND
#define SIGHUP 1
#define SIGQUIT 3
#define SIGKILL 9
#define SIGPIPE 13
#define SIGALRM 14
#define SIGCHLD 17
#define F_GETFD 1
#define F_SETFD 2
#define FD_CLOEXEC 0x1
#define EAFNOSUPPORT WSAEAFNOSUPPORT
#define ECONNABORTED WSAECONNABORTED
struct passwd ;
typedef void (__cdecl *sig_handler_t)(int);
struct sigaction ;
#define sigemptyset(x) (void)0
#define SA_RESTART 0
struct itimerval ;
#define ITIMER_REAL 0
#undef HELP_COMMAND
static inline int readlink(const char *path, char *buf, size_t bufsiz)
static inline int symlink(const char *oldpath, const char *newpath)
static inline int fchmod(int fildes, mode_t mode)
static inline pid_t fork(void)
static inline unsigned int alarm(unsigned int seconds)
static inline int fsync(int fd)
static inline pid_t getppid(void)
static inline void sync(void)
static inline uid_t getuid(void)
static inline struct passwd *getpwnam(const char *name)
static inline int fcntl(int fd, int cmd, ...)
#define exit(code) exit((code) & 0xff)
static inline int mingw_mkdir(const char *path, int mode)
#define mkdir mingw_mkdir
#define WNOHANG 1
pid_t waitpid(pid_t pid, int *status, int options);
#define kill mingw_kill
int mingw_kill(pid_t pid, int sig);
static inline int mingw_SSL_set_fd(SSL *ssl, int fd)
#define SSL_set_fd mingw_SSL_set_fd
static inline int mingw_SSL_set_rfd(SSL *ssl, int fd)
#define SSL_set_rfd mingw_SSL_set_rfd
static inline int mingw_SSL_set_wfd(SSL *ssl, int fd)
#define SSL_set_wfd mingw_SSL_set_wfd
int pipe(int filedes[2]);
unsigned int sleep (unsigned int seconds);
int mkstemp(char *template);
int gettimeofday(struct timeval *tv, void *tz);
struct tm *gmtime_r(const time_t *timep, struct tm *result);
struct tm *localtime_r(const time_t *timep, struct tm *result);
int getpagesize(void);
struct passwd *getpwuid(uid_t uid);
int setitimer(int type, struct itimerval *in, struct itimerval *out);
int sigaction(int sig, struct sigaction *in, struct sigaction *out);
int link(const char *oldpath, const char *newpath);
int mingw_unlink(const char *pathname);
#define unlink mingw_unlink
int mingw_rmdir(const char *path);
#define rmdir mingw_rmdir
int mingw_open (const char *filename, int oflags, ...);
#define open mingw_open
int mingw_fgetc(FILE *stream);
#define fgetc mingw_fgetc
FILE *mingw_fopen (const char *filename, const char *otype);
#define fopen mingw_fopen
FILE *mingw_freopen (const char *filename, const char *otype, FILE *stream);
#define freopen mingw_freopen
int mingw_fflush(FILE *stream);
#define fflush mingw_fflush
char *mingw_getcwd(char *pointer, int len);
#define getcwd mingw_getcwd
char *mingw_getenv(const char *name);
#define getenv mingw_getenv
int mingw_gethostname(char *host, int namelen);
#define gethostname mingw_gethostname
struct hostent *mingw_gethostbyname(const char *host);
#define gethostbyname mingw_gethostbyname
void mingw_freeaddrinfo(struct addrinfo *res);
#define freeaddrinfo mingw_freeaddrinfo
int mingw_getaddrinfo(const char *node, const char *service,
const struct addrinfo *hints, struct addrinfo **res);
#define getaddrinfo mingw_getaddrinfo
int mingw_getnameinfo(const struct sockaddr *sa, socklen_t salen,
char *host, DWORD hostlen, char *serv, DWORD servlen,
int flags);
#define getnameinfo mingw_getnameinfo
int mingw_socket(int domain, int type, int protocol);
#define socket mingw_socket
int mingw_connect(int sockfd, struct sockaddr *sa, size_t sz);
#define connect mingw_connect
int mingw_bind(int sockfd, struct sockaddr *sa, size_t sz);
#define bind mingw_bind
int mingw_setsockopt(int sockfd, int lvl, int optname, void *optval, int optlen);
#define setsockopt mingw_setsockopt
int mingw_shutdown(int sockfd, int how);
#define shutdown mingw_shutdown
int mingw_listen(int sockfd, int backlog);
#define listen mingw_listen
int mingw_accept(int sockfd, struct sockaddr *sa, socklen_t *sz);
#define accept mingw_accept
int mingw_rename(const char*, const char*);
#define rename mingw_rename
#if defined(USE_WIN32_MMAP) || defined(_MSC_VER)
int mingw_getpagesize(void);
#define getpagesize mingw_getpagesize
struct rlimit ;
#define RLIMIT_NOFILE 0
static inline int getrlimit(int resource, struct rlimit *rlp)
#define off_t off64_t
#define lseek _lseeki64
#undef stat
#define stat _stati64
int mingw_lstat(const char *file_name, struct stat *buf);
int mingw_stat(const char *file_name, struct stat *buf);
int mingw_fstat(int fd, struct stat *buf);
#undef fstat
#define fstat mingw_fstat
#undef lstat
#define lstat mingw_lstat
# define _stati64(x,y) mingw_stat(x,y)
#elif defined (_USE_32BIT_TIME_T)
# define _stat32i64(x,y) mingw_stat(x,y)
# define _stat64(x,y) mingw_stat(x,y)
int mingw_utime(const char *file_name, const struct utimbuf *times);
#define utime mingw_utime
pid_t mingw_spawnvpe(const char *cmd, const char **argv, char **env,
const char *dir,
int fhin, int fhout, int fherr);
int mingw_execvp(const char *cmd, char *const *argv);
#define execvp mingw_execvp
int mingw_execv(const char *cmd, char *const *argv);
#define execv mingw_execv
static inline unsigned int git_ntohl(unsigned int x)
#define ntohl git_ntohl
sig_handler_t mingw_signal(int sig, sig_handler_t handler);
#define signal mingw_signal
int mingw_raise(int sig);
#define raise mingw_raise
int winansi_fputs(const char *str, FILE *stream);
int winansi_printf(const char *format, ...) __attribute__((format (printf, 1, 2)));
int winansi_fprintf(FILE *stream, const char *format, ...) __attribute__((format (printf, 2, 3)));
#define fputs winansi_fputs
#define printf(...) winansi_printf(__VA_ARGS__)
#define fprintf(...) winansi_fprintf(__VA_ARGS__)
#define has_dos_drive_prefix(path) (isalpha(*(path)) && (path)[1] == ':')
#define is_dir_sep(c) ((c) == '/' || (c) == '\\')
static inline char *mingw_find_last_dir_sep(const char *path)
#define find_last_dir_sep mingw_find_last_dir_sep
#define PATH_SEP ';'
#define PRIuMAX "I64u"
#define PRId64 "I64d"
void mingw_open_html(const char *path);
#define open_html mingw_open_html
char **make_augmented_environ(const char *const *vars);
void free_environ(char **env);
extern CRITICAL_SECTION pinfo_cs;
#define main(c,v) dummy_decl_mingw_main(); \
static int mingw_main(c,v); \
int main(int argc, char **argv) \
\
static int mingw_main(c,v)
extern int err_win_to_posix(DWORD winerr);
