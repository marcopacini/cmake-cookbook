cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(recipe-12 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(sum sum.cpp)

add_executable(recipe-12 main.cpp)
target_link_libraries(recipe-12 sum)

# build testing binary
add_executable(sum_test sum_test.cpp)
target_link_libraries(sum_test sum)

enable_testing()

add_test(
    NAME catch_test
    COMMAND $<TARGET_FILE:sum_test> --success
)