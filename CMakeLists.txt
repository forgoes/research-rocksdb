cmake_minimum_required(VERSION 3.21)
project(research_rocksdb)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

set(SOURCE_ROCKSDB_PROJECT "$ENV{HOME}/github/facebook/rocksdb")

include_directories(${SOURCE_ROCKSDB_PROJECT})
include_directories(${SOURCE_ROCKSDB_PROJECT}/include)
link_directories(${SOURCE_ROCKSDB_PROJECT}/cmake-build-debug)

add_executable(research_rocksdb
        main.cc)

target_link_libraries(research_rocksdb librocksdb.a)
