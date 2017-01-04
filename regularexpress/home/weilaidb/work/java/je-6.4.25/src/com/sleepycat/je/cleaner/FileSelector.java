package com.sleepycat.je.cleaner;
import static com.sleepycat.je.cleaner.CleanerStatDefinition.CLEANER_BACKLOG;
import static com.sleepycat.je.cleaner.CleanerStatDefinition.CLEANER_FILE_DELETION_BACKLOG;
import static com.sleepycat.je.cleaner.CleanerStatDefinition.CLEANER_PENDING_LN_QUEUE_SIZE;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Map;
import java.util.NavigableSet;
import java.util.Set;
import java.util.SortedMap;
import java.util.TreeMap;
import java.util.TreeSet;
import com.sleepycat.je.dbi.DatabaseId;
import com.sleepycat.je.dbi.MemoryBudget;
import com.sleepycat.je.tree.LN;
import com.sleepycat.je.utilint.IntStat;
import com.sleepycat.je.utilint.StatGroup;
import com.sleepycat.je.utilint.VLSN;
public class FileSelector
