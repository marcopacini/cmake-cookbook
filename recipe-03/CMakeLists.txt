cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(recipe-03 LANGUAGES CXX)

option(USE_LIBRARY "Build thew library" OFF)
message(STATUS "Compile sources into a library? ${USE_LIBRARY}")

list(APPEND sources foo.hpp foo.cpp)

if(USE_LIBRARY)
    add_library(foo STATIC ${sources})
    add_executable(recipe-02 main.cpp)
    target_link_libraries(recipe-02 foo)
else()
    add_executable(recipe-03 main.cpp ${sources})
endif()