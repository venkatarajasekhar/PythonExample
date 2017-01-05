package org.apache.hadoop.registry.integration;
import org.apache.curator.framework.api.BackgroundCallback;
import org.apache.hadoop.fs.PathIsNotEmptyDirectoryException;
import org.apache.hadoop.registry.AbstractRegistryTest;
import org.apache.hadoop.registry.client.api.BindFlags;
import org.apache.hadoop.registry.client.api.RegistryConstants;
import org.apache.hadoop.registry.client.binding.RegistryUtils;
import org.apache.hadoop.registry.client.binding.RegistryPathUtils;
import org.apache.hadoop.registry.client.impl.zk.ZKPathDumper;
import org.apache.hadoop.registry.client.impl.CuratorEventCatcher;
import org.apache.hadoop.registry.client.types.yarn.PersistencePolicies;
import org.apache.hadoop.registry.client.types.RegistryPathStatus;
import org.apache.hadoop.registry.client.types.ServiceRecord;
import org.apache.hadoop.registry.client.types.yarn.YarnRegistryAttributes;
import org.apache.hadoop.registry.server.services.DeleteCompletionCallback;
import org.apache.hadoop.registry.server.services.RegistryAdminService;
import org.junit.Test;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import java.io.IOException;
import java.net.URI;
import java.util.Collection;
import java.util.Map;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.Future;
import static org.apache.hadoop.registry.client.binding.RegistryTypeUtils.inetAddrEndpoint;
import static org.apache.hadoop.registry.client.binding.RegistryTypeUtils.restEndpoint;
public class TestRegistryRMOperations extends AbstractRegistryTest