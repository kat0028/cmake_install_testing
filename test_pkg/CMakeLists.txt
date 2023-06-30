cmake_minimum_required(VERSION 3.0)

project(test_pkg)

find_package(cmake_test)

#include_directories(/usr/include/cmake_test)
#link_directories(${CMAKE_TEST_LIB_DIRS})
#link_directories(/usr/lib/cmake_test)

add_executable(test src/test_pkg.cpp)
target_link_libraries(test cmake_test)

message(${CMAKE_TEST_LIB_DIR})
message(${CMAKE_TEST_INCLUDE_DIR})