package org.apache.hadoop.security.token;
import java.util.Collection;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Text;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public interface TokenSelector<T extends TokenIdentifier>
