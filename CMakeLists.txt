cmake_minimum_required (VERSION 3.10)
project ("showcase")
set(CMAKE_CXX_STANDARD 17)
find_package(GTest CONFIG REQUIRED)
include(GoogleTest)
enable_testing()

add_executable(showcase showcase.cpp)

target_link_libraries(showcase PRIVATE GTest::gmock GTest::gtest GTest::gmock_main GTest::gtest_main)

 # this commands finds the test in the source files.
 # know that each touch at the files causes a need to rerun cmake
gtest_add_tests(TARGET showcase)