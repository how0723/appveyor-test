#define CATCH_CONFIG_MAIN
#include "catch.hpp"
// 测试用例
TEST_CASE("test1", "[test1]")
{
    REQUIRE(1 == 1);
}

TEST_CASE("test2", "[test1]")
{
    REQUIRE(1 != 2);
}

TEST_CASE("test3", "[test1]")
{
    REQUIRE(1 < 2);
}

TEST_CASE("test4", "[test1]")
{
    REQUIRE(9==9);
}