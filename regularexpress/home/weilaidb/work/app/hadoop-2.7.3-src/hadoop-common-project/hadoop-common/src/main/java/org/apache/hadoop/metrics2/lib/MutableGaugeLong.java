package org.apache.hadoop.metrics2.lib;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.metrics2.MetricsInfo;
import org.apache.hadoop.metrics2.MetricsRecordBuilder;
import java.util.concurrent.atomic.AtomicLong;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class MutableGaugeLong extends MutableGauge
