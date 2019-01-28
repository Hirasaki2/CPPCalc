cmake_minimum_required(VERSION 2.8.0)
project (CPPMath)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(cppcalc ${SOURCES})

install(TARGETS cppcalc DESTINATION /usr/local/bin) 
