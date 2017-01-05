package org.apache.hadoop.yarn.api.protocolrecords;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Stable;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.ApplicationClientProtocol;
import org.apache.hadoop.yarn.api.records.QueueInfo;
import org.apache.hadoop.yarn.util.Records;
@Public
@Stable
public abstract class GetQueueInfoResponse
