cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(recipe-07 LANGUAGES NONE)
find_package(PythonInterp REQUIRED)
execute_process(
    COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_SOURCE_DIR}/main.py
    RESULT_VARIABLE _result
    OUTPUT_VARIABLE _output
    ERROR_QUIET
    OUTPUT_STRIP_TRAILING_WHITESPACE
)
message(STATUS "RESULT_VARIABLE=" ${_result})
message(STATUS "OUTPUT_VARIABLE=" ${_output})