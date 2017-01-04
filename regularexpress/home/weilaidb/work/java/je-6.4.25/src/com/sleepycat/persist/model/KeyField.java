package com.sleepycat.persist.model;
import static java.lang.annotation.ElementType.FIELD;
import static java.lang.annotation.RetentionPolicy.RUNTIME;
import java.lang.annotation.Documented;
import java.lang.annotation.Retention;
import java.lang.annotation.Target;
import com.sleepycat.je.Environment;
@Documented @Retention(RUNTIME) @Target(FIELD)
public @interface KeyField
