#include "MyInteger.h"
#include <string>
using namespace std;

MyInteger::MyInteger(int setVal) //modifyer to set value
{
	value = setVal;
}

const int MyInteger::getValue() //Accessor for value
{
	return value;
}

const bool MyInteger::isEven() //Modulo to test if the value is even
{
	return (value % 2) == 0;
}

const bool MyInteger::isOdd()  //Modulo to test if the value is odd
{
	return (value % 2) == 1;
}

const bool MyInteger::isPrime()
{
	return false;
}

bool MyInteger::isEven(int checkInt)   //Modulo to test if the passed value is even
{
	return (checkInt % 2) == 0;
}

bool MyInteger::isOdd(int checkInt)   //Modulo to test if the passed int is odd
{
	return (checkInt % 2) == 1;
}

bool MyInteger::isPrime(int checkInt)
{
	return false;
}

bool MyInteger::isEven(const MyInteger& checkObj)
{
	return false;
}

bool MyInteger::isOdd(const MyInteger&)
{
	return false;
}

bool MyInteger::isPrime(const MyInteger&)
{
	return false;
}

const bool MyInteger::equals(int)
{
	return false;
}

const bool MyInteger::equals(const MyInteger&)
{
	return false;
}

string MyInteger::parseInt(const string&)
{
	return string();
}


