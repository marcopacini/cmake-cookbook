cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(recipe-06 LANGUAGES CXX)
add_executable(recipe-06 main.cpp)

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    target_compile_definitions(recipe-06 PUBLIC "IS_LINUX")
endif()

if(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    target_compile_definitions(recipe-06 PUBLIC "IS_MACOS")
endif()