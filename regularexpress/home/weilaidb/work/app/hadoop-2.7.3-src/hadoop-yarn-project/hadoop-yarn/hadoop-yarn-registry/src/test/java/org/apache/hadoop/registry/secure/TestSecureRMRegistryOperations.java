package org.apache.hadoop.registry.secure;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.PathPermissionException;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.service.ServiceStateException;
import org.apache.hadoop.registry.client.api.RegistryConstants;
import org.apache.hadoop.registry.client.api.RegistryOperations;
import org.apache.hadoop.registry.client.api.RegistryOperationsFactory;
import org.apache.hadoop.registry.client.exceptions.NoPathPermissionsException;
import org.apache.hadoop.registry.client.impl.zk.ZKPathDumper;
import org.apache.hadoop.registry.client.impl.RegistryOperationsClient;
import org.apache.hadoop.registry.client.impl.zk.RegistrySecurity;
import org.apache.hadoop.registry.client.impl.zk.ZookeeperConfigOptions;
import org.apache.hadoop.registry.server.integration.RMRegistryOperationsService;
import org.apache.hadoop.registry.server.services.RegistryAdminService;
import org.apache.zookeeper.client.ZooKeeperSaslClient;
import org.apache.zookeeper.data.ACL;
import org.apache.zookeeper.data.Id;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import javax.security.auth.login.LoginException;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.security.PrivilegedExceptionAction;
import java.util.List;
import static org.apache.hadoop.registry.client.api.RegistryConstants.*;
public class TestSecureRMRegistryOperations extends AbstractSecureRegistryTest
