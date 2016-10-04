#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


//This program asks the user for a string and returns the same string with the characters sorted. 
//Note, doesn't work because the array has more spaces than characters. Don't know how to fix this in c++

string sort(string &s, int);

int main()
{
	string s = ""; //Asks the user for a string
	cout << "Enter a string s: ";
	cin >> s;
	int stringLength = s.length(); //Length of the string
	cout << sort(s, stringLength); //Calls and prints the sorted string

	return 0;
}

string sort(string &s, int stringLength)
{
	char charArray[64]; //Creating an array that will store the characters in the string
	s.copy(charArray, stringLength); //copies the string into the char array
	sort(begin(charArray), end(charArray)); //sorts the charArray
	s.assign(charArray); //s is assigned the sorted characters in charArray
	return s;
}