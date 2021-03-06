#define __FIREWALL_COMMON_UTILS_H
#define HOME "FirewallExample"
#define DB_NAME "msg_queue"
#define KNOWN_SITES_SIZE 7
#define BLOCKED_SITES_SIZE 2
static const char * const KnownSites[] = ;
int open_queue(DB_ENV *dbenv, DB **queue, const char *name, int in_memory, int create, int threaded);
int open_env(DB_ENV **env, const char *home, int in_memory, int create, int threaded);
#define MSG_LEN 128
#define KEY_LEN 25
#define MSG_EXTENT_SIZE 5242880
#define	NS_PER_MS 1000000
#define	NS_PER_US 1000
#define NUM_MESSAGES	100000
extern int getopt(int, char * const *, const char *);
struct timeval2 ;
int gettimeofday(struct timeval2 *tv, struct timezone *tz);
#define	usleep(s)		Sleep((s))
