cmake_minimum_required(VERSION 3.20)
project(OnePlus)

set(CMAKE_CXX_STANDARD 11)
enable_testing()
#添加第三方库
add_subdirectory(third-part/googletest)
include_directories(third-part/googletest/googletest/include)
#添加库文件
add_library(OnePlusLib source/variable_using.cpp)
#添加main文件
add_executable(OnePlus test/test_variable_using.cpp)
#链接库文件
target_link_libraries(OnePlus gtest gtest_main OnePlusLib)

