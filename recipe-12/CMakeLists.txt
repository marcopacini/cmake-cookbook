cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(recipe-12 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SUM_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
add_library(sum INTERFACE)

add_executable(recipe-12 main.cpp)
target_link_libraries(recipe-12 sum)

# build testing binary
set(CATCH_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/catch)
add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CATCH_INCLUDE_DIR})

add_executable(sum_test sum_test.cpp)
target_link_libraries(sum_test sum)
target_link_libraries(sum_test Catch)

enable_testing()

add_test(
    NAME catch_test
    COMMAND $<TARGET_FILE:sum_test> --success
)