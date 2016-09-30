#include <iostream>
#include "EvenNumber.h"
using namespace std;

//This program generates an object that represents an even number. It then prints that number and the next/previous even numbers
//using the value accessor within the object

int main()
{
	EvenNumber number(16); //Creates the EvenNumber object

	//The following output calls the getNext() and getPrevious() funtions and uses getValue after to display the number
	cout << "The current value is " << number.getValue() << ", the next even number is " << number.getNext().getValue()
		<< ", and the previous even number is " << number.getPrevious().getValue() << endl; 
}