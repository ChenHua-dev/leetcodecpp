//
// Created by Chen Hua on 2023-10-07.
//

#include "../../main/exercise/LC1TwoSum.cpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace std;

// googletest fixture test
class LC1TwoSumTest : public ::testing::Test {
protected:
    Solution s;
    void SetUp() override {
        s = Solution();
    }
};

TEST_F(LC1TwoSumTest, PositiveNos)
{
    vector<int> v = {1,2,4,7};
    vector<int> res = s.twoSum(v, 9);
    sort(res.begin(), res.end());
    ASSERT_THAT(res, ::testing::ElementsAre(1, 3));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}