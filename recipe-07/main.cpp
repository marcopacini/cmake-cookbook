#include "config.h"

#include <iostream>
#include <cstdlib>

int main() {
    std::cout << "Number of logical cores: " << NUMBER_OF_LOGICAL_CORES << std::endl;
    std::cout << "Number of physical cores: " << NUMBER_OF_PHYSICAL_CORES << std::endl;
    std::cout << "Total virtual memory: " << TOTAL_VIRTUAL_MEMORY << std::endl;
    std::cout << "Available virtual memory: " << AVAILABLE_VIRTUAL_MEMORY << std::endl;
    std::cout << "Total physical memory: " << TOTAL_PHYSICAL_MEMORY << std::endl;
    std::cout << "Available physical memory: " << AVAILABLE_PHYSICAL_MEMORY << std::endl;
    std::cout << "Processor is 64 bit: " << IS_64BIT << std::endl;
    std::cout << "OS platform: " << OS_PLATFORM << std::endl;
    return EXIT_SUCCESS;
}