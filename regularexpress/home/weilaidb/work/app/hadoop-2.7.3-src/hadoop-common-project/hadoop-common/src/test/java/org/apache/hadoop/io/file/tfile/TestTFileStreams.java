package org.apache.hadoop.io.file.tfile;
import java.io.DataOutputStream;
import java.io.EOFException;
import java.io.IOException;
import java.util.Random;
import org.junit.Assert;
import junit.framework.TestCase;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.io.file.tfile.TFile.Reader;
import org.apache.hadoop.io.file.tfile.TFile.Writer;
import org.apache.hadoop.io.file.tfile.TFile.Reader.Scanner;
public class TestTFileStreams extends TestCase
