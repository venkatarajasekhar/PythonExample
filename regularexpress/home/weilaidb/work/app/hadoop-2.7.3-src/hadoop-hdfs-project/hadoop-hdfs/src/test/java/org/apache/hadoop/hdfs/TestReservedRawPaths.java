package org.apache.hadoop.hdfs;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.security.PrivilegedExceptionAction;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.crypto.key.JavaKeyStoreProvider;
import org.apache.hadoop.fs.FileContext;
import org.apache.hadoop.fs.FileContextTestWrapper;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystemTestHelper;
import org.apache.hadoop.fs.FileSystemTestWrapper;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.hdfs.client.HdfsAdmin;
import org.apache.hadoop.hdfs.server.namenode.EncryptionZoneManager;
import org.apache.hadoop.security.AccessControlException;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.log4j.Level;
import org.apache.log4j.Logger;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import static org.apache.hadoop.hdfs.DFSTestUtil.verifyFilesEqual;
import static org.apache.hadoop.hdfs.DFSTestUtil.verifyFilesNotEqual;
import static org.apache.hadoop.test.GenericTestUtils.assertExceptionContains;
import static org.apache.hadoop.test.GenericTestUtils.assertMatches;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.fail;
public class TestReservedRawPaths
