#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "sum.hpp"

#include <vector>

TEST_CASE("sum of integers", "[sum]") {
    auto ints = {1, 2, 3};
    REQUIRE(sum(ints) == 6);
}