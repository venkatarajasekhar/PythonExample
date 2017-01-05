package org.apache.hadoop.mapreduce.jobhistory;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapreduce.JobID;
import org.apache.avro.util.Utf8;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class JobStatusChangedEvent implements HistoryEvent
