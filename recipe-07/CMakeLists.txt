cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(recipe-07 LANGUAGES CXX)
add_executable(recipe-07 main.cpp)
target_include_directories(recipe-07 PRIVATE ${PROJECT_BINARY_DIR})

foreach(key 
    IN ITEMS
        NUMBER_OF_LOGICAL_CORES
        NUMBER_OF_PHYSICAL_CORES
        TOTAL_VIRTUAL_MEMORY
        AVAILABLE_VIRTUAL_MEMORY
        TOTAL_PHYSICAL_MEMORY
        AVAILABLE_PHYSICAL_MEMORY
        IS_64BIT
        OS_PLATFORM
)
  cmake_host_system_information(RESULT _${key} QUERY ${key})
endforeach()

configure_file(config.h.in config.h @ONLY)