package org.apache.hadoop.tools;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.security.Credentials;
import java.io.IOException;
import java.util.List;
import java.util.ArrayList;
public class GlobbedCopyListing extends CopyListing
