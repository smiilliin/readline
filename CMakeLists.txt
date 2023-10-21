cmake_minimum_required(VERSION 3.0)

project(LANGUAGES CXX)

#Sources this program
set(SOURCES src/main.cpp src/options.cpp src/options.hpp)

#Program name
set(TARGET rl)

add_executable (${TARGET} ${SOURCES})

#Include directory
# target_include_directories(${TARGET} PRIVATE directory)

#Compile options
set(CMAKE_CXX_FLAGS_DEBUG_INIT "-W -Wall -g")
set(CMAKE_CXX_FLAGS_RELEASE_INIT "-W -Wall -O2")
# target_compile_options(${TARGET} PRIVATE -W -Wall -O2)

#Link libraries
target_link_libraries(${TARGET} readline)