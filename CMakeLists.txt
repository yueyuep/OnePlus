cmake_minimum_required(VERSION 3.20)
project(OnePlus)

set(CMAKE_CXX_STANDARD 14)
enable_testing()
add_subdirectory(third-part/googletest)
include_directories(third-part/googletest/googletest/include)
add_executable(OnePlus source/main.cpp test/maintest.cpp source/main.h)
