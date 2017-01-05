package org.apache.hadoop.hdfs.server.namenode.ha;
import java.io.Closeable;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.net.URI;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.server.protocol.NamenodeProtocols;
import org.apache.hadoop.io.retry.FailoverProxyProvider;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.security.UserGroupInformation;
import com.google.common.base.Preconditions;
public class WrappedFailoverProxyProvider<T> extends
AbstractNNFailoverProxyProvider<T>
