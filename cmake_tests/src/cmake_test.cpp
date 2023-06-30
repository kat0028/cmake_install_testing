#include "cmake_test.hpp"

CMakeTest::CMakeTest()
{
    std::cout<<"Hello"<<std::endl;

    private_string = "private string";
}

CMakeTest::~CMakeTest()
{
    std::cout<<"Goodbye"<<std::endl;
}

void CMakeTest::printTest()
{
    std::cout<<private_string<<std::endl;
}

