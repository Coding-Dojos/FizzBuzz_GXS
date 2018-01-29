cmake_minimum_required(VERSION 2.8)

project(fizzbuzz)
file(GLOB SOURCE_FILES *.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
