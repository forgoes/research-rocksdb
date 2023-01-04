cmake_minimum_required(VERSION 3.21)
project(research_rocksdb)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(research_rocksdb
        main.cc)

target_link_libraries(research_rocksdb ${CMAKE_SOURCE_DIR}/rocksdb/librocksdb.a)
