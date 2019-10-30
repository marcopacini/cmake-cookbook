#include "max.cpp"

#include <iostream>
#include <random>
#include <vector>
 
int main(int argc, char* argv[]) {
    std::vector<int> ints;

    for (int i = 1; i < argc; i++) {
        try {
            int v = std::atoi(argv[i]);
            ints.push_back(v);
        } catch (std::invalid_argument const &e) {
            std::cerr << "std::invalid_argument thrown : " << argv[i] << " is not a valid interger" << std::endl;
        }
    }

    std::cout << max_int(ints) << std::endl;
}