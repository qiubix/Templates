project(SPOJ_Challenge)
cmake_minimum_required(VERSION 2.6)

include_directories($ENV{GMOCK_HOME}/include $ENV{GMOCK_HOME}/gtest/include)
link_directories($ENV{GMOCK_HOME}/build $ENV{GMOCK_HOME}/gtest/build)
add_definitions(-std=c++0x)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -g -O0 -Wall -pthread")
enable_testing()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")

set(test_sources
   Solution.hpp
   SolutionTest.cpp)

add_executable(SolutionTest ${test_sources})
target_link_libraries(SolutionTest pthread)
target_link_libraries(SolutionTest gmock)
target_link_libraries(SolutionTest gtest)
add_dependencies(SolutionTest gmock)
add_test(SolutionTest SolutionTest)

add_executable(challenge main.cpp)
