cmake_minimum_required(VERSION 2.8.0)
project (CPPMath)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(math ${SOURCES})

install(TARGETS math DESTINATION /usr/local/bin) 
