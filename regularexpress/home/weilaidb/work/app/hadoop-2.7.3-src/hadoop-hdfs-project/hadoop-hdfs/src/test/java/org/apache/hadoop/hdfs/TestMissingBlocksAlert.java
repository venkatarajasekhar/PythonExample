package org.apache.hadoop.hdfs;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.ChecksumException;
import org.apache.hadoop.fs.FSDataInputStream;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.protocol.ExtendedBlock;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockManager;
import org.junit.Assert;
import org.junit.Test;
import javax.management.*;
import java.io.IOException;
import java.lang.management.ManagementFactory;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
public class TestMissingBlocksAlert
