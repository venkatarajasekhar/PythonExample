package com.sleepycat.je.rep.vlsn;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import java.io.File;
import java.io.IOException;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Map;
import java.util.SortedMap;
import java.util.TreeMap;
import java.util.logging.Logger;
import org.junit.Test;
import com.sleepycat.je.Database;
import com.sleepycat.je.DatabaseConfig;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.DbInternal;
import com.sleepycat.je.Durability;
import com.sleepycat.je.Environment;
import com.sleepycat.je.EnvironmentConfig;
import com.sleepycat.je.TransactionConfig;
import com.sleepycat.je.dbi.DatabaseImpl;
import com.sleepycat.je.log.LogEntryType;
import com.sleepycat.je.recovery.RecoveryInfo;
import com.sleepycat.je.rep.impl.node.NameIdPair;
import com.sleepycat.je.rep.util.TestLogItem;
import com.sleepycat.je.rep.vlsn.VLSNIndex.BackwardVLSNScanner;
import com.sleepycat.je.rep.vlsn.VLSNIndex.ForwardVLSNScanner;
import com.sleepycat.je.txn.Txn;
import com.sleepycat.je.utilint.DbLsn;
import com.sleepycat.je.utilint.LoggerUtils;
import com.sleepycat.je.utilint.TestHook;
import com.sleepycat.je.utilint.VLSN;
import com.sleepycat.util.test.SharedTestUtils;
import com.sleepycat.util.test.TestBase;
public class VLSNIndexTest extends TestBase
