#include "QuadraticEquation.h"
#include <math.h>
QuadraticEquation::QuadraticEquation(int one, int two, int three)
{
	a = one;
	b = two;
	c = three;
}

int QuadraticEquation::getA()
{
	return a;
}
int QuadraticEquation::getB()
{
	return b;
}
int QuadraticEquation::getC()
{
	return c;
}

double QuadraticEquation::getDiscriminant() 
{
	return pow(b, 2) - (4 * a*c);
}

double QuadraticEquation::getRoot1()
{
	if (getDiscriminant() >= 0) //Only allows roots to be found for discriminants that are >=0
	{
		return (-b + sqrt(getDiscriminant())) / (2 * a);
	}
	else
	{
		return 0;
	}
}

double QuadraticEquation::getRoot2()
{
	if (getDiscriminant() >= 0) //Only allows roots to be found for discriminants that are >=0
	{
		return (-b - sqrt(getDiscriminant())) / (2 * a);
	}
	else
	{
		return 0;
	}
}