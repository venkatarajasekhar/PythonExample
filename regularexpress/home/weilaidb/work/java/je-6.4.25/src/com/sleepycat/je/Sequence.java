package com.sleepycat.je;
import static com.sleepycat.je.dbi.SequenceStatDefinition.SEQUENCE_CACHED_GETS;
import static com.sleepycat.je.dbi.SequenceStatDefinition.SEQUENCE_CACHE_LAST;
import static com.sleepycat.je.dbi.SequenceStatDefinition.SEQUENCE_CACHE_SIZE;
import static com.sleepycat.je.dbi.SequenceStatDefinition.SEQUENCE_CACHE_VALUE;
import static com.sleepycat.je.dbi.SequenceStatDefinition.SEQUENCE_GETS;
import static com.sleepycat.je.dbi.SequenceStatDefinition.SEQUENCE_RANGE_MAX;
import static com.sleepycat.je.dbi.SequenceStatDefinition.SEQUENCE_RANGE_MIN;
import static com.sleepycat.je.dbi.SequenceStatDefinition.SEQUENCE_STORED_VALUE;
import java.io.Closeable;
import java.math.BigInteger;
import java.nio.ByteBuffer;
import java.util.logging.Level;
import java.util.logging.Logger;
import com.sleepycat.je.dbi.SequenceStatDefinition;
import com.sleepycat.je.log.LogUtils;
import com.sleepycat.je.txn.Locker;
import com.sleepycat.je.txn.LockerFactory;
import com.sleepycat.je.utilint.IntStat;
import com.sleepycat.je.utilint.LoggerUtils;
import com.sleepycat.je.utilint.LongStat;
import com.sleepycat.je.utilint.StatGroup;
public class Sequence implements Closeable