#ifndef SUM_CPP
#define SUM_CPP

#include <vector>

int sum(std::vector<int> ints) {
    int sum = 0;
    for (auto i : ints) {
        sum += i;
    }
    return sum;
}

#endif