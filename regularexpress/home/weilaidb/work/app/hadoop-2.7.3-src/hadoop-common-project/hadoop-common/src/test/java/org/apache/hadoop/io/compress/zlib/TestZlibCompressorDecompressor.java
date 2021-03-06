package org.apache.hadoop.io.compress.zlib;
import static org.junit.Assert.*;
import static org.junit.Assume.*;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.util.Random;
import java.util.zip.DeflaterOutputStream;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.io.DataInputBuffer;
import org.apache.hadoop.io.compress.CompressDecompressTester;
import org.apache.hadoop.io.compress.Compressor;
import org.apache.hadoop.io.compress.Decompressor;
import org.apache.hadoop.io.compress.DecompressorStream;
import org.apache.hadoop.io.compress.CompressDecompressTester.CompressionTestStrategy;
import org.apache.hadoop.io.compress.zlib.ZlibCompressor.CompressionLevel;
import org.apache.hadoop.io.compress.zlib.ZlibCompressor.CompressionStrategy;
import org.apache.hadoop.io.compress.zlib.ZlibDecompressor.ZlibDirectDecompressor;
import org.apache.hadoop.util.NativeCodeLoader;
import org.junit.Before;
import org.junit.Test;
import com.google.common.collect.ImmutableSet;
public class TestZlibCompressorDecompressor
