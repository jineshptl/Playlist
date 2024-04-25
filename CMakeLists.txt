cmake_minimum_required(VERSION 3.21)
project(Ch8_Playlist)

set(CMAKE_CXX_STANDARD 14)

set(CXXTEST_INCLUDE_DIR /Users/jineshpatel/Desktop/CSC109/cxxtest-4.4)

set(CXXTEST_PYTHON_TESTGEN_EXECUTABLE /Users/jineshpatel/Desktop/CSC109/cxxtest-4.4/bin/cxxtestgen)

find_package(CxxTest REQUIRED)

if(CXXTEST_FOUND)

    include_directories(${CXXTEST_INCLUDE_DIR})

    enable_testing() #tell CLION to enable testing

    CXXTEST_ADD_TEST(unittest_first

            runner.cpp # THIS IS GENERATED BUT YOU NEED TO ADD IT

            ${CMAKE_CURRENT_SOURCE_DIR}/newCxxTest.h)
    endif()

add_executable(Ch8_Playlist runner.cpp PlaylistNode.cpp PlaylistNode.h newCxxTest.h)
