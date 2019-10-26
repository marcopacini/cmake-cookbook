#ifndef FOO_HPP
#define FOO_HPP

#include <iostream>

class Foo {
public:
    friend std::ostream& operator<<(std::ostream&, const Foo&);
};

#endif