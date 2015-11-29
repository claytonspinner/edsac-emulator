cmake_minimum_required(VERSION 3.3)
project(edsac_emulator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    main.c
    makefile
    makefile.windows
    README.md)

add_executable(edsac_emulator ${SOURCE_FILES})