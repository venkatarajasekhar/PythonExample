# define SQLITE_MAX_LENGTH 1000000000
# define SQLITE_MAX_COLUMN 2000
# define SQLITE_MAX_SQL_LENGTH 1000000000
# define SQLITE_MAX_EXPR_DEPTH 1000
# define SQLITE_MAX_COMPOUND_SELECT 500
# define SQLITE_MAX_VDBE_OP 25000
# define SQLITE_MAX_FUNCTION_ARG 127
# define SQLITE_DEFAULT_CACHE_SIZE  5000
#define SQLITE_DEFAULT_WAL_AUTOCHECKPOINT \
SQLITE_DEFAULT_JOURNAL_SIZE_LIMIT / SQLITE_DEFAULT_PAGE_SIZE
# define SQLITE_MAX_ATTACHED 10
# define SQLITE_MAX_VARIABLE_NUMBER 999
# undef SQLITE_MAX_PAGE_SIZE
#define SQLITE_MAX_PAGE_SIZE 65536
# define SQLITE_DEFAULT_PAGE_SIZE 4096
#if SQLITE_DEFAULT_PAGE_SIZE>SQLITE_MAX_PAGE_SIZE
# undef SQLITE_DEFAULT_PAGE_SIZE
# define SQLITE_DEFAULT_PAGE_SIZE SQLITE_MAX_PAGE_SIZE
# define SQLITE_MAX_DEFAULT_PAGE_SIZE 8192
#if SQLITE_MAX_DEFAULT_PAGE_SIZE>SQLITE_MAX_PAGE_SIZE
# undef SQLITE_MAX_DEFAULT_PAGE_SIZE
# define SQLITE_MAX_DEFAULT_PAGE_SIZE SQLITE_MAX_PAGE_SIZE
# define SQLITE_MAX_PAGE_COUNT 1073741823
# define SQLITE_MAX_LIKE_PATTERN_LENGTH 50000
# define SQLITE_MAX_TRIGGER_DEPTH 1000
