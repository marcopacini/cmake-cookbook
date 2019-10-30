#ifndef MAX_CPP
#define MAX_CPP

#include <vector>

int max_int(std::vector<int> values) {
    if (values.empty()) {
        throw std::invalid_argument("empty vector");
    }

    auto max = values.front();
    for (auto v : values) {
        if (v > max) {
            max = v;
        }
    }
    return max;
}

#endif