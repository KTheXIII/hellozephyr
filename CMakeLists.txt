cmake_minimum_required(VERSION 3.20.0)

set(MAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(hellozephyr)

target_sources(app PRIVATE src/main.cpp)

