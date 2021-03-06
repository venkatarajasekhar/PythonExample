package org.apache.hadoop.mapred;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.BytesWritable;
import org.apache.hadoop.io.LongWritable;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class FixedLengthRecordReader
implements RecordReader<LongWritable, BytesWritable>
