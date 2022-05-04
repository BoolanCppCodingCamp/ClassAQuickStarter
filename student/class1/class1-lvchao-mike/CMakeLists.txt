cmake_minimum_required(VERSION 3.21)

project(class1
        VERSION 1.0.0
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_COMPILER "g++")

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_SKIP_RPATH true)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/bin/)

#set(CMAKE_BUILD_TYPE DEBUG)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -g -ggdb3 -Wall -Wno-unused-local-typedefs -I${PROJECT_SOURCE_DIR} -D_GLIBCXX_USE_CXX11_ABI=0  -D__CMAKE_FILE__='\"$(notdir $(abspath $<))\"'")
#set(CMAKE_CXX_FLAGS_DEBUG "-O0 -ggdb")
#set(CMAKE_CXX_FLAGS_RELEASE "-O0 -ggdb")

add_subdirectory(src)

