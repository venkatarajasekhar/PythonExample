package com.sleepycat.je.statcap;
import java.lang.management.GarbageCollectorMXBean;
import java.lang.management.ManagementFactory;
import java.lang.management.MemoryMXBean;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.SortedSet;
import com.sleepycat.je.StatsConfig;
import com.sleepycat.je.utilint.JVMSystemUtils;
import com.sleepycat.je.utilint.LongStat;
import com.sleepycat.je.utilint.StatDefinition;
import com.sleepycat.je.utilint.StatDefinition.StatType;
import com.sleepycat.je.utilint.StatGroup;
class JvmStats
