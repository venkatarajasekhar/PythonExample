package org.apache.hadoop.fs.azure;
import static org.junit.Assert.assertEquals;
import java.io.OutputStream;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.BlockLocation;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.junit.Test;
public class TestNativeAzureFileSystemBlockLocations
