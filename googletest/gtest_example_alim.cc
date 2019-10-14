#include "add_function.cc"
#include "gtest/gtest.h"
#include <string>

TEST(AdditionTest, CanAddInts){
EXPECT_EQ(add(1,1), 2);

}

TEST(AdditionTest, CanAddDoubles){
EXPECT_EQ(add(1.5, 5.2),6.7);}

TEST(AdditionTest, CanSubtract){
EXPECT_EQ(add(90,-100),-10);}

TEST(AdditionTest, ValidatesLessThan){
EXPECT_LT(add(2,4),9);
}

TEST(AdditionTest, ValidatesNotEquals){
EXPECT_NE(add(0,0),1);
}

TEST(AdditionTest, FailureExample){
EXPECT_NE(add(0,0),0);}
