cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(recipe-03 LANGUAGES C CXX)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
message(STATUS "Debug configuration: ${CMAKE_C_FLAGS_DEBUG}")
message(STATUS "Release configuration: ${CMAKE_C_FLAGS_RELEASE}")
message(STATUS "Release configuration with Debug info: ${CMAKE_C_FLAGS_RELWITHDEBINFO}")
message(STATUS "Minimal Release configuration: ${CMAKE_C_FLAGS_MINSIZEREL}")

add_executable(recipe-04 main.c)