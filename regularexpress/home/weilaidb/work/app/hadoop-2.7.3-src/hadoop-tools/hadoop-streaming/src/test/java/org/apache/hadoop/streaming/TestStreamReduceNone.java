package org.apache.hadoop.streaming;
import java.io.*;
import java.util.*;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.fs.Path;
import static org.junit.Assert.*;
import org.junit.Test;
public class TestStreamReduceNone
