package org.apache.hadoop.yarn.server.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.proto.YarnServerResourceManagerServiceProtos.RefreshQueuesResponseProto;
import org.apache.hadoop.yarn.server.api.protocolrecords.RefreshQueuesResponse;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class RefreshQueuesResponsePBImpl extends RefreshQueuesResponse
