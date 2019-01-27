cmake_minimum_required(VERSION 2.8.0)
project (CPPMath)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(cppmath ${SOURCES})

install(TARGETS cppmath DESTINATION /usr/local/bin) 
