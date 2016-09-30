#pragma once

class EvenNumber
{
private:
	int value;

public:
	//Following two lines are constructors
	EvenNumber();
	EvenNumber(int valueSet);

	int getValue(); //Accessor for value
	EvenNumber getNext();
	EvenNumber getPrevious();

};