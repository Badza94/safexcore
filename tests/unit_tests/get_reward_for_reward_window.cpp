#include "gtest/gtest.h"
#include <cryptonote_basic/cryptonote_basic_impl.h>

class RewardTest: public ::testing::Test {
};



TEST_F(RewardTest, airdrop_test) {
    auto grfrw = cryptonote::get_reward_for_reward_window(0);
    ASSERT_EQ(grfrw, AIRDROP_SAFES_CASH_AMOUNT);
}



TEST_F(RewardTest, reward_test) {
    auto grfrw = cryptonote::get_reward_for_reward_window(10);
    ASSERT_EQ(grfrw, 130 * SAFEX_CASH_COIN);
}

TEST_F(RewardTest, inflation_test) {
    auto grfrw = cryptonote::get_reward_for_reward_window(2000);
    ASSERT_EQ(grfrw, 3 * SAFEX_CASH_COIN);
}