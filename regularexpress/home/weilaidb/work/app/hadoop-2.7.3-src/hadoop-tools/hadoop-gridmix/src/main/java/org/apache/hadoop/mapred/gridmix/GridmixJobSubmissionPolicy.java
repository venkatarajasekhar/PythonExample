package org.apache.hadoop.mapred.gridmix;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.tools.rumen.JobStoryProducer;
import org.apache.hadoop.mapred.gridmix.Statistics.JobStats;
import org.apache.hadoop.mapred.gridmix.Statistics.ClusterStats;
import java.util.concurrent.CountDownLatch;
import java.io.IOException;
import org.apache.hadoop.util.StringUtils;
enum GridmixJobSubmissionPolicy