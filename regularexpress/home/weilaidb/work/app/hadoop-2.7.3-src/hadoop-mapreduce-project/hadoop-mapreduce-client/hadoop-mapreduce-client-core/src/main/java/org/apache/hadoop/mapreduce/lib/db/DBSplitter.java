package org.apache.hadoop.mapreduce.lib.db;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.InputSplit;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public interface DBSplitter
