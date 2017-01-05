package org.apache.hadoop.fs.swift;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.swift.http.SwiftRestClient;
import org.junit.Assert;
import org.junit.Test;
import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.DOT_AUTH_URL;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.DOT_LOCATION_AWARE;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.DOT_PASSWORD;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.DOT_TENANT;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.DOT_USERNAME;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.SWIFT_BLOCKSIZE;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.SWIFT_CONNECTION_TIMEOUT;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.SWIFT_PARTITION_SIZE;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.SWIFT_PROXY_HOST_PROPERTY;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.SWIFT_PROXY_PORT_PROPERTY;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.SWIFT_RETRY_COUNT;
import static org.apache.hadoop.fs.swift.http.SwiftProtocolConstants.SWIFT_SERVICE_PREFIX;
public class TestSwiftConfig extends Assert