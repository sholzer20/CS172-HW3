#include "EvenNumber.h"

EvenNumber::EvenNumber() //no argument constructor
{
	value = 0;
}

EvenNumber::EvenNumber(int valueSet) //one argument constructor
{
	value = valueSet;
}

int EvenNumber::getValue() //returns value field
{
	return value;
}

EvenNumber EvenNumber::getNext() //Returns an EvenNumber object where 'value' is 2 greater than the value of the first object
{
	return EvenNumber(value+2);
}

EvenNumber EvenNumber::getPrevious() //Returns an EvenNumber object where 'value' is 2 less than the value of the first object
{
	return EvenNumber(value-2);
}
