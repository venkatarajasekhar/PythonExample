package org.apache.hadoop.tools.rumen;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Set;
import java.util.TreeSet;
import org.apache.hadoop.mapreduce.TaskID;
import org.apache.hadoop.mapreduce.jobhistory.JhCounter;
import org.apache.hadoop.mapreduce.jobhistory.JhCounterGroup;
import org.apache.hadoop.mapreduce.jobhistory.JhCounters;
import org.apache.hadoop.util.StringUtils;
import org.codehaus.jackson.annotate.JsonAnySetter;
public class LoggedTask implements DeepCompare
