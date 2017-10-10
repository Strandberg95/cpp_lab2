cmake_minimum_required(VERSION 3.8)
project(Labb2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        part1/cpp/Prime.cpp
        part1/header/Prime.h part2/cpp/StringRep.cpp part2/header/StringRep.h)

add_executable(Labb2 ${SOURCE_FILES})