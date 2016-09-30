#include <iostream>
#include "QuadraticEquation.h"
using namespace std;

//This program asks the user for numbers to respresent a quadratic equation. It then displays the coeffiecients back to the user an
//caculates the roots based on the discriminant of the equation

int main()
{
	int one, two, three;

	cout << "Please enter an integer: "; //User is asked for three values
	cin >> one;
	cout << "Please enter an integer: ";
	cin >> two;
	cout << "Please enter an integer: ";
	cin >> three;

	QuadraticEquation function1(one, two, three); //User input becomes values for the equation

	cout << "\nThe first coefficient is: " << function1.getA() << endl; //Tests the accessors
	cout << "The second coefficient is: " << function1.getB() << endl;
	cout << "The third coefficient is: " << function1.getC() << endl;

	cout << "The discriminant of the quadratic function is: " << function1.getDiscriminant() << endl;

	if (function1.getDiscriminant() > 0) //If the discriminant is positive, there are two roots of the equation
	{
		cout << "\nThe first root of the quadratic function is: " << function1.getRoot2() << endl;
		cout << "The second root of the quadratic function is: " << function1.getRoot1() << endl;
	}
	else if (function1.getDiscriminant() == 0) //If the discriminant is 0, there is only one root
	{
		cout << "The only root for the quadratic function is: " << function1.getRoot1() << endl;
	}
	else
	{
		cout << "The function has no real roots." << endl; //Negative discriminant means there are not real roots
	}
	return 0;
}