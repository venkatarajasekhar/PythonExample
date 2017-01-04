package com.sleepycat.je;
import static com.sleepycat.je.dbi.DbiStatDefinition.THROUGHPUT_SECONDARYDB_DELETE;
import static com.sleepycat.je.dbi.DbiStatDefinition.THROUGHPUT_SECONDARYDB_GET;
import static com.sleepycat.je.dbi.DbiStatDefinition.THROUGHPUT_SECONDARYDB_GETSEARCHBOTH;
import java.util.Collection;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import java.util.logging.Level;
import com.sleepycat.je.dbi.CursorImpl.SearchMode;
import com.sleepycat.je.dbi.DatabaseImpl;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.dbi.GetMode;
import com.sleepycat.je.dbi.PutMode;
import com.sleepycat.je.txn.Locker;
import com.sleepycat.je.txn.LockerFactory;
import com.sleepycat.je.utilint.AtomicLongStat;
import com.sleepycat.je.utilint.DatabaseUtil;
import com.sleepycat.je.utilint.LoggerUtils;
public class SecondaryDatabase extends Database