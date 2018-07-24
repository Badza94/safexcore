#include "gtest/gtest.h"
#include <common/util.h>

class MyTest: public ::testing::Test {
};

using tools::is_whole_coin_amount;

TEST_F(MyTest, simple_test) {
    auto is_whole = is_whole_coin_amount(0);
    ASSERT_EQ(is_whole, false);
}

TEST_F(MyTest, simple_test2) {
    auto is_whole = is_whole_coin_amount(10000000000);
    ASSERT_EQ(is_whole, true);
}
