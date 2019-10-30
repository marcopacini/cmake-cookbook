cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(recipe-11 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(PythonInterp 3 REQUIRED)
find_program(BASH_EXECUTABLE NAMES bash REQUIRED)

add_library(max max.cpp)

add_executable(recipe-11 main.cpp)
target_link_libraries(recipe-11 max)

# build testing binary
add_executable(max_test max_test.cpp)
target_link_libraries(max_test max)

enable_testing()

# bash script
add_test(
    NAME main_test
    COMMAND ${BASH_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/main_test.sh $<TARGET_FILE:recipe-11>
)

# binary executable
add_test(
    NAME max_test
    COMMAND $<TARGET_FILE:max_test>
)

# python script
add_test(
    NAME python_test
    COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/main_test.py --exec $<TARGET_FILE:recipe-11>
)