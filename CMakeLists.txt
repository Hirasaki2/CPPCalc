cmake_minimum_required(VERSION 2.8.0)
project (CPPMath)

include_directories(headers)

file(GLOB SOURCES "cpp/*.cpp")

add_executable(lol ${SOURCES} math.cpp)
