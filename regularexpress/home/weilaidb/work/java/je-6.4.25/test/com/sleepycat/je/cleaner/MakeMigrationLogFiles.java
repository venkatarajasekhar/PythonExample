package com.sleepycat.je.cleaner;
import java.io.File;
import com.sleepycat.bind.tuple.IntegerBinding;
import com.sleepycat.je.Cursor;
import com.sleepycat.je.Database;
import com.sleepycat.je.DatabaseConfig;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.Environment;
import com.sleepycat.je.EnvironmentConfig;
import com.sleepycat.je.OperationStatus;
import com.sleepycat.je.config.EnvironmentParams;
public class MakeMigrationLogFiles
