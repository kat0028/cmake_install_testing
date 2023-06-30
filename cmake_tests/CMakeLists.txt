cmake_minimum_required(VERSION 3.0)

project(cmake_test)

add_library(cmake_test SHARED
    src/cmake_test.cpp
    src/cmake_test.hpp
)

include(CMakePackageConfigHelpers)

#target_include_directories(cmake_test PUBLIC ${MY_LIBRARY_SOURCE_DIR})

configure_package_config_file(cmake_testConfig.cmake.in 
    ${CMAKE_CURRENT_BINARY_DIR}/cmake_testConfig.cmake
    INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/cmake_test)
    #PATH_VARS INCLUDE_INSTALL_DIR SYSCONFIG_INSTALL_DIR)

install(TARGETS cmake_test DESTINATION /stable/lib/cmake_test)
install(FILES src/cmake_test.hpp DESTINATION /stable/include/cmake_test)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/cmake_testConfig.cmake DESTINATION /usr/local/lib/cmake/cmake_test)