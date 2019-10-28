cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(recipe-05 LANGUAGES C CXX)

list(APPEND flags "-Wall")
if(NOT WIN32)
    list(APPEND flags "-Wextra" "-Wpedantic")
endif()

add_executable(recipe-05 main.c)
target_compile_options(recipe-05 PRIVATE ${flags})