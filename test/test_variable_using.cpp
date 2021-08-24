#include "gtest/gtest.h"
#include "../source/variable_using.h"

TEST(Test_add, HandleNoneZeroInput) {
    EXPECT_EQ(add(1, 3), 4);

}

TEST(Test_variable, NORMAL) {
    testcase3();
}

int main(int argc, char *argv[]) {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();

}

