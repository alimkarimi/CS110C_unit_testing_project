#include <iostream>
#define BOOST_TEST_MODULE example //Add this for start using BOOST
#include <boost/test/included/unit_test.hpp> // Add this library to enter to the testing 
#include <boost/mpl/list.hpp> // add this to start using the templates in the program

template <class T>
T mid_Value(T a, T b)
{
  float mid_value = (a+b)/2;//the function will do one by itself
  
    std::cout << "The middle value of " << a << " and " << b <<  " is: " << mid_value << std::endl;    
    return mid_value;
}

typedef boost::mpl::list<float> float_types;

BOOST_AUTO_TEST_CASE_TEMPLATE( mid_test, T, float_types )//this will work only for the float types
{
  T number1, number2;

  std::cout << "Enter the first number: " << std::endl; 
  std::cin >> number1;

  std::cout << "Enter the second number: " << std::endl;
  std::cin >> number2;

  BOOST_TEST( mid_Value(number1, number2)  == (float)((number1+number2)/2)); //the boost will create a middle sormula by itself and if the answer is the same as the function mid_Value then it will be no mistake
}

typedef boost::mpl::list<short int> shortInt_types;

BOOST_AUTO_TEST_CASE_TEMPLATE( mid2_test, T, shortInt_types ) //this will work only for the short int types
{
  T number1, number2;

  std::cout << "Enter the first number: " << std::endl; 
  std::cin >> number1;

  std::cout << "Enter the second number: " << std::endl;
  std::cin >> number2;

  BOOST_TEST( mid_Value(number1, number2)  == (float)((number1+number2)/2)); //the boost will create a middle sormula by itself and if the answer is the same as the function mid_Value then it will be no mistake
}


typedef boost::mpl::list<double> double_types;

BOOST_AUTO_TEST_CASE_TEMPLATE( mid3_test, T, double_types ) //this will work only for the double types
{
  T number1, number2;

  std::cout << "Enter the first number: " << std::endl; 
  std::cin >> number1;

  std::cout << "Enter the second number: " << std::endl;
  std::cin >> number2;

  BOOST_TEST( mid_Value(number1, number2)  == (float)((number1+number2)/2)); //the boost will create a middle sormula by itself and if the answer is the same as the function mid_Value then it will be no mistake
}

typedef boost::mpl::list<long> long_types;

BOOST_AUTO_TEST_CASE_TEMPLATE( mid4_test, T, long_types )//this will work only for the long types
{
  T number1, number2;

  std::cout << "Enter the first number: " << std::endl; 
  std::cin >> number1;

  std::cout << "Enter the second number: " << std::endl;
  std::cin >> number2;

  BOOST_TEST( mid_Value(number1, number2)  == (float)((number1+number2)/2)); //the boost will create a middle sormula by itself and if the answer is the same as the function mid_Value then it will be no mistake
}


typedef boost::mpl::list<long long> longLong_types;

BOOST_AUTO_TEST_CASE_TEMPLATE( mid5_test, T, longLong_types ) //this will work only for the long long types
{
  T number1, number2;

  std::cout << "Enter the first number: " << std::endl; 
  std::cin >> number1;

  std::cout << "Enter the second number: " << std::endl;
  std::cin >> number2;

  BOOST_TEST( mid_Value(number1, number2)  == (float)((number1+number2)/2)); //the boost will create a middle sormula by itself and if the answer is the same as the function mid_Value then it will be no mistake
