package com.sleepycat.je.txn;
import java.nio.ByteBuffer;
import com.sleepycat.je.log.BasicVersionedWriteLoggable;
import com.sleepycat.je.log.Loggable;
import com.sleepycat.je.log.VersionedWriteLoggable;
public class TxnAbort extends TxnEnd implements VersionedWriteLoggable
