#pragma once
#include <string>
using namespace std;

class MyInteger
{
private:
	int value;

public:
	MyInteger(int); //Constructor and accessor
	const int getValue();

	const bool isEven(); //These are constant functions to test the member variable
	const bool isOdd();
	const bool isPrime();

	static bool isEven(int); //These are static functions to test the number passed
	static bool isOdd(int);
	static bool isPrime(int);

	static bool isEven(const MyInteger&); //These are static functions to test the value of the passed MyInteger object
	static bool isOdd(const MyInteger&);
	static bool isPrime(const MyInteger&);

	const bool equals(int); //Tests if the value of the given object is equal to the passed integer
	const bool equals(const MyInteger&); //Tests if the value of the given object is equal to the value of the passed object
	static string parseInt(const string&); //converts the passed string to an integer

};