#include <iostream>
#include <string>

std::string say_hello() {
    #ifdef IS_LINUX
        return std::string("Hello from Linux!");
    #elif IS_MACOS
        return std::string("Hello from macOS!");
    #else    
    #endif
}

int main() {
    std::cout << say_hello() << std::endl;
    return EXIT_SUCCESS;
}