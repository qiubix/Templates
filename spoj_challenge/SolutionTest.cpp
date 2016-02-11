#include "gmock/gmock.h"
#include "Solution.hpp"
using ::testing::Eq;

TEST(SolutionTest, shouldDoSomethingUseful) {
  ASSERT_THAT(1, Eq(1));
}

int main(int argc, char **argv) {
  testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}
