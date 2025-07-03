#include <gtest/gtest.h>

#include <sample.h>

TEST(Sum, Sum)
{
  ASSERT_EQ(sum(1, 2), 3);
}

int main(int argc, char** argv)
{
  testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
