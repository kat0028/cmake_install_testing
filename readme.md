# CMake Install Testing
## cmake_tests
To install the package run the following in build:
```
cmake ..
make
cmake --install .
```

## test_pkg
To include and use the test library package the following line needs to be included in CMakeLists.txt:
```
find_package(cmake_test)
```

cmake_test also needs to be used in target_link_libraries in order to use the lib.
