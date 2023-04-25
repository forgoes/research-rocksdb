cmake_minimum_required(VERSION 3.21)
project(research_rocksdb)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

include_directories($ENV{HOME}/github/facebook/rocksdb/include)
link_directories($ENV{HOME}/github/facebook/rocksdb/cmake-build-debug)

add_executable(research_rocksdb
        main.cc)

target_link_libraries(research_rocksdb librocksdb.dylib)
