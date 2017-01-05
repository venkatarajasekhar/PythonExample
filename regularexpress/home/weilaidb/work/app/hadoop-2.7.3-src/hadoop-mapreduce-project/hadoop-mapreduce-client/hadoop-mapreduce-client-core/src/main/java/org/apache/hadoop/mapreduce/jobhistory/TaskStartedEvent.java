package org.apache.hadoop.mapreduce.jobhistory;
import org.apache.avro.util.Utf8;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapreduce.TaskID;
import org.apache.hadoop.mapreduce.TaskType;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class TaskStartedEvent implements HistoryEvent
