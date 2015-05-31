rm -rf ./target/scala-2.11/test-classes/casts/
mkdir ./target/scala-2.11/test-classes/casts/
javac -d ./target/scala-2.11/test-classes/ $(find ./src/test/java/casts/* | grep "\.java")
