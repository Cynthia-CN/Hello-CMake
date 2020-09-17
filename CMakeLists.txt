cmake_minimum_required(VERSION 3.6)

project(hello-cmake)

add_subdirectory(tests)
add_executable(hello hello.cpp)


install(TARGETS hello DESTINATION bin)