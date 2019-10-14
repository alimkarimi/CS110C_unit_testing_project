#include <iostream>
#define BOOST_TEST_MODULE example
#include <boost/test/included/unit_test.hpp>
#include <boost/mpl/list.hpp>

//A prime number is known for been able to be divided by itself
template <class T>
T prime_numbers(T a)
{ 
  for (T i = 2; i < a; i++) 
    if (a % i == 0) //this formula would try to find if the total is 0
    {
      return -1; //-1 means that the answer is not a prime number
    }
    else;
    {
      return 0; //0 means is a prime number
    }
  
}




//Test 1
typedef boost::mpl::list<int> test_types;

BOOST_AUTO_TEST_CASE(test_prime)
{
  int random_number;
  std::cout << "Enter a number:" << std::endl;
  std::cin >> random_number;

  BOOST_TEST( prime_numbers(random_number)  == (unsigned)0);
}





// test factorial
template <class T>
T factorial(T a)
{
  T factorial = 1;
  for(T i = 1; i <=10; ++i)
    {
        factorial *= i;
    }
    std::cout << "10! = " << factorial;
    return factorial;
}

//Test 2
typedef boost::mpl::list<long> test_types;

BOOST_AUTO_TEST_CASE(exponential_of_10)
{
  BOOST_TEST( factorial(10)  == (unsigned)3628800);
}





//test equal name
template <class T> //one template for name
T search_Name(T a)
{
  T name;

  std::cout << "Reenter your name:" << std::endl; //this will automatically appear after you enter the name for testing
  std::cin >> name;

  return name;
}

//Test 3
typedef boost::mpl::list<std::string> test_Name;

BOOST_AUTO_TEST_CASE(equal_Names)
{
  std::string info_Name;
  std::cout << "enter the name:" << std::endl;
  std::cin >> info_Name;


  BOOST_TEST( search_Name(info_Name)  == (std::string)info_Name); // this will let you save your first name and rewrite the new name
}




//test equal ID
template <class T> //template for the ID
T search_ID(T a)
{
  T look_ID;

  std::cout << "Reenter your ID:" << std::endl; //will appear after you enter the first time ID 
  std::cin >> look_ID;

  return look_ID;
}

//Test 4
typedef boost::mpl::list<int> test_ID; //you need to create two different mlp so you are able to use int and std::string without having problems at compiling

BOOST_AUTO_TEST_CASE(look_ID)
{
  int info_ID;
  std::cout << "enter your ID:" << std::endl;
  std::cin >> info_ID;

  BOOST_TEST( search_ID(info_ID)  == (int)info_ID);

}




//test mid value
template <class T>
T mid_Value(T a, T b)
{
  T mid_value = (a+b)/2;//the function will do one by itself

    std::cout << "The middle value of " << a << " and " << b <<  " is: " << mid_value << std::endl;
    return mid_value;
}

//Test 5
typedef boost::mpl::list<int,long,unsigned char> test_types;

BOOST_AUTO_TEST_CASE_TEMPLATE( mid_test, T, test_types )
{
  T number1, number2;

  std::cout << "Enter the first number: " << std::endl; 
  std::cin >> number1;

  std::cout << "Enter the second number: " << std::endl;
  std::cin >> number2;

  BOOST_TEST( mid_Value(number2, number1)  == (unsigned)((number1+number2)/2)); //the boost will create a middle sormula by itself and if the answer is the same as the function mid_Value then it will be no mistake
}




//test add
template <class T>
T add(T a  , T b)
{
  return a+b;
}


typedef boost::mpl::list<long> long_type; //This will read any element in a long type

BOOST_AUTO_TEST_CASE_TEMPLATE( searching_two_longs, T, long_type )
{
  BOOST_TEST( add((sizeof(T)) ,(sizeof(T)) )  == (unsigned)16 ); //if the sum of two longs are not 16 it means that they are not long
}
