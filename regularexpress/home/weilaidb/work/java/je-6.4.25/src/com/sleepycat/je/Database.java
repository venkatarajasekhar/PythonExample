package com.sleepycat.je;
import static com.sleepycat.je.dbi.DbiStatDefinition.THROUGHPUT_DB_DELETE;
import static com.sleepycat.je.dbi.DbiStatDefinition.THROUGHPUT_DB_GET;
import static com.sleepycat.je.dbi.DbiStatDefinition.THROUGHPUT_DB_GETSEARCHBOTH;
import static com.sleepycat.je.dbi.DbiStatDefinition.THROUGHPUT_DB_PUT;
import static com.sleepycat.je.dbi.DbiStatDefinition.THROUGHPUT_DB_PUTNODUPDATA;
import static com.sleepycat.je.dbi.DbiStatDefinition.THROUGHPUT_DB_PUTNOOVERWRITE;
import static com.sleepycat.je.dbi.DbiStatDefinition.THROUGHPUT_DB_REMOVESEQUENCE;
import java.io.Closeable;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.concurrent.CopyOnWriteArraySet;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.logging.Level;
import java.util.logging.Logger;
import com.sleepycat.je.dbi.CursorImpl.SearchMode;
import com.sleepycat.je.dbi.DatabaseImpl;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.dbi.GetMode;
import com.sleepycat.je.dbi.PutMode;
import com.sleepycat.je.dbi.TriggerManager;
import com.sleepycat.je.txn.HandleLocker;
import com.sleepycat.je.txn.Locker;
import com.sleepycat.je.txn.LockerFactory;
import com.sleepycat.je.utilint.AtomicLongStat;
import com.sleepycat.je.utilint.DatabaseUtil;
import com.sleepycat.je.utilint.LoggerUtils;
public class Database implements Closeable
