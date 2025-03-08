cmake_minimum_required(VERSION 3.10)
project(c-init C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Enable compile_commands.json generation
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include_directories(include/)

file(GLOB SOURCES "src/*.c")
add_executable(c-init ${SOURCES})
