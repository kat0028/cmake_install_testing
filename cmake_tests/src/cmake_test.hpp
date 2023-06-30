#ifndef CMAKE_TEST_HPP
#define CMAKE_TEST_HPP

#include <iostream>

class CMakeTest
{
    public:
    CMakeTest();
    ~CMakeTest();

    void printTest();

    private:
    std::string private_string;
};

#endif