#include "max.cpp"

#include <cstdlib>
#include <vector>

int main() {
    auto ints = {1, 2, 3};

    if (max_int(ints) != 3) {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}