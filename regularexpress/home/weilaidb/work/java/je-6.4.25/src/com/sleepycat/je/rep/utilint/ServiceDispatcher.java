package com.sleepycat.je.rep.utilint;
import static com.sleepycat.je.rep.impl.RepParams.BIND_INADDR_ANY;
import static com.sleepycat.je.rep.impl.RepParams.SO_BIND_WAIT_MS;
import static com.sleepycat.je.rep.impl.RepParams.SO_REUSEADDR;
import java.io.IOException;
import java.io.PrintWriter;
import java.net.BindException;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.ServerSocket;
import java.net.Socket;
import java.net.StandardSocketOptions;
import java.nio.ByteBuffer;
import java.nio.channels.Channel;
import java.nio.channels.Channels;
import java.nio.channels.SelectionKey;
import java.nio.channels.Selector;
import java.nio.channels.ServerSocketChannel;
import java.nio.channels.SocketChannel;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.logging.Formatter;
import java.util.logging.Level;
import java.util.logging.Logger;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.rep.impl.RepImpl;
import com.sleepycat.je.rep.impl.TextProtocol;
import com.sleepycat.je.rep.impl.TextProtocol.RequestMessage;
import com.sleepycat.je.rep.impl.TextProtocol.ResponseMessage;
import com.sleepycat.je.rep.impl.node.NameIdPair;
import com.sleepycat.je.rep.net.DataChannel;
import com.sleepycat.je.rep.net.DataChannelFactory;
import com.sleepycat.je.rep.utilint.ServiceHandshake.AuthenticationMethod;
import com.sleepycat.je.rep.utilint.ServiceHandshake.ByteChannelIOAdapter;
import com.sleepycat.je.rep.utilint.ServiceHandshake.ClientHandshake;
import com.sleepycat.je.rep.utilint.ServiceHandshake.InitResult;
import com.sleepycat.je.rep.utilint.ServiceHandshake.ServerHandshake;
import com.sleepycat.je.utilint.LoggerUtils;
import com.sleepycat.je.utilint.StoppableThread;
import com.sleepycat.je.utilint.StoppableThreadFactory;
public class ServiceDispatcher extends StoppableThread