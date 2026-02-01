cmake_minimum_required(VERSION 4.1)
project(libFK)

set(CMAKE_CXX_STANDARD 23)

add_executable(libFK main.cc
        libFK.cc
        libFK.hh)
