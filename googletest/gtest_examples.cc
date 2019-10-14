#include "add_function.cc"
#include "gtest/gtest.h"
#include <string>

/*
    IMPORTANT: READ INSTRUCTIONS TO COMPILE.
    * To compile on terminal, use:
    g++ -std=c++11 -stdlib=libc++  gtest_example_alim.cc add_function.cc gtest_main.cc -lgtest -lpthread -o executeThis
    Where -std is the C++ version to compile, gtest_example.cc is the C++ file with the user written tests, add_function.cc 
    is the C++ file with the function being called in the tests (tests are in gtest_example.cc), gtest_main.cc is the included 
    file from the GoogleTest git repository, and "executeThis" is the file name that the executable will be written to. 
    "executeThis" can be named anything. 
*/

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
