cmake_minimum_required(VERSION 2.8)
set (gtest_disable_pthreads on)

project(fizzbuzz_tests)

add_subdirectory (googletest-master)
config_compiler_and_linker()

file(GLOB SOURCE_FILES *.cpp)
file(GLOB APP_FILES ../app/fizzbuzz.cpp)

include_directories(../app)

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${APP_FILES})
target_link_libraries (${PROJECT_NAME} gtest gmock)
