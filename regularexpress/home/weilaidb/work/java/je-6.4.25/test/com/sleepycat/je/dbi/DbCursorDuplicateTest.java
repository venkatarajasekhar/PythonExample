package com.sleepycat.je.dbi;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNull;
import static org.junit.Assert.assertSame;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import java.io.Serializable;
import java.util.Comparator;
import java.util.Hashtable;
import org.junit.Test;
import com.sleepycat.je.Cursor;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.LockMode;
import com.sleepycat.je.OperationStatus;
import com.sleepycat.je.PartialComparator;
import com.sleepycat.je.Transaction;
import com.sleepycat.je.util.StringDbt;
import com.sleepycat.utilint.StringUtils;
public class DbCursorDuplicateTest extends DbCursorTestBase
