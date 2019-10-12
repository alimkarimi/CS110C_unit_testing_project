#include "add_function.cc"
#include "gtest/gtest.h"

TEST(AdditionTest, CanAddInts){
EXPECT_EQ(add(1,1), 2);
}
