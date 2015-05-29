#!/bin/bash

LIB=$(pwd)/lib

export LD_LIBRARY_PATH=$LIB:$LD_LIBRARY_PATH
export DYLD_LIBRARY_PATH=$LIB:$DYLD_LIBRARY_PATH

SBT_PATH=$HOME/.ivy2
SBT_CACHE=$SBT_PATH/cache
SBT_LOCAL=$SBT_PATH/local

# set this to the Scala 2.10.2 runtime on your system
SCALA=scala

CLASSPATH=.:target/scala-2.11/classes/:lib/com.microsoft.z3.jar:$SBT_CACHE/com.ibm.wala/com.ibm.wala.core/jars/com.ibm.wala.core-1.3.7-SNAPSHOT.jar:$SBT_CACHE/com.ibm.wala/com.ibm.wala.util/jars/com.ibm.wala.util-1.3.7-SNAPSHOT.jar:$SBT_CACHE/com.ibm.wala/com.ibm.wala.shrike/jars/com.ibm.wala.shrike-1.3.7-SNAPSHOT.jar:$SBT_CACHE/com.squareup/javawriter/jars/javawriter-2.2.1.jar:$SBT_CACHE/com.twitter/util-collection_2.10/jars/util-collection_2.10-6.12.1.jar:$SBT_CACHE/com.twitter/util-core_2.10/jars/util-core_2.10-6.12.1.jar:$SBT_CACHE/commons-collections/commons-collections/jars/commons-collections-3.2.1.jar:$SBT_CACHE/com.google.code.findbugs/jsr305/jars/jsr305-1.3.9.jar:org.$SBT_CACHE/org.scala-lang/scala-library/jars/scala-library-2.10.3.jar:$SBT_CACHE/com.google.guava/guava/bundles/guava-15.0.jar:$SBT_LOCAL/University\ of\ Colorado\ Boulder/droidel_2.10/0.1-SNAPSHOT/jars/droidel_2.10.jar:$SBT_LOCAL/University\ of\ Colorado\ Boulder/walautil_2.10/0.1-SNAPSHOT/jars/walautil_2.10.jar

$SCALA -cp "$CLASSPATH" -J-Xmx8g edu.utexas.navigator.Main $@


