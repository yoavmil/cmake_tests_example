#include <gtest/gtest.h>

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(ShowcaseTests, foo)
{
    ASSERT_EQ(1, 1);
}