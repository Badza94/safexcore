#include "gtest/gtest.h"
#include <cryptonote_basic/cryptonote_basic_impl.h>

class BaseRewardTest: public ::testing::Test {
};



TEST_F(BaseRewardTest, reward_test) {
    auto gbr = cryptonote::get_base_reward(100);
    ASSERT_EQ(gbr, 100000000000000000);
}

TEST_F(BaseRewardTest, reward_test1) {
    auto gbr = cryptonote::get_base_reward(100000000000000000);
    ASSERT_EQ(gbr, 300000000000);
}

TEST_F(BaseRewardTest, reward_test0) {
    auto gbr = cryptonote::get_base_reward(0);
    ASSERT_EQ(gbr, 100000000000000000);
}