static void *sqlite3MemMalloc(int nByte)
static void sqlite3MemFree(void *pPrior)
static void *sqlite3MemRealloc(void *pPrior, int nByte)
static int sqlite3MemSize(void *pPrior)
static int sqlite3MemRoundup(int n)
static int sqlite3MemInit(void *NotUsed)
static void sqlite3MemShutdown(void *NotUsed)
void sqlite3MemSetDefault(void)
