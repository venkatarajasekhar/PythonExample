package com.sleepycat.je.log;
import static com.sleepycat.je.log.LogStatDefinition.FSYNCMGR_FSYNCS;
import static com.sleepycat.je.log.LogStatDefinition.FSYNCMGR_FSYNC_REQUESTS;
import static com.sleepycat.je.log.LogStatDefinition.FSYNCMGR_TIMEOUTS;
import static com.sleepycat.je.log.LogStatDefinition.GRPCMGR_N_GROUP_COMMIT_REQUESTS;
import static com.sleepycat.je.log.LogStatDefinition.GRPCMGR_N_GROUP_COMMIT_WAITS;
import static com.sleepycat.je.log.LogStatDefinition.GRPCMGR_N_LOG_INTERVAL_EXCEEDED;
import static com.sleepycat.je.log.LogStatDefinition.GRPCMGR_N_LOG_MAX_GROUP_COMMIT;
import java.util.concurrent.CountDownLatch;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.StatsConfig;
import com.sleepycat.je.ThreadInterruptedException;
import com.sleepycat.je.config.EnvironmentParams;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.utilint.AtomicLongStat;
import com.sleepycat.je.utilint.LongStat;
import com.sleepycat.je.utilint.StatGroup;
import com.sleepycat.je.utilint.TestHook;
import com.sleepycat.je.utilint.TestHookExecute;
class FSyncManager