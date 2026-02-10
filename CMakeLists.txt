cmake_minimum_required(VERSION 3.28.3)
project(libFK)

set(CMAKE_CXX_STANDARD 23)

add_executable(libFK main.cc
        libFK.cc
        libFK.hh)
