#include "foo.hpp"

#include <iostream>

std::ostream& operator<<(std::ostream& os, const Foo& foo) {
    os << "Foo";
    return os;
}