package org.apache.hadoop.mapred.join;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.io.WritableComparator;
import org.apache.hadoop.mapred.JobConf;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class OuterJoinRecordReader<K extends WritableComparable>
extends JoinRecordReader<K>
