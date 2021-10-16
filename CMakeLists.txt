cmake_minimum_required(VERSION 3.20)
project(CLIon)

set(CMAKE_CXX_STANDARD 14)

#add_subdirectory(lib/googletest)
#include_directories(lib/googletest/googletest)
#include_directories(lib/googletest/googlemock)
add_executable(CLIon main.cpp)
#target_link_libraries(CLIon gtest gtest_main)
