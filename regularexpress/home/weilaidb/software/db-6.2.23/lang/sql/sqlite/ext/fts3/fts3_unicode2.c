#if defined(SQLITE_ENABLE_FTS3) || defined(SQLITE_ENABLE_FTS4)
int sqlite3FtsUnicodeIsalnum(int c)
static int remove_diacritic(int c)
int sqlite3FtsUnicodeIsdiacritic(int c)
int sqlite3FtsUnicodeFold(int c, int bRemoveDiacritic)
