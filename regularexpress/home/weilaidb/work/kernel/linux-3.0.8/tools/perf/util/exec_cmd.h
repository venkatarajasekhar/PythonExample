#define __PERF_EXEC_CMD_H
extern void perf_set_argv_exec_path(const char *exec_path);
extern const char *perf_extract_argv0_path(const char *path);
extern const char *perf_exec_path(void);
extern void setup_path(void);
extern int execv_perf_cmd(const char **argv);
extern int execl_perf_cmd(const char *cmd, ...);
extern const char *system_path(const char *path);
