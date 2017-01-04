package com.sleepycat.je.rep.stream;
import static com.sleepycat.je.rep.impl.RepParams.GROUP_NAME;
import static com.sleepycat.je.rep.impl.RepParams.MAX_CLOCK_DELTA;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.JEVersion;
import com.sleepycat.je.dbi.DbConfigManager;
import com.sleepycat.je.dbi.EnvironmentFailureReason;
import com.sleepycat.je.log.LogEntryType;
import com.sleepycat.je.rep.NodeType;
import com.sleepycat.je.rep.impl.RepGroupImpl;
import com.sleepycat.je.rep.impl.RepImpl;
import com.sleepycat.je.rep.impl.node.NameIdPair;
import com.sleepycat.je.rep.stream.Protocol.DuplicateNodeReject;
import com.sleepycat.je.rep.stream.Protocol.FeederJEVersions;
import com.sleepycat.je.rep.stream.Protocol.FeederProtocolVersion;
import com.sleepycat.je.rep.stream.Protocol.JEVersionsReject;
import com.sleepycat.je.rep.stream.Protocol.NodeGroupInfoOK;
import com.sleepycat.je.rep.stream.Protocol.NodeGroupInfoReject;
import com.sleepycat.je.rep.stream.Protocol.SNTPResponse;
import com.sleepycat.je.rep.utilint.NamedChannel;
import com.sleepycat.je.rep.utilint.BinaryProtocol.Message;
import com.sleepycat.je.rep.utilint.BinaryProtocol.ProtocolException;
import com.sleepycat.je.rep.utilint.RepUtils.Clock;
import com.sleepycat.je.utilint.LoggerUtils;
public class ReplicaFeederHandshake
