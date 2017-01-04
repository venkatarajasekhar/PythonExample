package com.sleepycat.je.rep.utilint;
import java.io.File;
import java.util.Date;
import com.sleepycat.je.CacheMode;
import com.sleepycat.je.EnvironmentConfig;
import com.sleepycat.je.EnvironmentNotFoundException;
import com.sleepycat.je.rep.InsufficientLogException;
import com.sleepycat.je.rep.NetworkRestore;
import com.sleepycat.je.rep.NetworkRestoreConfig;
import com.sleepycat.je.rep.NodeType;
import com.sleepycat.je.rep.RepInternal;
import com.sleepycat.je.rep.ReplicatedEnvironment;
import com.sleepycat.je.rep.ReplicationConfig;
import com.sleepycat.je.rep.impl.RepGroupDB;
import com.sleepycat.je.rep.impl.RepGroupImpl;
import com.sleepycat.je.rep.impl.RepNodeImpl;
import com.sleepycat.je.rep.impl.node.RepNode;
import com.sleepycat.je.utilint.CmdUtil;
public class DbNullNode
