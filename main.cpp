#include <iostream>
#include "gtest/gtest.h"


bool isEqual(int val);

int main() {

    testing::InitGoogleTest();
    std::cout << RUN_ALL_TESTS() << std::endl;
    std::cout << "Hello, World!" << std::endl;

    std::cout << isEqual(15);

    return 0;
}

bool isEqual(int val)
{
    return !(val & 1);
}

TEST(MainTest, EqualTest) {
    EXPECT_PRED1(isEqual, 10);
    EXPECT_EQ(isEqual(15), false);
}