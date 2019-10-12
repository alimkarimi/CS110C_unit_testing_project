#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>

/* 
	IMPORTANT:
	If code does not compile, you may need to specify compiler type on the command line. For example:
	g++ -std=c++11 catch2_example.cc	
*/

unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}

template <typename T>
T add(T x, T y)
{
	T z;
	z = x + y;
	return z;
}



TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE( "Addition with different types inputs")
{
	REQUIRE(add(1,2) == 3);
	REQUIRE(add(std::string ("hello"),std::string ("hi")) == std::string ("hellohi"));
	REQUIRE(add(2.9,9.424242820) == 12.32424282);
	REQUIRE(add(2, 500) <= 505);
	REQUIRE(add(2,4) == 9);
}
