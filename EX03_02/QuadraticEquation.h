#pragma once
class QuadraticEquation
{
private:
	int a, b, c;

public:
	QuadraticEquation(int one, int two, int three); //Constructor for QuadraticEquation

	int getA(); //These three lines are accessors
	int getB();
	int getC();

	double getDiscriminant(); 
	double getRoot1();
	double getRoot2();

};